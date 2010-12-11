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
using System.Windows.Shapes;
using BogheCore.Services;
using BogheApp.Services.Impl;
using BogheCore;
using BogheCore.Sip;
using BogheControls.Utils;
using BogheCore.Model;
using BogheApp.Items;
using log4net;

namespace BogheApp
{
    /// <summary>
    /// Interaction logic for MessagingWindow.xaml
    /// </summary>
    public partial class MessagingWindow : Window
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(MessagingWindow));
        private static List<MessagingWindow> windows = new List<MessagingWindow>();

        private readonly String remotePartyUri = null;

        private readonly IConfigurationService configurationService;
        private readonly IContactService contactService;
        private readonly ISipService sipService;
        private readonly IHistoryService historyService;
        private readonly ISoundService soundService;

        private MediaType messagingType;
        private MyMsrpSession chatSession = null;
        private HistoryChatEvent chatHistoryEvent;
        private readonly List<MyMsrpSession> fileTransferSessions;

        private readonly MyObservableCollection<HistoryEvent> historyDataSource;
        private readonly MyObservableCollection<Participant> participants;

        public MessagingWindow(String remotePartyUri)
        {
            InitializeComponent();

            this.remotePartyUri = remotePartyUri;
            this.Title = String.Empty;
            this.fileTransferSessions = new List<MyMsrpSession>();

            // Services
            this.configurationService = Win32ServiceManager.SharedManager.ConfigurationService;
            this.contactService = Win32ServiceManager.SharedManager.ContactService;
            this.sipService = Win32ServiceManager.SharedManager.SipService;
            this.historyService = Win32ServiceManager.SharedManager.HistoryService;
            this.soundService = Win32ServiceManager.SharedManager.SoundService;

            // Messaging
            this.historyDataSource = new MyObservableCollection<HistoryEvent>();
            this.historyCtrl.ItemTemplateSelector = new DataTemplateSelectorMessaging();
            this.historyCtrl.ItemsSource = this.historyDataSource;

            // Participants
            this.participants = new MyObservableCollection<Participant>();
            this.participants.Add(new Participant(this.remotePartyUri));
            this.listBoxParticipants.ItemsSource = this.participants;

            lock (MessagingWindow.windows)
            {
                MessagingWindow.windows.Add(this);
            }
        }

        private bool UseBinarySMS
        {
            get
            {
                return this.configurationService.Get(Configuration.ConfFolder.RCS, Configuration.ConfEntry.BINARY_SMS, Configuration.DEFAULT_RCS_BINARY_SMS);
            }
        }

        private String SMSCAddress
        {
            get
            {
                return this.configurationService.Get(Configuration.ConfFolder.RCS, Configuration.ConfEntry.SMSC, Configuration.DEFAULT_RCS_SMSC);
            }
        }

        private MediaType MessagingType
        {
            get { return this.messagingType; }
            set
            {
                this.messagingType = value;
                switch (this.messagingType)
                {
                    case MediaType.SMS:
                    case MediaType.ShortMessage:
                        this.buttonSendTextImage.Source = MyImageConverter.FromBitmap(Properties.Resources.message_24);
                        this.buttonSendTextLabel.Content = "Send SMS";
                        break;

                    case MediaType.Chat:
                        this.buttonSendTextImage.Source = MyImageConverter.FromBitmap(Properties.Resources.messages_24);
                        this.buttonSendTextLabel.Content = "Send Text";
                        break;

                    default:
                        break;
                }
            }
        }

        public static void SendSMS(String remoteUri)
        {
            MessagingWindow window = new MessagingWindow(remoteUri);
            window.MessagingType = MediaType.SMS;
            window.Show();

            window.InitializeView();
        }

        public static void ReceiveShortMessage(String remoteUri, byte[] payload, String contentType)
        {
            MessagingWindow window = null;

            lock (MessagingWindow.windows)
            {
                window = MessagingWindow.windows.FirstOrDefault((x) =>
                    /*(x.MessagingType == MediaType.ShortMessage || x.MessagingType == MediaType.SMS) &&*/ String.Equals(x.remotePartyUri, remoteUri)
                    );
            }

            if (window == null)
            {
                window = new MessagingWindow(remoteUri);
                window.MessagingType = MediaType.SMS;
                window.InitializeView();
            }
                        
            window.Show();

            HistoryShortMessageEvent @event = new HistoryShortMessageEvent(remoteUri);
            @event.Status = HistoryEvent.StatusType.Incoming;
            @event.Content = Encoding.UTF8.GetString(payload);
            window.AddMessagingEvent(@event);
        }

        public static void StartChat(String remoteUri)
        {
            MessagingWindow window = new MessagingWindow(remoteUri);
            window.MessagingType = MediaType.Chat;
            window.Show();

            window.InitializeView();
        }

        public static void SendFile(String remoteUri, String filePath)
        {
            if (String.IsNullOrEmpty(filePath))
            {
                Microsoft.Win32.OpenFileDialog fileDialog = new Microsoft.Win32.OpenFileDialog();
                fileDialog.Multiselect = false;
                Nullable<bool> result = fileDialog.ShowDialog();
                if (result.HasValue && result.Value)
                {
                    filePath = fileDialog.FileName;
                }
            }

            if (!String.IsNullOrEmpty(filePath))
            {
                MessagingWindow window = new MessagingWindow(remoteUri);
                window.MessagingType = MediaType.Chat;
                window.Show();

                window.InitializeView();
                window.SendFile(filePath);
            }
        }

        public void SendFile(String filePath)
        {
            MyMsrpSession msrpSession = MyMsrpSession.CreateOutgoingSession(this.sipService.SipStack, MediaType.FileTransfer, this.remotePartyUri);
            lock (this.fileTransferSessions)
            {
                this.fileTransferSessions.Add(msrpSession);
            }
            msrpSession.onMsrpEvent += this.FileTransfer_onMsrpEvent;

            HistoryFileTransferEvent @event = new HistoryFileTransferEvent(this.remotePartyUri, filePath);
            @event.Status = HistoryEvent.StatusType.Outgoing;
            @event.MsrpSession = msrpSession;
            this.AddMessagingEvent(@event);

            msrpSession.SendFile(filePath);
        }

        private void buttonSendText_Click(object sender, RoutedEventArgs e)
        {
            if (this.textBoxInput.Text == String.Empty)
            {
                return;
            }

            HistoryShortMessageEvent @event = new HistoryShortMessageEvent(this.remotePartyUri);
            @event.Status = HistoryEvent.StatusType.Outgoing;
            @event.Content = this.textBoxInput.Text;

            switch (this.messagingType)
            {
                case MediaType.Chat:
                    break;

                case MediaType.ShortMessage:
                case MediaType.SMS:
                default:
                    {
                        MyMessagingSession shortMessageSession = new MyMessagingSession(this.sipService.SipStack, this.remotePartyUri);
                        if (this.UseBinarySMS)
                        {
                            shortMessageSession.SendBinaryMessage(this.textBoxInput.Text, this.SMSCAddress);
                        }
                        else
                        {
                            shortMessageSession.SendTextMessage(this.textBoxInput.Text);
                        }
                        this.textBoxInput.Text = String.Empty;
                        shortMessageSession.Dispose();
                        break;
                    }
            }

            this.AddMessagingEvent(@event);
        }

        private void MenuItemCall_MakeAudioCall_Click(object sender, RoutedEventArgs e)
        {

        }

        private void MenuItemCall_MakeVideoCall_Click(object sender, RoutedEventArgs e)
        {

        }

        private void MenuItemCall_ShareImage_Click(object sender, RoutedEventArgs e)
        {

        }

        private void MenuItemCall_ShareVideo_Click(object sender, RoutedEventArgs e)
        {

        }

        private void buttonSendFile_Click(object sender, RoutedEventArgs e)
        {
            Microsoft.Win32.OpenFileDialog fileDialog = new Microsoft.Win32.OpenFileDialog();
            fileDialog.Multiselect = false;
            Nullable<bool> result = fileDialog.ShowDialog(this);
            if (result.HasValue && result.Value)
            {
                this.SendFile(fileDialog.FileName);
            }
        }

        private void Window_Closing(object sender, System.ComponentModel.CancelEventArgs e)
        {
            lock (this.fileTransferSessions)
            {
                this.fileTransferSessions.ForEach((x) =>
                    {
                        if (x != null && x.State != MyInviteSession.InviteState.TERMINATING && x.State != MyInviteSession.InviteState.TERMINATED)
                        {
                            x.HangUp();
                        }
                    });
            }
        }

        private void Window_Closed(object sender, EventArgs e)
        {
            lock (this.fileTransferSessions)
            {
                foreach (MyMsrpSession session in this.fileTransferSessions)
                {
                    this.fileTransferSessions.ForEach((x) =>
                    {
                        if (x != null)
                        {
                            x.onMsrpEvent -= this.FileTransfer_onMsrpEvent;
                        }
                    });
                }
            }

            lock (MessagingWindow.windows)
            {
                MessagingWindow.windows.Remove(this);
            }
        }
    }
}
