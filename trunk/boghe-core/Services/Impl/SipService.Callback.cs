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
            public override int OnMessagingEvent(MessagingEvent e)
            {
                return 0;
            }

            /// <summary>
            /// Subscription events
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnSubscriptionEvent(SubscriptionEvent e)
            {
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
                if (session == null)
                {
                    return 0;
                }

                uint sessionId = session.getId();
                MyInviteSession invSession = null;

                SipService.LOG.Info(String.Format("OnDialogEvent ({0})", phrase));

                if (code == tinyWRAP.tsip_event_code_dialog_connecting)
                {
                    // Registration
                    if (this.sipService.regSession != null && this.sipService.regSession.Id == sessionId)
                    {
                        EventHandlerTrigger.TriggerEvent<RegistrationEventArgs>(this.sipService.onRegistrationEvent, this.sipService, 
                            new RegistrationEventArgs(RegistrationEventTypes.REGISTRATION_INPROGRESS, code, phrase));
                    }
                    // Audio/Video/MSRP
                    else if (((invSession = MyAVSession.GetSession(sessionId)) != null) || ((invSession = MyMsrpSession.GetSession(sessionId)) != null))
                    {
                        InviteEventArgs eargs = new InviteEventArgs(sessionId, InviteEventTypes.INPROGRESS, phrase);
                        eargs.PutExtra("session", invSession);
                        EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, eargs);
                    } 

                    // Subscription

                    // Publication
                }


                else if (code == tinyWRAP.tsip_event_code_dialog_connected)
                {
                    // Registration
                    if (this.sipService.regSession != null && this.sipService.regSession.Id == sessionId)
                    {
                        this.sipService.regSession.IsConnected = true;
                        // Update default identity (vs barred)
                        String _defaultIdentity = this.sipService.SipStack.getPreferredIdentity();
                        if (!String.IsNullOrEmpty(_defaultIdentity))
                        {
                            this.sipService.defaultIdentity = _defaultIdentity;
                        }
                        // To PostRegistrationOp() in new thread to avoid blocking callbacks
                        new Thread(new ThreadStart(delegate
                        {
                            this.sipService.DoPostRegistrationOp();
                        })).Start();
                        EventHandlerTrigger.TriggerEvent<RegistrationEventArgs>(this.sipService.onRegistrationEvent, this.sipService, 
                            new RegistrationEventArgs(RegistrationEventTypes.REGISTRATION_OK, code, phrase));
                    }

                    // Audio/Video/MSRP
                    else if (((invSession = MyAVSession.GetSession(sessionId)) != null) || ((invSession = MyMsrpSession.GetSession(sessionId)) != null))
                    {
                        invSession.IsConnected = true;
                        EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, new InviteEventArgs(sessionId, InviteEventTypes.CONNECTED, phrase));
                    }

                    // Subscription

                    // Publication
                }


                else if (code == tinyWRAP.tsip_event_code_dialog_terminating)
                {
                    // Registration
                    if (this.sipService.regSession != null && this.sipService.regSession.Id == sessionId)
                    {
                        EventHandlerTrigger.TriggerEvent<RegistrationEventArgs>(this.sipService.onRegistrationEvent, this.sipService,
                            new RegistrationEventArgs(RegistrationEventTypes.UNREGISTRATION_INPROGRESS, code, phrase));
                    }

                    // Audio/Video/MSRP
                    else if (MyAVSession.HasSession(sessionId) || MyMsrpSession.HasSession(sessionId))
                    {
                        EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, new InviteEventArgs(sessionId, InviteEventTypes.TERMWAIT, phrase));
                    }

                    // Subscription

                    // Publication
                }


                else if (code == tinyWRAP.tsip_event_code_dialog_terminated)
                {
                    // Registration
                    if (this.sipService.regSession != null && this.sipService.regSession.Id == sessionId)
                    {
                        this.sipService.regSession.IsConnected = false;
                        // To PostRegistration() in new thread
                        EventHandlerTrigger.TriggerEvent<RegistrationEventArgs>(this.sipService.onRegistrationEvent, this.sipService,
                            new RegistrationEventArgs(RegistrationEventTypes.UNREGISTRATION_OK, code, phrase));
                        /* Stop the stack (as we are already in the stack-thread, then do it in a new thread) */
                        new Thread(new ThreadStart(delegate
                        {
                            if (this.sipService.sipStack.State == MySipStack.STACK_STATE.STARTED)
                            {
                                this.sipService.sipStack.stop();
                            }
                        })).Start();
                    }

                    // Audio/Video/MSRP
                    else if (((invSession = MyAVSession.GetSession(sessionId)) != null) || ((invSession = MyMsrpSession.GetSession(sessionId)) != null))
                    {
                        invSession.IsConnected = false;
                        EventHandlerTrigger.TriggerEvent<InviteEventArgs>(this.sipService.onInviteEvent, this.sipService, new InviteEventArgs(sessionId, InviteEventTypes.DISCONNECTED, phrase));
                    }

                    // Subscription

                    // Publication
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

                if (code == tinyWRAP.tsip_event_code_stack_started)
                {
                    this.sipService.SipStack.State = MySipStack.STACK_STATE.STARTED;

                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.START_OK, phrase));
                }

                else if (code == tinyWRAP.tsip_event_code_stack_failed_to_start)
                {
                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.START_NOK, phrase));
                }

                else if (code == tinyWRAP.tsip_event_code_stack_failed_to_stop)
                {
                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.STOP_NOK, phrase));
                }

                else if (code == tinyWRAP.tsip_event_code_stack_stopped)
                {
                    this.sipService.SipStack.State = MySipStack.STACK_STATE.STOPPED;

                    EventHandlerTrigger.TriggerEvent<StackEventArgs>(this.sipService.onStackEvent, this.sipService,
                        new StackEventArgs(StackEventTypes.STOP_OK, phrase));
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
                return 0;
            }

            /// <summary>
            /// Option events
            /// </summary>
            /// <param name="e"></param>
            /// <returns></returns>
            public override int OnOptionsEvent(OptionsEvent e)
            {
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
