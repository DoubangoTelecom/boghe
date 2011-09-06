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

        public event EventHandler<MsrpEventArgs> onMsrpEvent;

        private readonly MsrpSession session;
        private readonly MyMsrpCallback callback;
        private List<PendingMessage> pendingMessages = null;
        private String filePath;
        private String fileType;
        private FileStream outFileStream;
        private bool failureReport = true;
        private bool successReport;
        private bool omaFinalDeliveryReport;

        private static IDictionary<long, MyMsrpSession> sessions = new Dictionary<long, MyMsrpSession>();

        public static MyMsrpSession TakeIncomingSession(MySipStack sipStack, MsrpSession session, SipMessage message)
        {
            MyMsrpSession msrpSession = null;
		    MediaType mediaType;
		    SdpMessage sdp = message.getSdpMessage();
		    String fromUri = message.getSipHeaderValue("f");
    		
            if(String.IsNullOrEmpty(fromUri)){
			    LOG.Error("Invalid fromUri");
			    return null;
		    }

		    if(sdp == null){
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
                String[] attributes = fileSelector.Split(" ".ToCharArray(), StringSplitOptions.RemoveEmptyEntries);
                foreach (String attribute in attributes)
                {
                    String[] avp = attribute.Split(":".ToCharArray(), StringSplitOptions.RemoveEmptyEntries);
                    if (avp.Length >= 2)
                    {
                        if (String.Equals(avp[0], "name", StringComparison.InvariantCultureIgnoreCase) && avp[1] != null)
                        {
                            name = avp[1].Replace("\"", String.Empty);
                        }
                        if (String.Equals(avp[0], "type", StringComparison.InvariantCultureIgnoreCase) && avp[1] != null)
                        {
                            type = avp[1];
                        }
                    }
                }
                if (name == null)
                {
                    LOG.Error("Invalid file name");
                    return null;
                }

                msrpSession = MyMsrpSession.CreateIncomingSession(sipStack, session, mediaType, fromUri);
                msrpSession.filePath = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.Personal), String.Format("{0}/{1}", MyMsrpSession.DESTINATION_FOLDER, name));
                msrpSession.fileType = type;
            }

            return msrpSession;
        }

        public static MyMsrpSession CreateIncomingSession(MySipStack sipStack, MsrpSession session, MediaType mediaType, String remoteUri)
        {
            if (mediaType == MediaType.FileTransfer || mediaType == MediaType.Chat)
            {
                MyMsrpSession msrpSession = new MyMsrpSession(sipStack, session, mediaType, remoteUri);
                MyMsrpSession.sessions.Add(msrpSession.Id, msrpSession);

                return msrpSession;
            }
            return null;
        }

        public static MyMsrpSession CreateOutgoingSession(MySipStack sipStack, MediaType mediaType, String remoteUri)
        {
            if (mediaType == MediaType.FileTransfer || mediaType == MediaType.Chat)
            {
                MyMsrpSession msrpSession = new MyMsrpSession(sipStack, null, mediaType, remoteUri);
                MyMsrpSession.sessions.Add(msrpSession.Id, msrpSession);

                return msrpSession;
            }
            return null;
        }

        public static void ReleaseSession(MyAVSession session)
        {
            if (session != null)
            {
                lock (MyMsrpSession.sessions)
                {
                    long id = session.Id;
                    session.Dispose();
                    MyMsrpSession.sessions.Remove(id);
                }
            }
        }

        public static MyMsrpSession GetSession(long id)
        {
            lock (MyMsrpSession.sessions)
            {
                if (MyMsrpSession.sessions.ContainsKey(id))
                    return MyMsrpSession.sessions[id];
                else
                    return null;
            }
        }

        public static bool HasSession(long id)
        {
            lock (MyMsrpSession.sessions)
            {
                return MyMsrpSession.sessions.ContainsKey(id);
            }
        }

        public MyMsrpSession(MySipStack sipStack, MsrpSession session, MediaType mediaType, String remoteUri) : base(sipStack)
        {
            this.callback = new MyMsrpCallback(this);
            base.mediaType = mediaType;
            base.remotePartyUri = remoteUri;

            if (session == null)
            {
                base.outgoing = true;
                this.session = new MsrpSession(sipStack, this.callback);
            }
            else 
            {
                base.outgoing = false;
                this.session = session;
                this.session.setCallback(this.callback);
            }

            // commons
            base.init();

            // SigComp
            base.SigCompId = sipStack.SigCompId;
        }

        protected override SipSession Session
        {
            get { return this.session; }
        }

        public new void Dispose()
        {
            if (this.outFileStream != null)
            {
                this.outFileStream.Close();
            }
            base.Dispose();
        }

        public String FilePath
        {
            get { return this.filePath; }
        }

        public bool FailureReport
        {
            get { return this.failureReport; }
            set { this.failureReport = value; }
        }

        public bool SuccessReport
        {
            get { return this.successReport; }
            set { this.successReport = value; }
        }

        public bool OmaFinalDeliveryReport
        {
            get { return this.omaFinalDeliveryReport; }
            set { this.omaFinalDeliveryReport = value; }
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
                    if (this.outFileStream != null)
                    {
                        lock (this.outFileStream)
                        {
                            this.outFileStream.Close();
                            this.outFileStream = null;
                        }
                    }
                    this.outFileStream = File.Create(this.FilePath);
                }
                catch (IOException ioE)
                {
                    LOG.Error(ioE);
                    return this.HangUp();
                }
            }
            return this.session.accept();
        }

        public bool HangUp()
        {
            if (base.connected)
            {
                if (this.outFileStream != null)
                {
                    lock (this.outFileStream)
                    {
                        this.outFileStream.Close();
                        this.outFileStream = null;
                    }
                }
                return this.session.hangup();
            }
            else
            {
                return this.session.reject();
            }
        }

        public bool SendFile(String path)
        {
            if (String.IsNullOrEmpty(path) || !File.Exists(path))
            {
                LOG.Error(String.Format("File ({0}) doesn't exist", path));
                return false;
            }

            if (this.mediaType != MediaType.FileTransfer)
            {
                LOG.Error("Invalid media type");
                return false;
            }

            FileInfo finfo = new FileInfo(path);
            this.filePath = filePath = finfo.FullName;
            this.fileType = this.GetFileType(finfo.Extension);
            String fileSelector = String.Format("name:\"{0}\" type:{1} size:{2}",
                finfo.Name, this.fileType, finfo.Length);

            ActionConfig config = new ActionConfig();
            config
                .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-path", this.filePath)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-selector", fileSelector)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "accept-types", MyMsrpSession.FILE_ACCEPT_TYPES)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "accept-wrapped-types", MyMsrpSession.FILE_ACCEPT_WRAPPED_TYPES)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-disposition", "attachment")
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-icon", "cid:test@doubango.org")
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "Failure-Report", this.FailureReport ? "yes" : "no")
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "Success-Report", this.SuccessReport ? "yes" : "no")
                 .setMediaInt(twrap_media_type_t.twrap_media_msrp, "chunck-duration", MyMsrpSession.CHUNK_DURATION)
                 ;

            bool ret = this.session.callMsrp(this.RemotePartyUri, config);
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
            if(String.IsNullOrEmpty(message))
            {
                LOG.Error("Null or empty message");
                return false;
            }

            if (this.mediaType != MediaType.Chat)
            {
                LOG.Error("Invalid media type");
                return false;
            }

            if (base.IsConnected)
            {
                ActionConfig config = new ActionConfig();
                if (!String.IsNullOrEmpty(contentType))
                {
                    config.setMediaString(twrap_media_type_t.twrap_media_msrp, "content-type", contentType);
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
                byte[] payload = Encoding.UTF8.GetBytes(message);
                bool ret = this.session.sendMessage(payload, (uint)payload.Length, config);
                config.Dispose();

                return ret;
            }
            else
            {
                if (this.pendingMessages == null)
                {
                    this.pendingMessages = new List<PendingMessage>();
                }
                this.pendingMessages.Add(new PendingMessage(message, contentType, wContentType));

                ActionConfig config = new ActionConfig();
                config.setMediaString(twrap_media_type_t.twrap_media_msrp, "accept-types", MyMsrpSession.CHAT_ACCEPT_TYPES)
                    .setMediaString(twrap_media_type_t.twrap_media_msrp, "accept-wrapped-types", MyMsrpSession.CHAT_ACCEPT_WRAPPED_TYPES)
                    .setMediaString(twrap_media_type_t.twrap_media_msrp, "Failure-Report", this.FailureReport ? "yes" : "no")
                    .setMediaString(twrap_media_type_t.twrap_media_msrp, "Success-Report", this.SuccessReport ? "yes" : "no")
                    .setMediaInt(twrap_media_type_t.twrap_media_msrp, "chunck-duration", 50);

                bool ret = this.session.callMsrp(base.RemotePartyUri, config);
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
