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

        //private const String CHAT_ACCEPT_TYPES = "text/plain message/CPIM";
        private const String CHAT_ACCEPT_TYPES = "text/plain";
        private const String CHAT_ACCEPT_WRAPPED_TYPES = "text/plain image/jpeg image/gif image/bmp image/png";
        private const String FILE_ACCEPT_TYPES = "*";
        private const int CHUNK_DURATION = 25;

        public event EventHandler<MsrpEventArgs> onMsrpEvent;

        private readonly MsrpSession session;
        private readonly MyMsrpCallback callback;
        private List<PendingMessage> pendingMessages = null;
        private String filePath;

        private static IDictionary<long, MyMsrpSession> sessions = new Dictionary<long, MyMsrpSession>();

        public static MyMsrpSession TakeIncomingSession(MySipStack sipStack, MsrpSession session, SipMessage message)
        {
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

        public String FilePath
        {
            get { return this.filePath; }
        }

        public bool Accept()
        {
            return this.session.accept();
        }

        public bool HangUp()
        {
            if (base.connected)
            {
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
            String fileSelector = String.Format("name:\"{0}\" type:{1} size:{2}",
                finfo.Name, this.GetFileType(finfo.Extension), finfo.Length);

            ActionConfig config = new ActionConfig();
            config
                .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-path", this.filePath)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-selector", fileSelector)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "accept-types", MyMsrpSession.FILE_ACCEPT_TYPES)
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-disposition", "attachment")
                 .setMediaString(twrap_media_type_t.twrap_media_msrp, "file-icon", "cid:test@doubango.org")
                 .setMediaInt(twrap_media_type_t.twrap_media_msrp, "chunck-duration", MyMsrpSession.CHUNK_DURATION)
                 ;

            bool ret = this.session.callMsrp(this.RemotePartyUri, config);
            config.Dispose();
            return ret;
        }

        public bool SendMessage(String message, String contentType)
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
                config.setMediaString(twrap_media_type_t.twrap_media_msrp, "content-type", contentType);
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
                this.pendingMessages.Add(new PendingMessage(message, contentType));

                ActionConfig config = new ActionConfig();
                config.setMediaString(twrap_media_type_t.twrap_media_msrp, "accept-types", MyMsrpSession.CHAT_ACCEPT_TYPES)
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

            internal PendingMessage(String message, String contentType)
            {
                this.message = message;
                this.contentType = contentType;
            }

            internal String Message
            {
                get { return this.message; }
            }

            internal String ContentType
            {
                get { return this.contentType; }
            }
        }
    }
}
