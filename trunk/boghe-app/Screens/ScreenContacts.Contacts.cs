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
using System.Windows.Data;
using System.Windows.Media;

namespace BogheApp.Screens
{
    partial class ScreenContacts
    {
        private void contactService_onContactEvent(object sender, ContactEventArgs e)
        {
            if (e.Type != ContactEventTypes.RESET)
            {
                return;
            }

            if (this.Dispatcher.Thread != Thread.CurrentThread)
            {
                this.Dispatcher.BeginInvoke(System.Windows.Threading.DispatcherPriority.Normal,
                        new EventHandler<ContactEventArgs>(this.contactService_onContactEvent), sender, new object[] { e });
                return;
            }

            this.UpdateSource();
        }

        private void UpdateSource()
        {
            this.listBox.ItemsSource = this.contactService.Contacts;
            this.contactsView = CollectionViewSource.GetDefaultView(this.listBox.ItemsSource);
            (this.contactsView as ListCollectionView).CustomSort = new ContactsSorter();
            if (this.contactsView.GroupDescriptions.Count == 0)
            {
                this.contactsView.GroupDescriptions.Add(new PropertyGroupDescription("GroupName"));
            }

            IList<FilterItem> filterItems = new List<FilterItem>();
            filterItems.Add(new FilterItem(null, "All Contacts", Colors.Green));
            foreach(Group g in this.contactService.Groups)
            {
                Color color = Colors.Green;
                switch (g.Authorization)
                {
                    case BogheXdm.Authorization.PoliteBlocked:
                    case BogheXdm.Authorization.Revoked:
                    case BogheXdm.Authorization.Blocked:
                        color = Colors.Red;
                        break;
                    case BogheXdm.Authorization.Pending:
                        color = Colors.Gainsboro;
                        break;
                    default:
                        break;
                }
                filterItems.Add(new FilterItem(g.Name, g.DisplayName, color));
            }

            this.comboBoxGroups.ItemsSource = filterItems;
            this.comboBoxGroups.SelectedIndex = 0;

            this.contactsView.Filter = delegate(object c)
            {
                if (this.comboBoxGroups.SelectedIndex < 0)
                {
                    return true;
                }

                Contact contact = c as Contact;
                FilterItem fItem = this.comboBoxGroups.SelectedItem as FilterItem;
                if (fItem == null || contact == null || String.IsNullOrEmpty(contact.GroupName))
                {
                    return false;
                }
                return (contact.DisplayName == null || contact.DisplayName.StartsWith(this.textBoxSearchCriteria.Text, StringComparison.InvariantCultureIgnoreCase)) && (fItem.Name == null || contact.GroupName.Equals(fItem.Name));
            };
        }
    }
}
