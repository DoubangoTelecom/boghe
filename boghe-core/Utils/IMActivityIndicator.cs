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
#if !WINRT
using System;
using System.Collections.Generic;
using System.Text;
using System.Xml.Serialization;
using System.IO;
using System.Timers;
using System.Xml;
using BogheCore.Events;
using log4net;
using BogheCore.Generated.im_iscomposing;

namespace BogheCore.Utils
{
    public class IMActivityIndicationManager
    {
        private IDictionary<String, IMActivityIndicator> entries = null;

        public event EventHandler SendMessageEvent;
        public event EventHandler RemoteStateChangedEvent;

        public IMActivityIndicationManager()
        {
            this.entries = new Dictionary<String, IMActivityIndicator>();
        }

        public void AddEntry(String uriString)
        {
            lock (this.entries)
            {
                if (!this.entries.ContainsKey(uriString))
                {
                    IMActivityIndicator entry = new IMActivityIndicator(uriString);
                    entry.RemoteStateChangedEvent += this.entry_RemoteStateChangedEvent;
                    entry.SendMessageEvent += this.entry_SendMessageEvent;
                    this.entries.Add(uriString, entry);
                }
            }
        }

        public void RemoveEntry(String uriString)
        {
            this.RemoveEntry(uriString, true);
        }

        public void Reset()
        {
            lock (this.entries)
            {
                foreach (KeyValuePair<String, IMActivityIndicator> kvp in this.entries)
                {
                    this.RemoveEntry(kvp.Key, false);
                }
                this.entries.Clear();
            }
        }

        public void StopAll()
        {
            lock (this.entries)
            {
                foreach (KeyValuePair<String, IMActivityIndicator> kvp in this.entries)
                {
                    kvp.Value.StopAll();
                }
            }
        }

        public void OnComposing()
        {
            lock (this.entries)
            {
                foreach (KeyValuePair<String, IMActivityIndicator> kvp in this.entries)
                {
                    kvp.Value.OnComposing();
                }
            }
        }

        public void OnContentSent()
        {
            lock (this.entries)
            {
                foreach (KeyValuePair<String, IMActivityIndicator> kvp in this.entries)
                {
                    kvp.Value.OnContentSent();
                }
            }
        }

        public void OnContentReceived(String uriString)
        {
            lock (this.entries)
            {
                if (this.entries.ContainsKey(uriString))
                {
                    this.entries[uriString].OnContentReceived();
                }
            }
        }

        public void OnIndicationReceived(String uriString, String xmlindication)
        {
            lock (this.entries)
            {
                if (this.entries.ContainsKey(uriString))
                {
                    this.entries[uriString].OnIndicationReceived(xmlindication);
                }
            }
        }

        public String GetMessageIndicator()
        {
            lock (this.entries)
            {
                // This is my locat message --> it's don't depend on any remote party
                // --> get first one
                foreach (KeyValuePair<String, IMActivityIndicator> kvp in this.entries)
                {
                    return kvp.Value.GetMessageIndicator();
                }
            }
            return String.Empty;
        }

        private void RemoveEntry(String uriString, bool delete)
        {
            lock (this.entries)
            {
                if (this.entries.ContainsKey(uriString))
                {
                    this.entries[uriString].RemoteStateChangedEvent -= this.entry_RemoteStateChangedEvent;
                    this.entries[uriString].SendMessageEvent -= this.entry_SendMessageEvent;
                    this.entries[uriString].StopAll();

                    this.entries.Remove(uriString);
                }
            }
        }

        private void entry_SendMessageEvent(object sender, EventArgs e)
        {
            EventHandlerTrigger.TriggerEvent(this.SendMessageEvent, sender);
        }

        private void entry_RemoteStateChangedEvent(object sender, EventArgs e)
        {
            EventHandlerTrigger.TriggerEvent(this.RemoteStateChangedEvent, sender);
        }
    }


    // http://www.ietf.org/rfc/rfc3994.txt

    /*
     *                    +-------------+
                          |+-----------+|
                          ||           ||
                   +------>|   idle    |<--------+
                   |      ||           ||        |
                   |      |+-----------+|        |
                   |      +------+------+        |
       content     |             |               | idle timeout
       msg. sent   |             | composing     | w/o activity
       ----------- |             | ------------- | ------------------
        --         |             | "active" msg. | "idle" status msg.
                   |             |               |
                   |      +------V------+        |
                   |      |             |        |
                   |      |             |        |
                   |      |             |        |
                   +------+   active    +--------+
                          |             |
                          |             |------+
                          +------^------+      | refresh timeout
                                 |             | --------------------
                                 |             | "active" status msg.
                                 +-------------+

                       Figure 1. Sender State Diagram
    */


    /*
     * 
                               +-------------+
                               |+-----------+|
                               ||           ||
                        +------>|   idle    |<------+
                        |      ||           ||      |
                        |      |+-----------+|      |
                        |      +------+------+      |
                        |             |             |
           "idle" recd. |             |"active" msg.| refresh timeout
       or content recd. |             |             | or 120s
                        |             |             |
                        |      +------V------+      |
                        |      |             |      |
                        |      |             |      |
                        |      |             |      |
                        +------+   active    +------+
                               |             |
                               |             |
                               +-------------+

                     Figure 2. Receiver State Diagram
    */

    public class IMActivityIndicator
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(IMActivityIndicator));

        private const double TIMER_LOCAL_ACTIVE_VALUE = 60.0;
        private const double TIMER_LOCAL_IDLE_VALUE = 15.0;
        private const double TIMER_REMOTE_ACTIVE_VALUE = 120.0;

        private bool is_local_active;
        private bool is_remote_active;

        private Timer systimer_local_active;
        private Timer systimer_local_idle;
        private Timer systimer_remote_active;

        private event EventHandler sendMessageEvent;
        private event EventHandler remoteStateChangedEvent;

        private readonly String uriString;

        public IMActivityIndicator(String uriString)
        {
            this.uriString = uriString;

            this.systimer_local_active = new Timer(TIMER_LOCAL_ACTIVE_VALUE * 1000);
            this.systimer_local_idle = new Timer(TIMER_LOCAL_IDLE_VALUE * 1000);

            this.systimer_local_active.Elapsed += this.systimer_local_active_Elapsed;
            this.systimer_local_idle.Elapsed += this.systimer_local_idle_Elapsed;

            this.systimer_remote_active = new Timer();
            this.systimer_remote_active.AutoReset = false;
            this.systimer_remote_active.Elapsed += this.systimer_remote_active_Elapsed;
        }

        public String UriString
        {
            get
            {
                return this.uriString;
            }
        }

        public event EventHandler SendMessageEvent
        {
            add
            {
                this.sendMessageEvent += value;
            }
            remove
            {
                this.sendMessageEvent -= value;
            }
        }

        public event EventHandler RemoteStateChangedEvent
        {
            add
            {
                this.remoteStateChangedEvent += value;
            }
            remove
            {
                this.remoteStateChangedEvent -= value;
            }
        }

        public bool IsRemoteActive
        {
            get
            {
                return this.is_remote_active;
            }
        }

        public void StopAll()
        {
            this.systimer_local_active.Stop();
            this.systimer_local_idle.Stop();
            this.systimer_remote_active.Stop();
        }

        public void OnComposing()
        {
            lock (this)
            {
                if (!this.is_local_active)
                {
                    // We are in IDLE state and the began composing --> send isComposing
                    this.is_local_active = true;
                    EventHandlerTrigger.TriggerEvent(this.sendMessageEvent, this);
                }

                // Start/Reset timers
                this.StartLocalTimers();
            }
        }

        public void OnContentSent()
        {
            lock (this)
            {
                // Stop timers
                this.StopLocalTimers();

                // Switch to Idle state
                this.is_local_active = false;
            }
        }

        public void OnContentReceived()
        {
            lock (this)
            {
                this.is_remote_active = false;
                EventHandlerTrigger.TriggerEvent(this.remoteStateChangedEvent, this);
            }
        }

        public void OnIndicationReceived(String xmlindication)
        {
            try
            {
                XmlSerializer serializer = new XmlSerializer(typeof(isComposing));
                using (MemoryStream stream = new MemoryStream(Encoding.UTF8.GetBytes(xmlindication)))
                {
                    isComposing state = serializer.Deserialize(stream) as isComposing;
                    if (state != null && !String.IsNullOrEmpty(state.state))
                    {
                        this.is_remote_active = (state.state.Equals("active"));
                        if (this.is_remote_active)
                        {
                            double refresh = IMActivityIndicator.TIMER_REMOTE_ACTIVE_VALUE;
                            if (!String.IsNullOrEmpty(state.refresh))
                            {
#if PocketPC
                                refresh = Convert.ToDouble(state.refresh);
                                this.systimer_remote_active.Interval = refresh * 1000;
#else
                                if (double.TryParse(state.refresh, out refresh))
                                {
                                    this.systimer_remote_active.Interval = refresh*1000;
                                }
                                else
                                {
                                    return; // MUST NEVER HAPPEN
                                }
#endif
                            }
                            else
                            {
                                this.systimer_remote_active.Interval = refresh*1000;
                            }
                            this.systimer_remote_active.Start();
                        }
                        else
                        {
                            this.systimer_remote_active.Stop();
                        }

                        EventHandlerTrigger.TriggerEvent(this.remoteStateChangedEvent, this);
                    }
                }
            }
            catch (Exception e)
            {
                LOG.Error(e);
            }
        }

        public String GetMessageIndicator()
        {
            String message = String.Empty;
            isComposing obj = new isComposing();
            obj.state = (this.is_local_active ? "active" : "idle");
            obj.contenttype = "text/plain";
            if (is_local_active)
            {
                obj.refresh = IMActivityIndicator.TIMER_LOCAL_ACTIVE_VALUE.ToString();
            }

            try
            {
                using (MemoryStream memoryStream = new MemoryStream())
                {
                    XmlWriterSettings settings = new XmlWriterSettings();
                    settings.Encoding = new UTF8Encoding(false);
                    settings.OmitXmlDeclaration = false;
                    settings.Indent = true;

                    using (XmlWriter xmlWriter = XmlWriter.Create(memoryStream, settings))
                    {
                        XmlSerializer serializer = new XmlSerializer(typeof(isComposing));
                        serializer.Serialize(xmlWriter, obj);

                        xmlWriter.Flush();
                        xmlWriter.Close();
                    }

#if PocketPC
                    message = Encoding.UTF8.GetString(memoryStream.ToArray(), 0, (int)memoryStream.Length);
#else
                    message = Encoding.UTF8.GetString(memoryStream.ToArray());
#endif
                }
            }
            catch (Exception e)
            {
                LOG.Error(e);
            }
            
            return message;
        }

        private void systimer_local_idle_Elapsed(object sender, ElapsedEventArgs e)
        {
            // You are sender
            lock (this)
            {
                // In all case --> stop timers
                this.StopLocalTimers();

                if (this.is_local_active)
                {
                    // We were active, and idle timer timeout --> switch to idel state
                    this.is_local_active = false;
                    EventHandlerTrigger.TriggerEvent(this.sendMessageEvent, this);
                }
            }
        }

        private void systimer_local_active_Elapsed(object sender, ElapsedEventArgs e)
        {
            // You are sender
            lock (this)
            {
                if (this.is_local_active)
                {
                    // We were active, and we are still active --> do not switch state but raise event
                    EventHandlerTrigger.TriggerEvent(this.sendMessageEvent, this);
                }
            }
        }

        private void systimer_remote_active_Elapsed(object sender, ElapsedEventArgs e)
        {
            lock(this)
            {
                // Remote party is no longer active
                if (this.is_remote_active)
                {
                    // From active to idle
                    this.is_remote_active = false;
                }
                EventHandlerTrigger.TriggerEvent(this.remoteStateChangedEvent, this);
            }
        }

        private void StartLocalTimers()
        {
            // FIXME: Find way to reset
            if (this.systimer_local_active.Enabled) this.systimer_local_active.Stop();
            if (this.systimer_local_idle.Enabled) this.systimer_local_idle.Stop();

            this.systimer_local_active.Start();
            this.systimer_local_idle.Start();
        }

        private void StopLocalTimers()
        {
            this.systimer_local_active.Stop();
            this.systimer_local_idle.Stop();
        }
    }
}
#endif //!WINRT