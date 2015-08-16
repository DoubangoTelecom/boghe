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

        private IScreenService screenService;
#if !WINRT
        private IXcapService xcapService;
        private ISipService sipService;
#endif
        private IConfigurationService configurationService;
        private IStateMonitorService stateMonitorService;
        private readonly ServiceManager manager;

        public ContactService(ServiceManager manager)
        {
            this.contacts = new MyObservableCollection<Contact>(true);
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
            this.screenService = this.manager.ScreenService;
#if !WINRT
            this.xcapService = this.manager.XcapService;
            this.sipService = this.manager.SipService;
#endif
            this.configurationService = this.manager.ConfigurationService;
            this.stateMonitorService = this.manager.StateMonitorService;
#if !WINRT
            this.sipService.onRegistrationEvent += this.sipService_onRegistrationEvent;
#endif

            return true;
        }

#if WINDOWS_PHONE
        public bool Stop(bool bEnteringBackground)
#else
        public bool Stop()
#endif
        {
#if !WINRT
            this.sipService.onRegistrationEvent -= this.sipService_onRegistrationEvent;
#endif
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
                this.stateMonitorService.AddState("ContactService::Download()", "Loading Contacts...");
#if !WINRT
                if (this.sipService.IsXcapEnabled)
                {
                    if (this.xcapService.Prepare())
                    {
                        this.xcapService.DownloadDocuments();
                    }
                }
                else
#endif
                {
                    this.ImmediateLoad();
                }

                this.stateMonitorService.RemoveState("ContactService::Download()");
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
#if !WINRT
            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.stateMonitorService.AddState("ContactService::ContactAdd()", "Adding new Contact...");

                    if (this.xcapService.ContactAdd(contact))
                    {
                        this.manager.Dispatcher.Invoke((System.Threading.ThreadStart)delegate
                        {
                            lock (this.contacts)
                            {
                                this.contacts.Add(contact);
                            }
                        }, null);

                        this.ContactSignal(contact, ContactEventTypes.CONTACT_ADDED);
                    }
                    else
                    {
                        this.stateMonitorService.AddState("ContactService::ContactAdd()", "Failed to add new contact");
                    }

                    this.stateMonitorService.RemoveState("ContactService::ContactAdd()");
                })
                .Start();
            }
            else
#endif
            {
                this.stateMonitorService.AddState("ContactService::ContactAdd()", "Adding new Contact...");

                this.saveContacts = true;
                lock (this.contacts)
                {
                    this.contacts.Add(contact);
                }

                this.ContactSignal(contact, ContactEventTypes.CONTACT_ADDED);

                this.DeferredSave();

                this.stateMonitorService.RemoveState("ContactService::ContactAdd()");
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
#if !WINRT
            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.stateMonitorService.AddState("ContactService::ContactUpdate()", "Updating Contact...");

                    if (this.xcapService.ContactUpdate(contact, prevGroupName))
                    {
                        this.manager.Dispatcher.Invoke((System.Threading.ThreadStart)delegate
                        {
                            lock (this.contacts)
                            {
                                //int index = this.contacts.IndexOf(contact);
                                //if (index != -1)
                                //{
                                //    this.contacts[index] = contact;
                                //}
                            }
                        }, null);

                        this.ContactSignal(contact, ContactEventTypes.CONTACT_UPDATED);
                    }
                    else
                    {
                        this.screenService.SetProgressInfo("Failed to update contact");
                    }

                    this.stateMonitorService.RemoveState("ContactService::ContactUpdate()");
                })
                .Start();
            }
            else
#endif
            {
                this.stateMonitorService.AddState("ContactService::ContactUpdate()", "Updating Contact...");

                this.saveContacts = true;
                lock (this.contacts)
                {
                   //int index = this.contacts.IndexOf(contact);
                    //if (index != -1)
                    {
                   //     this.contacts[index] = contact;
                        this.DeferredSave();
                        this.ContactSignal(contact, ContactEventTypes.CONTACT_UPDATED);
                    }
                }

                this.stateMonitorService.RemoveState("ContactService::ContactUpdate()");
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
#if !WINRT
            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.stateMonitorService.AddState("ContactService::ContactDelete()", "Deleting Contact...");

                    if (this.xcapService.ContactDelete(contact))
                    {
                        this.manager.Dispatcher.Invoke((System.Threading.ThreadStart)delegate
                        {
                            lock (this.contacts)
                            {
                                this.contacts.Remove(contact);
                            }
                        }, null);

                        this.ContactSignal(contact, ContactEventTypes.CONTACT_REMOVED);
                    }
                    else
                    {
                        this.screenService.SetProgressInfo("Failed to delete contact");
                    }

                    this.stateMonitorService.RemoveState("ContactService::ContactDelete()");
                })
                .Start();
            }
            else
#endif
            {
                this.stateMonitorService.AddState("ContactService::ContactDelete()", "Deleting Contact...");

                this.saveContacts = true;
                lock (this.contacts)
                {
                    this.contacts.Remove(contact);
                }

                this.ContactSignal(contact, ContactEventTypes.CONTACT_REMOVED);

                this.DeferredSave();

                this.stateMonitorService.RemoveState("ContactService::ContactDelete()");
            }

            return true;
        }

        public bool ContactAuthorize(Contact contact, BogheXdm.Authorization authorization)
        {
#if !WINRT
            if (this.sipService.IsXcapEnabled)
            {
                lock (this.groups)
                {
                    Group group = this.groups.FirstOrDefault(x => x.Authorization == authorization);
                    if (group == null)
                    {
                        LOG.Error("Failed to find a group matching this authorization");
                    }
                    else if (!String.Equals(contact.GroupName, group.Name))
                    {
                        Contact clone = contact.Clone() as Contact; // Clone() to avoid triggering OnPropertyChanged() before the end of the event
                        clone.GroupName = group.Name; // update group
                        String prevGroupName = contact.GroupName;
                        if (this.ContactUpdate(clone, prevGroupName))
                        {
                            // Trigger OnCollectionChanged()
                            lock (this.contacts)
                            {
                                int index = this.contacts.IndexOf(contact);
                                if (index != -1)
                                {
                                    this.contacts[index] = clone;
                                }
                                else
                                {
                                    this.contacts.Add(clone);
                                }
                            }
                            this.ContactSignal(contact, ContactEventTypes.CONTACT_UPDATED);
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                return true;
            }
            else
#endif
            {
                LOG.Error("Must enable XCAP storage to change authorizations");
                return false;
            }
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

#if !WINRT
            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.stateMonitorService.AddState("ContactService::GroupAdd()", "Adding new Group...");

                    if (this.xcapService.GroupAdd(group))
                    {
                        this.manager.Dispatcher.Invoke((System.Threading.ThreadStart)delegate
                        {
                            lock (this.groups)
                            {
                                this.groups.Add(group);
                            }
                        }, null);

                        this.GroupSignal(group, ContactEventTypes.GROUP_ADDED);
                    }
                    else
                    {
                        this.screenService.SetProgressInfo("Failed to add new Group");
                    }

                    this.stateMonitorService.RemoveState("ContactService::GroupAdd()");
                })
                .Start();
            }
            else
#endif
            {
                this.stateMonitorService.AddState("ContactService::GroupAdd()", "Adding new Group...");

                this.saveGroups = true;
                lock (this.groups)
                {
                    this.groups.Add(group);
                }

                this.GroupSignal(group, ContactEventTypes.GROUP_ADDED);

                this.DeferredSave();

                this.stateMonitorService.RemoveState("ContactService::GroupAdd()");
            }


            return true;
        }

        public bool GroupUpdate(Group group)
        {
            if (group == null)
            {
                LOG.Error("Null Group");
                return false;
            }
#if !WINRT
            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.stateMonitorService.AddState("ContactService::GroupUpdate()", "Updating Group...");

                    if (this.xcapService.GroupUpdate(group))
                    {
                        this.GroupSignal(group, ContactEventTypes.GROUP_UPDATED);
                    }
                    else
                    {
                        this.screenService.SetProgressInfo("Failed to update group");
                    }

                    this.stateMonitorService.RemoveState("ContactService::GroupUpdate()");
                })
                .Start();
            }
            else
#endif
            {
                this.stateMonitorService.AddState("ContactService::GroupUpdate()", "Updating Group...");

                this.saveContacts = true;
                this.saveGroups = true;                
                
                this.DeferredSave();
                this.GroupSignal(group, ContactEventTypes.GROUP_UPDATED);

                this.stateMonitorService.RemoveState("ContactService::GroupUpdate()");
            }

            return true;
        }

        public bool GroupDelete(Group group)
        {
            if (group == null)
            {
                LOG.Error("Null Group");
                return false;
            }
#if !WINRT
            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.stateMonitorService.AddState("ContactService::GroupDelete()", "Deleting Contact...");

                    if (this.xcapService.GroupDelete(group))
                    {
                        this.manager.Dispatcher.Invoke((System.Threading.ThreadStart)delegate
                        {
                            lock (this.contacts)
                            {
                                this.contacts.RemoveAll(c => String.Equals(c.GroupName, group.Name));
                            }
                            lock (this.groups)
                            {
                                this.groups.Remove(group);
                            }
                        }, null);

                        this.GroupSignal(group, ContactEventTypes.GROUP_REMOVED);
                    }
                    else
                    {
                        this.screenService.SetProgressInfo("Failed to delete group");
                    }

                    this.stateMonitorService.RemoveState("ContactService::GroupDelete()");
                })
                .Start();
            }
            else
#endif
            {
                this.stateMonitorService.AddState("ContactService::GroupDelete()", "Deleting group...");

                this.saveContacts = true;
                this.saveGroups = true;
                lock (this.contacts)
                {
                    this.contacts.RemoveAll(c => String.Equals(c.GroupName, group.Name));
                }
                lock (this.groups)
                {
                    this.groups.Remove(group);
                }

                this.GroupSignal(group, ContactEventTypes.GROUP_REMOVED);

                this.DeferredSave();

                this.stateMonitorService.RemoveState("ContactService::GroupDelete()");
            }

            return true;
        }

        public bool GroupAuthorize(Group group, BogheXdm.Authorization authorization)
        {
#if !WINRT
            if (this.sipService.IsXcapEnabled)
            {
                new Thread(delegate()
                {
                    this.xcapService.GroupAuthorize(group, authorization);
                }).Start();

                return true;
            }
            else
#endif
            {
                LOG.Error("Must enable XCAP storage to change authorizations");
                return false;
            }
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

        private void ContactSignal(Contact contact, ContactEventTypes eventType)
        {
            ContactEventArgs eargs = new ContactEventArgs(eventType);
            eargs.AddExtra(ContactEventArgs.EXTRA_CONTACT, contact);
            EventHandlerTrigger.TriggerEvent<ContactEventArgs>(this.onContactEvent, this, eargs);
        }

        private void GroupSignal(Group group, ContactEventTypes eventType)
        {
            ContactEventArgs eargs = new ContactEventArgs(eventType);
            eargs.AddExtra(ContactEventArgs.EXTRA_GROUP, group);
            EventHandlerTrigger.TriggerEvent<ContactEventArgs>(this.onContactEvent, this, eargs);
        }

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
#if !WINRT
                        if (this.sipService.IsXcapEnabled)
                        {
                            this.xcapService.UnPrepare();
                        }
                        else
#endif
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
