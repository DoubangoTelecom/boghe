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
using BogheCore.Events;
using BogheCore.Model;
using System.ComponentModel;
using System.Threading;
using BogheCore;

namespace BogheApp.Screens
{
    partial class ScreenContacts
    {
        private void contactService_onContactEvent(object sender, ContactEventArgs e)
        {
            if (this.Dispatcher.Thread != Thread.CurrentThread)
            {
                this.Dispatcher.BeginInvoke(System.Windows.Threading.DispatcherPriority.Normal,
                        new EventHandler<ContactEventArgs>(this.contactService_onContactEvent), sender, new object[] { e });
                return;
            }

            switch (e.Type)
            {
                case ContactEventTypes.RESET:
                    MyObservableCollection<Group> _groups = this.contactService.Groups;
                    MyObservableCollection<Contact> _contacts = this.contactService.Contacts;
                    MyObservableCollection<BaseObject> _mashup = new MyObservableCollection<BaseObject>();

                    this.comboBoxGroups.ItemsSource = _groups;

                    foreach (Group group in _groups)
                    {
                        _mashup.Add(group);
                        List<Contact> groupContacts = _contacts.FindAll(delegate(Contact contact)
                        {
                            if (contact == null || String.IsNullOrEmpty(contact.GroupName))
                            {
                                return false;
                            }
                            return contact.GroupName.Equals(group.Name);
                        });
                        if (groupContacts != null)
                        {
                            foreach (Contact contact in groupContacts)
                            {
                                _mashup.Add(contact);
                            }
                        }
                    }

                    this.contacts.Clear();
                    this.contacts.AddRange(_mashup);
                    break;                
            }
        }
    }
}
