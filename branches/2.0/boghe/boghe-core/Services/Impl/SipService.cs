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
using log4net;
using BogheCore.Sip;
using BogheCore.Sip.Events;
using BogheCore.Model;
using System.Threading;
using BogheCore.Events;
using org.doubango.tinyWRAP;

namespace BogheCore.Services.Impl
{
    public partial class SipService : ISipService
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(SipService));

        private IConfigurationService configurationService;
        private IXcapService xcapService;
        private IContactService contactService;
        private readonly ServiceManager manager;

        private readonly Preferences preferences;
        private MySipStack sipStack;
        private readonly MySipCallback sipCallback;
        private readonly MySipDebugCallback debugCallback;

        private MyRegistrationSession regSession;

        private byte[] subRLSContent;
        private MySubscriptionSession subRLS;
        private readonly List<MySubscriptionSession> subPresence;

        private byte[] subRegContent;
        private MySubscriptionSession subReg;

        private byte[] subWinfoContent;
        private MySubscriptionSession subWinfo;

        private byte[] subMwiContent;
        private MySubscriptionSession subMwi;
        
        private MyPublicationSession pubPres;

        private String defaultIdentity;
        private int codecs;

        private System.Timers.Timer hyperAvailabilityTimer;

        public SipService(ServiceManager serviceManager)
        {
            this.preferences = new Preferences();
            this.sipCallback = new MySipCallback(this);
            this.debugCallback = new MySipDebugCallback();
            this.subPresence = new List<MySubscriptionSession>();

            this.manager = serviceManager;
        }

        #region IService

        public bool Start()
        {
            this.configurationService = this.manager.ConfigurationService;
            this.xcapService = this.manager.XcapService;
            this.contactService = this.manager.ContactService;

            this.xcapService.onXcapEvent += this.xcapService_onXcapEvent;
            this.contactService.onContactEvent += this.contactService_onContactEvent;

            this.Codecs = this.configurationService.Get(Configuration.ConfFolder.MEDIA,
                        Configuration.ConfEntry.CODECS, Configuration.DEFAULT_MEDIA_CODECS);

            return true;
        }

        public bool Stop()
        {
            bool ret = true;

            if (this.sipStack != null && this.sipStack.State == MySipStack.STACK_STATE.STARTED)
            {
                ret = this.sipStack.stop();
            }

            this.xcapService.onXcapEvent -= this.xcapService_onXcapEvent;
            this.contactService.onContactEvent -= this.contactService_onContactEvent;

            return ret;
        }

        #endregion

        #region ISipService

        public event EventHandler<RegistrationEventArgs> onRegistrationEvent;
        public event EventHandler<StackEventArgs> onStackEvent;
        public event EventHandler<InviteEventArgs> onInviteEvent;
        public event EventHandler<MessagingEventArgs> onMessagingEvent;
        public event EventHandler<InfoEventArgs> onInfoEvent;
        public event EventHandler<SubscriptionEventArgs> onSubscriptionEvent;
        public event EventHandler onHyperAvailabilityTimedout;

        public String DefaultIdentity 
        {
            get { return this.defaultIdentity; }
            set { this.defaultIdentity = value; }
        }

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

        public bool IsXcapEnabled 
        {
            get
            {
                return this.preferences.xcap_enabled;
            }
        }

        public bool IsPublicationEnabled 
        {
            get
            {
                return
                    this.preferences.presence_pub && this.IsRegistered && this.pubPres != null && this.pubPres.IsConnected;
            }
        }

        public bool IsSubscriptionEnabled 
        {
            get
            {
                return 
                    this.preferences.presence_sub && this.IsRegistered;
            }
        }
        public bool IsSubscriptionToRLSEnabled 
        {
            get
            {
                return
                    this.preferences.presence_rls && this.IsSubscriptionEnabled && this.IsXcapEnabled;
            }
        }

        public byte[] SubRLSContent { get { return this.subRLSContent; } }
        public byte[] SubRegContent { get { return this.subRegContent; } }
        public byte[] SubMwiContent { get { return this.subMwiContent; } }
        public byte[] SubWinfoContent { get { return this.subWinfoContent; } }

        public int Codecs 
        {
            get { return this.codecs; }
            set 
            {
                this.codecs = value;
                org.doubango.tinyWRAP.SipStack.setCodecs_2(value);
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
                    Configuration.DEFAULT_NETWORK_REALM);
            this.preferences.impi = this.configurationService.Get(
                    Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPI,
                    Configuration.DEFAULT_IDENTITY_IMPI);
            this.preferences.impu = this.configurationService.Get(
                    Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU,
                    Configuration.DEFAULT_IDENTITY_IMPU);
            this.preferences.local_ip = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.LOCAL_IP,
                    Configuration.DEFAULT_NETWORK_LOCAL_IP);
            this.preferences.local_port = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.LOCAL_PORT,
                    Configuration.DEFAULT_NETWORK_LOCAL_PORT);
            tmedia_srtp_type_t srtpType = (tmedia_srtp_type_t)Enum.Parse(typeof(tmedia_srtp_type_t), this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.SRTP_TYPE, Configuration.DEFAULT_SECURITY_SRTP_TYPE), true);
            this.preferences.dtls_srtp = ((srtpType & tmedia_srtp_type_t.tmedia_srtp_type_dtls) == tmedia_srtp_type_t.tmedia_srtp_type_dtls);

            LOG.Info(String.Format(
                    "realm='{0}', impu='{1}', impi='{2}', local_ip='{3}', local_port='{4}'", this.preferences.realm, this.preferences.impu, this.preferences.impi, this.preferences.local_ip, this.preferences.local_port));

            if (this.sipStack == null)
            {
                this.sipStack = new MySipStack(this.sipCallback, this.preferences.realm, this.preferences.impi, this.preferences.impu);
                this.sipStack.SipService = this;
                this.sipStack.setDebugCallback(this.debugCallback);
                // Set UserAgent
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

            // Set local IP
            if (!String.IsNullOrEmpty(this.preferences.local_ip))
            {
                if (!this.sipStack.setLocalIP(this.preferences.local_ip))
                {
                    LOG.Error(String.Format("Failed to set Local IP: {0}", this.preferences.local_ip));
                    return false;
                }
            }

            // Set local Port
            if (this.preferences.local_port > 1024 && this.preferences.local_port < 0xFFFF)
            {
                if (!this.sipStack.setLocalPort((ushort)this.preferences.local_port))
                {
                    LOG.Error(String.Format("Failed to set Local Port: {0}", this.preferences.local_port));
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
                LOG.Debug("STUN=yes");
                if (this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_DISCO, Configuration.DEFAULT_NATT_STUN_DISCO))
                {
                    String domain = this.preferences.realm.Substring(this.preferences.realm.IndexOf(':') + 1);
                    ushort port = 0;
                    String server = this.sipStack.dnsSrv(String.Format("_stun._udp.{0}", domain), out port);
                    if (server == null)
                    {
                        LOG.Error("STUN discovery has failed");
                    }
                    LOG.Debug(String.Format("STUN1 - server={0} and port={1}", server, port));
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
                LOG.Debug("STUN=no");
                this.sipStack.setSTUNServer(null, 0);
            }

            // Set Proxy-CSCF
            this.preferences.pcscf_host = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_HOST,
                    null); // null will trigger DNS NAPTR+SRV
            this.preferences.pcscf_port = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_PORT,
                    Configuration.DEFAULT_NETWORK_PCSCF_PORT);
            this.preferences.transport = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.TRANSPORT,
                    Configuration.DEFAULT_NETWORK_TRANSPORT);
            this.preferences.ipversion = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.IP_VERSION,
                    Configuration.DEFAULT_NETWORK_IP_VERSION);

            LOG.Debug(String.Format(
                    "pcscf-host='{0}', pcscf-port='{1}', transport='{2}', ipversion='{3}'",
                    this.preferences.pcscf_host, this.preferences.pcscf_port, this.preferences.transport, this.preferences.ipversion));

            if (!this.sipStack.setProxyCSCF(this.preferences.pcscf_host, (ushort)this.preferences.pcscf_port, this.preferences.transport,
                    this.preferences.ipversion))
            {
                LOG.Error("Failed to set Proxy-CSCF parameters");
                return false;
            }

            // Set TLS parameters (used for both DTLS-SRTP and TLS)
            String privKey = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.TLS_PRIV_KEY_FILE, Configuration.DEFAULT_TLS_PRIV_KEY_FILE);
            String pubKey = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.TLS_PUB_KEY_FILE, Configuration.DEFAULT_TLS_PUB_KEY_FILE);
            String caKey = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.TLS_CA_FILE, Configuration.DEFAULT_TLS_CA_FILE);

            LOG.Debug(String.Format("TLS pubKey={0} privKey={1} caKey={2} dtls-strp={3}", privKey, pubKey, caKey, this.preferences.dtls_srtp));
            if (!this.sipStack.setSSLCertificates(privKey, pubKey, caKey))
            {
                LOG.Error("Failed to set SSL certificates");
            }

            // Set IPSec => only if TLS is disabled
            if (this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IPSEC_SEC_AGREE, Configuration.DEFAULT_SECURITY_IPSEC_SEC_AGREE))
            {
                this.preferences.ipsec_secagree = true;
                String algo = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IPSEC_ALGO, Configuration.DEFAULT_SECURITY_IPSEC_ALGO);
                String ealgo = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IPSEC_EALGO, Configuration.DEFAULT_SECURITY_IPSEC_EALGO);
                String mode = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IPSEC_MODE, Configuration.DEFAULT_SECURITY_IPSEC_MODE);
                String proto = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IPSEC_PROTO, Configuration.DEFAULT_SECURITY_IPSEC_PROTO);

                LOG.Debug(String.Format("IPSec secagree enable with algo={0} ealgo={1} mode={2} proto={3}", algo, ealgo, mode, proto));
                if (!this.sipStack.setIPSecParameters(algo, ealgo, mode, mode) || !this.sipStack.setIPSecSecAgree(true))
                {
                    LOG.Error("Failed to set IPSec parameters");
                }
            }
            else if (this.preferences.ipsec_secagree)
            {
                this.preferences.ipsec_secagree = false;
                // Disable IPSec secagree
                this.sipStack.setIPSecSecAgree(false);
            }
           

            // Whether to use DNS NAPTR+SRV for the Proxy-CSCF discovery (even if the DNS requests are sent only when the stack starts,
            // should be done after setProxyCSCF())
            this.sipStack.setDnsDiscovery(this.configurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_DISCOVERY_DNS, Configuration.DEFAULT_NETWORK_PCSCF_DISCOVERY_DNS));

            // enable/disable 3GPP early IMS
            this.sipStack.setEarlyIMS(this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.EARLY_IMS,
                    Configuration.DEFAULT_NETWORK_EARLY_IMS));

            // SigComp (only update compartment Id if changed)
            if (this.configurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.SIGCOMP, Configuration.DEFAULT_NETWORK_SIGCOMP))
            {
                String compId = String.Format("urn:uuid:{0}", Guid.NewGuid().ToString());
                this.sipStack.SigCompId = compId;
                LOG.Debug(String.Format("SigComp enable with uuid={0}", compId));
            }
            else
            {
                this.sipStack.SigCompId = null;
            }

            // Set Privacy
            this.sipStack.Privacy = this.configurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.PRIVACY, Configuration.DEFAULT_IDENTITY_PRIVACY);

            // Start the Stack
            if (!this.sipStack.start())
            {
                LOG.Error("Failed to start the SIP stack");
                return false;
            }

            // Other Preference values
            this.preferences.xcap_enabled = this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.ENABLED,
                    Configuration.DEFAULT_XCAP_ENABLED);
            this.preferences.presence_sub = this.configurationService.Get(
                    Configuration.ConfFolder.RCS, Configuration.ConfEntry.PRESENCE_SUB,
                    Configuration.DEFAULT_RCS_PRESENCE_SUB);
            this.preferences.presence_rls = this.configurationService.Get(
                    Configuration.ConfFolder.RCS, Configuration.ConfEntry.RLS,
                    Configuration.DEFAULT_RCS_RLS);
            this.preferences.presence_pub = this.configurationService.Get(
                    Configuration.ConfFolder.RCS, Configuration.ConfEntry.PRESENCE_PUB,
                    Configuration.DEFAULT_RCS_PRESENCE_PUB);
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

            // Update default identity to the current IMPU before registering
            this.DefaultIdentity = this.preferences.impu;

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

        public bool PresencePublish()
        {
            if (this.IsPublicationEnabled)
            {
                return this.PublishPresence();
            }
            return false;
        }

        public bool PresencePublish(PresenceStatus status)
        {
            if (this.IsPublicationEnabled)
            {
                return this.PublishPresence(status);
            }
            return false;
        }

        public bool RaiseEvent(EventArgs eargs)
        {
            if (eargs is MessagingEventArgs)
            {
                EventHandlerTrigger.TriggerEvent<MessagingEventArgs>(this.onMessagingEvent, this, (eargs as MessagingEventArgs));
                return true;
            }
            LOG.Error("Cannot raise event with type = " + eargs);
            return false;
        }

        #endregion


        private void DoPostRegistrationOp()
        {
            LOG.Debug("Post Registration Operations");

            // Guard
            if (!this.IsRegistered)
            {
                return;
            }

            // Subscribe to 'reg' event package
            this.SubscribeToRegInfo();
            // Subscribe to MWI
            this.SubscribeToMWI();

            // Subscribe to 'presence' event package
            if (this.IsSubscriptionToRLSEnabled)
            {
                // Subscription to RLS presence will be done when 'RLS_DONE' event is raised
                // ...
            }
            else if(this.IsSubscriptionEnabled)
            {
                // Subscription to each contact will be done when contact service alert us
            }

            // Subscribe to message waiting indication
            if (this.preferences.mwi)
            {
                this.SubscribeToWinfo();
            }

            // Subscribe to watcherInfo
            if (this.preferences.xcap_enabled)
            {
                this.SubscribeToWinfo();
            }

            // Publish presence
            if (this.preferences.presence_pub)
            {
                this.PublishPresence();
            }
        }
    }
}
