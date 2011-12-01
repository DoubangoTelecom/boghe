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
using BogheCore.Utils;
using BogheCore.Model;
using BogheCore;
using BogheCore.Sip;
using BogheApp.embedded;

namespace BogheApp
{
    partial class MessagingWindow
    {
        private bool MsrpFailureReport
        {
            get
            {
                return this.configurationService.Get(Configuration.ConfFolder.RCS, Configuration.ConfEntry.MSRP_FAILURE, Configuration.DEFAULT_RCS_MSRP_FAILURE);
            }
        }

        private bool MsrpSuccessReport
        {
            get
            {
                return this.configurationService.Get(Configuration.ConfFolder.RCS, Configuration.ConfEntry.MSRP_SUCCESS, Configuration.DEFAULT_RCS_MSRP_SUCCESS);
            }
        }

        private bool MsrpOmaFinalDeliveryReport
        {
            get
            {
                return this.configurationService.Get(Configuration.ConfFolder.RCS, Configuration.ConfEntry.OMAFDR, Configuration.DEFAULT_RCS_OMAFDR);
            }
        }

        private MyMsrpSession CreateOutgoingSession(MediaType mediaType)
        {
            MyMsrpSession msrpSession = MyMsrpSession.CreateOutgoingSession(this.sipService.SipStack, mediaType, this.remotePartyUri);
            msrpSession.SuccessReport = this.MsrpSuccessReport;
            msrpSession.FailureReport = this.MsrpFailureReport;
            msrpSession.OmaFinalDeliveryReport = this.MsrpOmaFinalDeliveryReport;

            return msrpSession;
        }

        private void SendFile(String filePath)
        {
            MyMsrpSession msrpSession = this.CreateOutgoingSession(MediaType.FileTransfer);
            lock (this.fileTransferSessions)
            {
                this.fileTransferSessions.Add(msrpSession);
            }
            msrpSession.mOnMsrpEvent += this.FileTransfer_onMsrpEvent;

            HistoryFileTransferEvent @event = new HistoryFileTransferEvent(this.remotePartyUri, filePath);
            @event.Status = HistoryEvent.StatusType.Outgoing;
            @event.SipSessionId = msrpSession.Id;
            @event.MsrpSession = msrpSession;
            this.AddMessagingEvent(@event);

            msrpSession.SendFile(filePath);
        }

        private void InitializeView()
        {
            this.Title = String.Format("{0} {1}", Strings.Text_TalkingWith, UriUtils.GetDisplayName(this.remotePartyUri));
        }

        private void AddMessagingEvent(HistoryEvent @event)
        {
            this.historyDataSource.Add(@event);

            if (this.chatHistoryEvent != null)
            {
                this.chatHistoryEvent.Messages.Add(@event as HistoryShortMessageEvent);
            }
            else
            {
                switch (@event.MediaType)
                {
                    case BogheCore.MediaType.ShortMessage:
                    case BogheCore.MediaType.SMS:
                        this.historyService.AddEvent(@event);
                        break;
                }
            }

            if (@event.Status == HistoryEvent.StatusType.Incoming)
            {
                this.soundService.PlayNewEvent();
            }
        }
    }
}
