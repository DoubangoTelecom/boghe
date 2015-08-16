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
using System.ComponentModel;
using System.Xml.Serialization;
using BogheCore.Utils;
#if WINRT
using System.Runtime.Serialization;
using Serializable = System.Runtime.Serialization.DataContractAttribute;
#endif

namespace BogheCore.Model
{
    [Serializable]
    [XmlRoot("HistoryEvent")]
    [XmlInclude(typeof(HistoryAVCallEvent))]
    [XmlInclude(typeof(HistoryShortMessageEvent))]
    [XmlInclude(typeof(HistoryChatEvent))]
    [XmlInclude(typeof(HistoryFileTransferEvent))]
    public abstract class HistoryEvent : IComparable<HistoryEvent>, INotifyPropertyChanged
    {
        protected MediaType mediaType;
        protected String remoteParty;
        protected bool seen;
        protected StatusType status;
        protected DateTime date;
        protected String displayName;
        protected long sipSessionId;
        protected Contact contact;

        [Flags]
        public enum StatusType
        {
            Outgoing = 0x01<<0,
            Incoming = 0x01 << 1,
            Missed = 0x01 << 2,
            Failed = 0x01 << 3,

            All = Outgoing | Incoming | Missed | Failed
        }

        protected HistoryEvent()
        {
            this.status = StatusType.Missed;
            this.date = DateTime.Now;
        }

        protected HistoryEvent(MediaType mediaType, String remoteParty)
            :this()
        {
            this.mediaType = mediaType;
            this.remoteParty = remoteParty;
        }

        [XmlElement("MediaType")]
        public MediaType MediaType
        {
            get { return this.mediaType; }
            set { 
                this.mediaType = value;
                this.OnPropertyChanged("MediaType");
            }
        }        

        [XmlElement("RemoteParty")]
        public String RemoteParty
        {
            get { return this.remoteParty; }
            set
            {
                this.remoteParty = value;
                this.OnPropertyChanged("RemoteParty");
            }
        }

        [XmlAttribute("Date")]
        public DateTime Date
        {
            get { return this.date; }
            set
            {
                this.date = value;
                this.OnPropertyChanged("Date");
            }
        }

        [XmlElement("Seen")]
        public bool Seen
        {
            get { return this.seen; }
            set
            {
                this.seen = value;
                this.OnPropertyChanged("Seen");
            }
        }

        [XmlElement("Status")]
        public StatusType Status
        {
            get { return this.status; }
            set
            {
                this.status = value;
                this.OnPropertyChanged("Status");
            }
        }

        [XmlIgnore]
        public Contact Contact
        {
            get
            {
                if (this.contact == null && !String.IsNullOrEmpty(this.RemoteParty))
                {
                    this.contact = UriUtils.ServiceManager.ContactService.ContactFind(this.RemoteParty);
                }
                return this.contact;
            }
        }

        [XmlIgnore]
        public String DisplayName
        {
            get
            {
                if (String.IsNullOrEmpty(this.displayName))
                {
                    if (this.Contact != null && !String.IsNullOrEmpty(this.Contact.DisplayName))
                    {
                        this.displayName = this.Contact.DisplayName;
                    }
                    else
                    {
                        this.displayName = UriUtils.GetUserName(this.RemoteParty);
                    }
                }
                return String.IsNullOrEmpty(this.displayName) ? "(null)" : this.displayName;
            }
            set
            {
                this.displayName = value;
            }
        }

        [XmlIgnore]
        public long SipSessionId
        {
            get { return this.sipSessionId; }
            set { this.sipSessionId = value; }
        }

        public int CompareTo(HistoryEvent other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            return other.Date.CompareTo(this.Date);
        }

        public event PropertyChangedEventHandler PropertyChanged;
        protected void OnPropertyChanged(String propertyName)
        {
            if (this.PropertyChanged != null)
            {
                this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
            }
        }
    }
}
