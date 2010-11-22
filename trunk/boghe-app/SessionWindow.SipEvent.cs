using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using BogheCore.Sip.Events;
using BogheCore.Model;

namespace BogheApp
{
    partial class SessionWindow
    {
        private void sipService_onInviteEvent(object sender, InviteEventArgs e)
        {
            if (this.AVSession == null || this.AVSession.Id != e.SessionId)
            {
                return;
            }

            if (this.Dispatcher.Thread != Thread.CurrentThread)
            {
                this.Dispatcher.BeginInvoke(System.Windows.Threading.DispatcherPriority.Normal,
                        new EventHandler<InviteEventArgs>(this.sipService_onInviteEvent), sender, new object[] { e });
                return;
            }

            switch (e.Type)
            {
                case InviteEventTypes.INCOMING:
                    this.labelInfo.Content = String.Format("Incoming call from {0}", "John Doe");
                    this.avHistoryEvent = new HistoryAVCallEvent(this.AVSession.MediaType != BogheCore.MediaType.Audio, this.AVSession.RemotePartyUri);
                    this.avHistoryEvent.Status = HistoryEvent.StatusType.Missed;
                    break;

                case InviteEventTypes.INPROGRESS:
                    this.labelInfo.Content = "Call In Progress...";
                    this.avHistoryEvent = new HistoryAVCallEvent(this.AVSession.MediaType != BogheCore.MediaType.Audio, this.AVSession.RemotePartyUri);
                    this.avHistoryEvent.Status = HistoryEvent.StatusType.Outgoing;
                    break;

                case InviteEventTypes.RINGING:
                    this.labelInfo.Content = "Ringing";
                    break;

                case InviteEventTypes.EARLY_MEDIA:
                    this.labelInfo.Content = "Early Media Started";
                    break;

                case InviteEventTypes.CONNECTED:
                    this.labelInfo.Content = "In Call";
                    //this.startTime = DateTime.Now;
                    //this.endTime = this.startTime;
                    //this.timerCall.Enabled = true;
                    if (this.avHistoryEvent != null)
                    {
                        if (this.avHistoryEvent.Status == HistoryEvent.StatusType.Missed)
                        {
                            this.avHistoryEvent.Status = HistoryEvent.StatusType.Incoming;
                        }
                        this.avHistoryEvent.StartTime = DateTime.Now;
                        this.avHistoryEvent.EndTime = this.avHistoryEvent.StartTime;
                    }
                    break;

                case InviteEventTypes.DISCONNECTED:
                case InviteEventTypes.TERMWAIT:
                    this.labelInfo.Content = e.Phrase;
                    this.timerCall.Enabled = false;

                    this.avHistoryEvent.EndTime = this.avHistoryEvent.StartTime;
                    this.historyService.AddEvent(this.avHistoryEvent);
                    break;

                case InviteEventTypes.LOCAL_HOLD_OK:
                    this.labelInfo.Content = "Call placed on hold";
                    break;

                case InviteEventTypes.LOCAL_HOLD_NOK:
                    this.labelInfo.Content = "Failed to place remote party on hold";
                    break;

                case InviteEventTypes.LOCAL_RESUME_OK:
                    this.labelInfo.Content = "Call taken off hold";
                    break;

                case InviteEventTypes.LOCAL_RESUME_NOK:
                    this.labelInfo.Content = "Failed to unhold call";
                    break;

                case InviteEventTypes.REMOTE_HOLD:
                    this.labelInfo.Content = "Placed on hold by remote party";
                    break;

                case InviteEventTypes.REMOTE_RESUME:
                    this.labelInfo.Content = "Taken off hold by remote party";
                    break;                    
            }
        }
    }
}
