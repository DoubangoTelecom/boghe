﻿/*
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
using log4net;
using BogheCore.Services;
using BogheCore.Model;
using BogheCore;
using BogheApp.Services.Impl;
using System.Threading;
using BogheCore.Sip.Events;
using BogheXdm.Generated.watcherinfo;
using System.IO;
using System.Xml.Serialization;
using BogheCore.Sip;

namespace BogheApp.Screens
{
    /// <summary>
    /// Interaction logic for ScreenWatchers.xaml
    /// </summary>
    public partial class ScreenWatchers : BaseScreen
    {
        private MyObservableCollection<WatcherInfo> watchers;

        public ScreenWatchers()
        {
            InitializeComponent();
        }

        public MyObservableCollection<WatcherInfo> Watchers
        {
            get { return this.watchers; }
            set 
            { 
                this.watchers = value;
                this.listBox.ItemsSource = this.watchers;
            }
        }
    }
}
