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
using BogheControls;
using BogheCore.Model;
using BogheCore.Services;
using BogheApp.Services.Impl;
using BogheApp.Services;

namespace BogheApp.Screens
{
    /// <summary>
    /// Interaction logic for ScreenContactEdit.xaml
    /// </summary>
    public partial class ScreenContactEdit : BaseScreen
    {
        private Contact contact;
        private bool editMode;

        private readonly IContactService contactService;
        private readonly IWin32ScreenService screenService;

        public ScreenContactEdit()
        {
            InitializeComponent();

            this.contactService = Win32ServiceManager.SharedManager.ContactService;
            this.screenService = Win32ServiceManager.SharedManager.ScreenService;
        }

        public Contact Contact
        {
            get { return this.contact; }
            set { 
                this.contact = value;
                if (value != null)
                {
                    this.textBoxSipUri.Text = value.UriString ?? value.UriString;
                    this.textBoxDisplayName.Text = value.DisplayName ?? value.DisplayName;
                }
            }
        }

        public bool EditMode
        {
            get { return this.editMode; }
            set { 
                this.editMode = value;
                this.labelTitle.Content = value ? "Edit Contact" : "Add Contact";
            }
        }

        private void buttonSave_Click(object sender, RoutedEventArgs e)
        {
            if (this.comboBoxGroup.SelectedIndex == -1)
            {
                MessageBox.Show("You must select a group", "Invalid Group");
                return;
            }

            this.contactService.ContactAdd(this.Contact);
        }

        private void buttonCancel_Click(object sender, RoutedEventArgs e)
        {
            this.screenService.Hide(this);
        }
    }
}
