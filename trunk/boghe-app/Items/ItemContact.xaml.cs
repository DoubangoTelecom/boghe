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
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using BogheCore.Model;
using BogheControls;
using System.ComponentModel;
using BogheCore.Services;
using BogheApp.Services.Impl;
using BogheApp.Screens;

namespace BogheApp.Items
{
    /// <summary>
    /// Interaction logic for ItemContact.xaml
    /// </summary>
    public partial class ItemContact : BaseItem<Contact>
    {
        private readonly IContactService contactService;
        private Contact contactValue;

        public ItemContact()
        {
            InitializeComponent();

            this.contactService = Win32ServiceManager.SharedManager.ContactService;

            this.ValueLoaded += this.ItemContact_ValueLoaded;
        }

        public void ItemContact_ValueLoaded(object sender, EventArgs e)
        {
            this.contactValue = this.Value;
            if (this.contactValue == null)
            {
                return;
            }

            String uriString = String.IsNullOrEmpty(this.contactValue.UriString) ? "sip:(null)@(null)" : this.contactValue.UriString;

            this.labelDisplayName.Content = String.IsNullOrEmpty(this.contactValue.DisplayName) ? uriString : this.contactValue.DisplayName;
            this.labelUriString.Content = String.IsNullOrEmpty(this.contactValue.UriString) ? uriString : this.contactValue.UriString;
        }

        private void ctxMenu_Edit_Click(object sender, RoutedEventArgs e)
        {
            if (this.contactValue == null)
            {
                return;
            }
            ScreenContactEdit screenContactEdit = new ScreenContactEdit(this.contactValue);
            Win32ServiceManager.SharedManager.Win32ScreenService.Show(screenContactEdit);
        }

        private void ctxMenu_Delete_Click(object sender, RoutedEventArgs e)
        {
            if (this.contactValue == null)
            {
                return;
            }

            this.contactService.ContactDelete(this.contactValue);
        }

        private void ctxMenu_Authorizations_Click(object sender, RoutedEventArgs e)
        {
            if (this.contactValue == null)
            {
                return;
            }
            MenuItem menuItem = e.OriginalSource as MenuItem;
            if (menuItem == null) return;

            if (menuItem == this.ctxMenu_Authorizations_Allow)
            {
                this.contactService.ContactAuthorize(this.contactValue, BogheXdm.Authorization.Allowed);
            }
            else if (menuItem == this.ctxMenu_Authorizations_Block)
            {
                this.contactService.ContactAuthorize(this.contactValue, BogheXdm.Authorization.Blocked);
            }
            else if (menuItem == this.ctxMenu_Authorizations_Revoke)
            {
                this.contactService.ContactAuthorize(this.contactValue, BogheXdm.Authorization.Revoked);
            }
        }

        private void ctxMenu_Voice_Click(object sender, RoutedEventArgs e)
        {
            if (this.contactValue == null || String.IsNullOrEmpty(this.contactValue.UriString))
            {
                return;
            }

            SessionWindow.MakeAudioCall(this.contactValue.UriString);
        }

        private void ctxMenu_Visio_Click(object sender, RoutedEventArgs e)
        {
            if (this.contactValue == null || String.IsNullOrEmpty(this.contactValue.UriString))
            {
                return;
            }

            SessionWindow.MakeVideoCall(this.contactValue.UriString);
        }

        private void ctxMenu_SendFile_Click(object sender, RoutedEventArgs e)
        {
            if (this.contactValue == null || String.IsNullOrEmpty(this.contactValue.UriString))
            {
                return;
            }

            MessagingWindow.SendFile(this.contactValue.UriString, null);
        }

        private void ctxMenu_Chat_Click(object sender, RoutedEventArgs e)
        {
            if (this.contactValue == null || String.IsNullOrEmpty(this.contactValue.UriString))
            {
                return;
            }

            MessagingWindow.StartChat(this.contactValue.UriString);
        }

        private void ctxMenu_SMS_Click(object sender, RoutedEventArgs e)
        {
            if (this.contactValue == null || String.IsNullOrEmpty(this.contactValue.UriString))
            {
                return;
            }

            MessagingWindow.SendSMS(this.contactValue.UriString);
        }

        private void ctxMenu_Conference_Click(object sender, RoutedEventArgs e)
        {
            if (this.contactValue == null || String.IsNullOrEmpty(this.contactValue.UriString))
            {
                return;
            }
        }             
    }
}
