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
using System.Collections.ObjectModel;
using BogheCore.Model;
using BogheCore.Sip.Events;
using BogheCore.Events;
using log4net;
using System.Threading;
using System.Xml.Serialization;

namespace BogheCore.Services.Impl
{
    public partial class ContactService : IContactService
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(ContactService));

        private const String CONTACTS_FILE_NAME = "contacts.xml";
        private const String GROUPS_FILE_NAME = "groups.xml";

        private bool saveGroups;
        private bool saveContacts;
        private bool loading;
        private readonly System.Timers.Timer deferredSaveTimer;
        private readonly XmlSerializer xmlContactSerializer;
        private readonly XmlSerializer xmlGroupSerializer;

        private MyObservableCollection<Contact> contacts;
        private MyObservableCollection<Group> groups;

        private IXcapService xcapService;
        private ISipService sipService;
        private IConfigurationService configurationService;
        private readonly ServiceManager manager;

        public ContactService(ServiceManager manager)
        {
            this.contacts = new MyObservableCollection<Contact>();
            this.groups = new MyObservableCollection<Group>();

            this.manager = manager;

            this.deferredSaveTimer = new System.Timers.Timer(2500);
            this.deferredSaveTimer.AutoReset = false;
            this.deferredSaveTimer.Elapsed += delegate
            {
                //this.manager.Dispatcher.Invoke((System.Threading.ThreadStart)delegate
                //{
                    this.ImmediateSave();
                //}, null);
            };

            this.xmlContactSerializer = new XmlSerializer(typeof(MyObservableCollection<Contact>));
            this.xmlGroupSerializer = new XmlSerializer(typeof(MyObservableCollection<Group>));
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
            if (this.deferredSaveTimer.Enabled)
            {
                this.deferredSaveTimer.Stop();
                this.ImmediateSave();
            }

            return true;
        }

        #endregion

        #region IContactService

        public void Download()
        {
            ThreadStart asynTask = new ThreadStart(delegate()
            {
                if (this.sipService.IsXcapEnabled)
                {
                    if (this.xcapService.Prepare())
                    {
                        this.xcapService.DownloadDocuments();
                    }
                }
                else
                {
                    this.ImmediateLoad();
                }
            });
            new Thread(asynTask).Start();
        }

        public bool IsLoading 
        {
            get { return this.loading; }
        }

        public bool ContactAdd(Contact contact)
        {
            if (contact == null)
            {
                LOG.Error("Null Contact");
                return false;
            }
            
            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.xcapService.ContactAdd(contact);
                }).Start();
            }
            else
            { 
                this.saveContacts = true;
                lock (this.contacts)
                {
                    this.contacts.Add(contact);
                }

                ContactEventArgs eargs = new ContactEventArgs(ContactEventTypes.CONTACT_ADDED);
                eargs.AddExtra(ContactEventArgs.EXTRA_CONTACT, contact);
                EventHandlerTrigger.TriggerEvent<ContactEventArgs>(this.onContactEvent, this, eargs);

                this.DeferredSave();
            }

            return true;
        }

        public bool ContactUpdate(Contact contact, String prevGroupName)
        {
            if (contact == null)
            {
                LOG.Error("Null Contact");
                return false;
            }
            
            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.xcapService.ContactUpdate(contact, prevGroupName);
                }).Start();
            }
            else
            {
                this.saveContacts = true;
                lock (this.contacts)
                {
                    int index = this.contacts.IndexOf(contact);
                    if (index != -1)
                    {
                        this.contacts[index] = contact;
                        this.DeferredSave();
                    }
                }
            }

            return true;
        }

        public bool ContactDelete(Contact contact)
        {
            if (contact == null)
            {
                LOG.Error("Null Contact");
                return false;
            }
            
            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.xcapService.ContactDelete(contact);
                }).Start();
            }
            else
            {
                this.saveContacts = true;
            }

            return true;
        }

        public Contact ContactFind(String uri)
        {
            if (this.contacts == null || String.IsNullOrEmpty(uri))
            {
                return null;
            }

            lock (this.contacts)
            {
                return this.contacts.FirstOrDefault(
                    contact => contact != null && uri.Equals(contact.UriString)
                    );
            }
        }

        public bool GroupAdd(Group group)
        {
            if (group == null)
            {
                LOG.Error("Null Group");
                return false;
            }

            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.xcapService.GroupAdd(group);
                }).Start();
            }
            else
            {
                this.saveGroups = true;
                this.groups.Add(group);

                ContactEventArgs eargs = new ContactEventArgs(ContactEventTypes.GROUP_ADDED);
                eargs.AddExtra(ContactEventArgs.EXTRA_GROUP, group);
                EventHandlerTrigger.TriggerEvent<ContactEventArgs>(this.onContactEvent, this, eargs);

                this.DeferredSave();
            }

            return true;
        }

        public bool GroupUpdate(Group group)
        {
            return false;
        }

        public bool GroupDelete(Group group)
        {
            return false;
        }

        public Group GroupFind(String name)
        {
            if (this.groups == null || String.IsNullOrEmpty(name))
            {
                return null;
            }

            lock (this.groups)
            {
                return this.groups.FirstOrDefault(
                    group => group != null && name.Equals(group.Name)
                    );
            }
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


            EventHandlerTrigger.TriggerEvent<ContactEventArgs>(this.onContactEvent, this, new ContactEventArgs(ContactEventTypes.RESET));
        }

        public event EventHandler<ContactEventArgs> onContactEvent;

        #endregion


        private void sipService_onRegistrationEvent(object sender, RegistrationEventArgs e)
        {
            switch (e.Type)
            {
                case RegistrationEventTypes.REGISTRATION_OK:
                    {
                        this.Download();
                        break;
                    }

                case RegistrationEventTypes.UNREGISTRATION_OK:
                    {
                        if (this.sipService.IsXcapEnabled)
                        {
                            this.xcapService.UnPrepare();
                        }
                        else
                        {
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
