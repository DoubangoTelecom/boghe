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
using System.Diagnostics;
using System.Resources;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Navigation;
using Microsoft.Phone.Controls;
using Microsoft.Phone.Shell;
using BogheApp.Resources;
using doubango_rt.BackEnd;
using log4net;
using org.doubango.WindowsPhone;
using Microsoft.Phone.Notification;
using Microsoft.Phone.Networking.Voip;
using Microsoft.Phone.Scheduler;

namespace BogheApp
{
    public partial class App : Application
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(App));

        /// <summary>
        /// Provides easy access to the root frame of the Phone Application.
        /// </summary>
        /// <returns>The root frame of the Phone Application.</returns>
        public PhoneApplicationFrame RootFrame { get; private set; }

        /// <summary>
        /// The push channel URI for this application
        /// </summary>
        public Uri PushChannelUri { get; private set; }

        /// <summary>
        /// An event that is raised when the push channel URI changes
        /// </summary>
        public event EventHandler<Uri> PushChannelUriChanged;

        /// <summary>
        /// Constructor for the Application object.
        /// </summary>
        public App()
        {
            // Global handler for uncaught exceptions. 
            UnhandledException += Application_UnhandledException;

            // Standard Silverlight initialization
            InitializeComponent();

            // Phone-specific initialization
            InitializePhoneApplication();

            // Initialize the push channel
            InitPushChannel();

            // Initialize the task to listen to incoming call notifications on the push channel
            InitHttpNotificationTask();

            // Initalize the task to perform periodic maintenance
            InitKeepAliveTask();

            // Show graphics profiling information while debugging.
            if (System.Diagnostics.Debugger.IsAttached)
            {
                // Display the current frame rate counters (Screenshots will not be accepted on the Windows Market)
                //Application.Current.Host.Settings.EnableFrameRateCounter = true;

                // Show the areas of the app that are being redrawn in each frame.
                //Application.Current.Host.Settings.EnableRedrawRegions = true;

                // Enable non-production analysis visualization mode, 
                // which shows areas of a page that are handed off to GPU with a colored overlay.
                //Application.Current.Host.Settings.EnableCacheVisualization = true;

                // Disable the application idle detection by setting the UserIdleDetectionMode property of the
                // application's PhoneApplicationService object to Disabled.
                // Caution:- Use this under debug mode only. Application that disables user idle detection will continue to run
                // and consume battery power when the user is not using the phone.
                PhoneApplicationService.Current.UserIdleDetectionMode = IdleDetectionMode.Disabled;
            }
        }

        ~App()
        {
            
        }

        // Code to execute when the application is launching (eg, from Start)
        // This code will not execute when the application is reactivated
        private void Application_Launching(object sender, LaunchingEventArgs e)
        {
            LOG.Info("Launching");

            bool wasNotReady = !BackgroundProcessController.Instance.IsReady;

            // Call this method below at the beginning of this handler,
            // to let the background process that the UI is entering the foreground.
            BackgroundProcessController.Instance.ConnectUi();

            // Do not Register: let main page the responsability to perform such task
            // rtServiceManager.Instance.Start();
        }

        // Code to execute when the application is activated (brought to foreground)
        // This code will not execute when the application is first launched
        private void Application_Activated(object sender, ActivatedEventArgs e)
        {
            LOG.Info("Activated");

            // Call this method below at the beginning of this handler,
            // to let the background process that the UI is entering the foreground.
            BackgroundProcessController.Instance.ConnectUi();

            // Initialize the service manager
            // IMPORTANT: SipService is stopped every time the app goes background -> do not test "IsStarted". Restarting the SipService also requires loading configurations
            /* if (!rtServiceManager.Instance.IsStarted) */
            {
                rtServiceManager.Instance.Start();
            }
        }

        // Code to execute when the application is deactivated (sent to background)
        // This code will not execute when the application is closing
        private void Application_Deactivated(object sender, DeactivatedEventArgs e)
        {
            LOG.Info("Deactivated");

            // Do something, if required
            // rtServiceManager.Instance.Stop(true);

            // Call this method below at the end of this handler,
            // to let the background process that the UI is leaving the foreground.
            BackgroundProcessController.Instance.DisconnectUi();
        }

        private void Application_RunningInBackground(object sender, RunningInBackgroundEventArgs e)
        {
            LOG.Info("RunningInBackground");

            // Do something, if required


        }

        // Code to execute when the application is closing (eg, user hit Back)
        // This code will not execute when the application is deactivated
        private void Application_Closing(object sender, ClosingEventArgs e)
        {
            LOG.Info("Closing");

            rtServiceManager.Instance.Stop(false);

            // Call this method below at the end of this handler,
            // to let the background process that the UI is leaving the foreground.
            BackgroundProcessController.Instance.DisconnectUi();
        }

        // Code to execute if a navigation fails
        private void RootFrame_NavigationFailed(object sender, NavigationFailedEventArgs e)
        {
            if (System.Diagnostics.Debugger.IsAttached)
            {
                // A navigation has failed; break into the debugger
                System.Diagnostics.Debugger.Break();
            }
        }

        // Code to execute on Unhandled Exceptions
        private void Application_UnhandledException(object sender, ApplicationUnhandledExceptionEventArgs e)
        {
            if (System.Diagnostics.Debugger.IsAttached)
            {
                // An unhandled exception has occurred; break into the debugger
                System.Diagnostics.Debugger.Break();
            }
        }

        #region Phone application initialization

        // Avoid double-initialization
        private bool phoneApplicationInitialized = false;

        // Do not add any additional code to this method
        private void InitializePhoneApplication()
        {
            if (phoneApplicationInitialized)
                return;

            // Create the frame but don't set it as RootVisual yet; this allows the splash
            // screen to remain active until the application is ready to render.
            RootFrame = new PhoneApplicationFrame();
            RootFrame.Navigated += CompleteInitializePhoneApplication;

            // Handle navigation failures
            RootFrame.NavigationFailed += RootFrame_NavigationFailed;

            // Ensure we don't initialize again
            phoneApplicationInitialized = true;
        }

        // Do not add any additional code to this method
        private void CompleteInitializePhoneApplication(object sender, NavigationEventArgs e)
        {
            // Set the root visual to allow the application to render
            if (RootVisual != RootFrame)
                RootVisual = RootFrame;

            // Remove this handler since it is no longer needed
            RootFrame.Navigated -= CompleteInitializePhoneApplication;
        }

        // The name of our push channel.
        private const string pushChannelName = "doubango_rt.PushChannel";

        private void InitPushChannel()
        {
            // Try to find the push channel.
            HttpNotificationChannel httpChannel = HttpNotificationChannel.Find(App.pushChannelName);

            // If the channel was not found, then create a new connection to the push service.
            if (httpChannel == null)
            {
                // We need to create a new channel.
                httpChannel = new HttpNotificationChannel(App.pushChannelName);
                httpChannel.Open();
            }
            else
            {
                // This is an existing channel.
                this.PushChannelUri = httpChannel.ChannelUri;

                Debug.WriteLine("[App] Existing Push channel URI is {0}", this.PushChannelUri);

                //  Let listeners know that we have a push channel URI
                if (this.PushChannelUriChanged != null)
                {
                    this.PushChannelUriChanged(this, this.PushChannelUri);
                }

                // TODO: Let your cloud server know that the push channel to this device is this.PushChannelUri.
            }

            // Register for all the events.
            httpChannel.ChannelUriUpdated += new EventHandler<NotificationChannelUriEventArgs>(PushChannel_ChannelUriUpdated);
            httpChannel.ErrorOccurred += new EventHandler<NotificationChannelErrorEventArgs>(PushChannel_ErrorOccurred);
            httpChannel.HttpNotificationReceived += new EventHandler<HttpNotificationEventArgs>(PushChannel_HttpNotificationReceived);
        }

        private void PushChannel_ChannelUriUpdated(object sender, NotificationChannelUriEventArgs e)
        {
            Debug.WriteLine("[App] New Push channel URI is {0}", e.ChannelUri);

            // Store the push channel URI
            this.PushChannelUri = e.ChannelUri;

            //  Let listeners know that we have a push channel URI
            if (this.PushChannelUriChanged != null)
            {
                this.PushChannelUriChanged(this, this.PushChannelUri);
            }

            // TODO: Let your cloud server know that the push channel to this device is e.ChannelUri.
        }

        private void PushChannel_ErrorOccurred(object sender, NotificationChannelErrorEventArgs e)
        {
            // TODO: Let your cloud server know that the push channel to this device is no longer valid.
        }

        private void PushChannel_HttpNotificationReceived(object sender, HttpNotificationEventArgs e)
        {
            // TODO: Process raw push notifications here, if required.
        }

        // The name of the incoming call task.
        private const string incomingCallTaskName = "doubango_rt.IncomingCallTask";

        public void InitHttpNotificationTask()
        {
            // Obtain a reference to the existing task, if any.
            VoipHttpIncomingCallTask incomingCallTask = ScheduledActionService.Find(App.incomingCallTaskName) as VoipHttpIncomingCallTask;
            if (incomingCallTask != null)
            {
                if (incomingCallTask.IsScheduled == false)
                {
                    // The incoming call task has been unscheduled due to OOM or throwing an unhandled exception twice in a row
                    ScheduledActionService.Remove(App.incomingCallTaskName);
                }
                else
                {
                    // The incoming call task has been scheduled and is still scheduled so there is nothing more to do
                    return;
                }
            }

            // Create a new incoming call task.
            incomingCallTask = new VoipHttpIncomingCallTask(App.incomingCallTaskName, App.pushChannelName);
            incomingCallTask.Description = "Incoming call task";
            ScheduledActionService.Add(incomingCallTask);
        }

        // The name of the keep-alive task.
        private const string keepAliveTaskName = "doubango_rt.KeepAliveTask";

        public void InitKeepAliveTask()
        {
            // Obtain a reference to the existing task, if any.
            VoipKeepAliveTask keepAliveTask = ScheduledActionService.Find(App.keepAliveTaskName) as VoipKeepAliveTask;
            if (keepAliveTask != null)
            {
                if (keepAliveTask.IsScheduled == false)
                {
                    // The keep-alive task has been unscheduled due to OOM or throwing an unhandled exception twice in a row
                    ScheduledActionService.Remove(App.keepAliveTaskName);
                }
                else
                {
                    // The keep-alive task has been scheduled and is still scheduled so there is nothing more to do
                    return;
                }
            }

            keepAliveTask = new VoipKeepAliveTask(App.keepAliveTaskName);
            keepAliveTask.Interval = new TimeSpan(12, 0, 0); // Every 12 hours
            keepAliveTask.Description = "keep-alive task";
            ScheduledActionService.Add(keepAliveTask);
        }

        #endregion
    }
}