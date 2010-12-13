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
using BogheCore.Sip;
using BogheCore;

namespace BogheApp
{
    partial class SessionWindow
    {
        private void MenuItemCall_Click(object sender, RoutedEventArgs e)
        {
            MenuItem menuItem = e.OriginalSource as MenuItem;
            if (menuItem == null) return;

            if (menuItem == this.MenuItemCall_MakeAudioCall)
            {
                if (this.AVSession == null)
                {
                    this.AVSession = MyAVSession.CreateOutgoingSession(this.sipService.SipStack, MediaType.Audio);
                    this.AVSession.MakeCall(this.remotePartyUri);
                }
                else
                {
                    LOG.Error("Already in Call");
                }
            }
            if (menuItem == this.MenuItemCall_MakeVideoCall)
            {
                if (this.AVSession == null)
                {
                    this.AVSession = MyAVSession.CreateOutgoingSession(this.sipService.SipStack, MediaType.AudioVideo);
                    this.AVSession.MakeCall(this.remotePartyUri);
                }
                else
                {
                    LOG.Error("Already in Call");
                }
            }
            if (menuItem == this.MenuItemCall_MakeTransfer)
            {
            }
            else if (menuItem == this.MenuItemCall_HoldResume)
            {
                if (this.AVSession != null && this.AVSession.IsConnected)
                {
                    lock (this.AVSession)
                    {
                        if (this.IsHeld)
                        {
                            this.AVSession.ResumeCall();
                        }
                        else
                        {
                            this.AVSession.HoldCall();
                        }
                    }
                }
                else
                {
                    LOG.Error("Invalid State");
                }
            }
            else if (menuItem == this.MenuItemCall_HangUp)
            {
                if (this.AVSession != null)
                {
                    lock (this.AVSession)
                    {
                        this.AVSession.HangUpCall();
                    }
                }
                else
                {
                    LOG.Error("Invalid State");
                }
            }
        }

        private void MenuItemCS_Click(object sender, RoutedEventArgs e)
        {
            MenuItem menuItem = e.OriginalSource as MenuItem;
            if (menuItem == null) return;

            if (menuItem == this.MenuItemCS_SendFile)
            {
                Microsoft.Win32.OpenFileDialog fileDialog = new Microsoft.Win32.OpenFileDialog();
                fileDialog.Multiselect = false;
                Nullable<bool> result = fileDialog.ShowDialog();
                if (result.HasValue && result.Value)
                {
                    this.SendFile(fileDialog.FileName);
                }
            }
            else if (menuItem == this.MenuItemCS_ShareImage)
            {
            }
            else if (menuItem == this.MenuItemCS_ShareVideo)
            {
            }
        }
    }
}
