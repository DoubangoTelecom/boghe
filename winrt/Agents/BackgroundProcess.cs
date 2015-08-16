/* 
    Copyright (c) 2012 Microsoft Corporation.  All rights reserved.
    Use of this sample source code is subject to the terms of the Microsoft license 
    agreement under which you licensed this sample source code and is provided AS-IS.
    If you did not accept the terms of the license agreement, you are not authorized 
    to use this sample source code.  For the terms of the license, please see the 
    license agreement between you and Microsoft.
*/
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
#if WINDOWS_PHONE
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using doubango_rt.BackEnd;
using doubango_rt.BackEnd.OutOfProcess;
using Microsoft.Phone.Networking.Voip;
using System.Runtime.InteropServices.WindowsRuntime;

namespace org.doubango.WindowsPhone
{
    /// <summary>
    /// A class used by the VoIP UI to connect to and control the VoIP background agent host process.
    /// </summary>
    /// <remarks>This class is a singleton.</remarks>
    public sealed class BackgroundProcessController
    {
        #region Properties

        /// <summary>
        /// Get the single instance of this class
        /// </summary>
        public static BackgroundProcessController Instance
        {
            get
            {
                if (BackgroundProcessController.singleton == null)
                {
                    BackgroundProcessController.singleton = new BackgroundProcessController();
                }

                return BackgroundProcessController.singleton;
            }
        }

        public bool IsReady
        {
            get { return this.server != null; }
        }

        public int BackgroundProcessId
        {
            get { return this.backgroundProcessId; }
        }

        #endregion

        #region Doubango.VoIP

        public SipService SipService
        {
            get
            {
                if (this.server != null)
                {
                    return this.server.SipService;
                }
                return null;
            }
        }

        public rtSipStack rtSipStackNew(rtISipCallback callback, String realmUri, String impiString, String impuUri)
        {
            return this.server.rtSipStackNew(callback, realmUri, impiString, impuUri);
        }

        public rtSipCallback rtSipCallbackNew(rtISipCallback callback)
        {
            return this.server.rtSipCallbackNew(callback);
        }

        public rtDDebugCallback rtDDebugCallbackNew(rtIDDebugCallback callback)
        {
            return this.server.rtDDebugCallbackNew(callback);
        }

        public rtT140Callback rtT140CallbackNew(rtIT140Callback callback)
        {
            return this.server.rtT140CallbackNew(callback);
        }

        public rtMsrpCallback rtMsrpCallbackNew(rtIMsrpCallback callback)
        {
            return this.server.rtMsrpCallbackNew(callback);
        }

        public rtRegistrationSession rtRegistrationSessionNew(rtSipStack Stack)
        {
            return this.server.rtRegistrationSessionNew(Stack);
        }

        public rtMessagingSession rtMessagingSessionNew(rtSipStack stack)
        {
            return this.server.rtMessagingSessionNew(stack);
        }

        public rtInfoSession rtInfoSessionNew(rtSipStack stack)
        {
            return this.server.rtInfoSessionNew(stack);
        }

        public rtOptionsSession rtOptionsSessionNew(rtSipStack stack)
        {
            return this.server.rtOptionsSessionNew(stack);
        }

        public rtPublicationSession rtPublicationSessionNew(rtSipStack stack)
        {
            return this.server.rtPublicationSessionNew(stack);
        }

        public rtSubscriptionSession rtSubscriptionSessionNew(rtSipStack stack)
        {
            return this.server.rtSubscriptionSessionNew(stack);
        }

		public rtCallSession rtCallSessionNew(rtSipStack stack)
        {
            return this.server.rtCallSessionNew(stack);
        }

        public rtMsrpSession rtMsrpSessionNew(rtSipStack stack, rtIMsrpCallback callback)
        {
            return this.server.rtMsrpSessionNew(stack, callback);
        }

        public rtActionConfig rtActionConfigNew()
        {
            return this.server.rtActionConfigNew();
        }

        public rtSipUri rtSipUriNew(String uriString, String displayName)
        {
            return this.server.rtSipUriNew(uriString, displayName);
        }

        public rtSipUri rtSipUriNew(String uriString)
        {
            return rtSipUriNew(uriString, String.Empty);
        }

        #endregion

        #region Methods

        /// <summary>
        /// A method that lets the VoIP background process know that the UI process is connected to it.
        /// Call this method at the beginning of the Launching and Activated event handlers.
        /// </summary>
        public void ConnectUi()
        {
            if (this.isConnected)
            {
                // Nothing more to be done
                return;
            }

            // Start the VoIP background agent host process, if it is not started already
            try
            {
                VoipBackgroundProcess.Launch(out this.backgroundProcessId);
            }
            catch (Exception err)
            {
                Debug.WriteLine("[App] Error launching VoIP background process. UI may no longer be in the foreground. Exception: " + err.Message);
                throw;
            }

            // Wait for the background process to become ready
            string backgroundProcessReadyEventName = Globals.GetBackgroundProcessReadyEventName((uint)this.backgroundProcessId);
            using (EventWaitHandle backgroundProcessReadyEvent = new EventWaitHandle(initialState: false, mode: EventResetMode.ManualReset, name: backgroundProcessReadyEventName))
            {
                TimeSpan timeout = Debugger.IsAttached ? BackgroundProcessController.indefiniteWait : BackgroundProcessController.fifteenSeconds;
                if (!backgroundProcessReadyEvent.WaitOne(timeout))
                {
                    // We timed out - something is wrong
                    throw new InvalidOperationException(string.Format("The background process did not become ready in {0} milliseconds", timeout.Milliseconds));
                }
                else
                {
                    Debug.WriteLine("[App] Background process {0} is ready", backgroundProcessId);
                }
            }
            // The background process is now ready.
            // It is possible that the background process now becomes "not ready" again, but the chances of this happening are slim,
            // and in that case, the following statement would fail - so, at this point, we don't explicitly guard against this condition.

            // Create an instance of the server in the background process.
            this.server = (Server)WindowsRuntimeMarshal.GetActivationFactory(typeof(Server)).ActivateInstance();

            // Un-set an event that indicates that the UI process is disconnected from the background process.
            // The VoIP background process waits for this event to get set before shutting down.
            // This ensures that the VoIP background agent host process doesn't shut down while the UI process is connected to it.
            string uiDisconnectedEventName = Globals.GetUiDisconnectedEventName((uint)backgroundProcessId);
            this.uiDisconnectedEvent = new EventWaitHandle(initialState: false, mode: EventResetMode.ManualReset, name: uiDisconnectedEventName);
            this.uiDisconnectedEvent.Reset();

            // The UI process is now connected to the background process
            this.isConnected = true;
        }

        /// <summary>
        /// A method that lets the VoIP background process know that the UI is no longer connected to it.
        /// Call this method at the end of the the Deactivated and Closing event handlers.
        /// </summary>
        public void DisconnectUi()
        {
            if (!this.isConnected)
            {
                // Nothing more to be done
                return;
            }

            // This process is no longer connected to the background process
            this.isConnected = false;

            // From this point onwards, it is no longer safe to use any objects in the VoIP background process,
            // or for the VoIP background process to call back into this process.
            this.server = null;

            // Lastly, set the event that indicates that the UI is no longer connected to the background process.
            if (this.uiDisconnectedEvent == null)
                throw new InvalidOperationException("The ConnectUi method must be called before this method is called");

            this.uiDisconnectedEvent.Set();
            this.uiDisconnectedEvent.Dispose();
            this.uiDisconnectedEvent = null;
        }

        #endregion

        #region Private members

        /// <summary>
        /// Private constructor
        /// </summary>
        private BackgroundProcessController()
        {
            // Nothing to do here
        }

        // A timespan representing fifteen seconds
        private static readonly TimeSpan fifteenSeconds = new TimeSpan(0, 0, 15);

        // A timespan representing an indefinite wait
        private static readonly TimeSpan indefiniteWait = new TimeSpan(0, 0, 0, 0, -1);

        // The single instance of this class
        private static BackgroundProcessController singleton;

        // Indicates if the UI process is in the foreground or not
        private bool isConnected;

        // An event that indicates that the UI process is no longer connected to the background process
        private EventWaitHandle uiDisconnectedEvent;

        // The background Process Identifier
        int backgroundProcessId;

        // A proxy to the server object in the VoIP background agent host process
        private Server server;

        #endregion
    }
}
#endif // WINDOWS_PHONE