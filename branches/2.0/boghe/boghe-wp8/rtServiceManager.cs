/*Copyright (C) 2013 Doubango Telecom <http://www.doubango.org>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using BogheCore.Services.Impl;
using log4net;
using BogheCore.Services;
using doubango_rt.BackEnd;
using BogheCore.Model;
using System.Windows;
using System.IO.IsolatedStorage;
using System.IO;

namespace BogheApp
{
    internal class rtServiceManager : ServiceManager
    {
        private static ILog LOG = LogManager.GetLogger(typeof(rtServiceManager));
        private const String STORAGE_FOLDER_NAME = "Boghe IMS Client";
#if WINDOWS_PHONE
        private const String TARGET_OS = "WindowsPhone";
#else
        private const String TARGET_OS = "WinRT";
#endif

        private static rtServiceManager singleton = null;
        private static Boolean sInitialized = false;
        private String applicationDataPath;
        private bool mStarted;

        private IScreenService screenService;
        private IConfigurationService configurationService;
        private IContactService contactService;
        private IHistoryService historyService;
        private ISoundService soundService = null;
        private IStateMonitorService stateMonitorService;

        /// <summary>
        /// Shared Service manager
        /// </summary>
        public static rtServiceManager Instance
        {
            get
            {
                if (rtServiceManager.singleton == null)
                {
                    rtServiceManager.singleton = new rtServiceManager();
                    BogheCore.Utils.UriUtils.ServiceManager = rtServiceManager.singleton;
                }
                return rtServiceManager.singleton;
            }
        }

        public rtServiceManager()
        {
            if (!sInitialized)
            {
                rtSipStack.initialize();
                sInitialized = true;
            }
        }

        public bool IsStarted
        {
            get { return mStarted; }
        }

        public void UpdateSipConfig()
        {
            if (this.SipService != null)
            {
                this.SipService.SipConfig.DisplayName = this.ConfigurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.DISPLAY_NAME, Configuration.DEFAULT_IDENTITY_DISPLAY_NAME);
                this.SipService.SipConfig.ImpuUri = this.ConfigurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU, Configuration.DEFAULT_IDENTITY_IMPU);
                this.SipService.SipConfig.ImpiString = this.ConfigurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPI, Configuration.DEFAULT_IDENTITY_IMPI);
                this.SipService.SipConfig.Password = this.ConfigurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.PASSWORD, Configuration.DEFAULT_IDENTITY_PASSWORD);

                this.SipService.SipConfig.EarlyIMS = true;/* rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.EARLY_IMS, Configuration.DEFAULT_NETWORK_EARLY_IMS)*/;
                this.SipService.SipConfig.RealmUri = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.REALM, Configuration.DEFAULT_NETWORK_REALM);
                this.SipService.SipConfig.ProxyHost = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_HOST, Configuration.DEFAULT_NETWORK_PCSCF_HOST);
                this.SipService.SipConfig.ProxyPort = (ushort)rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_PORT, Configuration.DEFAULT_NETWORK_PCSCF_PORT);
                this.SipService.SipConfig.Transport = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.TRANSPORT, Configuration.DEFAULT_NETWORK_TRANSPORT)
                    .Equals("UDP", StringComparison.InvariantCultureIgnoreCase) ? SipNetworkTransport.UDP : SipNetworkTransport.TCP;

                this.SipService.SipConfig.PushNotificationUri = (App.Current as BogheApp.App).PushChannelUri != null ? (App.Current as BogheApp.App).PushChannelUri.ToString() : "nullptr";
                this.SipService.SipConfig.UserAgent = String.Format("IM-client/OMA1.0 Boghe-{0}/v{1}", TARGET_OS, System.Reflection.Assembly.GetExecutingAssembly().GetName().Version);
            }
        }

        /// <summary>
        /// Starts the manager
        /// </summary>
        /// <returns></returns>
        public bool Start()
        {
            bool ret = true;

            LOG.Debug("Start Service Manager");

            mStarted = this.ConfigurationService.Start();

            mStarted &= this.ScreenService.Start();

            UpdateSipConfig();
            mStarted &= this.SipService.Start();
            
            mStarted &= this.ContactService.Start();
            mStarted &= this.HistoryService.Start();
#if !WINRT
            mStarted &= this.SoundService.Start();
#endif
            mStarted &= this.StateMonitorService.Start();

            // Register plugins
            // MediaSessionMgr.registerAudioPluginFromFile("audio_webrtc.dll");

            // Set user preferences (global defaults)
            // could be changed per session
            rtMediaSessionMgr.defaultsSetAgcEnabled(true);
            rtMediaSessionMgr.defaultsSetEchoSuppEnabled(true);
            rtMediaSessionMgr.defaultsSetEchoTail(500);
            rtMediaSessionMgr.defaultsSetEchoSkew(0);
            rtMediaSessionMgr.defaultsSetNoiseSuppEnabled(true);
            rtMediaSessionMgr.defaultsSetVadEnabled(false);
            rtMediaSessionMgr.defaultsSetJbMaxLateRate(1);
            rtMediaSessionMgr.defaultsSetRtcpEnabled(true);
            rtMediaSessionMgr.defaultsSetRtcpMuxEnabled(true);

            rtMediaSessionMgr.defaultsSetVolume(this.ConfigurationService.Get(Configuration.ConfFolder.GENERAL, Configuration.ConfEntry.AUDIO_VOLUME, Configuration.DEFAULT_GENERAL_AUDIO_VOLUME));
            if (this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS, Configuration.DEFAULT_QOS_SESSION_TIMERS))
            {
                rtMediaSessionMgr.defaultsSetInviteSessionTimers(
                    this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS_TIMEOUT, Configuration.DEFAULT_QOS_SESSION_TIMERS_TIMEOUT),
                    this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS_REFRESHER, Configuration.DEFAULT_QOS_SESSION_TIMERS_REFRESHER));
            }
            else
            {
                rtMediaSessionMgr.defaultsSetInviteSessionTimers(0, BogheCore.Utils.StringUtils.nullptr);
            }
            rtMediaSessionMgr.defaultsSetPrefVideoSize(
                (rt_tmedia_pref_video_size_t)Enum.Parse(typeof(rt_tmedia_pref_video_size_t), this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.PREF_VIDEO_SIZE, Configuration.DEFAULT_QOS_PREF_VIDEO_SIZE), true)
                );

            rtMediaSessionMgr.defaultsSetSRtpMode(
                (rt_tmedia_srtp_mode_t)Enum.Parse(typeof(rt_tmedia_srtp_mode_t), this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.SRTP_MODE, Configuration.DEFAULT_SECURITY_SRTP_MODE), true)
                );

            rtMediaSessionMgr.defaultsSetSRtpType(
                (rt_tmedia_srtp_type_t)Enum.Parse(typeof(rt_tmedia_srtp_type_t), this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.SRTP_TYPE, Configuration.DEFAULT_SECURITY_SRTP_TYPE), true)
                );

            rtMediaSessionMgr.defaultsSetProfile(
                (rt_tmedia_profile_t)Enum.Parse(typeof(rt_tmedia_profile_t), this.configurationService.Get(Configuration.ConfFolder.MEDIA, Configuration.ConfEntry.PROFILE, Configuration.DEFAULT_MEDIA_PROFILE), true)
                );

            rtMediaSessionMgr.defaultsSetRtpSymetricEnabled(
                this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_SYMETRIC_RTP, Configuration.DEFAULT_NATT_USE_SYMETRIC_RTP)
                );
            rtMediaSessionMgr.defaultsSetIceEnabled(
                this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_ICE, Configuration.DEFAULT_NATT_USE_ICE)
                );
            return ret;
        }

        /// <summary>
        /// Stops the manager
        /// </summary>
        /// <returns></returns>
#if WINDOWS_PHONE
        public bool Stop(bool bEnteringBackground)
#else
        public bool Stop()
#endif
        {
            bool ret = true;

            LOG.Debug("Stop Service Manager");

            /*if (org.doubango.WindowsPhone.BackgroundProcessController.Instance.SipService != null)
            {
                org.doubango.WindowsPhone.BackgroundProcessController.Instance.SipService.Stop();
            }*/

            // Log service should be last to stop

            // ret &= this.Win32ScreenService.Stop();
            ret &= this.SipService.Stop(
#if WINDOWS_PHONE
bEnteringBackground
#endif
);
            ret &= this.ContactService.Stop(
#if WINDOWS_PHONE
bEnteringBackground
#endif
);
            ret &= this.HistoryService.Stop(
#if WINDOWS_PHONE
bEnteringBackground
#endif
);
#if !WINRT
            ret &= this.SoundService.Stop();
#endif
            ret &= this.StateMonitorService.Stop(
#if WINDOWS_PHONE
bEnteringBackground
#endif
);

            ret &= this.ConfigurationService.Stop(
#if WINDOWS_PHONE
bEnteringBackground
#endif
);
            mStarted = false;

            return ret;
        }

        public override String ApplicationDataPath
        {
            get
            {
                if (this.applicationDataPath == null)
                {
                    IsolatedStorageFile isf = IsolatedStorageFile.GetUserStoreForApplication();
                    if (!isf.DirectoryExists(rtServiceManager.STORAGE_FOLDER_NAME))
                    {
                        isf.CreateDirectory(rtServiceManager.STORAGE_FOLDER_NAME);
                    }
                    // this.applicationDataPath = isf.GetType().GetProperty("RootDirectory", BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.GetProperty);
                    this.applicationDataPath = rtServiceManager.STORAGE_FOLDER_NAME;
                }
                return this.applicationDataPath;
            }
        }

        public override bool IsMultiInstanceEnabled
        {
            get
            {
                return false;
            }
        }

        public override String BuildStoragePath(String folder)
        {
            return Path.Combine(this.ApplicationDataPath, folder);
        }


#if !WINRT
        /// <summary>
        /// Screen Service
        /// </summary>
        public IWin32ScreenService Win32ScreenService
        {
            get
            {
                if (this.screenService == null)
                {
                    this.screenService = new ScreenService();
                }
                return this.screenService;
            }
        }
#endif

        #region ServiceManager

        public override IConfigurationService ConfigurationService
        {
            get
            {
                if (this.configurationService == null)
                {
#if REG_CONF
                    this.configurationService = new RegConfigurationService();
#elif WINDOWS_PHONE
                    this.configurationService = new IsfConfigurationService();
#else
                    this.configurationService = new XmlConfigurationService(this);
#endif
                }
                return this.configurationService;
            }
        }


        public override IScreenService ScreenService
        {
            get
            {
                if (this.screenService == null)
                {
                    this.screenService = new rtScreenService();
                }
                return this.screenService;
            }
        }

        public override doubango_rt.BackEnd.SipService SipService
        {
            get
            {
                return org.doubango.WindowsPhone.BackgroundProcessController.Instance.SipService;
            }
        }

        public override IContactService ContactService
        {
            get
            {
                if (this.contactService == null)
                {
                    this.contactService = new ContactService(this);
                }
                return this.contactService;
            }
        }

        public override IHistoryService HistoryService
        {
            get
            {
                if (this.historyService == null)
                {
                    this.historyService = new HistoryService(this);
                }
                return this.historyService;
            }
        }

        public override ISoundService SoundService
        {
            get
            {
                if (this.soundService == null)
                {
#if !WINRT
                    this.soundService = new SoundService(this);
#endif
                }
                return this.soundService;
            }
        }

        public override IStateMonitorService StateMonitorService
        {
            get
            {
                if (this.stateMonitorService == null)
                {
                    this.stateMonitorService = new StateMonitorService();
                }
                return this.stateMonitorService;
            }
        }

        public override System.Windows.Threading.Dispatcher Dispatcher
        {
            get
            {
                return Deployment.Current.Dispatcher;
            }
        }

        #endregion
    }
}
