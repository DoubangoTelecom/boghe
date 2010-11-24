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
using org.doubango.tinyWRAP;
using BogheCore.Utils;
using BogheCore.Sip;

namespace BogheApp
{
    partial class SessionWindow
    {
        private void AttachDisplays()
        {
            if (this.AVSession == null || this.AVSession.MediaSessionMgr == null)
            {
                return;
            }

            lock (this.AVSession)
            {
                // Remote
                this.AVSession.MediaSessionMgr.consumerSetInt64(twrap_media_type_t.twrap_media_video, "remote-hwnd", this.videoDisplayRemote.Handle.ToInt64());
                this.AVSession.MediaSessionMgr.producerSetInt64(twrap_media_type_t.twrap_media_video, "local-hwnd", this.videoDisplayLocal.Handle.ToInt64());

                if (this.AVSession.IsConnected)
                {
                    this.videoDisplayLocal.Visibility = System.Windows.Visibility.Visible;
                    this.videoDisplayRemote.Visibility = System.Windows.Visibility.Visible;
                }
            }
        }

        private void InitializeView()
        {
            if (this.AVSession != null)
            {
                lock (this.AVSession)
                {
                    this.Title = String.Format("Talking with {0}", this.AVSession.RemotePartyDisplayName);
                    this.UpdateControls();
                }
            }
        }

        private void UpdateControls()
        {
            if (this.AVSession != null)
            {
                lock (this.AVSession)
                {
                    switch (this.AVSession.State)
                    {
                        case MyInviteSession.InviteState.INCOMING:
                            this.labelInfo.Content = String.Format("Incoming call from {0}", this.AVSession.RemotePartyDisplayName);
                            this.buttonHangUp.IsEnabled = true;
                            this.buttonCallOrAnswer.IsEnabled = true;
                            this.buttonCallOrAnswer.Tag = "Answer";
                            this.buttonCallOrAnswer.Content = "Answer";
                            break;

                        case MyInviteSession.InviteState.INPROGRESS:
                            this.buttonHangUp.IsEnabled = true;
                            this.buttonCallOrAnswer.IsEnabled = false;
                            this.buttonCallOrAnswer.Tag = "Call";
                            this.buttonCallOrAnswer.Content = "Call";
                            break;

                        case MyInviteSession.InviteState.INCALL:
                            this.buttonHangUp.IsEnabled = true;
                            this.buttonCallOrAnswer.IsEnabled = false;
                            this.buttonCallOrAnswer.Tag = "Call";
                            this.buttonCallOrAnswer.Content = "Call";
                            break;

                        case MyInviteSession.InviteState.TERMINATED:
                        case MyInviteSession.InviteState.TERMINATING:
                            this.buttonHangUp.IsEnabled = false;
                            this.buttonCallOrAnswer.IsEnabled = true;
                            this.buttonCallOrAnswer.Tag = "Call";
                            this.buttonCallOrAnswer.Content = "Call";
                            break;
                    }
                }
            }
        }
    }
}
