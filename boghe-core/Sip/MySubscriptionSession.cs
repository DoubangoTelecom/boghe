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
#if WINRT
using SubscriptionSession = doubango_rt.BackEnd.rtSubscriptionSession;
using SipSession = doubango_rt.BackEnd.rtISipSession;
#endif

namespace BogheCore.Sip
{
    public class MySubscriptionSession : MySipSession
    {
        private readonly SubscriptionSession session;
        private readonly EVENT_PACKAGE_TYPE eventPackage;
    	
	    public enum EVENT_PACKAGE_TYPE {
		    CONFERENCE, DIALOG, MESSAGE_SUMMARY, PRESENCE, PRESENCE_LIST, REG, SIP_PROFILE, UA_PROFILE, WINFO, XCAP_DIFF
	    }

        public MySubscriptionSession(MySipStack sipStack, String toUri, EVENT_PACKAGE_TYPE eventPackage)
            :base(sipStack)
        {
#if WINDOWS_PHONE
            this.session = org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtSubscriptionSessionNew(sipStack.WrappedStack);
#else
            this.session = new SubscriptionSession(sipStack.WrappedStack);
#endif
            this.eventPackage = eventPackage;

            // commons
            base.init();

            // SigComp
            base.SigCompId = sipStack.SigCompId;

            switch (eventPackage)
            {
                case EVENT_PACKAGE_TYPE.CONFERENCE:
                    this.session.addHeader("Event", "conference");
                    this.session.addHeader("Accept", ContentType.CONFERENCE_INFO);
                    break;
                case EVENT_PACKAGE_TYPE.DIALOG:
                    this.session.addHeader("Event", "dialog");
                    this.session.addHeader("Accept", ContentType.DIALOG_INFO);
                    break;
                case EVENT_PACKAGE_TYPE.MESSAGE_SUMMARY:
                    this.session.addHeader("Event", "message-summary");
                    this.session.addHeader("Accept", ContentType.MESSAGE_SUMMARY);
                    break;
                case EVENT_PACKAGE_TYPE.PRESENCE:
                case EVENT_PACKAGE_TYPE.PRESENCE_LIST:
                    this.session.addHeader("Event", "presence");
                    if (eventPackage == EVENT_PACKAGE_TYPE.PRESENCE_LIST)
                    {
                        this.session.addHeader("Supported", "eventlist");
                    }
                    this.session.addHeader("Accept",
                            String.Format("{0}, {1}, {2}, {3}",
                                    ContentType.MULTIPART_RELATED,
                                    ContentType.PIDF,
                                    ContentType.RLMI,
                                    ContentType.RPID
                                    ));
                    break;
                case EVENT_PACKAGE_TYPE.REG:
                    this.session.addHeader("Event", "reg");
                    this.session.addHeader("Accept", ContentType.REG_INFO);
                    // 3GPP TS 24.229 5.1.1.6 User-initiated deregistration
                    this.session.setSilentHangup(true);
                    break;
                case EVENT_PACKAGE_TYPE.SIP_PROFILE:
                    this.session.addHeader("Event", "sip-profile");
                    this.session.addHeader("Accept", ContentType.OMA_DEFERRED_LIST);
                    break;
                case EVENT_PACKAGE_TYPE.UA_PROFILE:
                    this.session.addHeader("Event", "ua-profile");
                    this.session.addHeader("Accept", ContentType.XCAP_DIFF);
                    break;
                case EVENT_PACKAGE_TYPE.WINFO:
                    this.session.addHeader("Event", "presence.winfo");
                    this.session.addHeader("Accept", ContentType.WATCHER_INFO);
                    break;
                case EVENT_PACKAGE_TYPE.XCAP_DIFF:
                    this.session.addHeader("Event", "xcap-diff");
                    this.session.addHeader("Accept", ContentType.XCAP_DIFF);
                    break;
            }

            this.ToUri = toUri;
            // common to all subscription sessions
            this.session.addHeader("Allow-Events", "refer, presence, presence.winfo, xcap-diff, conference");
        }

        protected override SipSession Session
        {
            get { return this.session; }
        }

        public bool Subscribe()
        {
            return this.session.subscribe();
        }

        public bool UnSubscribe()
        {
            return this.session.unSubscribe();
        }

        public EVENT_PACKAGE_TYPE EventPackage
        {
            get { return this.eventPackage; }
        }
    }
}
