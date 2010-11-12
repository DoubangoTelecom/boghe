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
using BogheCore.Xcap.Events;
using BogheCore.Sip;

namespace BogheCore.Services.Impl
{
    partial class SipService
    {
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
                this.subWinfo = new MySubscriptionSession(this.sipStack, defaultIdentity, MySubscriptionSession.EVENT_PACKAGE_TYPE.WINFO);
            }
            else
            {
                this.subWinfo.ToUri = this.DefaultIdentity;
                this.subWinfo.FromUri = this.DefaultIdentity;
                this.subWinfo.SigCompId = this.SipStack.SigCompId;
            }

            return this.subWinfo.Subscribe();
        }

        private bool SubscribeToPresence()
        {
            bool rlsEnabled = true;

            if (rlsEnabled && !String.IsNullOrEmpty(this.xcapService.RLSPresUri))
            {
                if (this.subRLS == null)
                {
                    this.subRLS = new MySubscriptionSession(this.sipStack, this.xcapService.RLSPresUri, MySubscriptionSession.EVENT_PACKAGE_TYPE.PRESENCE_LIST);
                }
                else
                {
                    this.subRLS.ToUri = this.xcapService.RLSPresUri;
                    this.subRLS.FromUri = this.DefaultIdentity;
                    this.subRLS.SigCompId = this.SipStack.SigCompId;
                }
                return this.subRLS.Subscribe();
            }
            
            LOG.Error("Not implemented!");
            return false;
        }

        private bool PublishPresence()
        {
            LOG.Debug("Publish presence");

            return false;
        }

        private void xcapService_onXcapEvent(object sender, XcapEventArgs e)
        {
            switch (e.Type)
            {
                case XcapEventTypes.RLS_DONE:
                    if (this.preferences.presence_sub)
                    {
                        this.SubscribeToPresence();
                    }
                    break;

                default:
                    break;
            }
        }
    }
}
