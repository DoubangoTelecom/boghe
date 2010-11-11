/*
* Copyright (C) 2010 Mamadou Diop.
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
using System.Collections.ObjectModel;
using BogheCore.Model;
using BogheCore.Sip.Events;
using BogheCore.Events;

namespace BogheCore.Services.Impl
{
    public class ContactService : IContactService
    {
        private readonly MyObservableCollection<Contact> contacts;
        private readonly MyObservableCollection<Group> groups;

        private IXcapService xcapService;
        private ISipService sipService;
        private IConfigurationService configurationService;
        private readonly ServiceManager manager;

        public ContactService(ServiceManager manager)
        {
            this.contacts = new MyObservableCollection<Contact>();
            this.groups = new MyObservableCollection<Group>();

            this.manager = manager;
        }

        #region IService

        public bool Start()
        {
            this.xcapService = this.manager.XcapService;
            this.sipService = this.manager.SipService;
            this.configurationService = this.manager.ConfigurationService;

            this.sipService.onRegistrationEvent += this.sipService_onRegistrationEvent;

            return true;
        }

        public bool Stop()
        {
            this.sipService.onRegistrationEvent -= this.sipService_onRegistrationEvent;

            return true;
        }

        #endregion

        #region IContactService

        public void Download()
        {
        }

        public MyObservableCollection<Contact> Contacts 
        {
            get { return this.contacts; }
        }

        public MyObservableCollection<Group> Groups 
        {
            get { return this.groups; }
        }

        public void UpdateGroupsAndContacts(List<Group> freshGroups, List<Contact> freshContacts)
        {
            this.groups.ReplaceRange(freshGroups);
            this.contacts.ReplaceRange(freshContacts);


            EventHandlerTrigger.TriggerEvent<ContactEventArgs>(this.onContactEvent, this, new ContactEventArgs(ContactEventTypes.CONTACTS_DOWNLOADED));
            EventHandlerTrigger.TriggerEvent<ContactEventArgs>(this.onContactEvent, this, new ContactEventArgs(ContactEventTypes.GROUPS_DOWNLOADED));
        }

        public event EventHandler<ContactEventArgs> onContactEvent;

        #endregion


        private void sipService_onRegistrationEvent(object sender, RegistrationEventArgs e)
        {
            switch (e.Type)
            {
                case RegistrationEventTypes.REGISTRATION_OK:
                    {
                        if (this.sipService.IsXcapEnabled)
                        {
                            if (this.xcapService.Prepare())
                            {
                                this.xcapService.DownloadDocuments();
                            }
                        }
                        break;
                    }

                case RegistrationEventTypes.UNREGISTRATION_OK:
                    {
                        if (this.sipService.IsXcapEnabled)
                        {
                            this.xcapService.UnPrepare();
                        }
                        break;
                    }

                case RegistrationEventTypes.REGISTRATION_NOK:
                case RegistrationEventTypes.REGISTRATION_INPROGRESS:
                case RegistrationEventTypes.UNREGISTRATION_NOK:
                case RegistrationEventTypes.UNREGISTRATION_INPROGRESS:
                    break;
            }
        }
    }
}
