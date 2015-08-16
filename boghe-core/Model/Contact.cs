/*
* Boghe IMS/RCS Client - Copyright (C) 2010 Mamadou DIOP.
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
using BogheXdm;
#if WINRT
using System.Runtime.Serialization;
using Serializable = System.Runtime.Serialization.DataContractAttribute;
#endif

namespace BogheCore.Model
{
    [Serializable]
    [XmlRoot("Contact")]
    public class Contact : BaseObject, IComparable<Contact>, INotifyPropertyChanged, ICloneable
    {
        private String displayName;
        private String uriString;
        private String groupName;
        private String freeText;
        private String homePage;
        private PresenceStatus presenceStatus;
        private DateTime hyperAvaiability;
        // Think about Clone() when you add new fields

        private Authorization authorization;

        public Contact()
        {
            this.presenceStatus = PresenceStatus.Offline;
            this.groupName = SpecialNames.SHARED_DOUBANGO;
            this.authorization = Authorization.UnKnown;
            this.hyperAvaiability = DateTime.Now;
        }

        [XmlElement("display-name")]
        public string DisplayName
        {
            get { return this.displayName; }
            set
            {
                this.displayName = value;
                this.OnPropertyChanged("DisplayName");
            }
        }        

        [XmlElement("uri")]
        public string UriString
        {
            get { return this.uriString; }
            set
            {
                this.uriString = value;
                this.OnPropertyChanged("UriString");
            }
        }

        [XmlElement("group-name")]
        public string GroupName
        {
            get { return this.groupName; }
            set
            {
                this.groupName = value;
                this.OnPropertyChanged("GroupName");
            }
        }

        [XmlIgnore]
        public Authorization Authorization
        {
            get 
            {
                if (this.authorization == Authorization.UnKnown)
                {
                    this.authorization = SpecialNames.GetAutorization(this.GroupName);
                }
                return this.authorization; 
            }
        }

        [XmlIgnore]
        public String FreeText
        {
            get { return this.freeText ?? String.Empty; }
            set
            {
                this.freeText = value;
                this.OnPropertyChanged("FreeText");
            }
        }

        [XmlIgnore]
        public String HomePage
        {
            get { return this.homePage ?? String.Empty; }
            set
            {
                this.homePage = value;
                this.OnPropertyChanged("HomePage");
            }
        }

        [XmlIgnore]
        public PresenceStatus PresenceStatus
        {
            get { return this.presenceStatus; }
            set
            {
                this.presenceStatus = value;
                this.OnPropertyChanged("PresenceStatus");
            }
        }

        [XmlIgnore]
        public DateTime HyperAvaiability
        {
            get { return this.hyperAvaiability; }
            set
            {
                this.hyperAvaiability = value;
                if (value > DateTime.Now)
                {
                    TimeSpan tspan = value - DateTime.Now;
                    System.Timers.Timer timer = new System.Timers.Timer(tspan.TotalMilliseconds);
                    timer.AutoReset = false;
                    timer.Enabled = true;
                    timer.Elapsed += delegate
                    {
                        this.HyperAvaiability = DateTime.Now;
                    };
                }
                this.OnPropertyChanged("HyperAvaiability");
            }
        }
        #region ICloneable

        public object Clone()
        {
            Contact clone = new Contact();
            clone.uriString = this.uriString;
            clone.displayName = this.displayName;
            clone.groupName = this.groupName;
            clone.freeText = this.freeText;
            clone.homePage = this.homePage;
            clone.presenceStatus = this.presenceStatus;
            clone.hyperAvaiability = this.hyperAvaiability;

            return clone;
        }

        #endregion

        #region IComparable

        public int CompareTo(Contact other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            return String.Compare(this.DisplayName, other.DisplayName);
        }

        #endregion

        #region INotifyPropertyChanged

        public event PropertyChangedEventHandler PropertyChanged;
        
        protected void OnPropertyChanged(String propertyName)
        {
            if (this.PropertyChanged != null)
            {
                this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
            }
        }

        #endregion
    }
}
