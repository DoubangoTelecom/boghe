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
using System.Windows.Shapes;
using BogheApp.Services.Impl;
using BogheApp.Screens;
using BogheControls;
using BogheApp.Services;
using BogheCore.Services;
using BogheControls.Utils;

/*
 * XAML Namespaces and Namespace Mapping for WPF XAML: http://msdn.microsoft.com/en-us/library/ms747086.aspx
 * Data Binding: http://msdn.microsoft.com/en-us/library/ms752347.aspx
 * Group Items: http://msdn.microsoft.com/en-us/library/ms754027.aspx
 * 
 * The 96 DPI Solution: http://www.charlespetzold.com/blog/2005/11/250723.html
 * */

namespace BogheApp
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private readonly IWin32ScreenService screenService;
        private readonly ISipService sipService;
        private readonly IConfigurationService configurationService;
        private readonly IContactService contactService;

        public MainWindow()
        {
            InitializeComponent();            

            // Initialize Screen Service
            this.screenService = Win32ServiceManager.SharedManager.ScreenService;
            this.screenService.SetTabControl(this.tabControl);
            this.screenService.SetProgressLabel(this.labelProgressInfo);
            
            // Initialize SIP Service
            this.sipService = Win32ServiceManager.SharedManager.SipService;
            this.sipService.onStackEvent += this.sipService_onStackEvent;
            this.sipService.onRegistrationEvent += this.sipService_onRegistrationEvent;
            
            // Configuration service
            this.configurationService = Win32ServiceManager.SharedManager.ConfigurationService;

            // Contact Service
            this.contactService = Win32ServiceManager.SharedManager.ContactService;

            // Hook Closeable items
            this.AddHandler(CloseableTabItem.CloseTabEvent, new RoutedEventHandler(this.CloseTab));
            
            // Show Authentication Screen
            //this.screenService.Show(ScreenType.Contacts);
            this.screenService.Show(ScreenType.Authentication);
        }

        private void CloseTab(object source, RoutedEventArgs args)
        {
            TabItem tabItem = args.Source as TabItem;
            if (tabItem != null && tabItem.Content != null)
            {
                BaseScreen screen = tabItem.Content as BaseScreen;
                if (screen != null)
                {
                    this.screenService.Hide(screen);
                }
            }
        }
    }
}
