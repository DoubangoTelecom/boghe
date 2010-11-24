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
using BogheCore.Sip;
using BogheCore.Services;
using BogheApp.Services.Impl;
using BogheCore;
using System.Timers;
using System.Globalization;
using log4net;
using System.Reflection;
using BogheCore.Model;
using org.doubango.tinyWRAP;
using BogheControls;

namespace BogheApp
{
    /// <summary>
    /// Interaction logic for SessionWindows.xaml
    /// </summary>
    public partial class SessionWindow : Window
    {
        private static ILog LOG = LogManager.GetLogger(typeof(SessionWindow));

        private MyAVSession avSession = null;
        private readonly String remotePartyUri = null;

        private readonly IContactService contactService;
        private readonly ISipService sipService;
        private readonly IHistoryService historyService;
        private readonly ISoundService soundService;

        private readonly Timer timerCall;
        //private DateTime startTime;
        //private DateTime endTime;

        private HistoryAVCallEvent avHistoryEvent;
        private readonly VideoDisplay videoDisplayLocal;
        private readonly VideoDisplay videoDisplayRemote;

        public SessionWindow(String remotePartyUri)
            : base()
        {
            InitializeComponent();

            this.remotePartyUri = remotePartyUri;
            this.Title = String.Empty;
            

            this.videoDisplayLocal = new VideoDisplay();
            this.videoDisplayLocal.Visibility = Visibility.Hidden;
            this.videoDisplayRemote = new VideoDisplay();
            this.videoDisplayRemote.Visibility = Visibility.Hidden;

            this.borderVideoDispalyRemote.Child = this.videoDisplayRemote;
            this.borderVideoDispalyLocal.Child = this.videoDisplayLocal;

            this.labelInfo.Content = String.Empty;
            this.timerCall = new Timer(1000);
            this.timerCall.AutoReset = true;
            this.timerCall.Elapsed += this.timerCall_Elapsed;

            // Services
            this.contactService = Win32ServiceManager.SharedManager.ContactService;
            this.sipService = Win32ServiceManager.SharedManager.SipService;
            this.historyService = Win32ServiceManager.SharedManager.HistoryService;
            this.soundService = Win32ServiceManager.SharedManager.SoundService;

            // Register to SIP events
            this.sipService.onInviteEvent += this.sipService_onInviteEvent;
        }

        private MyAVSession AVSession
        {
            get { return this.avSession; }
            set {
                this.avSession = value;
            }
        }

        public static void MakeAudioCall(String remoteUri)
        {
            SessionWindow window = new SessionWindow(remoteUri);
            window.AVSession = MyAVSession.CreateOutgoingSession(Win32ServiceManager.SharedManager.SipService.SipStack, MediaType.Audio);
            window.Show();
            window.AVSession.MakeCall(remoteUri);

            window.InitializeView();
        }

        public static void MakeVideoCall(String remoteUri)
        {
            SessionWindow window = new SessionWindow(remoteUri);
            window.AVSession = MyAVSession.CreateOutgoingSession(Win32ServiceManager.SharedManager.SipService.SipStack, MediaType.AudioVideo);
            window.Show();
            window.AVSession.MakeCall(remoteUri);

            window.InitializeView();
        }

        public static void ReceiveCall(MyInviteSession session)
        {
            SessionWindow window = null;
            bool isVideo = false;

            if(session is MyAVSession)
            {
                window = new SessionWindow(session.RemotePartyUri);
                window.AVSession = session as MyAVSession;
                isVideo = window.avSession.MediaType == MediaType.AudioVideo || window.avSession.MediaType == MediaType.Video;
                window.avHistoryEvent = new HistoryAVCallEvent(isVideo, window.avSession.RemotePartyUri);
                window.avHistoryEvent.Status = HistoryEvent.StatusType.Missed;
            }

            if (window != null)
            {
                window.InitializeView();

                window.Show();

                if (isVideo)
                {
                    window.AttachDisplays();
                }
            }
        }

        private void timerCall_Elapsed(object sender, ElapsedEventArgs e)
        {
            try
            {
                if (this.Dispatcher.Thread != System.Threading.Thread.CurrentThread)
                {
                    this.Dispatcher.BeginInvoke(System.Windows.Threading.DispatcherPriority.Normal,
                            new EventHandler<ElapsedEventArgs>(this.timerCall_Elapsed), sender, new object[] { e });
                    return;
                }

                //this.endTime = this.endTime.AddSeconds(1);
                //DateTime duration = new DateTime().AddSeconds(this.endTime.Second - this.startTime.Second);
                //this.labelDuration.Content = String.Format(CultureInfo.CurrentUICulture, "{0}", duration.ToString("HH:mm:ss"));
            }
            catch (TargetInvocationException ex)
            {
                LOG.Error(ex);
            }
        }

        private void buttonCallOrAnswer_Click(object sender, RoutedEventArgs e)
        {
            if ("Call".Equals(this.buttonCallOrAnswer.Tag) && this.AVSession == null)
            {
                this.AVSession = MyAVSession.CreateOutgoingSession(this.sipService.SipStack, MediaType.AudioVideo);
                this.AVSession.MakeCall(this.remotePartyUri);
            }
            else if (this.AVSession != null)
            {
                this.AVSession.AcceptCall();
            }
        }

        private void buttonHangUp_Click(object sender, RoutedEventArgs e)
        {
            if (this.AVSession != null)
            {
                this.AVSession.HangUpCall();
            }
        }

        private void SessionWindowName_Closing(object sender, System.ComponentModel.CancelEventArgs e)
        {
            if (this.AVSession != null && this.AVSession.State != MyInviteSession.InviteState.TERMINATING && this.AVSession.State != MyInviteSession.InviteState.TERMINATED)
            {
                this.AVSession.HangUpCall();
            }
        }

        private void labelVideoDisplayRemote_SizeChanged(object sender, SizeChangedEventArgs e)
        {
            //if (this.AVSession != null && this.AVSession.IsConnected && this.AVSession.MediaSessionMgr != null)
            //{
            //    this.VideoDisplayRemote.Width = this.labelVideoDisplayRemote.Width;
            //}
        }

        private void SessionWindowName_Loaded(object sender, RoutedEventArgs e)
        {
            if (this.AVSession != null)
            {
                
            }
        }
    }
}
