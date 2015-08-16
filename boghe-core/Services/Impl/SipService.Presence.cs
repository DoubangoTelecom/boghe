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
using BogheCore.Sip;
using BogheCore.Model;
using BogheCore.Events;
#if !WINRT
using BogheCore.Xcap.Events;
#endif

namespace BogheCore.Services.Impl
{
    partial class SipService
    {

        private MySubscriptionSession FindSubscription(long id)
        {
#if !WINRT
            if (this.subReg != null && this.subReg.Id == id)
            {
                return this.subReg;
            }

            if (this.subMwi != null && this.subMwi.Id == id)
            {
                return this.subMwi;
            }

            if (this.subWinfo != null && this.subWinfo.Id == id)
            {
                return this.subWinfo;
            }

            if (this.subRLS != null && this.subRLS.Id == id)
            {
                return this.subRLS;
            }
#endif

            return this.mSubPresence.FirstOrDefault(x => x.Id == id);
        }

#if !WINRT
        private bool SubscribeToRegInfo()
        {
            LOG.Debug("Subscribe to 'reg' event package");
            /*
		     * 3GPP TS 24.229 5.1.1.3 Subscription to registration-state event package
		     * Upon receipt of a 2xx response to the initial registration, the UE shall subscribe to the reg event package for the public
		     * user identity registered at the user's registrar (S-CSCF) as described in RFC 3680 [43].
		     */
            if (this.subReg == null)
            {
                this.subReg = new MySubscriptionSession(this.SipStack, this.DefaultIdentity, MySubscriptionSession.EVENT_PACKAGE_TYPE.REG);
            }
            else
            {
                this.subReg.ToUri = this.DefaultIdentity;
                this.subReg.FromUri = this.DefaultIdentity;
                this.subReg.SigCompId = this.SipStack.SigCompId;
            }

            return this.subReg.Subscribe();
        }

        private bool SubscribeToMWI()
        {
            LOG.Debug("Subscribe to 'message-summary' event package");

            if (this.subMwi == null)
            {
                this.subMwi = new MySubscriptionSession(this.SipStack, this.DefaultIdentity, MySubscriptionSession.EVENT_PACKAGE_TYPE.MESSAGE_SUMMARY);
            }
            else
            {
                this.subMwi.ToUri = this.DefaultIdentity;
                this.subMwi.FromUri = this.DefaultIdentity;
                this.subMwi.SigCompId = this.SipStack.SigCompId;
            }

            return this.subMwi.Subscribe();
        }

        private bool SubscribeToWinfo()
        {
            LOG.Debug("Subscribe to 'winfo' event package");

            if (this.subWinfo == null)
            {
                this.subWinfo = new MySubscriptionSession(this.SipStack, this.DefaultIdentity, MySubscriptionSession.EVENT_PACKAGE_TYPE.WINFO);
            }
            else
            {
                this.subWinfo.ToUri = this.DefaultIdentity;
                this.subWinfo.FromUri = this.DefaultIdentity;
                this.subWinfo.SigCompId = this.SipStack.SigCompId;
            }

            return this.subWinfo.Subscribe();
        }

        private bool SubscribeToRLSPresence()
        {
            if (String.IsNullOrEmpty(this.xcapService.RLSPresUri))
            {
                LOG.Error("Invalid rls presence uri");
                return false;
            }

            if (this.subRLS == null)
            {
                this.subRLS = new MySubscriptionSession(this.SipStack, this.xcapService.RLSPresUri, MySubscriptionSession.EVENT_PACKAGE_TYPE.PRESENCE_LIST);
            }
            else
            {
                this.subRLS.ToUri = this.xcapService.RLSPresUri;
                this.subRLS.FromUri = this.DefaultIdentity;
                this.subRLS.SigCompId = this.SipStack.SigCompId;
            }
            return this.subRLS.Subscribe();
        }

        private bool PublishPresence()
        {
            if (this.pubPres == null)
            {
                this.pubPres = new MyPublicationSession(this.SipStack, this.DefaultIdentity);
            }
            else
            {
                this.pubPres.ToUri = this.DefaultIdentity;
                this.pubPres.FromUri = this.DefaultIdentity;
                this.pubPres.SigCompId = this.SipStack.SigCompId;
            }

            this.pubPres.FreeText = this.configurationService.Get(Configuration.ConfFolder.RCS, Configuration.ConfEntry.FREE_TEXT, Configuration.DEFAULT_RCS_FREE_TEXT);
            this.pubPres.HomePage = this.configurationService.Get(Configuration.ConfFolder.RCS, Configuration.ConfEntry.HOME_PAGE, Configuration.DEFAULT_RCS_HOME_PAGE);
            this.pubPres.PresenceStatus = (PresenceStatus)Enum.Parse(typeof(PresenceStatus),
                this.configurationService.Get(Configuration.ConfFolder.RCS, Configuration.ConfEntry.STATUS, Configuration.DEFAULT_RCS_STATUS.ToString()));
            if (this.pubPres.PresenceStatus == PresenceStatus.HyperAvailable)
            {
                this.pubPres.HyperAvailabilityTimeout = this.StartHyperAvailabilityTimer();
            }

            return this.pubPres.Publish();
        }

        private bool PublishPresence(PresenceStatus status)
        {
            if (this.pubPres != null)
            {
                if (status == PresenceStatus.HyperAvailable)
                {
                    this.pubPres.HyperAvailabilityTimeout = this.StartHyperAvailabilityTimer();
                }
                return this.pubPres.Publish(status);
            }
            return false;
        }

        private int StartHyperAvailabilityTimer()
        {
            int timeout = this.configurationService.Get(Configuration.ConfFolder.RCS, Configuration.ConfEntry.HYPERAVAILABILITY_TIMEOUT, Configuration.DEFAULT_RCS_HYPERAVAILABILITY_TIMEOUT);
            if (this.hyperAvailabilityTimer == null)
            {
                this.hyperAvailabilityTimer = new System.Timers.Timer(timeout * 60000);
                this.hyperAvailabilityTimer.AutoReset = false;
                this.hyperAvailabilityTimer.Elapsed += delegate
                {
                    EventHandlerTrigger.TriggerEvent(this.onHyperAvailabilityTimedout, this);
                };
            }
            else
            {
                this.hyperAvailabilityTimer.Stop();
                this.hyperAvailabilityTimer.Interval = timeout * 60000;
            }

            this.hyperAvailabilityTimer.Start();
            return timeout;
        }

        private void xcapService_onXcapEvent(object sender, XcapEventArgs e)
        {
            switch (e.Type)
            {
                case XcapEventTypes.RLS_DONE:
                    if (this.IsSubscriptionToRLSEnabled)
                    {
                        this.SubscribeToRLSPresence();
                    }
                    break;

                default:
                    break;
            }
        }
#endif // !WINRT
        private void contactService_onContactEvent(object sender, ContactEventArgs e)
        {
            if (!this.IsSubscriptionEnabled || this.IsSubscriptionToRLSEnabled)
            {
                return;
            }

            switch (e.Type)
            {
                case ContactEventTypes.CONTACT_ADDED:
                    {
                        MySubscriptionSession session = new MySubscriptionSession(mSipStack,  (e.GetExtra(ContactEventArgs.EXTRA_CONTACT) as Contact).UriString, 
                            MySubscriptionSession.EVENT_PACKAGE_TYPE.PRESENCE);
                        this.mSubPresence.Add(session);
                        session.Subscribe();
                        break;
                    }

                case ContactEventTypes.CONTACT_REMOVED:
                    {
                        MySubscriptionSession session = this.mSubPresence.FirstOrDefault(x => String.Equals(x.ToUri, (e.GetExtra(ContactEventArgs.EXTRA_CONTACT) as Contact).UriString));
                        if (session != null)
                        {
                            if (session.IsConnected)
                            {
                                session.UnSubscribe();
                            }
                            this.mSubPresence.Remove(session);
                        }
                        break;
                    }

                case ContactEventTypes.RESET:
                    {
                        this.mSubPresence.ForEach(x=>
                        {
                            if (x.IsConnected) x.UnSubscribe();
                        });

                        foreach (Contact contact in this.contactService.Contacts)
                        {
                            MySubscriptionSession session = new MySubscriptionSession(mSipStack, contact.UriString, MySubscriptionSession.EVENT_PACKAGE_TYPE.PRESENCE);
                            this.mSubPresence.Add(session);
                            session.Subscribe();
                        }
                        break;
                    }
            }
        }
    }
}
