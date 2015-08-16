/*
* Boghe IMS/RCS Client - Copyright (C) 2010 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango.org>
*	
* This file is part of Boghe Project (http://code.google.com/p/boghe)
*
* Boghe is free software: you can redistribute it and/or modify it under the terms of 
* the GNU General Public License as published by the Free Software Foundation, either version 3 
* of the License, or (at your option) any later version.
*	
* Boghe is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
* See the GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License along 
* with this program; if not, write to the Free Software Foundation, Inc., 
* 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using org.doubango.tinyWRAP;
using log4net;
using BogheCore.Sip.Events;
using System.IO;
using System.Runtime.InteropServices;
#if WINRT
using MsrpSession = doubango_rt.BackEnd.rtMsrpSession;
using SipMessage = doubango_rt.BackEnd.rtSipMessage;
using SdpMessage = doubango_rt.BackEnd.rtSdpMessage;
using SipSession = doubango_rt.BackEnd.rtISipSession;
using ActionConfig = doubango_rt.BackEnd.rtActionConfig;
using twrap_media_type_t = doubango_rt.BackEnd.rt_twrap_media_type_t;
#endif

namespace BogheCore.Sip
{
    public partial class MyMsrpSession : MyInviteSession
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(MyMsrpSession));
        private const String DESTINATION_FOLDER = "Doubango\\SharedContent";

        private const String CHAT_ACCEPT_TYPES = "text/plain message/CPIM";
        private const String CHAT_ACCEPT_WRAPPED_TYPES = "text/plain image/jpeg image/gif image/bmp image/png";
        private const String FILE_ACCEPT_TYPES = "message/CPIM application/octet-stream";
        private const String FILE_ACCEPT_WRAPPED_TYPES = "application/octet-stream image/jpeg image/gif image/bmp image/png";
        private const int CHUNK_DURATION = 25;

        public event EventHandler<MsrpEventArgs> mOnMsrpEvent;

        private readonly MsrpSession mSession;
        private readonly MyMsrpCallback mCallback;
        private List<PendingMessage> mPendingMessages = null;
        private String mFilePath;
        private String mFileType;
        private FileStream mOutFileStream;
        private bool mFailureReport = true;
        private bool mSuccessReport;
        private bool mOmaFinalDeliveryReport;

        private static IDictionary<long, MyMsrpSession> sSessions = new Dictionary<long, MyMsrpSession>();

        public static MyMsrpSession TakeIncomingSession(MySipStack sipStack, MsrpSession session, SipMessage message)
        {
            MyMsrpSession msrpSession = null;
            MediaType mediaType;
            SdpMessage sdp = message.getSdpMessage();
            String fromUri = message.getSipHeaderValue("f");

            if (String.IsNullOrEmpty(fromUri))
            {
                LOG.Error("Invalid fromUri");
                return null;
            }

            if (sdp == null)
            {
                LOG.Error("Invalid Sdp content");
                return null;
            }

            String fileSelector = sdp.getSdpHeaderAValue("message", "file-selector");
            mediaType = String.IsNullOrEmpty(fileSelector) ? MediaType.Chat : MediaType.FileTransfer;

            if (mediaType == MediaType.Chat)
            {
                msrpSession = MyMsrpSession.CreateIncomingSession(sipStack, session, mediaType, fromUri);
            }
            else
            {
                String name = null;
                String type = null;
                int nameIndexStart = fileSelector.IndexOf("name:\"");
                if (nameIndexStart == -1)
                {
                    LOG.Error("No name attribute");
                    return null;
                }
                int nameIndexEnd = fileSelector.IndexOf("\"", nameIndexStart + 6);
                if (nameIndexEnd == -1)
                {
                    LOG.Error("Invalid name attribute");
                    return null;
                }
                name = fileSelector.Substring(nameIndexStart + 6, (nameIndexEnd - nameIndexStart - 6)).Trim();
                fileSelector = fileSelector.Substring(0, nameIndexStart) + fileSelector.Substring(nameIndexEnd + 1, (fileSelector.Length - nameIndexEnd) - 1);

                String[] attributes = fileSelector.Split(" ".ToCharArray(), StringSplitOptions.RemoveEmptyEntries);
                foreach (String attribute in attributes)
                {
                    String[] avp = attribute.Split(":".ToCharArray(), StringSplitOptions.RemoveEmptyEntries);
                    if (avp.Length >= 2)
                    {
                        if (String.Equals(avp[0], "type", StringComparison.InvariantCultureIgnoreCase) && avp[1] != null)
                        {
                            type = avp[1];
                        }
                    }
                }

                msrpSession = MyMsrpSession.CreateIncomingSession(sipStack, session, mediaType, fromUri);
                msrpSession.mFilePath = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.Personal), String.Format("{0}/{1}", MyMsrpSession.DESTINATION_FOLDER, name));
                msrpSession.mFileType = type;
            }

            return msrpSession;
        }

        public static MyMsrpSession CreateIncomingSession(MySipStack sipStack, MsrpSession session, MediaType mediaType, String remoteUri)
        {
            if (mediaType == MediaType.FileTransfer || mediaType == MediaType.Chat)
            {
                MyMsrpSession msrpSession = new MyMsrpSession(sipStack, session, mediaType, remoteUri);
                sSessions.Add(msrpSession.Id, msrpSession);

                return msrpSession;
            }
            return null;
        }

        public static MyMsrpSession CreateOutgoingSession(MySipStack sipStack, MediaType mediaType, String remoteUri)
        {
            if (mediaType == MediaType.FileTransfer || mediaType == MediaType.Chat)
            {
                MyMsrpSession msrpSession = new MyMsrpSession(sipStack, null, mediaType, remoteUri);
                sSessions.Add(msrpSession.Id, msrpSession);

                return msrpSession;
            }
            return null;
        }

        public static void ReleaseSession(MyMsrpSession session)
        {
            if (session != null)
            {
                lock (MyMsrpSession.sSessions)
                {
                    long id = session.Id;
                    session.Dispose();
                    sSessions.Remove(id);
                }
            }
        }

        public static MyMsrpSession GetSession(long id)
        {
            lock (sSessions)
            {
                if (sSessions.ContainsKey(id))
                    return sSessions[id];
                else
                    return null;
            }
        }

        public static bool HasSession(long id)
        {
            lock (sSessions)
            {
                return sSessions.ContainsKey(id);
            }
        }

        public MyMsrpSession(MySipStack sipStack, MsrpSession session, MediaType mediaType, String remoteUri)
            : base(sipStack)
        {
            this.mCallback = new MyMsrpCallback(this);
            base.mMediaType = mediaType;
            base.remotePartyUri = remoteUri;

            if (session == null)
            {
                base.outgoing = true;
#if WINDOWS_PHONE
                mSession = org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtMsrpSessionNew(sipStack.WrappedStack, mCallback);
#else
                mSession = new MsrpSession(sipStack.WrappedStack, mCallback);
#endif
            }
            else
            {
                base.outgoing = false;
                mSession = session;
                mSession.setCallback(mCallback);
            }

            // commons
            base.init();

            // SigComp
            base.SigCompId = sipStack.SigCompId;
            mSession.addHeader("Subject", "FIXME");
        }

        protected override SipSession Session
        {
            get { return mSession; }
        }

        public new void Dispose()
        {
            if (this.mOutFileStream != null)
            {
                this.mOutFileStream.Close();
            }
            base.Dispose();
        }

        public String FilePath
        {
            get { return this.mFilePath; }
        }

        public bool FailureReport
        {
            get { return this.mFailureReport; }
            set { this.mFailureReport = value; }
        }

        public bool SuccessReport
        {
            get { return this.mSuccessReport; }
            set { this.mSuccessReport = value; }
        }

        public bool OmaFinalDeliveryReport
        {
            get { return this.mOmaFinalDeliveryReport; }
            set { this.mOmaFinalDeliveryReport = value; }
        }

        public bool Accept()
        {
            if (base.State == InviteState.INCOMING && base.MediaType == MediaType.FileTransfer)
            {
                try
                {
                    FileInfo fInfo = new FileInfo(this.FilePath);
                    if (!Directory.Exists(fInfo.DirectoryName))
                    {
                        Directory.CreateDirectory(fInfo.DirectoryName);
                    }
                    if (this.mOutFileStream != null)
                    {
                        lock (this.mOutFileStream)
                        {
                            this.mOutFileStream.Close();
                            this.mOutFileStream = null;
                        }
                    }
                    this.mOutFileStream = File.Create(this.FilePath);
                }
                catch (IOException ioE)
                {
                    LOG.Error(ioE);
                    return this.HangUp();
                }
            }
            return mSession.accept(null);
        }

        public bool HangUp()
        {
            if (base.connected)
            {
                if (this.mOutFileStream != null)
                {
                    lock (this.mOutFileStream)
                    {
                        this.mOutFileStream.Close();
                        this.mOutFileStream = null;
                    }
                }
                return mSession.hangup(null);
            }
            else
            {
                return mSession.reject(null);
            }
        }

        public bool SendFile(String path)
        {
            if (String.IsNullOrEmpty(path) || !File.Exists(path))
            {
                LOG.Error(String.Format("File ({0}) doesn't exist", path));
                return false;
            }

            if (this.mMediaType != MediaType.FileTransfer)
            {
                LOG.Error("Invalid media type");
                return false;
            }

            FileInfo finfo = new FileInfo(path);
            this.mFilePath = mFilePath = finfo.FullName;
            this.mFileType = this.GetFileType(finfo.Extension);
            String fileSelector = String.Format("name:\"{0}\" type:{1} size:{2}",
                finfo.Name, this.mFileType, finfo.Length);

            ActionConfig config =
#if WINDOWS_PHONE
 org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtActionConfigNew();
#else
 new ActionConfig();
#endif
            config
                .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-path", this.mFilePath)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-selector", fileSelector)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "accept-types", MyMsrpSession.FILE_ACCEPT_TYPES)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "accept-wrapped-types", MyMsrpSession.FILE_ACCEPT_WRAPPED_TYPES)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-disposition", "attachment")
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-icon", "cid:test@doubango.org")
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "Failure-Report", this.FailureReport ? "yes" : "no")
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "Success-Report", this.SuccessReport ? "yes" : "no")
                 .setMediaInt(twrap_media_type_t.twrap_media_msrp, "chunck-duration", MyMsrpSession.CHUNK_DURATION)
                 ;

            bool ret = mSession.callMsrp(this.RemotePartyUri, config);
            config.Dispose();
            return ret;
        }

        public bool SendMessage(String message)
        {
            // if content-type is null, then the application will use the neg. ctype
            return this.SendMessage(message, null, null);
        }

        public bool SendMessage(String message, String contentType, String wContentType)
        {
            if (String.IsNullOrEmpty(message))
            {
                LOG.Error("Null or empty message");
                return false;
            }

            if (this.mMediaType != MediaType.Chat)
            {
                LOG.Error("Invalid media type");
                return false;
            }

            if (base.IsConnected)
            {
                ActionConfig config =
#if WINDOWS_PHONE
 org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtActionConfigNew();
#else
 new ActionConfig();
#endif
                if (!String.IsNullOrEmpty(contentType))
                {
                    config.setMediaString(twrap_media_type_t.twrap_media_msrp, "content-type", "text/plain");
                }
                if (!String.IsNullOrEmpty(wContentType))
                {
                    config.setMediaString(twrap_media_type_t.twrap_media_msrp, "w-content-type", wContentType);
                }
                //config.setMediaString(twrap_media_type_t.twrap_media_msrp, "content-type", contentType);
                // == OR ==
                //config.setMediaString(twrap_media_type_t.twrap_media_msrp,
                //    "content-type", "message/CPIM")
                //    .setMediaString(twrap_media_type_t.twrap_media_msrp, "w-content-type", "text/plain");
#if WINDOWS_PHONE
                return mSession.sendMessage(message, config);
#else
                byte[] payload = Encoding.UTF8.GetBytes(message);
                IntPtr ptr = Marshal.AllocHGlobal(payload.Length);
                Marshal.Copy(payload, 0, ptr, payload.Length);
                bool ret = mSession.sendMessage(ptr, (uint)payload.Length, config);
                Marshal.FreeHGlobal(ptr);
                config.Dispose();
                return ret;
#endif
            }
            else
            {
                if (this.mPendingMessages == null)
                {
                    this.mPendingMessages = new List<PendingMessage>();
                }
                this.mPendingMessages.Add(new PendingMessage(message, contentType, wContentType));

                ActionConfig config =
#if WINDOWS_PHONE
 org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtActionConfigNew();
#else
 new ActionConfig();
#endif
                config.setMediaString(twrap_media_type_t.twrap_media_msrp, "accept-types", MyMsrpSession.CHAT_ACCEPT_TYPES)
                    .setMediaString(twrap_media_type_t.twrap_media_msrp, "accept-wrapped-types", MyMsrpSession.CHAT_ACCEPT_WRAPPED_TYPES)
                    .setMediaString(twrap_media_type_t.twrap_media_msrp, "Failure-Report", this.FailureReport ? "yes" : "no")
                    .setMediaString(twrap_media_type_t.twrap_media_msrp, "Success-Report", this.SuccessReport ? "yes" : "no")
                    .setMediaInt(twrap_media_type_t.twrap_media_msrp, "chunck-duration", 50);

                bool ret = mSession.callMsrp(base.RemotePartyUri, config);
                config.Dispose();

                return ret;
            }
        }

        private String GetFileType(String extension)
        {
            String type = "application/octet-stream";

            if (extension.Equals("jpe") || extension.Equals("jpeg") || extension.Equals("jpg"))
            {
                type = "image/jpeg";
            }
            else if (extension.Equals("gif") || extension.Equals("png") || extension.Equals("bmp"))
            {
                type = String.Format("image/{0}", extension);
            }
            return type;
        }

        class PendingMessage
        {
            readonly String message;
            readonly String contentType;
            readonly String wContentType;

            internal PendingMessage(String message, String contentType, String wContentType)
            {
                this.message = message;
                this.contentType = contentType;
                this.wContentType = wContentType;
            }

            internal String Message
            {
                get { return this.message; }
            }

            internal String ContentType
            {
                get { return this.contentType; }
            }

            internal String WContentType
            {
                get { return this.wContentType; }
            }
        }
    }
}
