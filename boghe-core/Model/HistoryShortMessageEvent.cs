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
    [XmlRoot("HistoryShortMessageEvent")]
    public class HistoryShortMessageEvent : HistoryEvent, IComparable<HistoryShortMessageEvent>
    {
        private String content;
        private bool delivered;

        private HistoryShortMessageEvent()
            :this(null)
        {
        }

        public HistoryShortMessageEvent(String remoteParty)
            : base(MediaType.ShortMessage, remoteParty)
        {
            
        }
        
        [XmlElement("Content")]
        public String Content
        {
            get { return this.content; }
            set
            {
                this.content = value;
                this.OnPropertyChanged("Content");
            }
        }        

        [XmlElement("Delivered")]
        public bool IsDelivered
        {
            get { return this.delivered; }
            set
            {
                this.delivered = value;
                this.OnPropertyChanged("Delivered");
            }
        }

        public int CompareTo(HistoryShortMessageEvent other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            return other.Date.CompareTo(this.Date);
        }
    }
}
