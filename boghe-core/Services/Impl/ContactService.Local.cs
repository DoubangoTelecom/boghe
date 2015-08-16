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
using System.IO;
using BogheCore.Model;
using BogheCore.Events;
using System.Collections.ObjectModel;
using System.IO.IsolatedStorage;

namespace BogheCore.Services.Impl
{
    partial class ContactService
    {
        private void DeferredSave()
        {
            this.deferredSaveTimer.Stop();
            this.deferredSaveTimer.Start();
        }

        private bool ImmediateSave()
        {
            bool ret = false;

            if (this.saveContacts)
            {
                lock (this.contacts)
                {
                    ret &= this.ImmediateSave(true);
                }
                this.saveContacts = false;
            }
            if (this.saveGroups)
            {
                lock (this.groups)
                {
                    ret &= this.ImmediateSave(false);
                }
                this.saveGroups = false;
            }

            return ret;
        }

        private bool ImmediateSave(bool isSavingContacts)
        {
            String fileName = this.manager.BuildStoragePath(
                isSavingContacts ? ContactService.CONTACTS_FILE_NAME : ContactService.GROUPS_FILE_NAME);
            
            LOG.Debug(String.Format("Saving to {0}...", fileName));
            try
            {
#if WINRT
                using (StreamWriter writer = new StreamWriter(new IsolatedStorageFileStream(fileName, FileMode.OpenOrCreate, IsolatedStorageFile.GetUserStoreForApplication())))
#else
                using (StreamWriter writer = new StreamWriter(fileName))
#endif
                {
                    if (isSavingContacts)
                    {
                        this.xmlContactSerializer.Serialize(writer, this.contacts);
                    }
                    else
                    {
                        this.xmlGroupSerializer.Serialize(writer, this.groups);
                    }

                    writer.Flush();
                    writer.Close();
                }
                this.saveContacts = false;

                return true;
            }
            catch (IOException ioe)
            {
                LOG.Debug(String.Format("Failed to save to {0}...", fileName), ioe);
            }
            
            return false;
        }

        private void ImmediateLoad()
        {
            this.loading = true;

            lock (this.groups)
            {
                this.ImmediateLoad(false);
            }
            lock (this.contacts)
            {
                this.ImmediateLoad(true);
            }

            this.loading = false;

            EventHandlerTrigger.TriggerEvent<ContactEventArgs>(this.onContactEvent, this, new ContactEventArgs(ContactEventTypes.RESET));
        }

        private void ImmediateLoad(bool isLoadingContacts)
        {
            String fileName = this.manager.BuildStoragePath
                (isLoadingContacts ? ContactService.CONTACTS_FILE_NAME : ContactService.GROUPS_FILE_NAME);

            LOG.Debug(String.Format("Loading from {0}", fileName));

            try
            {
#if WINRT
                if (!IsolatedStorageFile.GetUserStoreForApplication().FileExists(fileName))
#else
                if (!File.Exists(fileName))
#endif
                {
                    LOG.Debug(String.Format("{0} doesn't exist, trying to create new one", fileName));
#if WINRT
                    IsolatedStorageFile.GetUserStoreForApplication().CreateFile(fileName).Close();
#else
                    File.Create(fileName).Close();
#endif

                    // create xml declaration
                    if (isLoadingContacts)
                    {
                        this.contacts = new MyObservableCollection<Contact>(true);
                    }
                    else
                    {
                        this.groups = new MyObservableCollection<Group>();
                    }
                    this.ImmediateSave(isLoadingContacts);
                }

#if WINRT
                using (StreamReader reader = new StreamReader(new IsolatedStorageFileStream(fileName, FileMode.OpenOrCreate, IsolatedStorageFile.GetUserStoreForApplication())))
#else
                using (StreamReader reader = new StreamReader(fileName))
#endif
                {
                    try
                    {
                        if (isLoadingContacts)
                        {
                            ObservableCollection<Contact> _contacts = this.xmlContactSerializer.Deserialize(reader) as ObservableCollection<Contact>;
                            this.contacts = new MyObservableCollection<Contact>(true);
                            this.contacts.AddRange(_contacts);// Force tracking
                        }
                        else
                        {
                            this.groups = this.xmlGroupSerializer.Deserialize(reader) as MyObservableCollection<Group>;
                            if (this.groups.Count == 0)
                            {
                                Group defaultGroup = new Group("Default", "My Contacts");
                                defaultGroup.Authorization = BogheXdm.Authorization.Allowed;
                                this.groups.Add(defaultGroup);
                            }
                        }
                    }
                    catch (InvalidOperationException ie)
                    {
                        LOG.Error("Failed to load contacts", ie);

                        reader.Close();
                        File.Delete(fileName);
                    }
                }
            }
            catch (Exception e)
            {
                LOG.Error("Failed to load contacts", e);
            }
        }
    }
}
