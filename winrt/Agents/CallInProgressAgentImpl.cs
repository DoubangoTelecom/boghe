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
using Microsoft.Phone.Networking.Voip;

namespace doubango_rt.Agents
{
    /// <summary>
    /// An agent that is launched when the first call becomes active and is canceled when the last call ends.
    /// </summary>
    public class CallInProgressAgentImpl : VoipCallInProgressAgent
    {
        /// <summary>
        /// Constructor
        /// </summary>
        public CallInProgressAgentImpl()
            : base()
        {
        }

        /// <summary>
        /// The first call has become active.
        /// </summary>
        protected override void OnFirstCallStarting()
        {
            Debug.WriteLine("[CallInProgressAgentImpl] The first call has started.");

            // Indicate that an agent has started running
            AgentHost.OnAgentStarted();
        }

        /// <summary>
        /// The last call has ended.
        /// </summary>
        protected override void OnCancel()
        {
            Debug.WriteLine("[CallInProgressAgentImpl] The last call has ended. Calling NotifyComplete");

            // This agent is done
            base.NotifyComplete();
        }
    }
}
