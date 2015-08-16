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
using System.ComponentModel;
using BogheXdm.Generated.watcherinfo;

namespace BogheCore.Model
{
    public class WatcherInfo : IComparable<WatcherInfo>, INotifyPropertyChanged
    {
        private String resource;
        private String package;
        private String watcherId;
        private watcherStatus watcherStatus;
        private watcherEvent watcherEvent;
        private String watcherUriString;
        private String watcherDisplayName;
        private int watcherExpiration;
        private int watcherDurationSubscribed;
        private DateTime endDateTime;
        
        public void UpdateExpiration()
        {
            this.OnPropertyChanged("WatcherExpiration");
        }
        
        public string Resource
        {
            get { return this.resource; }
            set
            {
                this.resource = value;
                this.OnPropertyChanged("Resource");
            }
        }
        
        public string Package
        {
            get { return this.package; }
            set
            {
                this.package = value;
                this.OnPropertyChanged("Package");
            }
        }
        
        public string WatcherId
        {
            get { return this.watcherId; }
            set
            {
                this.watcherId = value;
                this.OnPropertyChanged("WatcherId");
            }
        }

        public watcherStatus WatcherStatus
        {
            get { return this.watcherStatus; }
            set
            {
                this.watcherStatus = value;
                this.OnPropertyChanged("WatcherStatus");
            }
        }

        public watcherEvent WatcherEvent
        {
            get { return this.watcherEvent; }
            set
            {
                this.watcherEvent = value;
                this.OnPropertyChanged("WatcherEvent");
            }
        }

        public String WatcherUriString
        {
            get { return this.watcherUriString; }
            set
            {
                this.watcherUriString = value;
                this.OnPropertyChanged("WatcherUriString");
            }
        }

        public string WatcherDisplayName
        {
            get { return this.watcherDisplayName; }
            set
            {
                this.watcherDisplayName = value;
                this.OnPropertyChanged("WatcherDisplayName");
            }
        }
        
        public int WatcherExpiration
        {
            get
            {
                DateTime now = DateTime.Now;
                return this.endDateTime > now ? Convert.ToInt32(this.endDateTime.Subtract(now).TotalSeconds) : 0;
            }
            set
            {
                this.watcherExpiration = value;
                this.endDateTime = DateTime.Now.AddSeconds(this.watcherExpiration);
                this.OnPropertyChanged("WatcherExpiration");
            }
        }
        
        public int WatcherDurationSubscribed
        {
            get { return this.watcherDurationSubscribed; }
            set
            {
                this.watcherDurationSubscribed = value;
                this.OnPropertyChanged("WatcherDurationSubscribed");
            }
        }

        public int CompareTo(WatcherInfo other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            int result = this.Resource.CompareTo(other.Resource);
            if (result == 0)
            {
                result = this.WatcherUriString.CompareTo(other.WatcherUriString);
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