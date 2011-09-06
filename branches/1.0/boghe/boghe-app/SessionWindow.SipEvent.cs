using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using BogheCore.Sip.Events;
using BogheCore.Model;
using BogheCore;

namespace BogheApp
{
    partial class SessionWindow
    {
        private void sipService_onInviteEvent(object sender, InviteEventArgs e)
        {
            if (this.AVSession == null || this.AVSession.Id != e.SessionId)
            {
                /* Messaging */
                if (e.Type == InviteEventTypes.DISCONNECTED)
                {
                    if (this.historyDataSource.Any(x => x.SipSessionId == e.SessionId))
                    {
                        this.Dispatcher.Invoke((System.Threading.ThreadStart)delegate
                        {
                            HistoryEvent @event = this.historyDataSource.FirstOrDefault(x => x.SipSessionId == e.SessionId);
                            if (@event != null)
                            {
                                this.historyService.AddEvent(@event);
                            }
                        }, null);
                    }
                    else if (this.ChatSession != null && this.ChatSession.Id == e.SessionId)
                    {
                        this.Dispatcher.Invoke((System.Threading.ThreadStart)delegate
                        {
                            this.ChatSession = null;
                        });
                    }
                }
                return;
            }

            /* Audio/Video */

            if (this.Dispatcher.Thread != Thread.CurrentThread)
            {
                this.Dispatcher.BeginInvoke(System.Windows.Threading.DispatcherPriority.Normal,
                        new EventHandler<InviteEventArgs>(this.sipService_onInviteEvent), sender, new object[] { e });
                return;
            }

            this.UpdateControls();

            switch (e.Type)
            {
                case InviteEventTypes.INCOMING:
                    this.labelInfo.Content = String.Format("Incoming call from {0}", this.AVSession.RemotePartyDisplayName);
                    this.avHistoryEvent = new HistoryAVCallEvent(this.AVSession.MediaType != BogheCore.MediaType.Audio, this.AVSession.RemotePartyUri);
                    this.avHistoryEvent.Status = HistoryEvent.StatusType.Missed;
                    break;

                case InviteEventTypes.INPROGRESS:
                    // History Event
                    this.labelInfo.Content = "Call In Progress...";
                    bool isVideo = (this.AVSession.MediaType == MediaType.AudioVideo || this.AVSession.MediaType == MediaType.Video);
                    this.avHistoryEvent = new HistoryAVCallEvent(isVideo, this.AVSession.RemotePartyUri);
                    this.avHistoryEvent.Status = HistoryEvent.StatusType.Outgoing;
                    // Video Displays
                    if (isVideo)
                    {
                        this.AttachDisplays();
                    }
                    
                    break;

                case InviteEventTypes.RINGING:
                    this.labelInfo.Content = "Ringing";
                    this.soundService.PlayRingBackTone();
                    break;

                case InviteEventTypes.EARLY_MEDIA:
                    this.labelInfo.Content = "Early Media Started";
                    this.soundService.StopRingBackTone();
                    this.soundService.StopRingTone();
                    break;

                case InviteEventTypes.CONNECTED:
                    this.labelInfo.Content = "In Call";
                    this.soundService.StopRingBackTone();
                    this.soundService.StopRingTone();

                    this.videoDisplayLocal.Visibility = System.Windows.Visibility.Visible;
                    this.videoDisplayRemote.Visibility = System.Windows.Visibility.Visible;
                    
                    this.timerCall.Start();
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
                    this.labelInfo.Content = e.Type == InviteEventTypes.TERMWAIT ? "Call Terminated" : e.Phrase;
                    this.timerCall.Stop();
                    this.soundService.StopRingBackTone();
                    this.soundService.StopRingTone();

                    if (this.avHistoryEvent != null)
                    {
                        lock (this.avHistoryEvent)
                        {
                            this.avHistoryEvent.EndTime = DateTime.Now;
                            this.historyService.AddEvent(this.avHistoryEvent);
                            this.avHistoryEvent = null;
                        }
                    }

                    //--this.videoDisplayLocal.Visibility = System.Windows.Visibility.Hidden;
                    //--this.videoDisplayRemote.Visibility = System.Windows.Visibility.Hidden;
                    this.AVSession = null;
                    break;

                case InviteEventTypes.LOCAL_HOLD_OK:
                    this.labelInfo.Content = "Call placed on hold";
                    this.IsHeld = true;
                    break;

                case InviteEventTypes.LOCAL_HOLD_NOK:
                    this.labelInfo.Content = "Failed to place remote party on hold";
                    break;

                case InviteEventTypes.LOCAL_RESUME_OK:
                    this.labelInfo.Content = "Call taken off hold";
                    this.IsHeld = false;
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
