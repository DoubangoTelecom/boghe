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

namespace BogheCore.Sip
{
    public class MyAVSession : MyInviteSession
    {
        private readonly CallSession mSession;
        private static IDictionary<long, MyAVSession> sessions = new Dictionary<long, MyAVSession>();
        
        public static MyAVSession TakeIncomingSession(MySipStack sipStack, CallSession session, twrap_media_type_t mediaType, SipMessage sipMessage)
        {
            MediaType media;

            lock (MyAVSession.sessions)
            {
                switch (mediaType)
                {
                    case twrap_media_type_t.twrap_media_audio:
                        media = MediaType.Audio;
                        break;
                    case twrap_media_type_t.twrap_media_video:
                        media = MediaType.Video;
                        break;
                    case twrap_media_type_t.twrap_media_audiovideo:
                        media = MediaType.AudioVideo;
                        break;
                    default:
                        return null;
                }
                MyAVSession avSession = new MyAVSession(sipStack, session, media, InviteState.INCOMING);
                if (sipMessage != null)
                {
                    avSession.RemotePartyUri = sipMessage.getSipHeaderValue("f");
                }
                MyAVSession.sessions.Add(avSession.Id, avSession);
                return avSession;
            }
        }

        public static MyAVSession CreateOutgoingSession(MySipStack sipStack, MediaType mediaType)
        {
            lock (MyAVSession.sessions)
            {
                MyAVSession avSession = new MyAVSession(sipStack, null, mediaType, InviteState.INPROGRESS);
                MyAVSession.sessions.Add(avSession.Id, avSession);

                return avSession;
            }
        }

        public static void ReleaseSession(MyAVSession session)
        {
            lock (MyAVSession.sessions)
            {
                if (session != null && MyAVSession.sessions.ContainsKey(session.Id))
                {
                    long id = session.Id;
                    session.Dispose();
                    MyAVSession.sessions.Remove(id);
                }
            }
        }

        public static MyAVSession GetSession(long id)
        {
		    lock(MyAVSession.sessions)
            {
                if (MyAVSession.sessions.ContainsKey(id))
                    return MyAVSession.sessions[id];
                else
                    return null;
		    }
	    }

        public static bool HasSession(long id)
        {
            lock (MyAVSession.sessions)
            {
                return MyAVSession.sessions.ContainsKey(id);
            }
        }

        public MyAVSession(MySipStack sipStack, CallSession session, MediaType mediaType, InviteState callState)
            : base(sipStack)
        {
            this.mSession = (session == null) ? new CallSession(sipStack) : session;
            base.mediaType = mediaType;
            this.state = callState;

            // commons
            base.init();

            // SigComp
            base.SigCompId = sipStack.SigCompId;

            // 100rel
            mSession.set100rel(true); // will add "Supported: 100rel"

            /* 3GPP TS 24.173
		    *
		    * 5.1 IMS communication service identifier
		    * URN used to define the ICSI for the IMS Multimedia Telephony Communication Service: urn:urn-7:3gpp-service.ims.icsi.mmtel. 
		    * The URN is registered at http://www.3gpp.com/Uniform-Resource-Name-URN-list.html.
		    * Summary of the URN: This URN indicates that the device supports the IMS Multimedia Telephony Communication Service.
		    *
		    * Contact: <sip:impu@doubango.org;gr=urn:uuid:xxx;comp=sigcomp>;+g.3gpp.icsi-ref="urn%3Aurn-7%3A3gpp-service.ims.icsi.mmtel"
		    * Accept-Contact: *;+g.3gpp.icsi-ref="urn%3Aurn-7%3A3gpp-service.ims.icsi.mmtel"
		    * P-Preferred-Service: urn:urn-7:3gpp-service.ims.icsi.mmtel
		    */
            mSession.addCaps("+g.3gpp.icsi-ref", "\"urn%3Aurn-7%3A3gpp-service.ims.icsi.mmtel\"");
            mSession.addHeader("Accept-Contact", "*;+g.3gpp.icsi-ref=\"urn%3Aurn-7%3A3gpp-service.ims.icsi.mmtel\"");
            mSession.addHeader("P-Preferred-Service", "urn:urn-7:3gpp-service.ims.icsi.mmtel");
        }

        protected override SipSession Session
        {
            get { return this.mSession; }
        }

        public bool AcceptCall()
        {
            return this.mSession.accept();
        }

        public bool HangUpCall()
        {
            if (base.connected)
            {
                return this.mSession.hangup();
            }
            else
            {
                return this.mSession.reject();
            }
        }

        public bool HoldCall()
        {
            return this.mSession.hold();
        }

        public bool ResumeCall()
        {
            return this.mSession.resume();
        }

        public bool MakeCall(String remoteUri)
        {
            bool ret;

            base.outgoing = true;
            base.ToUri = remoteUri;

            ActionConfig config = new ActionConfig();
            switch (this.mediaType)
            {
                case MediaType.AudioVideo:
                case MediaType.Video:
                    ret = this.mSession.callAudioVideo(remoteUri, config);
                    break;
                case MediaType.Audio:
                    ret = this.mSession.callAudio(remoteUri, config);
                    break;
                default:
                    throw new Exception("This session doesn't support this media type");
            }
            config.Dispose();

            return ret;
        }

        public bool MakeVideoSharingCall(String remoteUri)
        {
            bool ret;

            base.outgoing = true;

            ActionConfig config = new ActionConfig();
            ret = this.mSession.callVideo(remoteUri, config);
            config.Dispose();

            return ret;
        }

        public bool SendDTMF(int digit)
        {
            return this.mSession.sendDTMF(digit);
        }

    }
}
