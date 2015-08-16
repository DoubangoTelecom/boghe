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
using System.Diagnostics;
using System.Windows;
using doubango_rt.BackEnd;
using doubango_rt.BackEnd.OutOfProcess;
using System;
using Microsoft.Phone;
using org.doubango.WindowsPhone;

namespace doubango_rt.Agents
{
    /// <summary>
    /// A static class that does process-level initialization/deinitializations.
    /// </summary>
    public static class AgentHost
    {
        #region Methods

        /// <summary>
        /// Indicates that an agent started running.
        /// </summary>
        internal static void OnAgentStarted()
        {
            // Initialize the native code - this only needs to be done once per process,s
            // but the method below will effectively be a no-op if called more than once.
            BackEnd.Globals.Instance.StartServer(RegistrationHelper.OutOfProcServerClassNames);
        }

        #endregion

        #region Private members

        /// <summary>
        /// Class constructor
        /// </summary>
        static AgentHost()
        {
            Debug.WriteLine("[AgentHost] Constructor");

            // Subscribe to the unhandled exception event
            Deployment.Current.Dispatcher.BeginInvoke(delegate
            {
                Application.Current.UnhandledException += AgentHost.OnUnhandledException;
            });

            // Create the singleton video renderer
            AgentHost.videoRenderer = new VideoRenderer();

            // Store a pointer to the video renderer in the native Globals singleton,
            // so that the renderer can be used by native code in this process.
            Globals.Instance.VideoRenderer = AgentHost.videoRenderer;
        }

        /// <summary>
        /// Code to execute on unhandled exceptions.
        /// </summary>
        private static void OnUnhandledException(object sender, ApplicationUnhandledExceptionEventArgs e)
        {
            Debug.WriteLine("[AgentHost] An unhandled exception of type {0} has occurred. Error code: 0x{1:X8}. Message: {2}",
                e.ExceptionObject.GetType(), e.ExceptionObject.HResult, e.ExceptionObject.Message);

            if (Debugger.IsAttached)
            {
                // An unhandled exception has occurred; break into the debugger
                Debugger.Break();
            }
        }

        #endregion

        #region Private

        // The singleton video renderer
        static VideoRenderer videoRenderer;

        #endregion
    }
}
