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
using BogheCore.Events;

namespace BogheCore.Services.Impl
{
    public class StateMonitorService : IStateMonitorService
    {
        private readonly IDictionary<String, String> states;

        public StateMonitorService()
        {
            this.states = new Dictionary<String, String>();
        }

        #region IService

        public bool Start()
        {
            return true;
        }

#if WINDOWS_PHONE
        public bool Stop(bool bEnteringBackground)
#else
        public bool Stop()
#endif
        {
            this.ClearStates();
            return true;
        }

        #endregion


        #region IStateMonitorService

        public event EventHandler<StateMonitorEventArgs> onStateChangedEvent;

        public String[] TopState
        {
            get
            {
                lock (this.states)
                {
                    if (this.states.Count > 0)
                    {
                        String[] ret = new String[2];
                        ret[0] = this.states.Keys.ToList()[0];
                        ret[1] = this.states.Values.ToList()[0];
                        return ret;
                    }
                    return null;
                }
            }
        }

        public void AddState(String stateKey, String stateDescription)
        {
            lock (this.states)
            {
                if (!this.states.ContainsKey(stateKey))
                {
                    this.states.Add(stateKey, stateDescription);
                }
                else
                {
                    this.states[stateKey] = stateDescription;
                }
                EventHandlerTrigger.TriggerEvent<StateMonitorEventArgs>(this.onStateChangedEvent, this, new StateMonitorEventArgs(StateMonitorEventTypes.ADDED, stateKey, stateDescription));
            }
        }

        public void RemoveState(String stateKey)
        {
            lock (this.states)
            {
                if (this.states.ContainsKey(stateKey))
                {
                    String stateDescription = this.states[stateKey];
                    this.states.Remove(stateKey);
                    EventHandlerTrigger.TriggerEvent<StateMonitorEventArgs>(this.onStateChangedEvent, this, new StateMonitorEventArgs(StateMonitorEventTypes.REMOVED, stateKey, stateDescription));
                }
            }
        }

        public void ClearStates()
        {
            lock (this.states)
            {
                this.states.Clear();
                EventHandlerTrigger.TriggerEvent<StateMonitorEventArgs>(this.onStateChangedEvent, this, new StateMonitorEventArgs(StateMonitorEventTypes.CLEARED, null, null));
            }
        }

        #endregion

    }
}
