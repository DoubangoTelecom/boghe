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
using System.Linq;
using System.Text;
using BogheCore.Generated.regingo;
using System.ComponentModel;

namespace BogheCore.Model
{
    public class RegistrationInfo : IComparable<RegistrationInfo>, INotifyPropertyChanged
    {
        private String aor;
        private String id;

        private registrationState state;
        private contactState contactState;
        private contactEvent contactEvent;
        private int contactExpires;
        private String contactId;
        private String contactUriString;
        private String contactDisplayName;

        private DateTime endDateTime;
        
        public void UpdateExpiration()
        {
            this.OnPropertyChanged("ContactExpires");
        }
        
        public String AoR
        {
            get { return this.aor; }
            set
            {
                this.aor = value;
                this.OnPropertyChanged("AoR");
            }
        }
        
        public String Id
        {
            get { return this.id; }
            set
            {
                this.id = value;
                this.OnPropertyChanged("Id");
            }
        }
        
        public registrationState RegistrationState
        {
            get { return this.state; }
            set
            {
                this.state = value;
                this.OnPropertyChanged("RegistrationState");
            }
        }
        
        public contactState ContactState
        {
            get { return this.contactState; }
            set
            {
                this.contactState = value;
                this.OnPropertyChanged("ContactState");
            }
        }
        
        public contactEvent ContactEvent
        {
            get { return this.contactEvent; }
            set
            {
                this.contactEvent = value;
                this.OnPropertyChanged("ContactEvent");
            }
        }
        
        public int ContactExpires
        {
            get
            {
                DateTime now = DateTime.Now;
                return this.endDateTime > now ? Convert.ToInt32(this.endDateTime.Subtract(now).TotalSeconds) : 0;
            }
            set
            {
                this.contactExpires = value;
                this.endDateTime = DateTime.Now.AddSeconds(this.contactExpires);
                this.OnPropertyChanged("ContactExpires");
            }
        }
        
        public String ContactId
        {
            get { return this.contactId; }
            set
            {
                this.contactId = value;
                this.OnPropertyChanged("ContactId");
            }
        }
        
        public String ContactUriString
        {
            get { return this.contactUriString; }
            set
            {
                this.contactUriString = value;
                this.OnPropertyChanged("ContactUriString");
            }
        }
        
        public String ContactDisplayName
        {
            get { return this.contactDisplayName; }
            set
            {
                this.contactDisplayName = value;
                this.OnPropertyChanged("ContactDisplayName");
            }
        }
        
        public int CompareTo(RegistrationInfo other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            int result = this.aor.CompareTo(other.aor);
            if (result == 0)
            {
                return this.ContactUriString.CompareTo(other.ContactUriString);
            }
            return result;
        }

        public event PropertyChangedEventHandler PropertyChanged;        
        private void OnPropertyChanged(String propertyName)
        {
            if (this.PropertyChanged != null)
            {
                this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
            }
        }
    }
}
#endif //!WINRT