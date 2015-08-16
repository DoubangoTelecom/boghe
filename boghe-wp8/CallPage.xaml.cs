/*Copyright (C) 2013 Doubango Telecom <http://www.doubango.org>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Navigation;
using Microsoft.Phone.Controls;
using Microsoft.Phone.Shell;
using System.Diagnostics;
using doubango_rt.BackEnd;
using org.doubango.WindowsPhone;
using BogheCore.Utils;
using log4net;

namespace BogheApp
{
    public partial class CallPage : BasePage
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(CallPage));

        public CallPage()
            :base(new CallStatusViewModel())
        {
            InitializeComponent();
        }

        protected override void OnNavigatedFrom(System.Windows.Navigation.NavigationEventArgs nee)
        {
            base.OnNavigatedFrom(nee);
            // Unregister for the Obscured/Unobscured events
            PhoneApplicationFrame rootFrame = ((App)Application.Current).RootFrame;
            rootFrame.Obscured -= ((CallStatusViewModel)this.ViewModel).RootFrame_Obscured;
            rootFrame.Unobscured -= ((CallStatusViewModel)this.ViewModel).RootFrame_Unobscured;
        }

        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
            base.OnNavigatedTo(e);

            SipService sipService = BackgroundProcessController.Instance.SipService;

            // Register for the Obscured/Unobscured events
            PhoneApplicationFrame rootFrame = ((App)Application.Current).RootFrame;
            rootFrame.Obscured += ((CallStatusViewModel)this.ViewModel).RootFrame_Obscured;
            rootFrame.Unobscured += ((CallStatusViewModel)this.ViewModel).RootFrame_Unobscured;

            NavigationUriCall navigationUri = NavigationUri.Build(e.Uri) as NavigationUriCall;

            // navigationUri could be null if the app was put on the background
            Debug.Assert(navigationUri != null || sipService.SipActiveAVCall != null);
            if (navigationUri != null)
            {
                switch (navigationUri.Type)
                {
                    case NavigationUriType.MakeCall:
                        {
                            Debug.Assert(!String.IsNullOrEmpty(navigationUri.RemoteParty));

                            base.ViewModel.RemotePartyDisplayName = base.ViewModel.RemotePartyNumber = navigationUri.RemoteParty;
                            rtSipUri toUri = BackgroundProcessController.Instance.rtSipUriNew(UriUtils.GetValidSipUri(navigationUri.RemoteParty), navigationUri.RemoteParty);
                            bool bSuccess = navigationUri.WithVideo
                                ? (rtServiceManager.Instance.SipService.MakeCallAudioVideo(toUri, null) != null)
                                : (rtServiceManager.Instance.SipService.MakeCallAudio(toUri, null) != null);
                            if (!bSuccess)
                            {
                                base.ViewModel.CallState = SipAVCallState.Terminated;
                            }
                            break;
                        }
                    case NavigationUriType.ReceiveCall:
                        {
                            break;
                        }
                    default:
                        {
                            Debug.Assert(false);
                            break;
                        }
                }
            }

            // Re-bind MediaElements explictly, so video will play after app has been resumed
            bigHead.SetBinding(MediaElement.SourceProperty, new System.Windows.Data.Binding("BigHeadPreviewUri"));
            littleHead.SetBinding(MediaElement.SourceProperty, new System.Windows.Data.Binding("LittleHeadPreviewUri"));

            ((CallStatusViewModel)this.ViewModel).Update();
        }

        private void HangUpButton_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            ((CallStatusViewModel)this.ViewModel).IsHangUpButtonEnabled = false;
            SipService sipService = BackgroundProcessController.Instance.SipService;
            SipAVCall avCall = (sipService != null) ? sipService.SipActiveAVCall : null;
            if (avCall != null)
            {
                avCall.HangUp(null);
            }
        }

        private void HoldButton_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            SipService sipService = BackgroundProcessController.Instance.SipService;
            SipAVCall avCall = (sipService != null) ? sipService.SipActiveAVCall : null;
            if (avCall != null)
            {
                if ((avCall.HoldState & SipHoldStateState.LocalHeld) != SipHoldStateState.LocalHeld)
                {
                    avCall.Hold(null);
                }
                else
                {
                    avCall.Resume(null);
                }
            }
        }

        private void CameraToggleButton_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            SipService sipService = BackgroundProcessController.Instance.SipService;
            if (sipService != null)
            {
                CameraSensorLocation newCameraSensorLocation = (sipService.CameraLocation == CameraSensorLocation.Back) ? CameraSensorLocation.Front : CameraSensorLocation.Back;
                sipService.CameraLocation = newCameraSensorLocation;
                ((CallStatusViewModel)this.ViewModel).CameraLocation = newCameraSensorLocation;
            }
        }

        private void EarpieceButton_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            ((CallStatusViewModel)this.ViewModel).SetAudioRoute(AudioRoute.Earpiece);
        }

        private void SpeakerButton_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            ((CallStatusViewModel)this.ViewModel).SetAudioRoute(AudioRoute.Speakerphone);
        }

        private void BluetoothButton_Click(object sender, System.Windows.RoutedEventArgs e)
        {
            ((CallStatusViewModel)this.ViewModel).SetAudioRoute(AudioRoute.Bluetooth);
        }

        private void littleHead_MediaOpened_1(object sender, System.Windows.RoutedEventArgs e)
        {
            LOG.Info("LittleHead Opened: " + ((MediaElement)sender).Source.AbsoluteUri);
        }

        private void bigHead_MediaOpened_1(object sender, System.Windows.RoutedEventArgs e)
        {
            LOG.Info("BigHead Opened: " + ((MediaElement)sender).Source.AbsoluteUri);
        }

        private void bigHead_MediaFailed_1(object sender, System.Windows.ExceptionRoutedEventArgs e)
        {
            LOG.Error("BigHead Failed: " + e.ErrorException.Message);
        }

        private void littleHead_MediaFailed_1(object sender, System.Windows.ExceptionRoutedEventArgs e)
        {
            LOG.Info("LittleHead Failed: " + e.ErrorException.Message);
        }
    }
}