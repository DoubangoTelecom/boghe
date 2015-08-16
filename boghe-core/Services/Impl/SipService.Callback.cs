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
using BogheCore.Events;
using BogheCore.Sip.Events;
using System.Threading;
using BogheCore.Sip;
using BogheCore.Utils;
using BogheCore.Model;
using System.Runtime.InteropServices;
#if WINRT
using SipEvent = doubango_rt.BackEnd.rtISipEvent;
using DialogEvent = doubango_rt.BackEnd.rtDialogEvent;
using StackEvent = doubango_rt.BackEnd.rtStackEvent;
using InviteEvent = doubango_rt.BackEnd.rtInviteEvent;
using MessagingEvent = doubango_rt.BackEnd.rtMessagingEvent;
using InfoEvent = doubango_rt.BackEnd.rtInfoEvent;
using OptionsEvent = doubango_rt.BackEnd.rtOptionsEvent;
using PublicationEvent = doubango_rt.BackEnd.rtPublicationEvent;
using RegistrationEvent = doubango_rt.BackEnd.rtRegistrationEvent;
using SubscriptionEvent = doubango_rt.BackEnd.rtSubscriptionEvent;

using SipSession = doubango_rt.BackEnd.rtISipSession;
using MsrpSession = doubango_rt.BackEnd.rtMsrpSession;
using OptionsSession = doubango_rt.BackEnd.rtOptionsSession;
using InviteSession = doubango_rt.BackEnd.rtIInviteSession;
using CallSession = doubango_rt.BackEnd.rtCallSession;
using SubscriptionSession = doubango_rt.BackEnd.rtSubscriptionSession;
using InfoSession = doubango_rt.BackEnd.rtInfoSession;
using MessagingSession = doubango_rt.BackEnd.rtMessagingSession;

using ActionConfig = doubango_rt.BackEnd.rtActionConfig;
using SipMessage = doubango_rt.BackEnd.rtSipMessage;

using tsip_options_event_type_t = doubango_rt.BackEnd.rt_tsip_options_event_type_t;
using tsip_request_type_t = doubango_rt.BackEnd.rt_tsip_request_type_t;
using tsip_invite_event_type_t = doubango_rt.BackEnd.rt_tsip_invite_event_type_t;
using tsip_message_event_type_t = doubango_rt.BackEnd.rt_tsip_message_event_type_t;
using tsip_subscribe_event_type_t = doubango_rt.BackEnd.rt_tsip_subscribe_event_type_t;
using tsip_info_event_type_t = doubango_rt.BackEnd.rt_tsip_info_event_type_t;
using twrap_media_type_t = doubango_rt.BackEnd.rt_twrap_media_type_t;

#endif

namespace BogheCore.Services.Impl
{
    partial class SipService
    {
        internal class MySipCallback : SipCallback
        {
            private readonly SipService sipService;

            internal MySipCallback(SipService sipService)
                : base()
            {
                this.sipService = sipService;
            }

            /// <summary>
            /// Registration events
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnRegistrationEvent(RegistrationEvent e)
            {
                return 0;
            }

            /// <summary>
            /// Publication events
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnPublicationEvent(PublicationEvent e)
            {
                return 0;
            }

            /// <summary>
            /// Messaging events
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnInfoEvent(InfoEvent e)
            {
                tsip_info_event_type_t type = e.getType();

                switch (type)
                {
                    case tsip_info_event_type_t.tsip_ao_info:
                        {
                            break;
                        }
                    case tsip_info_event_type_t.tsip_i_info:
                        {
                            SipMessage message = e.getSipMessage();
                            InfoSession session = e.getSession();
                            uint sessionId;

                            if (session == null)
                            {
                                /* "Server-side-session" e.g. Initial MESSAGE sent by the remote party */
                                session = e.takeSessionOwnership();
                            }

                            if (session == null)
                            {
                                LOG.Error("Failed to take session ownership");
                            }

                            if (message == null)
                            {
                                LOG.Error("Invalid message");

                                session.reject();
                                session.Dispose();
                                return 0;
                            }

                            sessionId = session.getId();
                            String from = message.getSipHeaderValue("f");
                            String contentType = message.getSipHeaderValue("c");
#if WINRT
#if WINDOWS_PHONE
                            byte[] bytes = Encoding.UTF8.GetBytes(message.getSipContent());
#else
                            uint contentLength = message.getSipContentLength();
                            IntPtr payloadPtr = Marshal.AllocHGlobal((int)contentLength);
                            contentLength = message.getSipContent(payloadPtr, contentLength);
                            byte[] bytes = new byte[contentLength];
                            Marshal.Copy(payloadPtr, bytes, 0, bytes.Length);
                            Marshal.FreeHGlobal(payloadPtr);
#endif
#else
                            byte[] bytes = message.getSipContent();
#endif

                            if (bytes == null || bytes.Length == 0)
                            {
                                LOG.Error("Invalid INFO");
                                session.reject();
                                session.Dispose();
                                return 0;
                            }

                            // Send 200 OK
                            session.accept();
                            session.Dispose();

                            if (String.Equals(contentType, ContentType.DOUBANGO_DEVICE_INFO, StringComparison.InvariantCultureIgnoreCase))
                            {
                                if (bytes != null)
                                {
                                    InfoEventArgs eargs = new InfoEventArgs(sessionId, InfoEventTypes.INCOMING, e.getPhrase(), bytes);
                                    eargs
                                        .AddExtra(InfoEventArgs.EXTRA_CODE, e.getCode())
                                        .AddExtra(InfoEventArgs.EXTRA_REMOTE_PARTY_STRING, from)
                                        .AddExtra(InfoEventArgs.EXTRA_CONTENT_TYPE_STRING, contentType == null ? ContentType.UNKNOWN : contentType);
                                    EventHandlerTrigger.TriggerEvent<InfoEventArgs>(this.sipService.onInfoEvent, this.sipService, eargs);
                                }
                            }

                            break;
                        }
                }

                return 0;
            }

            /// <summary>
            /// Messaging events
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnMessagingEvent(MessagingEvent e)
            {
                tsip_message_event_type_t type = e.getType();

                switch (type)
                {
                    case tsip_message_event_type_t.tsip_ao_message:
                        break;

                    case tsip_message_event_type_t.tsip_i_message:
                        {
                            SipMessage message = e.getSipMessage();
                            MessagingSession session = e.getSession();
                            uint sessionId;

                            if (session == null)
                            {
                                /* "Server-side-session" e.g. Initial MESSAGE sent by the remote party */
                                session = e.takeSessionOwnership();
                            }

                            if (session == null)
                            {
                                LOG.Error("Failed to take session ownership");
                            }

                            if (message == null)
                            {
                                LOG.Error("Invalid message");

                                session.reject();
                                session.Dispose();
                                return 0;
                            }

                            sessionId = session.getId();
                            String from = message.getSipHeaderValue("f");
					        String contentType = message.getSipHeaderValue("c");
#if WINRT
#if WINDOWS_PHONE
                            byte[] bytes = Encoding.UTF8.GetBytes(message.getSipContent());
#else
                            uint contentLength = message.getSipContentLength();
                            IntPtr payloadPtr = Marshal.AllocHGlobal((int)contentLength);
                            contentLength = message.getSipContent(payloadPtr, contentLength);
                            byte[] bytes = new byte[contentLength];
                            Marshal.Copy(payloadPtr, bytes, 0, bytes.Length);
                            Marshal.FreeHGlobal(payloadPtr);
#endif
#else
                            byte[] bytes = message.getSipContent();
#endif
                            byte[] content = null;

                            if (bytes == null || bytes.Length == 0)
                            {
                                LOG.Error("Invalid MESSAGE");
                                session.reject();
                                session.Dispose();
                                return 0;
                            }

                            // Send 200 OK
                            session.accept();
                            session.Dispose();
#if !WINRT
                            if (String.Equals(contentType, ContentType.SMS_3GPP, StringComparison.InvariantCultureIgnoreCase))
                            {
                                /* ==== 3GPP SMSIP  === */
						        byte[] buffer = (bytes.Clone() as byte[]);
                                IntPtr ptr = Marshal.AllocHGlobal(buffer.Length);
                                Marshal.Copy(buffer, 0, ptr, buffer.Length);
                                SMSData smsData = SMSEncoder.decode(ptr, (uint)buffer.Length, false);
                                Marshal.FreeHGlobal(ptr);
                                
                                if (smsData != null){
                                    twrap_sms_type_t smsType = smsData.getType();
                                    if (smsType == twrap_sms_type_t.twrap_sms_type_rpdata){
                            	        /* === We have received a RP-DATA message === */
                                        long payLength = smsData.getPayloadLength();
                                        String SMSC = message.getSipHeaderValue("P-Asserted-Identity");
                                        String SMSCPhoneNumber;
                                        String origPhoneNumber = smsData.getOA();
                                        
                                        /* Destination address */
                                        if(origPhoneNumber != null){
                                	        from = UriUtils.GetValidSipUri(origPhoneNumber);
                                        }
                                        else if((origPhoneNumber = UriUtils.GetValidPhoneNumber(from)) == null){
                                	        LOG.Error("Invalid destination address");
                                	        return 0;
                                        }
                                        
                                        /* SMS Center 
                                         * 3GPP TS 24.341 - 5.3.2.4	Sending a delivery report
                                         * The address of the IP-SM-GW is received in the P-Asserted-Identity header in the SIP MESSAGE 
                                         * request including the delivered short message.
                                         * */
                                        if((SMSCPhoneNumber = UriUtils.GetValidPhoneNumber(SMSC)) == null){
                                            SMSC = this.sipService.mManager.ConfigurationService.Get(Configuration.ConfFolder.RCS, Configuration.ConfEntry.SMSC, Configuration.DEFAULT_RCS_SMSC);
                                	        if((SMSCPhoneNumber = UriUtils.GetValidPhoneNumber(SMSC)) == null){
                                		        LOG.Error("Invalid IP-SM-GW address");
                                		        return 0;
                                	        }
                                        }
                                        
                                        if (payLength > 0) {
                                            /* Send RP-ACK */
                                            RPMessage rpACK = SMSEncoder.encodeACK(smsData.getMR(), SMSCPhoneNumber, origPhoneNumber, false);
                                            if (rpACK != null){
                                                long ack_len = rpACK.getPayloadLength();
                                                if (ack_len > 0){
                                                    buffer = rpACK.getPayload();

                                                    MessagingSession m = new MessagingSession(this.sipService.SipStack.WrappedStack);
                                                    m.setToUri(SMSC);
                                                    m.addHeader("Content-Type", ContentType.SMS_3GPP);
                                                    m.addHeader("Content-Transfer-Encoding", "binary");
                                                    m.addCaps("+g.3gpp.smsip");
                                                    m.send(buffer);
                                                    m.Dispose();
                                                }
                                                rpACK.Dispose();
                                            }

                                            /* Get ascii content */
                                            content = smsData.getPayload();
                                        }
                                        else{
                                            /* Send RP-ERROR */
                                            RPMessage rpError = SMSEncoder.encodeError(smsData.getMR(), SMSCPhoneNumber, origPhoneNumber, false);
                                            if (rpError != null){
                                                long err_len = rpError.getPayloadLength();
                                                if (err_len > 0){
                                                    buffer = rpError.getPayload();

                                                    MessagingSession m = new MessagingSession(this.sipService.SipStack.WrappedStack);
                                                    m.setToUri(SMSC);
                                                    m.addHeader("Content-Type", ContentType.SMS_3GPP);
                                                    m.addHeader("Transfer-Encoding", "binary");
                                                    m.addCaps("+g.3gpp.smsip");
                                                    m.send(buffer);
                                                    m.Dispose();
                                                }
                                                rpError.Dispose();
                                            }
                                        }
                                    }
                                    else{
                            	        /* === We have received any non-RP-DATA message === */
                            	        if(smsType == twrap_sms_type_t.twrap_sms_type_ack){
                            		        /* Find message from the history (by MR) an update it's status */
                            		        LOG.Debug("RP-ACK");
                            	        }
                            	        else if(smsType == twrap_sms_type_t.twrap_sms_type_error){
                            		        /* Find message from the history (by MR) an update it's status */
                                            LOG.Debug("RP-ERROR");
                            	        }
                                    }
                                }
                            }
                            else
#endif
                            {
                                /* ==== text/plain or any other  === */
                                content = bytes;
                            }


                            /* Alert the user a,d add the message to the history */
                            if (content != null)
                            {
                                MessagingEventArgs eargs = new MessagingEventArgs(sessionId, MessagingEventTypes.INCOMING, e.getPhrase(), content);
                                eargs
                                    .AddExtra(MessagingEventArgs.EXTRA_CODE, e.getCode())
                                    .AddExtra(MessagingEventArgs.EXTRA_REMOTE_PARTY, from)
                                    .AddExtra(MessagingEventArgs.EXTRA_CONTENT_TYPE, contentType == null ? ContentType.UNKNOWN : contentType);
                                EventHandlerTrigger.TriggerEvent<MessagingEventArgs>(this.sipService.onMessagingEvent, this.sipService, eargs);
                            }
                            break;
                        }
                }

                return 0;
            }

            /// <summary>
            /// Subscription events
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnSubscriptionEvent(SubscriptionEvent e)
            {
                tsip_subscribe_event_type_t type = e.getType();

                switch (type)
                {
                    case tsip_subscribe_event_type_t.tsip_i_notify:
                        {
                            SubscriptionSession session = e.getSession();
                            MySubscriptionSession mysession;
                            if (session == null || (mysession = this.sipService.FindSubscription(session.getId())) == null)
                            {
                                LOG.Error("Null session");
                                return -1;
                            }
                            SipMessage message = e.getSipMessage();
                            if (message == null)
                            {
                                LOG.Error("Null message");
                                return -1;
                            }
                            String contentType = message.getSipHeaderValue("c");
#if WINRT
#if WINDOWS_PHONE
                            byte[] content = Encoding.UTF8.GetBytes(message.getSipContent());
#else
                            uint contentLength = message.getSipContentLength();
                            IntPtr payloadPtr = Marshal.AllocHGlobal((int)contentLength);
                            contentLength = message.getSipContent(payloadPtr, contentLength);
                            byte[] content = new byte[contentLength];
                            Marshal.Copy(payloadPtr, content, 0, content.Length);
                            Marshal.FreeHGlobal(payloadPtr);
#endif
#else
                            byte[] content = message.getSipContent();
#endif
                            if (String.IsNullOrEmpty(contentType) || content == null)
                            {
                                LOG.Error("Invalid content");
                                return -1;
                            }                            

                            // Save content: To allow the end user to request this content at any time
#if !WINRT
                            if (String.Equals(contentType, ContentType.REG_INFO))
                            {
                                this.sipService.subRegContent = content;
                            }
                            else if (String.Equals(contentType, ContentType.WATCHER_INFO))
                            {
                                this.sipService.subWinfoContent = content;
                            }
#endif

                            short code = e.getCode();
                            String phrase = e.getPhrase();

                            SubscriptionEventArgs eargs = new SubscriptionEventArgs(SubscriptionEventTypes.INCOMING_NOTIFY,
                                code, phrase, content, contentType, mysession.EventPackage);
                            eargs.AddExtra(SubscriptionEventArgs.EXTRA_SESSION, mysession);
                            if (ContentType.MULTIPART_RELATED.Equals(contentType, StringComparison.InvariantCultureIgnoreCase))
                            {
                                String ctype = message.getSipHeaderParamValue("c", "type");
                                eargs.AddExtra(SubscriptionEventArgs.EXTRA_CONTENTYPE_TYPE, ctype == null ? String.Empty : ctype.Replace("\"", String.Empty));

                                String start = message.getSipHeaderParamValue("c", "start");
                                eargs.AddExtra(SubscriptionEventArgs.EXTRA_CONTENTYPE_START, start == null ? String.Empty : start.Replace("\"", String.Empty));

                                String boundary = message.getSipHeaderParamValue("c", "boundary");
                                eargs.AddExtra(SubscriptionEventArgs.EXTRA_CONTENTYPE_BOUNDARY, boundary == null ? String.Empty : boundary.Replace("\"", String.Empty));
                            }
                            EventHandlerTrigger.TriggerEvent<SubscriptionEventArgs>(this.sipService.onSubscriptionEvent, this.sipService, eargs);

                            break;
                        }

                    default:
                    case tsip_subscribe_event_type_t.tsip_i_subscribe:
                    case tsip_subscribe_event_type_t.tsip_ao_subscribe:
                    case tsip_subscribe_event_type_t.tsip_i_unsubscribe:
                    case tsip_subscribe_event_type_t.tsip_ao_unsubscribe:
                    case tsip_subscribe_event_type_t.tsip_ao_notify:
                        {
                            break;
                        }
                }

                return 0;
            }

            /// <summary>
            /// Dialog events (Common to all)
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnDialogEvent(DialogEvent e)
            {
                String phrase = e.getPhrase();
                short code = e.getCode();
                SipSession session = e.getBaseSession();
                SipMessage message = e.getSipMessage();
                if (session == null)
                {
                    LOG.Info(String.Format("OnDialogEvent ({0}) with Null session", phrase));
                    return 0;
                }

                uint sessionId = session.getId();
                MySipSession mySession = null;

                short sipCode = message != null && message.isResponse() ? message.getResponseCode() : code;

                LOG.Info(String.Format("OnDialogEvent ({0})", phrase));

                if (code == tinyWRAP.tsip_event_code_dialog_connecting)
                {
                    // Registration
                    if (this.sipService.mRegSession != null && this.sipService.mRegSession.Id == sessionId)
                    {
                        EventHandlerTrigger.TriggerEvent<RegistrationEventArgs>(this.sipService.onRegistrationEvent, this.sipService, 
                            new RegistrationEventArgs(RegistrationEventTypes.REGISTRATION_INPROGRESS, code, phrase));
                    }
                    // Audio/Video/MSRP
                    else if (((mySession = MyAVSession.GetSession(sessionId)) != null) || ((mySession = MyMsrpSession.GetSession(sessionId)) != null))
                    {
                        (mySession as MyInviteSession).State = MyInviteSession.InviteState.INPROGRESS;
                        InviteEventArgs eargs = new InviteEventArgs(sessionId, InviteEventTypes.INPROGRESS, phrase);
                        eargs.AddExtra(InviteEventArgs.EXTRA_SIP_CODE, sipCode);
                        eargs.AddExtra(InviteEventArgs.EXTRA_SESSION, mySession);
                        EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, eargs);
                    } 

                    // Subscription

                    // Publication
                    
                }


                else if (code == tinyWRAP.tsip_event_code_dialog_connected)
                {
                    // Registration
                    if (this.sipService.mRegSession != null && this.sipService.mRegSession.Id == sessionId)
                    {
                        this.sipService.mRegSession.IsConnected = true;
                        // Update default identity (vs barred)
                        String _defaultIdentity = this.sipService.SipStack.WrappedStack.getPreferredIdentity();
                        if (!String.IsNullOrEmpty(_defaultIdentity))
                        {
                            this.sipService.defaultIdentity = _defaultIdentity;
                        }
                        // Do PostRegistrationOp() in new thread to avoid blocking callbacks
                        new Thread(new ThreadStart(delegate
                        {
                            this.sipService.DoPostRegistrationOp();
                        }))
                        .Start();
                        EventHandlerTrigger.TriggerEvent<RegistrationEventArgs>(this.sipService.onRegistrationEvent, this.sipService, 
                            new RegistrationEventArgs(RegistrationEventTypes.REGISTRATION_OK, code, phrase));
                    }

                    // Audio/Video/MSRP
                    else if (((mySession = MyAVSession.GetSession(sessionId)) != null) || ((mySession = MyMsrpSession.GetSession(sessionId)) != null))
                    {
                        (mySession as MyInviteSession).State = MyInviteSession.InviteState.INCALL;
                        mySession.IsConnected = true;
                        EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, new InviteEventArgs(sessionId, InviteEventTypes.CONNECTED, phrase));
                    }

                    // Subscription
                    else if ((mySession = this.sipService.mSubPresence.FirstOrDefault(x => x.Id == sessionId)) != null)
                    {
                        mySession.IsConnected = true;
                    }

                    // Publication
#if !WINRT
                    else if (this.sipService.pubPres != null && this.sipService.pubPres.Id == sessionId)
                    {
                        this.sipService.pubPres.IsConnected = true;
                    }
#endif
                }


                else if (code == tinyWRAP.tsip_event_code_dialog_terminating)
                {
                    // Registration
                    if (this.sipService.mRegSession != null && this.sipService.mRegSession.Id == sessionId)
                    {
                        SipService.LOG.Info("OnDialogEvent (Unregistering)");
                        EventHandlerTrigger.TriggerEvent<RegistrationEventArgs>(this.sipService.onRegistrationEvent, this.sipService,
                            new RegistrationEventArgs(RegistrationEventTypes.UNREGISTRATION_INPROGRESS, code, phrase));
                    }

                    // Audio/Video/MSRP
                    else if (((mySession = MyAVSession.GetSession(sessionId)) != null) || ((mySession = MyMsrpSession.GetSession(sessionId)) != null))
                    {
                        (mySession as MyInviteSession).State = MyInviteSession.InviteState.TERMINATING;
                        EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, new InviteEventArgs(sessionId, InviteEventTypes.TERMWAIT, phrase));
                    }

                    // Subscription

                    // Publication
                }


                else if (code == tinyWRAP.tsip_event_code_dialog_terminated)
                {
                    // Registration
                    if (this.sipService.mRegSession != null && this.sipService.mRegSession.Id == sessionId)
                    {
                        SipService.LOG.Info("OnDialogEvent (Unregistered)");
                        this.sipService.mRegSession.IsConnected = false;
                        // To PostRegistration() in new thread
                        EventHandlerTrigger.TriggerEvent<RegistrationEventArgs>(this.sipService.onRegistrationEvent, this.sipService,
                            new RegistrationEventArgs(RegistrationEventTypes.UNREGISTRATION_OK, code, phrase));
                        /* Stop the stack (as we are already in the stack-thread, then do it in a new thread) */
                        new Thread(new ThreadStart(delegate
                        {
                            if (this.sipService.mSipStack.State == MySipStack.STACK_STATE.STARTED)
                            {
                                this.sipService.mSipStack.WrappedStack.stop();
                            }
                        })).Start();
                    }

                    // Audio/Video/MSRP
                    else if (((mySession = MyAVSession.GetSession(sessionId)) != null) || ((mySession = MyMsrpSession.GetSession(sessionId)) != null))
                    {
                        mySession.IsConnected = false;
                        (mySession as MyInviteSession).State = MyInviteSession.InviteState.TERMINATED;
                        InviteEventArgs eargs = new InviteEventArgs(sessionId, InviteEventTypes.DISCONNECTED, phrase);
                        eargs.AddExtra(InviteEventArgs.EXTRA_SIP_CODE, sipCode);
                        EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, eargs);
                        if (mySession is MyAVSession)
                        {
                            MyAVSession.ReleaseSession((mySession as MyAVSession));
                        }
                        if (mySession is MyMsrpSession)
                        {
                            MyMsrpSession.ReleaseSession((mySession as MyMsrpSession));
                        }
                    }

                    // Subscription
#if !WINRT
                    else if ((mySession = this.sipService.mSubPresence.FirstOrDefault(x => x.Id == sessionId)) != null)
                    {
                        mySession.IsConnected = false;
                        this.sipService.mSubPresence.Remove(mySession as MySubscriptionSession);
                    }
#endif
                     
                    // Publication
#if !WINRT
                    else if (this.sipService.pubPres != null && this.sipService.pubPres.Id == sessionId)
                    {
                        this.sipService.pubPres.IsConnected = false;
                        if (this.sipService.hyperAvailabilityTimer != null)
                        {
                            if (this.sipService.hyperAvailabilityTimer.Enabled)
                            {
                                this.sipService.hyperAvailabilityTimer.Stop();
                            }
                            this.sipService.hyperAvailabilityTimer = null;
                        }
                    }
#endif
                }

                return 0;
            }

            /// <summary>
            /// Stack events
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnStackEvent(StackEvent e)
            {
                short code = e.getCode();
                String phrase = e.getPhrase();

                LOG.Info(String.Format("OnStackEvent ({0})", phrase));
                
                if (code == tinyWRAP.tsip_event_code_stack_started)
                {
                    this.sipService.SipStack.State = MySipStack.STACK_STATE.STARTED;

                    // Now that the stack is up we can set the codecs
#if WINRT
                    doubango_rt.BackEnd.rtSipStack.setCodecs((doubango_rt.BackEnd.rt_tdav_codec_id_t)this.sipService.Codecs);
#else
                    org.doubango.tinyWRAP.SipStack.setCodecs((tdav_codec_id_t)this.sipService.Codecs);
#endif

                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.START_OK, phrase));
                }
                else if (code == tinyWRAP.tsip_event_code_stack_starting)
                {
                    this.sipService.SipStack.State = MySipStack.STACK_STATE.STARTING;
                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.STARING, phrase));
                }
                else if (code == tinyWRAP.tsip_event_code_stack_failed_to_start)
                {
                    this.sipService.SipStack.State = MySipStack.STACK_STATE.STOPPED;
                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.START_NOK, phrase));
                }

                else if (code == tinyWRAP.tsip_event_code_stack_failed_to_stop)
                {
                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.STOP_NOK, phrase));
                }
                else if (code == tinyWRAP.tsip_event_code_stack_stopping)
                {
                    this.sipService.SipStack.State = MySipStack.STACK_STATE.STOPPING;
                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.STOPPING, phrase));
                }
                else if (code == tinyWRAP.tsip_event_code_stack_stopped)
                {
                    if (this.sipService.SipStack != null)
                    {
                        this.sipService.SipStack.State = MySipStack.STACK_STATE.STOPPED;
                    }

                    // Reset contents
#if !WINRT
                    this.sipService.subWinfoContent = null;
                    this.sipService.subRegContent = null;
                    this.sipService.subRLSContent = null;
                    this.sipService.subMwiContent = null;
#endif

                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.STOP_OK, phrase));
                }
                else if (code == tinyWRAP.tsip_event_code_stack_disconnected)
                {
                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.DISCONNECTED, phrase));
                }

                return 0;
            }

            /// <summary>
            /// Call (MSRP, Audio, Video, T.38, ...) events
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnInviteEvent(InviteEvent e)
            {
                tsip_invite_event_type_t type = e.getType();
                short code = e.getCode();
                String phrase = e.getPhrase();
                InviteSession session = e.getSession();

                switch (type)
                {
                    case tsip_invite_event_type_t.tsip_i_newcall:
                    case tsip_invite_event_type_t.tsip_i_ect_newcall:
                        {
                            if (session != null) /* As we are not the owner, then the session MUST be null */
                            {
                                LOG.Error("Invalid incoming session");
                                session.hangup(null); // To avoid another callback event
                                return -1;
                            }

                            SipMessage message = e.getSipMessage();
                            if (message == null)
                            {
                                LOG.Error("Invalid message");
                                return -1;
                            }
                            twrap_media_type_t sessionType = e.getMediaType();

                            switch (sessionType)
                            {
                                case twrap_media_type_t.twrap_media_msrp:
                                    {
                                        if ((session = e.takeMsrpSessionOwnership()) == null)
                                        {
                                            LOG.Error("Failed to take MSRP session ownership");
                                            return -1;
                                        }

                                        MyMsrpSession msrpSession = MyMsrpSession.TakeIncomingSession(this.sipService.SipStack, session as MsrpSession, message);
                                        if (msrpSession == null)
                                        {
                                            LOG.Error("Failed to create new session");
                                            session.hangup(null);
                                            (session as IDisposable).Dispose();
                                            return 0;
                                        }
                                        msrpSession.State = MyInviteSession.InviteState.INCOMING;

                                        InviteEventArgs eargs = new InviteEventArgs(msrpSession.Id, InviteEventTypes.INCOMING, phrase);
                                        eargs.AddExtra(InviteEventArgs.EXTRA_SESSION, msrpSession);
                                        EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, eargs);
                                        break;
                                    }

                                case twrap_media_type_t.twrap_media_audio:
                                case twrap_media_type_t.twrap_media_audiovideo:
                                case twrap_media_type_t.twrap_media_video:
                                case (twrap_media_type_t.twrap_media_audio | twrap_media_type_t.twrap_media_t140):
                                case (twrap_media_type_t.twrap_media_audio | twrap_media_type_t.twrap_media_video | twrap_media_type_t.twrap_media_t140):
                                case twrap_media_type_t.twrap_media_t140:
                                    {
                                        if ((session = e.takeCallSessionOwnership()) == null)
                                        {
                                            LOG.Error("Failed to take audio/video session ownership");
                                            return -1;
                                        }
                                        if (type == tsip_invite_event_type_t.tsip_i_newcall)
                                        {
                                            MyAVSession avSession = MyAVSession.TakeIncomingSession(this.sipService.SipStack, session as CallSession, sessionType, message);
                                            avSession.State = MyInviteSession.InviteState.INCOMING;

                                            InviteEventArgs eargs = new InviteEventArgs(avSession.Id, InviteEventTypes.INCOMING, phrase);
                                            eargs.AddExtra(InviteEventArgs.EXTRA_SESSION, avSession);
                                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, eargs);
                                        }
                                        else
                                        {
                                            MyAVSession avSession = MyAVSession.TakeOutgoingTranferSession(this.sipService.SipStack, (session as CallSession), sessionType, message);
                                            InviteEventArgs eargs = new InviteEventArgs(avSession.Id, InviteEventTypes.REMOTE_TRANSFER_INPROGESS, phrase);
                                            eargs.AddExtra(InviteEventArgs.EXTRA_SESSION, avSession);
                                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, eargs);
                                        }
                                        break;
                                    }

                                default:
                                    LOG.Error("Invalid media type");
                                    return 0;

                            }
                            break;
                        }

                    case tsip_invite_event_type_t.tsip_ao_request:
                        if (code == 180 && session != null)
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                    new InviteEventArgs(session.getId(), InviteEventTypes.RINGING, phrase));
                        }
                        break;

                    case tsip_invite_event_type_t.tsip_i_request:
                        {
                            SipMessage message = e.getSipMessage();
                            if (message != null)
                            {
                                if (message.getRequestType() == tsip_request_type_t.tsip_INFO)
                                {
                                    String from = message.getSipHeaderValue("f");
                                    String contentType = message.getSipHeaderValue("c");
                                    //byte[] bytes = message.getSipContent();
                                    //if (!String.IsNullOrEmpty(contentType) && String.Equals(contentType, ContentType.DOUBANGO_DEVICE_INFO, StringComparison.InvariantCultureIgnoreCase))
                                    //{
                                    //    if (bytes != null)
                                    //    {
                                   //         //InviteEventArgs eargs = new InviteEventArgs(session.getId(), InviteEventTypes.INFO, e.getPhrase());
                                    //       // eargs
                                   //        //     .AddExtra(InviteEventArgs.EXTRA_CONTENT, from)
                                    //       //     .AddExtra(InviteEventArgs.EXTRA_REMOTE_PARTY, from)
                                    //       //     .AddExtra(InviteEventArgs.EXTRA_CONTENT_TYPE, contentType == null ? ContentType.UNKNOWN : contentType);
                                   //        // EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, eargs);
                                   //     }
                                   // }
                                }
                            }
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_o_ect_trying:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                        new InviteEventArgs(session.getId(), InviteEventTypes.LOCAL_TRANSFER_TRYING, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_o_ect_accepted:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                        new InviteEventArgs(session.getId(), InviteEventTypes.LOCAL_TRANSFER_ACCEPTED, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_o_ect_completed:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                        new InviteEventArgs(session.getId(), InviteEventTypes.LOCAL_TRANSFER_COMPLETED, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_o_ect_failed:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                        new InviteEventArgs(session.getId(), InviteEventTypes.LOCAL_TRANSFER_FAILED, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_o_ect_notify:
                    case tsip_invite_event_type_t.tsip_i_ect_notify:
                        {
                            InviteEventTypes eType = type == tsip_invite_event_type_t.tsip_o_ect_notify ? InviteEventTypes.LOCAL_TRANSFER_NOTIFY : InviteEventTypes.REMOTE_TRANSFER_NOTIFY;
                            InviteEventArgs args = new InviteEventArgs(session.getId(), eType, phrase);
                            args.AddExtra(InviteEventArgs.EXTRA_SIP_CODE, code);
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, args);
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_i_ect_requested:
                        {
                            SipMessage message = e.getSipMessage();
                            if (message != null)
                            {
                                if (message.getRequestType() == tsip_request_type_t.tsip_REFER)
                                {
                                    String referToUri = message.getSipHeaderValue("refer-to");
                                    if (!String.IsNullOrEmpty(referToUri))
                                    {
                                        InviteEventArgs args = new InviteEventArgs(session.getId(), InviteEventTypes.REMOTE_TRANSFER_REQUESTED, phrase);
                                        args.AddExtra(InviteEventArgs.EXTRA_REFERTO_URI, referToUri);
                                        EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, args);
                                    }
                                }
                            }
                            
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_i_ect_failed:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, 
                                new InviteEventArgs(session.getId(), InviteEventTypes.REMOTE_TRANSFER_FAILED, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_i_ect_completed:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                new InviteEventArgs(session.getId(), InviteEventTypes.REMOTE_TRANSFER_COMPLETED, phrase));
                            break;
                        }


                    case tsip_invite_event_type_t.tsip_m_early_media:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                        new InviteEventArgs(session.getId(), InviteEventTypes.EARLY_MEDIA, phrase));
                            break;
                        }

                    case tsip_invite_event_type_t.tsip_m_updating:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                         new InviteEventArgs(session.getId(), InviteEventTypes.MEDIA_UPDATING, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_m_updated:
                        {
                            if (MyAVSession.HandleMediaUpdate(session.getId(), e.getMediaType()))
                            {
                                EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                         new InviteEventArgs(session.getId(), InviteEventTypes.MEDIA_UPDATED, phrase));
                            }
                            break;
                        }

                    case tsip_invite_event_type_t.tsip_m_local_hold_ok:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                            new InviteEventArgs(session.getId(), InviteEventTypes.LOCAL_HOLD_OK, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_m_local_hold_nok:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                                new InviteEventArgs(session.getId(), InviteEventTypes.LOCAL_HOLD_NOK, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_m_local_resume_ok:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                                    new InviteEventArgs(session.getId(), InviteEventTypes.LOCAL_RESUME_OK, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_m_local_resume_nok:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                                        new InviteEventArgs(session.getId(), InviteEventTypes.LOCAL_RESUME_NOK, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_m_remote_hold:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                                            new InviteEventArgs(session.getId(), InviteEventTypes.REMOTE_HOLD, phrase));
                            break;
                        }
                    case tsip_invite_event_type_t.tsip_m_remote_resume:
                        {
                            EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService,
                                                                new InviteEventArgs(session.getId(), InviteEventTypes.REMOTE_RESUME, phrase));
                            break;
                        }
                }


                return 0;
            }

            /// <summary>
            /// Option events
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnOptionsEvent(OptionsEvent e)
            {
                tsip_options_event_type_t type = e.getType();
                OptionsSession ptSession = e.getSession();

                switch (type)
                {
                    case tsip_options_event_type_t.tsip_i_options:
                        if (ptSession == null) // New session
                        {
                            if ((ptSession = e.takeSessionOwnership()) != null)
                            {
                                ActionConfig config =
#if WINDOWS_PHONE
 org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtActionConfigNew();
#else
            new ActionConfig();
#endif
                                config.addHeader("Allow", "PRACK, INVITE, ACK, BYE, CANCEL, UPDATE, SUBSCRIBE, NOTIFY, REFER, MESSAGE, OPTIONS");
                                ptSession.accept(config);
                                ptSession.Dispose();
                                config.Dispose();
                            }
                        }
                        break;
                    default:
                        break;
                }
                return 0;
            }
        }


        internal class MySipDebugCallback : DDebugCallback
        {
            internal MySipDebugCallback()
                : base()
            {

            }

            /// <summary>
            /// Info level
            /// </summary>
            /// <param name="message"></param>
            /// <returns></returns>
            public override int OnDebugInfo(string message)
            {
                SipService.LOG.Info(message);
                return 0;
            }

            /// <summary>
            /// Warn level
            /// </summary>
            /// <param name="message"></param>
            /// <returns></returns>
            public override int OnDebugWarn(string message)
            {
                SipService.LOG.Warn(message);
                return 0;
            }

            /// <summary>
            /// Error level
            /// </summary>
            /// <param name="message"></param>
            /// <returns></returns>
            public override int OnDebugError(string message)
            {
                SipService.LOG.Error(message);
                return 0;
            }

            /// <summary>
            /// Fatal level
            /// </summary>
            /// <param name="message"></param>
            /// <returns></returns>
            public override int OnDebugFatal(string message)
            {
                SipService.LOG.Fatal(message);
                return 0;
            }
        }
    }
}
