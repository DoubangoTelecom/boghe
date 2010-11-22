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
using BogheControls.Utils;

namespace BogheApp.Items
{
    /// <summary>
    /// Interaction logic for ItemHistoryAVCallEvent.xaml
    /// </summary>
    public partial class ItemHistoryAVCallEvent : BaseItem<HistoryAVCallEvent>
    {
        public ItemHistoryAVCallEvent()
        {
            InitializeComponent();

            this.ValueLoaded += this.ItemHistoryAVCallEvent_ValueLoaded;
        }

        private void ItemHistoryAVCallEvent_ValueLoaded(object sender, EventArgs e)
        {
            HistoryAVCallEvent @event = this.Value;

            this.labelDisplayName.Content = String.IsNullOrEmpty(@event.RemoteParty) ? "(null)" : @event.RemoteParty;
            this.labelDescription.Content = String.Format("{0} {1} ({2})", @event.StartTime.ToLongDateString(), @event.StartTime.ToLongTimeString(), "00");
            switch (@event.Status)
            {
                case HistoryEvent.StatusType.Incoming:
                    this.imageIcon.Source = MyImageConverter.FromBitmap(Properties.Resources.call_incoming_45);
                    break;
                case HistoryEvent.StatusType.Outgoing:
                    this.imageIcon.Source = MyImageConverter.FromBitmap(Properties.Resources.call_outgoing_45);
                    break;
                default:
                    this.imageIcon.Source = MyImageConverter.FromBitmap(Properties.Resources.call_missed_45);
                    break;
            }
        }
    }
}
