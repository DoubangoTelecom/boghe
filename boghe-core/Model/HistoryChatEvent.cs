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
using System.Xml.Serialization;
#if WINRT
using System.Runtime.Serialization;
using Serializable = System.Runtime.Serialization.DataContractAttribute;
#endif

namespace BogheCore.Model
{
    [Serializable]
    [XmlRoot("ChatEvent")]
    public class HistoryChatEvent : HistoryEvent, IComparable<HistoryChatEvent>
    {
        private List<HistoryShortMessageEvent> messages;

        private HistoryChatEvent()
            : this(null)
        {

        }

        public HistoryChatEvent(String remoteParty)
            : base(MediaType.Chat, remoteParty)
        {
            
        }

        [XmlElement("Messages")]
        public List<HistoryShortMessageEvent> Messages
        {
            get 
            {
                if (this.messages == null)
                {
                    this.messages = new List<HistoryShortMessageEvent>();
                }
                return this.messages;
            }
            set
            {
                this.messages = value;
            }
        }

        public int CompareTo(HistoryChatEvent other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            return other.Date.CompareTo(this.Date);
        }
    }
}
