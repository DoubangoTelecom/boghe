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
using System.ComponentModel;
using BogheXdm;
#if WINRT
using System.Runtime.Serialization;
using Serializable = System.Runtime.Serialization.DataContractAttribute;
#endif

namespace BogheCore.Model
{
#if WINRT
    public interface ICloneable
    {
        object Clone();
    }
#endif

    [Serializable]
    [XmlRoot("Group")]
    public class Group : BaseObject, IComparable<Group>, INotifyPropertyChanged, ICloneable
    {
        private String name;
        private String displayName;
        private Authorization authorization;
        // Think about Clone() when you add new fields

        public Group()
            :this(String.Format("Doubango_{0}", Guid.NewGuid()), "Unknown")
        {
        }

        public Group(String name, String displayName)
        {
            this.Name = name;
            this.DisplayName = displayName;
            this.Authorization = Authorization.Allowed;
        }

        [XmlAttribute("name")]
        public String Name
        {
            get { return this.name; }
            set
            {
                if (!String.IsNullOrEmpty(value))
                {
                    this.name = value;
                    this.OnPropertyChanged("Name");
                }
            }
        }

        [XmlAttribute("DisplayName")]
        public String DisplayName
        {
            get { return this.displayName; }
            set
            {
                if (!String.IsNullOrEmpty(value))
                {
                    this.displayName = value;
                    this.OnPropertyChanged("DisplayName");
                }
            }
        }

        [XmlAttribute("Authorization")]
        public Authorization Authorization
        {
            get { return this.authorization; }
            set
            {
                this.authorization = value;
                this.OnPropertyChanged("Authorization");
            }
        }

        public override string ToString()
        {
            if (!String.IsNullOrEmpty(this.DisplayName))
            {
                return this.DisplayName;
            }
            return this.Name;
        }

        #region ICloneable

        public object Clone()
        {
            Group clone = new Group();
            clone.name = this.name;
            clone.displayName = this.displayName;
            clone.authorization = this.authorization;
            return clone;
        }

        #endregion

        #region IComparable

        public int CompareTo(Group other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            return this.Name.CompareTo(other.Name);
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
