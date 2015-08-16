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
#if WINRT
using tmedia_srtp_type_t = doubango_rt.BackEnd.rt_tmedia_srtp_type_t;
#endif

namespace BogheCore.Services.Impl
{
    public partial class SipService : ISipService
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(SipService));

        private IConfigurationService configurationService;
#if !WINRT
        private IXcapService xcapService;
#endif
        private IContactService contactService;
        private readonly ServiceManager mManager;

        private readonly Preferences mPreferences;
        private MySipStack mSipStack;
        private MySipCallback mSipCallback;
        private MySipDebugCallback mDebugCallback;

        private MyRegistrationSession mRegSession;
#if !WINRT
        private byte[] subRLSContent;

        private MySubscriptionSession subRLS;

        private byte[] subRegContent;
        private MySubscriptionSession subReg;

        private byte[] subWinfoContent;
        private MySubscriptionSession subWinfo;

        private byte[] subMwiContent;
        private MySubscriptionSession subMwi;

        private MyPublicationSession pubPres;

        private System.Timers.Timer hyperAvailabilityTimer;
#endif

        private readonly List<MySubscriptionSession> mSubPresence;

        private String defaultIdentity;
        private int codecs;

        public SipService(ServiceManager serviceManager)
        {
            mPreferences = new Preferences();
            mSubPresence = new List<MySubscriptionSession>();
            mManager = serviceManager;
        }

        ~SipService()
        {
            LOG.Debug("~SipService");
        }

        #region IService

        public bool Start()
        {
            this.configurationService = mManager.ConfigurationService;
#if !WINRT
            this.xcapService = mManager.XcapService;
#endif
            this.contactService = mManager.ContactService;
#if !WINRT
            this.xcapService.onXcapEvent += this.xcapService_onXcapEvent;
#endif
            this.contactService.onContactEvent += this.contactService_onContactEvent;

            this.Codecs = this.configurationService.Get(Configuration.ConfFolder.MEDIA,
                        Configuration.ConfEntry.CODECS, Configuration.DEFAULT_MEDIA_CODECS);

            return true;
        }

#if WINDOWS_PHONE
        public bool Stop(bool bEnteringBackground)
#else
        public bool Stop()
#endif
        {
            bool ret = true;

#if WINDOWS_PHONE
            if (bEnteringBackground)
            {
                if (mSipStack != null && mSipStack.WrappedStack != null)
                {
                    mSipStack.WrappedStack.setDebugCallback(null);
                }
            }
#endif

            if (mSipStack != null && (mSipStack.State == MySipStack.STACK_STATE.STARTED || mSipStack.State == MySipStack.STACK_STATE.STARTING))
            {
                ret = mSipStack.WrappedStack.stop();
            }
#if !WINRT
            this.xcapService.onXcapEvent -= this.xcapService_onXcapEvent;
#endif
            this.contactService.onContactEvent -= this.contactService_onContactEvent;

#if WINDOWS_PHONE
            if (bEnteringBackground)
            {
                mSipStack = null;
                mSipCallback = null;
                mDebugCallback = null;
                mRegSession = null;
            }
#endif
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
#if !WINRT
        public event EventHandler onHyperAvailabilityTimedout;
#endif

        public String DefaultIdentity 
        {
            get { return this.defaultIdentity; }
            set { this.defaultIdentity = value; }
        }

        public MySipStack SipStack
        {
            get { return this.mSipStack; }
        }

        public bool IsRegistered
        {
            get
            {
                if (mRegSession != null)
                {
                    return mRegSession.IsConnected;
                }
                return false;
            }
        }

        public bool IsXcapEnabled 
        {
            get
            {
                return mPreferences.xcap_enabled;
            }
        }

        public bool IsPublicationEnabled 
        {
            get
            {
#if !WINRT
                return
                    mPreferences.presence_pub && this.IsRegistered && this.pubPres != null && this.pubPres.IsConnected;
#else
                return false;
#endif
            }
        }

        public bool IsSubscriptionEnabled 
        {
            get
            {
                return 
                    mPreferences.presence_sub && this.IsRegistered;
            }
        }
        public bool IsSubscriptionToRLSEnabled 
        {
            get
            {
                return
                    mPreferences.presence_rls && this.IsSubscriptionEnabled && this.IsXcapEnabled;
            }
        }

#if !WINRT
        public byte[] SubRLSContent { get { return this.subRLSContent; } }
        public byte[] SubRegContent { get { return this.subRegContent; } }
        public byte[] SubMwiContent { get { return this.subMwiContent; } }
        public byte[] SubWinfoContent { get { return this.subWinfoContent; } }
#endif

        public int Codecs 
        {
            get { return this.codecs; }
            set 
            {
                this.codecs = value;
#if WINRT
                doubango_rt.BackEnd.rtSipStack.setCodecs((doubango_rt.BackEnd.rt_tdav_codec_id_t)value);
#else
                org.doubango.tinyWRAP.SipStack.setCodecs((tdav_codec_id_t)value);
#endif
            }
        }

        public bool StopStack()
        {
            if (this.mSipStack != null)
            {
                return mSipStack.WrappedStack.stop();
            }
            return true;
        }

        public bool Register()
        {
            mPreferences.realm = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.REALM,
                    Configuration.DEFAULT_NETWORK_REALM);
            mPreferences.impi = this.configurationService.Get(
                    Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPI,
                    Configuration.DEFAULT_IDENTITY_IMPI);
            mPreferences.impu = this.configurationService.Get(
                    Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU,
                    Configuration.DEFAULT_IDENTITY_IMPU);
            mPreferences.local_ip = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.LOCAL_IP,
                    Configuration.DEFAULT_NETWORK_LOCAL_IP);
            mPreferences.local_port = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.LOCAL_PORT,
                    Configuration.DEFAULT_NETWORK_LOCAL_PORT);
            tmedia_srtp_type_t srtpType = (tmedia_srtp_type_t)Enum.Parse(typeof(tmedia_srtp_type_t), this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.SRTP_TYPE, Configuration.DEFAULT_SECURITY_SRTP_TYPE), true);
            mPreferences.dtls_srtp = ((srtpType & tmedia_srtp_type_t.tmedia_srtp_type_dtls) == tmedia_srtp_type_t.tmedia_srtp_type_dtls);

            LOG.Info(String.Format(
                    "realm='{0}', impu='{1}', impi='{2}', local_ip='{3}', local_port='{4}'", mPreferences.realm, mPreferences.impu, mPreferences.impi, mPreferences.local_ip, mPreferences.local_port));

            if (mSipCallback == null)
            {
                mSipCallback = new MySipCallback(this);
            }
            if (mDebugCallback == null)
            {
                mDebugCallback = new MySipDebugCallback();
            }

            if (mSipStack == null)
            {
                mSipStack = new MySipStack(this.mSipCallback, mPreferences.realm, mPreferences.impi, mPreferences.impu);
                mSipStack.SipService = this;
                mSipStack.WrappedStack.setDebugCallback(mDebugCallback);
            }
            else
            {
                if (!mSipStack.WrappedStack.setRealm(mPreferences.realm))
                {
                    LOG.Error(String.Format("Failed to set realm: {0}", mPreferences.realm));
                    return false;
                }
                if (!mSipStack.WrappedStack.setIMPI(mPreferences.impi))
                {
                    LOG.Error(String.Format("Failed to set IMPI: {0}", mPreferences.impi));
                    return false;
                }
                if (!mSipStack.WrappedStack.setIMPU(mPreferences.impu))
                {
                    LOG.Error(String.Format("Failed to set IMPU: {0}", mPreferences.impu));
                    return false;
                }
            }

            // Set local IP
            if (!String.IsNullOrEmpty(mPreferences.local_ip))
            {
                if (!mSipStack.WrappedStack.setLocalIP(mPreferences.local_ip))
                {
                    LOG.Error(String.Format("Failed to set Local IP: {0}", mPreferences.local_ip));
                    return false;
                }
            }

            // Set local Port
            if (mPreferences.local_port > 1024 && mPreferences.local_port < 0xFFFF)
            {
                if (!mSipStack.WrappedStack.setLocalPort((ushort)mPreferences.local_port))
                {
                    LOG.Error(String.Format("Failed to set Local Port: {0}", mPreferences.local_port));
                    return false;
                }
            }

            // Set the password
            mSipStack.WrappedStack.setPassword(this.configurationService.Get(
                    Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.PASSWORD,
                    BogheCore.Utils.StringUtils.nullptr));

            // Set AMF
            mSipStack.WrappedStack.setAMF(this.configurationService.Get(
                    Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IMSAKA_AMF,
                    Configuration.DEFAULT_IMSAKA_AMF));

            // Set Operator Id
            mSipStack.WrappedStack.setOperatorId(this.configurationService.Get(
                    Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IMSAKA_OPID,
                    Configuration.DEFAULT_IMSAKA_OPID));

            // Check stack validity
            if (!mSipStack.WrappedStack.isValid())
            {
                LOG.Error("Trying to use invalid stack");
                return false;
            }

            // Set STUN information
            if (this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_STUN_FOR_SIP, Configuration.DEFAULT_NATT_USE_STUN_FOR_SIP))
            {
                LOG.Debug("STUN=yes");
                mSipStack.WrappedStack.setSTUNEnabled(true);
                if (this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_DISCO, Configuration.DEFAULT_NATT_STUN_DISCO))
                {
                    String domain = mPreferences.realm.Substring(mPreferences.realm.IndexOf(':') + 1);
                    ushort port = 0;
                    String server;
#if WINRT
#if WINDOWS_PHONE
                    doubango_rt.BackEnd.rtDnsResult dnsResult = mSipStack.WrappedStack.dnsSrv(String.Format("_stun._udp.{0}", domain));
                    server = dnsResult.Address;
                    port = dnsResult.Port;
#else
                    IntPtr _port = System.Runtime.InteropServices.Marshal.AllocHGlobal(sizeof(ushort));
                    server = mSipStack.WrappedStack.dnsSrv(String.Format("_stun._udp.{0}", domain), _port);
                    port = (ushort)System.Runtime.InteropServices.Marshal.ReadInt16(_port);
                    System.Runtime.InteropServices.Marshal.FreeHGlobal(_port);
#endif
#else
                    server = mSipStack.WrappedStack.dnsSrv(String.Format("_stun._udp.{0}", domain), out port);
#endif
                    if (server == null)
                    {
                        LOG.Error("STUN discovery has failed");
                    }
                    LOG.Debug(String.Format("STUN1 - server={0} and port={1}", server, port));
                    mSipStack.WrappedStack.setSTUNServer(server, port);// Needed event if null
                }
                else
                {
                    String server = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_SERVER, Configuration.DEFAULT_NATT_STUN_SERVER);
                    int port = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_PORT, Configuration.DEFAULT_NATT_STUN_PORT);
                    LOG.Info(String.Format("STUN2 - server={0} and port={1}", server, port));
                    mSipStack.WrappedStack.setSTUNServer(server, (ushort)port);
                }
            }
            else
            {
                LOG.Debug("STUN=no");
                mSipStack.WrappedStack.setSTUNEnabled(false);
            }

            // Set Proxy-CSCF
            mPreferences.pcscf_host = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_HOST,
                    BogheCore.Utils.StringUtils.nullptr); // null will trigger DNS NAPTR+SRV
            mPreferences.pcscf_port = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_PORT,
                    Configuration.DEFAULT_NETWORK_PCSCF_PORT);
            mPreferences.transport = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.TRANSPORT,
                    Configuration.DEFAULT_NETWORK_TRANSPORT);
            mPreferences.ipversion = this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.IP_VERSION,
                    Configuration.DEFAULT_NETWORK_IP_VERSION);

            LOG.Debug(String.Format(
                    "pcscf-host='{0}', pcscf-port='{1}', transport='{2}', ipversion='{3}'",
                    mPreferences.pcscf_host, mPreferences.pcscf_port, mPreferences.transport, mPreferences.ipversion));

            if (!mSipStack.WrappedStack.setProxyCSCF(mPreferences.pcscf_host, (ushort)mPreferences.pcscf_port, mPreferences.transport,
                    mPreferences.ipversion))
            {
                LOG.Error("Failed to set Proxy-CSCF parameters");
                return false;
            }

            // Set TLS parameters (used for both DTLS-SRTP and TLS)
            String privKey = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.TLS_PRIV_KEY_FILE, Configuration.DEFAULT_TLS_PRIV_KEY_FILE);
            String pubKey = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.TLS_PUB_KEY_FILE, Configuration.DEFAULT_TLS_PUB_KEY_FILE);
            String caKey = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.TLS_CA_FILE, Configuration.DEFAULT_TLS_CA_FILE);

            LOG.Debug(String.Format("TLS pubKey={0} privKey={1} caKey={2} dtls-strp={3}", privKey, pubKey, caKey, mPreferences.dtls_srtp));
            if (!mSipStack.WrappedStack.setSSLCertificates(privKey, pubKey, caKey))
            {
                LOG.Error("Failed to set SSL certificates");
            }

            // Set IPSec => only if TLS is disabled
            if (this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IPSEC_SEC_AGREE, Configuration.DEFAULT_SECURITY_IPSEC_SEC_AGREE))
            {
                mPreferences.ipsec_secagree = true;
                String algo = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IPSEC_ALGO, Configuration.DEFAULT_SECURITY_IPSEC_ALGO);
                String ealgo = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IPSEC_EALGO, Configuration.DEFAULT_SECURITY_IPSEC_EALGO);
                String mode = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IPSEC_MODE, Configuration.DEFAULT_SECURITY_IPSEC_MODE);
                String proto = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IPSEC_PROTO, Configuration.DEFAULT_SECURITY_IPSEC_PROTO);

                LOG.Debug(String.Format("IPSec secagree enable with algo={0} ealgo={1} mode={2} proto={3}", algo, ealgo, mode, proto));
                if (!mSipStack.WrappedStack.setIPSecParameters(algo, ealgo, mode, proto) || !mSipStack.WrappedStack.setIPSecSecAgree(true))
                {
                    LOG.Error("Failed to set IPSec parameters");
                }
            }
            else if (mPreferences.ipsec_secagree)
            {
                mPreferences.ipsec_secagree = false;
                // Disable IPSec secagree
                mSipStack.WrappedStack.setIPSecSecAgree(false);
            }
           

            // Whether to use DNS NAPTR+SRV for the Proxy-CSCF discovery (even if the DNS requests are sent only when the stack starts,
            // should be done after setProxyCSCF())
            mSipStack.WrappedStack.setDnsDiscovery(this.configurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_DISCOVERY_DNS, Configuration.DEFAULT_NETWORK_PCSCF_DISCOVERY_DNS));

            // enable/disable 3GPP early IMS
            mSipStack.WrappedStack.setEarlyIMS(this.configurationService.Get(
                    Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.EARLY_IMS,
                    Configuration.DEFAULT_NETWORK_EARLY_IMS));

            // SigComp (only update compartment Id if changed)
            if (this.configurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.SIGCOMP, Configuration.DEFAULT_NETWORK_SIGCOMP))
            {
                String compId = String.Format("urn:uuid:{0}", Guid.NewGuid().ToString());
                this.mSipStack.SigCompId = compId;
                LOG.Debug(String.Format("SigComp enable with uuid={0}", compId));
            }
            else
            {
                this.mSipStack.SigCompId = null;
            }

            // Set Privacy
            this.mSipStack.Privacy = this.configurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.PRIVACY, Configuration.DEFAULT_IDENTITY_PRIVACY);

            // Start the Stack
            if (!mSipStack.WrappedStack.start())
            {
                LOG.Error("Failed to start the SIP stack");
                return false;
            }

            // Other Preference values
            mPreferences.xcap_enabled = this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.ENABLED,
                    Configuration.DEFAULT_XCAP_ENABLED);
            mPreferences.presence_sub = this.configurationService.Get(
                    Configuration.ConfFolder.RCS, Configuration.ConfEntry.PRESENCE_SUB,
                    Configuration.DEFAULT_RCS_PRESENCE_SUB);
            mPreferences.presence_rls = this.configurationService.Get(
                    Configuration.ConfFolder.RCS, Configuration.ConfEntry.RLS,
                    Configuration.DEFAULT_RCS_RLS);
            mPreferences.presence_pub = this.configurationService.Get(
                    Configuration.ConfFolder.RCS, Configuration.ConfEntry.PRESENCE_PUB,
                    Configuration.DEFAULT_RCS_PRESENCE_PUB);
            mPreferences.mwi = this.configurationService.Get(
                    Configuration.ConfFolder.RCS, Configuration.ConfEntry.MWI,
                    Configuration.DEFAULT_RCS_MWI);

            // Create registration session
            if (mRegSession == null)
            {
                mRegSession = new MyRegistrationSession(this.mSipStack);
            }
            else
            {
                mRegSession.SigCompId = this.mSipStack.SigCompId;
            }

            // Set/update From URI. For Registration ToUri should be equals to realm
            // (done by the stack)
            mRegSession.FromUri = mPreferences.impu;
            /* this.regSession.setToUri(mPreferences.impu); */

            // Update default identity to the current IMPU before registering
            this.DefaultIdentity = mPreferences.impu;

            if (!mRegSession.register())
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
                    mSipStack.WrappedStack.stop();
                })).Start();
            }
            else
            {
                LOG.Debug("Already unregistered");
            }
            return true;
        }

#if !WINRT
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
#endif

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

#if !WINRT
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
            if (mPreferences.mwi)
            {
                this.SubscribeToWinfo();
            }

            // Subscribe to watcherInfo
            if (mPreferences.xcap_enabled)
            {
                this.SubscribeToWinfo();
            }

            // Publish presence
            if (mPreferences.presence_pub)
            {
                this.PublishPresence();
            }
#endif
        }
    }
}
