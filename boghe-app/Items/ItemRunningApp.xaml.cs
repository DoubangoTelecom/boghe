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
using System.Windows.Navigation;
using System.Windows.Shapes;
using BogheControls;
using BogheCore.Model;
using BogheControls.Utils;

namespace BogheApp.Items
{
    /// <summary>
    /// Interaction logic for ItemRunningApp.xaml
    /// </summary>
    public partial class ItemRunningApp : BaseItem<RunningApp>
    {
        public ItemRunningApp()
        {
            InitializeComponent();

            this.ValueLoaded += new EventHandler(ItemRunningApp_ValueLoaded);
        }

        void ItemRunningApp_ValueLoaded(object sender, EventArgs e)
        {
            labelDescription.Text = this.Value.Description;
            imageIcon.Source = MyImageConverter.FromImage(this.Value.Icon);
            labelDescription.FontWeight = (this.Value.hWnd == IntPtr.Zero) ? FontWeights.Bold : FontWeights.Normal;
        }
    }
}
