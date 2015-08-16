/*
* Boghe IMS/RCS Client - Copyright (C) 2014 Mamadou DIOP.
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
using BogheCore;
using BogheCore.Model;
using BogheControls.Utils;
using BogheCore.Events;

namespace BogheApp
{
    /// <summary>
    /// Interaction logic for RunningAppsWindow.xaml
    /// </summary>
    public partial class RunningAppsWindow : Window
    {
        readonly MyObservableCollection<RunningApp> m_RunningApps;
        public event EventHandler<EventArgs> onAppSelectedEvent;

        public RunningAppsWindow()
        {
            InitializeComponent();

            m_RunningApps = new MyObservableCollection<RunningApp>(true);
            listView.ItemsSource = m_RunningApps;
            listView.SelectionChanged += new SelectionChangedEventHandler(listView_SelectionChanged);
        }

        void listView_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            EventHandlerTrigger.TriggerEvent<EventArgs>(onAppSelectedEvent, m_RunningApps[listView.SelectedIndex], EventArgs.Empty);
            this.Close();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            m_RunningApps.Clear();
            IDictionary<IntPtr, String> runningApps = ScreenCast.EnumWindows();
            foreach (var item in runningApps)
            {
                m_RunningApps.Add(new RunningApp(item.Key, item.Value, ScreenCast.GetSmallWindowIcon(item.Key)));
            }
            m_RunningApps.Add(new RunningApp(IntPtr.Zero, "Entire screen", null));
        }
    }
}
