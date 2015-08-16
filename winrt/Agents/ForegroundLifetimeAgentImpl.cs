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
using Microsoft.Phone.Networking.Voip;
using System.Diagnostics;
using System.Threading;

namespace doubango_rt.Agents
{
    /// <summary>
    /// An agent that is invoked when the UI process calls Microsoft.Phone.Networking.Voip.VoipBackgroundProcess.Launched()
    /// and is canceled when the UI leaves the foreground.
    /// </summary>
    public sealed class ForegroundLifetimeAgentImpl : VoipForegroundLifetimeAgent
    {
        public ForegroundLifetimeAgentImpl()
            : base()
        {
        }

        /// <summary>
        /// A method that is called as a result of 
        /// </summary>
        protected override void OnLaunched()
        {
            Debug.WriteLine("[ForegroundLifetimeAgentImpl] The UI has entered the foreground.");

            // Debug.WriteLine("[ForegroundLifetimeAgentImpl] Start SIP service.");
            // Globals.Instance.SipService.Start();
            // Globals.Instance.SipService.Register();

            // Indicate that an agent has started running
            AgentHost.OnAgentStarted();
        }

        protected override void OnCancel()
        {
            Debug.WriteLine("[ForegroundLifetimeAgentImpl] The UI is leaving the foreground");

            Debug.WriteLine("[ForegroundLifetimeAgentImpl] Stop SIP service.");
            doubango_rt.BackEnd.Globals.Instance.SipService.Stop(true);

            
            // Make sure that this process has finished becoming ready before trying to complete this agent.
            // Otherwise, the process may exit without telling the UI that it is ready (and therefore make the UI unresponsive)
            uint currentProcessId = doubango_rt.BackEnd.Globals.GetCurrentProcessId();
            string backgroundProcessReadyEventName = doubango_rt.BackEnd.Globals.GetBackgroundProcessReadyEventName(currentProcessId);
            using (EventWaitHandle backgroundProcessReadyEvent = new EventWaitHandle(initialState: false, mode: EventResetMode.ManualReset, name: backgroundProcessReadyEventName))
            {
                backgroundProcessReadyEvent.WaitOne();
                Debug.WriteLine("[ForegroundLifetimeAgentImpl] Background process {0} is ready", currentProcessId);
            }

            // This agent is done
            Debug.WriteLine("[ForegroundLifetimeAgentImpl] Calling NotifyComplete");
            base.NotifyComplete();
        }
    }
}
