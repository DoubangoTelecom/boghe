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
using System.Runtime.InteropServices;
#if WINRT
using SipUri = doubango_rt.BackEnd.rtSipUri;
using SipSession = doubango_rt.BackEnd.rtISipSession;
using CallSession = doubango_rt.BackEnd.rtCallSession;
using ActionConfig = doubango_rt.BackEnd.rtActionConfig;
using SipMessage = doubango_rt.BackEnd.rtSipMessage;
using twrap_media_type_t = doubango_rt.BackEnd.rt_twrap_media_type_t;
using tmedia_t140_data_type_t = doubango_rt.BackEnd.rt_tmedia_t140_data_type_t;
using tmedia_pref_video_size_t = doubango_rt.BackEnd.rt_tmedia_pref_video_size_t;
#endif

namespace BogheCore.Sip
{
    public partial class MyAVSession : MyInviteSession
    {
        private readonly CallSession mSession;
        private readonly MyT140Callback mT140Callback;
        private static IDictionary<long, MyAVSession> sessions = new Dictionary<long, MyAVSession>();
        private bool mMute;
        protected long mSessionTransferId = -1;
        
        public static MyAVSession TakeIncomingSession(MySipStack sipStack, CallSession session, twrap_media_type_t mediaType, SipMessage sipMessage)
        {
            MediaType media = MediaTypeUtils.ConvertFromNative(mediaType);
            if (media == MediaType.None)
            {
                return null;
            }

            lock (MyAVSession.sessions)
            {
                MyAVSession avSession = new MyAVSession(sipStack, session, media, InviteState.INCOMING);
                if (sipMessage != null)
                {
                    avSession.RemotePartyUri = sipMessage.getSipHeaderValue("f");
                }
                MyAVSession.sessions.Add(avSession.Id, avSession);
                return avSession;
            }
        }

        private static MyAVSession CreateOutgoingSession(MySipStack sipStack, CallSession session, MediaType mediaType)
        {
            lock (MyAVSession.sessions)
            {
                MyAVSession avSession = new MyAVSession(sipStack, session, mediaType, InviteState.INPROGRESS);
                MyAVSession.sessions.Add(avSession.Id, avSession);

                return avSession;
            }
        }

        public static MyAVSession CreateOutgoingSession(MySipStack sipStack, MediaType mediaType)
        {
            return MyAVSession.CreateOutgoingSession(sipStack, null, mediaType);
        }

        public static MyAVSession TakeOutgoingTranferSession(MySipStack sipStack, CallSession session, twrap_media_type_t mediaType, SipMessage sipMessage)
        {
            MediaType media = MediaTypeUtils.ConvertFromNative(mediaType);
            if (media == MediaType.None)
            {
                return null;
            }

            MyAVSession avSession = MyAVSession.CreateOutgoingSession(sipStack, session, media);
            if (sipMessage != null)
            {
                avSession.RemotePartyUri = sipMessage.getSipHeaderValue("refer-to");
            }
            return avSession;
        }

        public static bool HandleMediaUpdate(long id, twrap_media_type_t newMediaType)
        {
            MyAVSession avSession = MyAVSession.GetSession(id);
            if (avSession != null)
            {
                if ((newMediaType & twrap_media_type_t.twrap_media_msrp) == twrap_media_type_t.twrap_media_msrp)
                {
                    return false; // For now MSRP update is not suportted
                }
                avSession.mMediaType = MediaTypeUtils.ConvertFromNative(newMediaType);
                return true;
            }
            
            return false;
        }

        public static void ReleaseSession(MyAVSession session)
        {
            lock (MyAVSession.sessions)
            {
                if (session != null && MyAVSession.sessions.ContainsKey(session.Id))
                {
                    long id = session.Id;
                    // session.Dispose();
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

        protected MyAVSession(MySipStack sipStack, CallSession session, MediaType mediaType, InviteState callState)
            : base(sipStack)
        {
            mSession = (session == null) ? 
#if WINDOWS_PHONE
            org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtCallSessionNew(sipStack.WrappedStack)
#else
            new CallSession(sipStack.WrappedStack) 
#endif
                : session;
            base.mMediaType = mediaType;
            this.mState = callState;
            mMute = false;

            // commons
            base.init();

            // SigComp
            base.SigCompId = sipStack.SigCompId;

            // 100rel
            // mSession.set100rel(true); // See defaults

            // T.140 callback
            if ((mediaType & MediaType.T140) == MediaType.T140)
            {
                mT140Callback = new MyT140Callback(this);
                // do not set the callback as it requires a media session manager (only available when session is connected)
            }

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
            get { return mSession; }
        }

        public long SessionTransferId
        {
            get
            {
                if (mSessionTransferId == -1)
                {
                    mSessionTransferId = mSession.getSessionTransferId();
                }
                return mSessionTransferId;
            }
        }

        public bool AcceptCall()
        {
            return mSession.accept(null);
        }

        public bool HangUpCall()
        {
            if (base.connected)
            {
                return mSession.hangup(null);
            }
            else
            {
                return mSession.reject(null);
            }
        }

        public bool HoldCall()
        {
            return mSession.hold();
        }

        public bool Mute(bool mute, twrap_media_type_t media)
        {
            if (this.MediaSessionMgr != null)
            {
                if (MediaSessionMgr.producerSetInt32(media, "mute", mute ? 1 : 0))
                {
                    mMute = mute;
                    return true;
                }
            }
            return false;
        }

        public bool SetVolume(int volume)
        {
            if (this.MediaSessionMgr != null)
            {
                bool ok = MediaSessionMgr.producerSetInt32(twrap_media_type_t.twrap_media_audio, "volume", volume);
                ok &= MediaSessionMgr.consumerSetInt32(twrap_media_type_t.twrap_media_audio, "volume", volume);
                return ok;
            }
            return false;
        }

        public bool SendInfo(byte[] payload, String contentType)
        {
#if WINDOWS_PHONE
            if (payload != null && !String.IsNullOrEmpty(contentType))
            {
                String payloadStr = Encoding.UTF8.GetString(payload, 0, payload.Length);
                ActionConfig config = org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtActionConfigNew();
                config.addHeader("Content-Type", contentType);
                return mSession.sendInfo(payloadStr, (uint)payloadStr.Length, config);
            }
            return mSession.sendInfo(BogheCore.Utils.StringUtils.nullptr, 0, null);
#else
            if (payload != null && !String.IsNullOrEmpty(contentType))
            {
                IntPtr payloadPtr = Marshal.AllocHGlobal(payload.Length);
                ActionConfig config = new ActionConfig();
                config.addHeader("Content-Type", contentType);
                Marshal.Copy(payload, 0, payloadPtr, payload.Length);
                bool ret = mSession.sendInfo(payloadPtr, (uint)payload.Length, config);
                Marshal.FreeHGlobal(payloadPtr);
                return ret;
            }
            return mSession.sendInfo(IntPtr.Zero, 0);
#endif
        }

        public bool SetProducerFlipped(Boolean flipped)
        {
            if (this.MediaSessionMgr != null)
            {
                return this.MediaSessionMgr.producerSetInt32(twrap_media_type_t.twrap_media_video, "flip", flipped ? 1 : 0);
            }
            return false;
        }

        public bool SetFullscreen(bool fullscreen)
        {
            if (this.MediaSessionMgr != null)
            {
                return this.MediaSessionMgr.consumerSetInt32(twrap_media_type_t.twrap_media_video, "fullscreen", fullscreen ? 1 : 0);
            }
            return false;
        }

        public bool SetEchoSupp(bool enabled)
        {
            return this.MediaSessionMgr.sessionSetInt32(twrap_media_type_t.twrap_media_audio, "echo-supp", enabled ? 1 : 0);
        }
        public bool setVideoPrefSize(tmedia_pref_video_size_t pref_video_size)
        {
            if (mSession != null)
            {
                return mSession.setVideoPrefSize(pref_video_size);
            }
            return false;
        }

        public bool setVideoFps(int fps)
        {
            if (mSession != null)
            {
                return mSession.setVideoFps(fps);
            }
            return false;
        }

        public bool setVideoBandwidthUploadMax(int max)
        {
            if (mSession != null)
            {
                return mSession.setVideoBandwidthUploadMax(max);
            }
            return false;
        }

        public bool setVideoBandwidthDownloadMax(int max)
        {
            if (mSession != null)
            {
                return mSession.setVideoBandwidthDownloadMax(max);
            }
            return false;
        }

        /// <summary>
        /// Check if SRTP is enabled for this session
        /// Should be called after the session is connected
        /// </summary>
        /// <returns></returns>
        public bool IsSecure()
        {
            if (this.MediaSessionMgr != null)
            {
                return (this.MediaSessionMgr.sessionGetInt32(twrap_media_type_t.twrap_media_audiovideo, "srtp-enabled") != 0);
            }
            return false;
        }

        public bool ResumeCall()
        {
            return mSession.resume();
        }

        public bool TransferCall(String transferUri)
        {
            if (String.IsNullOrEmpty(transferUri) || !SipUri.isValid(transferUri))
            {
                return false;
            }
            return mSession.transfer(transferUri);
        }

        public bool AcceptCallTransfer()
        {
            return mSession.acceptTransfer();
        }

        public bool RejectCallTransfer()
        {
            return mSession.rejectTransfer();
        }

        public bool MakeCall(String remoteUri)
        {
            bool ret;

            base.outgoing = true;
            base.ToUri = remoteUri;

            ActionConfig config = 
#if WINDOWS_PHONE
            org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtActionConfigNew();
#else
            new ActionConfig();
#endif
            ret = mSession.call(remoteUri, MediaTypeUtils.ConvertToNative(mMediaType), config);
   
            config.Dispose();

            return ret;
        }      

        public bool MakeVideoSharingCall(String remoteUri)
        {
            bool ret;

            base.outgoing = true;

            ActionConfig config =
#if WINDOWS_PHONE
 org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtActionConfigNew();
#else
            new ActionConfig();
#endif
            ret = mSession.call(remoteUri, MediaTypeUtils.ConvertToNative(MediaType.Video), config);
            config.Dispose();

            return ret;
        }

        public bool SendDTMF(int digit)
        {
            return mSession.sendDTMF(digit);
        }

        protected bool SendT140Buffer(tmedia_t140_data_type_t dataType, byte[] bufferBytes)
        {
            if (bufferBytes != null && bufferBytes.Length > 0)
            {
#if WINDOWS_PHONE
                return mSession.sendT140Data(dataType, Encoding.UTF8.GetString(bufferBytes, 0, bufferBytes.Length));
#else
                IntPtr dataPtr = Marshal.AllocHGlobal(bufferBytes.Length);
                Marshal.Copy(bufferBytes, 0, dataPtr, bufferBytes.Length);
                bool ret = mSession.sendT140Data(dataType, dataPtr, (uint)bufferBytes.Length);
                Marshal.FreeHGlobal(dataPtr);
                return ret;
#endif
            }
            else
            {
#if WINDOWS_PHONE
                return mSession.sendT140Data(dataType);
#else
                return mSession.sendT140Data(dataType, IntPtr.Zero, 0);
#endif
            }
        }

        public bool SendT140Data(byte[] bufferBytes)
        {
            return SendT140Buffer(tmedia_t140_data_type_t.tmedia_t140_data_type_utf8, bufferBytes);
        }

        public bool SendT140Data(tmedia_t140_data_type_t dataType)
        {
            return SendT140Buffer(dataType, null);
        }

        public bool Update(MediaType newMediaType)
        {
            if (mSession != null)
            {
                return mSession.call(base.ToUri, MediaTypeUtils.ConvertToNative(newMediaType));
            }
            return false;
        }

        public bool IsMute
        {
            get { return mMute; }
        }

        public override InviteState State
        {
            set
            {
                base.State = value;
#if !WINRT
                if ((mMediaType & MediaType.AudioT140) == MediaType.AudioT140 && mSession != null)
                {
                    switch (base.State)
                    {
                        case InviteState.EARLY_MEDIA:
                        case InviteState.INCALL:
                            {
                                mSession.setT140Callback(mT140Callback);
                                break;
                            }

                        case InviteState.TERMINATING:
                        case InviteState.TERMINATED:
                            {
                                mSession.setT140Callback(null);
                                break;
                            }
                    }
                }
#endif
            }
        }
    }
}
