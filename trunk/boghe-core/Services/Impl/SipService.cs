/*
* Copyright (C) 2010 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango.org>
*	
* This file is part of Boghe Project (http://code.google.com/p/boghe)
*
* imsdroid is free software: you can redistribute it and/or modify it under the terms of 
* the GNU General Public License as published by the Free Software Foundation, either version 3 
* of the License, or (at your option) any later version.
*	
* imsdroid is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
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
using log4net;
using BogheCore.Sip;
using BogheCore.Sip.Events;
using BogheCore.Model;
using System.Threading;

namespace BogheCore.Services.Impl
{
    public partial class SipService : ISipService
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(SipService));

        private readonly IConfigurationService configurationService;

        private readonly Preferences preferences;
        private MySipStack sipStack;
        private readonly MySipCallback sipCallback;
        private readonly MySipDebugCallback debugCallback;

        private MyRegistrationSession regSession;
        //private MySubscriptionSession subReg;
        //private MySubscriptionSession subWinfo;
        //private MySubscriptionSession subMwi;
        //private MySubscriptionSession subDebug;
        //private MyPublicationSession pubPres;

        public SipService(ServiceManager serviceManager)
        {
            this.preferences = new Preferences();
            this.sipCallback = new MySipCallback(this);
            this.debugCallback = new MySipDebugCallback();

            this.configurationService = serviceManager.ConfigurationService;
        }

        #region IService

        public bool Start()
        {
            return true;
        }

        public bool Stop()
        {
            if (this.sipStack != null && this.sipStack.State == MySipStack.STACK_STATE.STARTED)
            {
                this.sipStack.stop();
            }
            return true;
        }

        #endregion

        #region ISipService

        public MySipStack SipStack
        {
            get { return this.sipStack; }
        }

        public bool IsRegistered
        {
            get
            {
                if (this.regSession != null)
                {
                    return this.regSession.IsConnected;
                }
                return false;
            }
        }

        public bool StopStack()
        {
            if (this.sipStack != null)
            {
                return this.sipStack.stop();
            }
            return true;
        }

        public bool Register()
        {
            this.preferences.realm = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.REALM,
                    Configuration.DEFAULT_REALM);
            this.preferences.impi = this.configurationService.Get(
                    Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPI,
                    Configuration.DEFAULT_IMPI);
            this.preferences.impu = this.configurationService.Get(
                    Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU,
                    Configuration.DEFAULT_IMPU);

            LOG.Info(String.Format(
                    "realm='{0}', impu='{1}', impi='{2}'", this.preferences.realm, this.preferences.impu, this.preferences.impi));

            if (this.sipStack == null)
            {
                this.sipStack = new MySipStack(this.sipCallback, this.preferences.realm, this.preferences.impi, this.preferences.impu);
                this.sipStack.setDebugCallback(this.debugCallback);
                // FIXME
                //SipStack.setCodecs_2(this.configurationService.getInt(Configuration.ConfFolder.MEDIA, 
                //	    Configuration.ConfEntry.CODECS, Configuration.DEFAULT_MEDIA_CODECS));
            }
            else
            {
                if (!this.sipStack.setRealm(this.preferences.realm))
                {
                    LOG.Error(String.Format("Failed to set realm: {0}", this.preferences.realm));
                    return false;
                }
                if (!this.sipStack.setIMPI(this.preferences.impi))
                {
                    LOG.Error(String.Format("Failed to set IMPI: {0}", this.preferences.impi));
                    return false;
                }
                if (!this.sipStack.setIMPU(this.preferences.impu))
                {
                    LOG.Error(String.Format("Failed to set IMPU: {0}", this.preferences.impu));
                    return false;
                }
            }

            // Set the password
            this.sipStack.setPassword(this.configurationService.Get(
                    Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.PASSWORD,
                    null));

            // Set AMF
            this.sipStack.setAMF(this.configurationService.Get(
                    Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IMSAKA_AMF,
                    Configuration.DEFAULT_IMSAKA_AMF));

            // Set Operator Id
            this.sipStack.setOperatorId(this.configurationService.Get(
                    Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IMSAKA_OPID,
                    Configuration.DEFAULT_IMSAKA_OPID));

            // Check stack validity
            if (!this.sipStack.isValid())
            {
                LOG.Error("Trying to use invalid stack");
                return false;
            }

            // Set STUN information
            if (this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_STUN, Configuration.DEFAULT_NATT_USE_STUN))
            {
                LOG.Info("STUN=yes");
                if (this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_DISCO, Configuration.DEFAULT_NATT_STUN_DISCO))
                {
                    String domain = this.preferences.realm.Substring(this.preferences.realm.IndexOf(':') + 1);
                    ushort port = 0;
                    String server = this.sipStack.dnsSrv(String.Format("_stun._udp.{0}", domain), out port);
                    if (server == null)
                    {
                        LOG.Error("STUN discovery has failed");
                    }
                    LOG.Info(String.Format("STUN1 - server={0} and port={1}", server, port));
                    this.sipStack.setSTUNServer(server, port);// Needed event if null
                }
                else
                {
                    String server = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_SERVER, Configuration.DEFAULT_NATT_STUN_SERVER);
                    int port = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_PORT, Configuration.DEFAULT_NATT_STUN_PORT);
                    LOG.Info(String.Format("STUN2 - server={0} and port={1}", server, port));
                    this.sipStack.setSTUNServer(server, (ushort)port);
                }
            }
            else
            {
                LOG.Info("STUN=no");
                this.sipStack.setSTUNServer(null, 0);
            }

            // Set Proxy-CSCF
            this.preferences.pcscf_host = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_HOST,
                    null); // null will trigger DNS NAPTR+SRV
            this.preferences.pcscf_port = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_PORT,
                    Configuration.DEFAULT_PCSCF_PORT);
            this.preferences.transport = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.TRANSPORT,
                    Configuration.DEFAULT_TRANSPORT);
            this.preferences.ipversion = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.IP_VERSION,
                    Configuration.DEFAULT_IP_VERSION);

            LOG.Info(String.Format(
                    "pcscf-host='{0}', pcscf-port='{1}', transport='{2}', ipversion='{3}'",
                    this.preferences.pcscf_host, this.preferences.pcscf_port, this.preferences.transport, this.preferences.ipversion));

            if (!this.sipStack.setProxyCSCF(this.preferences.pcscf_host, (ushort)this.preferences.pcscf_port, this.preferences.transport,
                    this.preferences.ipversion))
            {
                LOG.Error("Failed to set Proxy-CSCF parameters");
                return false;
            }

            // Whether to use DNS NAPTR+SRV for the Proxy-CSCF discovery (even if the DNS requests are sent only when the stack starts,
            // should be done after setProxyCSCF())
            this.sipStack.setDnsDiscovery(this.configurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_DISCOVERY_DNS, Configuration.DEFAULT_PCSCF_DISCOVERY_DNS));

            // enable/disable 3GPP early IMS
            this.sipStack.setEarlyIMS(this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.EARLY_IMS,
                    Configuration.DEFAULT_EARLY_IMS));

            // SigComp (only update compartment Id if changed)
            if (this.configurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.SIGCOMP, Configuration.DEFAULT_SIGCOMP))
            {
                String compId = String.Format("urn:uuid:%s", Guid.NewGuid().ToString());
                this.sipStack.SigCompId = compId;
            }
            else
            {
                this.sipStack.SigCompId = null;
            }

            // Start the Stack
            if (!this.sipStack.start())
            {
                LOG.Error("Failed to start the SIP stack");
                return false;
            }

            // Preference values
            this.preferences.xcap_enabled = this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.ENABLED,
                    Configuration.DEFAULT_XCAP_ENABLED);
            this.preferences.presence_enabled = this.configurationService.Get(
                    Configuration.ConfFolder.RCS, Configuration.ConfEntry.PRESENCE,
                    Configuration.DEFAULT_RCS_PRESENCE);
            this.preferences.mwi = this.configurationService.Get(
                    Configuration.ConfFolder.RCS, Configuration.ConfEntry.MWI,
                    Configuration.DEFAULT_RCS_MWI);

            // Create registration session
            if (this.regSession == null)
            {
                this.regSession = new MyRegistrationSession(this.sipStack);
            }
            else
            {
                this.regSession.SigCompId = this.sipStack.SigCompId;
            }

            // Set/update From URI. For Registration ToUri should be equals to realm
            // (done by the stack)
            this.regSession.FromUri = this.preferences.impu;
            /* this.regSession.setToUri(this.preferences.impu); */

            if (!this.regSession.register())
            {
                LOG.Error("Failed to send REGISTER request");
                return false;
            }

            return true;
        }

        public bool UnRegister()
        {
            if (this.IsRegistered)
            {
                new Thread(new ThreadStart(delegate
                {
                    this.sipStack.stop();
                })).Start();
            }
            else
            {
                LOG.Debug("Already unregistered");
            }
            return true;
        }

        public event EventHandler<RegistrationEventArgs> onRegistrationEvent;

        #endregion
    }
}
