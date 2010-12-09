using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using BogheCore.Sip.Events;
using System.Threading;
using BogheCore;
using BogheCore.Model;

namespace BogheApp
{
    partial class SessionWindow
    {
        private void ChatSession_onMsrpEvent(object sender, MsrpEventArgs e)
        {
            if (this.ChatSession == null || this.ChatSession.Id != e.SessionId)
            {
                LOG.Error("Invalid chat session");
                return;
            }

            if (this.Dispatcher.Thread != Thread.CurrentThread)
            {
                this.Dispatcher.BeginInvoke(System.Windows.Threading.DispatcherPriority.Normal,
                        new EventHandler<MsrpEventArgs>(this.ChatSession_onMsrpEvent), sender, new object[] { e });
                return;
            }

            switch (e.Type)
            {
                case MsrpEventTypes.CONNECTED:
                    break;

                case MsrpEventTypes.DISCONNECTED:
                    {
                        this.ChatSession = null;
                        break;
                    }

                case MsrpEventTypes.DATA:
                    {
                        byte[] data = (e.GetExtra(MsrpEventArgs.EXTRA_DATA) as byte[]);
                        if (data != null)
                        {
                            String contentType = (e.GetExtra(MsrpEventArgs.EXTRA_CONTENT_TYPE) as String);
                            if (contentType != null)
                            {
                                contentType = contentType.Split(";".ToCharArray(), StringSplitOptions.RemoveEmptyEntries)[0];
                                if (!contentType.Equals(ContentType.TEXT_PLAIN, StringComparison.InvariantCultureIgnoreCase))
                                {
                                    LOG.Warn(String.Format("{0} not supported as content type", contentType));
                                    return;
                                }
                            }
                            HistoryShortMessageEvent @event = new HistoryShortMessageEvent(this.remotePartyUri);
                            @event.Status = HistoryEvent.StatusType.Incoming;
                            @event.Content = Encoding.UTF8.GetString(data);
                            this.AddMessagingEvent(@event);
                        }
                        break;
                    }

                case MsrpEventTypes.ERROR:
                    break;

                case MsrpEventTypes.SUCCESS_2XX:
                    break;

                case MsrpEventTypes.SUCCESS_REPORT:
                    break;
            }
        }
    }
}
