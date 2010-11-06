/*
* Copyright (C) 2010 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango.org>
*	
* This file is part of Boghe Project (http://code.google.com/p/boghe)
*
* imsdroid is free software: you can redistribute it and/or modify it under the terms of 
* the GNU General Public License as published by the Free Software Foundation, either version 3 
* of the License, or (at your option) any later version.
*	
* imsdroid is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
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

/*
 * XAML Namespaces and Namespace Mapping for WPF XAML: http://msdn.microsoft.com/en-us/library/ms747086.aspx
 * 
 * */

namespace BogheApp
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private readonly IScreenService screenService;

        public MainWindow()
        {
            InitializeComponent();

            if (!Win32ServiceManager.SharedManager.Start())
            {
                MessageBox.Show("Failed to start service manager");
                App.Current.Shutdown();
            }

            // Initialize Screen Service
            this.screenService = Win32ServiceManager.SharedManager.ScreenService;
            this.screenService.setTabControl(this.tabControl);

            // Hook Closeable items
            this.AddHandler(CloseableTabItem.CloseTabEvent, new RoutedEventHandler(this.CloseTab));
            
            // Show Authentication Screen
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
                    this.screenService.Hide((ScreenType)screen.BaseScreenType);
                }
            }
        }
        
    }
}
