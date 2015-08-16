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
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Navigation;
using doubango_rt.BackEnd;
using Microsoft.Phone.Controls;
using System.Windows.Media;
using System.Windows;
using System.Diagnostics;
using org.doubango.WindowsPhone;

namespace BogheApp
{
    public class BasePage : PhoneApplicationPage
    {
        readonly BaseViewModel mViewModel;
        readonly NativeEventsListner mNativeEventsListener;

        protected BasePage()
            : this(new BaseViewModel())
        {
        }

        protected BasePage(BaseViewModel viewModel)
        {
            mNativeEventsListener = new NativeEventsListner();
            mViewModel = viewModel;
            mViewModel.Page = this;
            this.Loaded += (sender, e) => 
            {
                this.DataContext = mViewModel;
            };

            mNativeEventsListener.onAudioRoutingChanged += mNativeEventsListener_onAudioRoutingChanged;
            mNativeEventsListener.onRegistrationEvent += mNativeEventsListener_onRegistrationEvent;
            mNativeEventsListener.onStackEvent += mNativeEventsListener_onStackEvent;
            mNativeEventsListener.onAVCallEvent += mNativeEventsListener_onAVCallEvent;
            mNativeEventsListener.onHoldEvent += mNativeEventsListener_onHoldEvent;
        }

        internal BaseViewModel ViewModel
        {
            get { return mViewModel; }
        }

        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
            base.OnNavigatedTo(e);

            mNativeEventsListener.Start();

            if (!rtServiceManager.Instance.IsStarted)
            {
                rtServiceManager.Instance.Start();
            }

            SipService sipService = rtServiceManager.Instance.SipService;
            if (sipService != null && sipService.RegistrationState != SipSessionState.Connected)
            {
                if (sipService != null && sipService.SipActiveAVCall == null)
                {
                    if (sipService.Stop(false))
                    {
                        if (sipService.Start())
                        {
                            sipService.Register();
                        }
                    }
                }
            }
        }

        protected override void OnNavigatedFrom(NavigationEventArgs e)
        {
            mNativeEventsListener.Stop();

            base.OnNavigatedFrom(e);
        }

        #region SIP Events

        void mNativeEventsListener_onAudioRoutingChanged(object sender, AudioRoutingEventArgs e)
        {
            this.Dispatcher.BeginInvoke((System.Threading.ThreadStart)delegate
            {
                if (mViewModel is CallStatusViewModel)
                {
                    (mViewModel as CallStatusViewModel).UpdateAudioButtons();
                }
            });
        }

        void mNativeEventsListener_onStackEvent(object sender, SipStackEventArgs e)
        {
            this.Dispatcher.BeginInvoke((System.Threading.ThreadStart)delegate
            {
            });
        }

        void mNativeEventsListener_onRegistrationEvent(object sender, SipRegistrationEventArgs e)
        {
            this.Dispatcher.BeginInvoke((System.Threading.ThreadStart)delegate
            {
                mViewModel.RegistrationState = e.State;
                if (e.SipCode > 299 || e.State == SipSessionState.Error)
                {
                    mViewModel.ConnectionStateText = e.Description;
                }
            });
        }

        void mNativeEventsListener_onAVCallEvent(object sender, SipAVCallEventArgs e)
        {
            this.Dispatcher.BeginInvoke((System.Threading.ThreadStart)delegate
            {
                mViewModel.CallState = e.State;

                if ((e.State == SipAVCallState.Incoming || e.State == SipAVCallState.InCall) && !(mViewModel is CallStatusViewModel))
                {
                    SipService sipService = BackgroundProcessController.Instance.SipService;
                    if (sipService != null)
                    {
                        SipAVCall avCall = sipService.SipActiveAVCall;
                        if (avCall != null && avCall.UriRemote != null)
                        {
                            mViewModel.Page.NavigationService.Navigate(new Uri(NavigationUri.BuildReceiveCallUriString("/CallPage.xaml", avCall.UriRemote.getUserName(), avCall.WithVideo), UriKind.Relative));
                            return;
                        }
                    }
                }

                if (mViewModel is CallStatusViewModel)
                {
                    (mViewModel as CallStatusViewModel).Update();
                }

                if (e.SipCode > 299)
                {
                    mViewModel.CallStateText = e.Description;
                }
            });
        }

        void mNativeEventsListener_onHoldEvent(object sender, SipHoldEventArgs e)
        {
            this.Dispatcher.BeginInvoke((System.Threading.ThreadStart)delegate
            {
                if (mViewModel is CallStatusViewModel)
                {
                    (mViewModel as CallStatusViewModel).HoldState = e.State;
                }
            });
        }

        #endregion

        #region Private

        

        #endregion
    }

    public class BaseViewModel : INotifyPropertyChanged
    {
        const String UNKNOWN = "Unknown";

        BasePage mPage;
        SipSessionState mRegistrationState = SipSessionState.None;
        String mConnectionStateText = "Not Connected";
        bool mConnected;
        String mRemotePartyDisplayName = UNKNOWN;
        String mRemotePartyNumber = UNKNOWN;
        String mCallStateText = UNKNOWN;
        SipAVCallState mCallState = SipAVCallState.None;

        internal BaseViewModel()
        {
        }

        internal BasePage Page
        {
            get { return mPage; }
            set { mPage = value; }
        }

        public SipSessionState RegistrationState
        {
            get { return mRegistrationState; }
            set
            {
                mRegistrationState = value;
                IsConnected = (mRegistrationState == SipSessionState.Connected);
                switch(mRegistrationState)
                {
                    case SipSessionState.Connecting:
                        {
                            ConnectionStateText = "Connecting";
                            break;
                        }
                    case SipSessionState.Connected:
                        {
                            ConnectionStateText = "Connected";
                            break;
                        }
                    case SipSessionState.Terminating:
                        {
                            ConnectionStateText = "Disconnecting";
                            break;
                        }
                    case SipSessionState.Terminated:
                        {
                            ConnectionStateText = "Disconnected";
                            break;
                        }
                    case SipSessionState.Error:
                        {
                            if (String.IsNullOrEmpty(ConnectionStateText)) // otherwise display the error message
                            {
                                ConnectionStateText = "Error";
                            }
                            break;
                        }
                }
            }
        }

        public bool IsConnected
        {
            get { return mConnected; }
            set 
            { 
                mConnected = value;
                OnPropertyChanged("IsConnected");
            }
        }

        public String ConnectionStateText
        {
            get { return mConnectionStateText; }
            set
            {
                mConnectionStateText = value;
                OnPropertyChanged("ConnectionStateText");
            }
        }

        public String RemotePartyDisplayName
        {
            get { return mRemotePartyDisplayName; }
            set 
            { 
                mRemotePartyDisplayName = value;
                OnPropertyChanged("RemotePartyDisplayName");
            }
        }

        public String RemotePartyNumber
        {
            get { return mRemotePartyNumber; }
            set
            {
                mRemotePartyNumber = value;
                OnPropertyChanged("RemotePartyNumber");
            }
        }

        public SipAVCallState CallState
        {
            get { return mCallState; }
            set
            {
                CallStateText = CallStatusViewModel.CallStateToString(value);
                mCallState = value;
                OnPropertyChanged("CallState");
            }
        }

        public String CallStateText
        {
            get { return mCallStateText; }
            set
            {
                mCallStateText = value;
                OnPropertyChanged("CallStateText");
            }
        }

        public String ApplicationTitle
        {
            get
            {
                return "Boghe SIP Video Client";
            }
        }

        virtual internal void Update()
        {
            String remotePartyDisplayName = null;
            String remotePartyNumber = null;
            SipService sipService = rtServiceManager.Instance.SipService;
            SipAVCallState callState = SipAVCallState.None;
            SipSessionState registrationState = SipSessionState.None;
            if (sipService != null)
            {
                registrationState = sipService.RegistrationState;
                SipAVCall avCall = rtServiceManager.Instance.SipService.SipActiveAVCall;
                if (avCall != null)
                {
                    if (avCall.UriRemote != null)
                    {
                        remotePartyDisplayName = avCall.UriRemote.getDisplayName();
                        remotePartyNumber = avCall.UriRemote.getUserName();
                        if (String.IsNullOrEmpty(remotePartyDisplayName))
                        {
                            remotePartyDisplayName = remotePartyNumber;
                        }
                        
                    }
                    callState = avCall.State;
                }
            }
            
            RegistrationState = registrationState;
            if (!String.IsNullOrEmpty(remotePartyDisplayName)) // Keep previsous text
            {
                RemotePartyDisplayName = remotePartyDisplayName;
            }
            if (!String.IsNullOrEmpty(remotePartyNumber)) // Keep previsous text
            {
                RemotePartyNumber = remotePartyNumber;
            }
            if (callState != SipAVCallState.None)// Keep previsous text
            {
                CallState = callState;
            }
        }

        #region INotifyPropertyChanged Members

        public event PropertyChangedEventHandler PropertyChanged;

        protected void OnPropertyChanged(string name)
        {
            if (this.PropertyChanged != null)
            {
                this.PropertyChanged(this, new PropertyChangedEventArgs(name));
            }
        }

        #endregion
    }

    public class CallStatusViewModel : BaseViewModel
    {
        private static Brush accentBrush = (Brush)App.Current.Resources["PhoneAccentBrush"];
        private static Brush borderBrush = (Brush)App.Current.Resources["PhoneForegroundBrush"];

        // Hold button text
        private static readonly string HoldOn = "resume";
        private static readonly string HoldOff = "hold";

        private static readonly string CameraToggleFront = "front camera";
        private static readonly string CameraToggleBack = "back camera";

        // Camera stream URIs
        private static Uri frontFacingCameraStreamUri = new Uri("ms-media-stream-id:camera-FrontFacing");
        private static Uri rearFacingCameraStreamUri = new Uri("ms-media-stream-id:camera-RearFacing");

        // Render stream URI
        private static Uri renderStreamUri = new System.Uri("ms-media-stream-id:MediaStreamer-123");

        public CallStatusViewModel()
        {
            Update();

            
        }

        internal void UpdateAudioButtons()
        {
            AudioRoute availAudioRoutes = AudioRoute.None;
            AudioRoute currentAudioRoute = AudioRoute.None;
            SipAVCall avCall = null;

            SipService sipService = BackgroundProcessController.Instance.SipService;

            if (sipService != null)
            {
                avCall = sipService.SipActiveAVCall;
                if (avCall != null)
                {
                    availAudioRoutes = sipService.AvailableAudioRoutes;
                    currentAudioRoute = sipService.AudioRoute;
                }
            }

            IsEarpieceButtonEnabled = ((availAudioRoutes & AudioRoute.Earpiece) != AudioRoute.None);
            IsSpeakerButtonEnabled = ((availAudioRoutes & AudioRoute.Speakerphone) != AudioRoute.None);
            IsBluetoothButtonEnabled = ((availAudioRoutes & AudioRoute.Bluetooth) != AudioRoute.None);
            EarpieceButtonBorder = (currentAudioRoute == AudioRoute.Earpiece) ? accentBrush : borderBrush;
            SpeakerButtonBorder = (currentAudioRoute == AudioRoute.Speakerphone) ? accentBrush : borderBrush;
            BluetoothButtonBorder = (currentAudioRoute == AudioRoute.Bluetooth) ? accentBrush : borderBrush;
        }

        override internal void Update()
        {
            base.Update();

            bool mediaActivated = false;
            bool callActived = false;
            bool videoActivated = false;
            SipAVCall avCall = null;
            SipHoldStateState holdState = SipHoldStateState.None;
            CameraSensorLocation cameraLocation = CameraSensorLocation.Front;

            SipService sipService = BackgroundProcessController.Instance.SipService;

            if(sipService != null)
            {
                avCall = sipService.SipActiveAVCall;
            }
            
            if (avCall != null)
            {
                mediaActivated = (avCall.State == SipAVCallState.InCall || avCall.State == SipAVCallState.EarlyMedia);
                callActived = (avCall.State != SipAVCallState.Terminated && avCall.State != SipAVCallState.Terminating);
                videoActivated = (mediaActivated && avCall.WithVideo);
                holdState = avCall.HoldState;
                cameraLocation = sipService.CameraLocation;
            }

            IsHangUpButtonEnabled = callActived;
            IsHoldButtonEnabled = mediaActivated;
            IsHoldButtonChecked = ((holdState & SipHoldStateState.LocalHeld) == SipHoldStateState.LocalHeld);
            IsCameraToggleButtonEnabled = videoActivated;
            LittleHeadVisibility = videoActivated ? Visibility.Visible : Visibility.Collapsed;
            LittleHeadPreviewUri = videoActivated ? (cameraLocation == CameraSensorLocation.Back ? rearFacingCameraStreamUri : frontFacingCameraStreamUri) : null;
            CameraLocation = cameraLocation;
            BigHeadVisibility = videoActivated ? Visibility.Visible : Visibility.Collapsed;
            BigHeadPreviewUri = videoActivated ? renderStreamUri : null;
            HoldState = holdState;

            UpdateAudioButtons();
        }

        

        private String mCallStartTime;
        public string CallStartTime
        {
            get
            {
                return this.mCallStartTime;
            }

            set
            {
                this.mCallStartTime = value;
                this.OnPropertyChanged("CallStartTime");
            }
        }

        private bool mCameraToggleButtonEnabled;
        public bool IsCameraToggleButtonEnabled
        {
            get
            {
                return this.mCameraToggleButtonEnabled;
            }

            set
            {
                if (this.mCameraToggleButtonEnabled != value)
                {
                    this.mCameraToggleButtonEnabled = value;
                    this.OnPropertyChanged("IsCameraToggleButtonEnabled");
                }
            }
        }

        private string mCameraToggleButtonText = CameraToggleBack;
        public string CameraToggleButtonText
        {
            get
            {
                return this.mCameraToggleButtonText;
            }

            set
            {
                if (value == null)
                    value = string.Empty;

                this.mCameraToggleButtonText = value;
                this.OnPropertyChanged("CameraToggleButtonText");
            }
        }

        private SipHoldStateState mHoldState = SipHoldStateState.None;
        public SipHoldStateState HoldState
        {
            get
            {
                return mHoldState;
            }

            set
            {
                mHoldState = value;
                IsHoldButtonChecked = ((mHoldState & SipHoldStateState.LocalHeld) == SipHoldStateState.LocalHeld);
                HoldButtonText = IsHoldButtonChecked ? HoldOn : HoldOff;
                HoldStateText = HoldStateToString(value);
                this.OnPropertyChanged("HoldState");
            }
        }

        private String mHoldStateText = "Hold State: None";
        public string HoldStateText
        {
            get
            {
                return mHoldStateText;
            }

            set
            {
                mHoldStateText = "Hold State: " + value;
                this.OnPropertyChanged("HoldStateText");
            }
        }

        private bool mHoldButtonEnabled;
        public bool IsHoldButtonEnabled
        {
            get
            {
                return mHoldButtonEnabled;
            }

            set
            {
                if (mHoldButtonEnabled != value)
                {
                    mHoldButtonEnabled = value;
                    this.OnPropertyChanged("IsHoldButtonEnabled");
                }
            }
        }

        private bool mHoldButtonChecked;
        public bool IsHoldButtonChecked
        {
            get
            {
                return mHoldButtonChecked;
            }

            set
            {
                if (mHoldButtonChecked != value)
                {
                    mHoldButtonChecked = value;                    
                    this.OnPropertyChanged("IsHoldButtonChecked");
                }
            }
        }

        private string mHoldButtonText = HoldOn;
        public string HoldButtonText
        {
            get
            {
                return this.mHoldButtonText;
            }

            set
            {
                if (value == null)
                    value = string.Empty;

                this.mHoldButtonText = value;
                this.OnPropertyChanged("HoldButtonText");
            }
        }

        private bool mHangUpButtonEnabled;
        public bool IsHangUpButtonEnabled
        {
            get
            {
                return this.mHangUpButtonEnabled;
            }

            set
            {
                if (this.mHangUpButtonEnabled != value)
                {
                    this.mHangUpButtonEnabled = value;
                    this.OnPropertyChanged("IsHangUpButtonEnabled");
                }
            }
        }

        private bool mEarpieceButtonEnabled;
        public bool IsEarpieceButtonEnabled
        {
            get
            {
                return this.mEarpieceButtonEnabled;
            }

            set
            {
                if (this.mEarpieceButtonEnabled != value)
                {
                    this.mEarpieceButtonEnabled = value;
                    this.OnPropertyChanged("IsEarpieceButtonEnabled");
                }
            }
        }

        private bool mSpeakerButtonEnabled;
        public bool IsSpeakerButtonEnabled
        {
            get
            {
                return mSpeakerButtonEnabled;
            }

            set
            {
                if (mSpeakerButtonEnabled != value)
                {
                    mSpeakerButtonEnabled = value;
                    this.OnPropertyChanged("IsSpeakerButtonEnabled");
                }
            }
        }

        private bool mBluetoothButtonEnabled;
        public bool IsBluetoothButtonEnabled
        {
            get
            {
                return this.mBluetoothButtonEnabled;
            }

            set
            {
                if (this.mBluetoothButtonEnabled != value)
                {
                    mBluetoothButtonEnabled = value;
                    this.OnPropertyChanged("IsBluetoothButtonEnabled");
                }
            }
        }

        private Brush mEarpieceButtonBorder;
        public Brush EarpieceButtonBorder
        {
            get
            {
                return mEarpieceButtonBorder;
            }

            set
            {
                if (mEarpieceButtonBorder != value)
                {
                    mEarpieceButtonBorder = value;
                    this.OnPropertyChanged("EarpieceButtonBorder");
                }
            }
        }

        private Brush mSpeakerButtonBorder;
        public Brush SpeakerButtonBorder
        {
            get
            {
                return this.mSpeakerButtonBorder;
            }

            set
            {
                if (this.mSpeakerButtonBorder != value)
                {
                    this.mSpeakerButtonBorder = value;
                    this.OnPropertyChanged("SpeakerButtonBorder");
                }
            }
        }

        private Brush mBluetoothButtonBorder;
        public Brush BluetoothButtonBorder
        {
            get
            {
                return this.mBluetoothButtonBorder;
            }

            set
            {
                if (this.mBluetoothButtonBorder != value)
                {
                    this.mBluetoothButtonBorder = value;
                    this.OnPropertyChanged("BluetoothButtonBorder");
                }
            }
        }

        private Uri mLittleHeadPreviewUri;
        public Uri LittleHeadPreviewUri
        {
            get
            {
                return this.mLittleHeadPreviewUri;
            }

            set
            {
                if (this.mLittleHeadPreviewUri != value)
                {
                    this.mLittleHeadPreviewUri = value;
                    this.OnPropertyChanged("LittleHeadPreviewUri");
                }
            }
        }

        private Visibility mLittleHeadVisibility;
        public Visibility LittleHeadVisibility
        {
            get
            {
                return this.mLittleHeadVisibility;
            }

            set
            {
                if (this.mLittleHeadVisibility != value)
                {
                    this.mLittleHeadVisibility = value;
                    this.OnPropertyChanged("LittleHeadVisibility");
                }
            }
        }

        private Uri mBigHeadPreviewUri;
        public Uri BigHeadPreviewUri
        {
            get
            {
                return this.mBigHeadPreviewUri;
            }

            set
            {
                if (this.mBigHeadPreviewUri != value)
                {
                    this.mBigHeadPreviewUri = value;
                    this.OnPropertyChanged("BigHeadPreviewUri");
                }
            }
        }

        private Visibility mBigHeadVisibility;
        public Visibility BigHeadVisibility
        {
            get
            {
                return this.mBigHeadVisibility;
            }

            set
            {
                if (this.mBigHeadVisibility != value)
                {
                    this.mBigHeadVisibility = value;
                    this.OnPropertyChanged("BigHeadVisibility");
                }
            }
        }

        private int mCameraRotation = -90;
        public int CameraRotation
        {
            get
            {
                return mCameraRotation;
            }

            set
            {
                if (mCameraRotation != value)
                {
                    mCameraRotation = value;
                    OnPropertyChanged("CameraRotation");
                }
            }
        }

        private CameraSensorLocation mCameraLocation = CameraSensorLocation.Front;
        public CameraSensorLocation CameraLocation
        {
            get
            {
                return mCameraLocation;
            }

            set
            {
                if (mCameraLocation != value)
                {
                    mCameraLocation = value;
                    CameraRotation = (mCameraLocation == CameraSensorLocation.Front) ? -90 : 90;
                    CameraToggleButtonText = (mCameraLocation == CameraSensorLocation.Front) ? CameraToggleBack : CameraToggleFront;
                    if (LittleHeadVisibility == Visibility.Visible)
                    {
                        LittleHeadPreviewUri = (mCameraLocation == CameraSensorLocation.Front) ? frontFacingCameraStreamUri : rearFacingCameraStreamUri;
                    }
                    OnPropertyChanged("CameraLocation");
                }
            }
        }

        public void SetAudioRoute(AudioRoute newRoute)
        {
            SipService sipService = BackgroundProcessController.Instance.SipService;


            if (sipService != null && newRoute != sipService.AudioRoute)
            {
                sipService.AudioRoute = newRoute;

                // Disable all audio route buttons, so the user doesn't press them again and again.
                // The buttons will get re-enabled if required when the audio route changes.
                DisableAllAudioRouteButtons();
            }
        }

        public void RootFrame_Obscured(object sender, ObscuredEventArgs e)
        {
            Debug.WriteLine("[App] Obscured");
            // FIXME
            // BackgroundProcessController.Instance.CallController.IsRenderingVideo = false;
        }

        public void RootFrame_Unobscured(object sender, EventArgs e)
        {
            Debug.WriteLine("[App] Unobscured");
            // FIXME
            // BackgroundProcessController.Instance.CallController.IsRenderingVideo = true;
        }

        internal static String HoldStateToString(SipHoldStateState state)
        {
            if ((state & SipHoldStateState.Error) == SipHoldStateState.Error)
            {
                return "Error";
            }
            else if ((state & SipHoldStateState.LocalHeld) == SipHoldStateState.LocalHeld && (state & SipHoldStateState.RemoteHeld) == SipHoldStateState.RemoteHeld)
            {
                return "Inactive";
            }
            else if ((state & SipHoldStateState.LocalHeld) == SipHoldStateState.LocalHeld)
            {
                return "Local";
            }
            else if ((state & SipHoldStateState.RemoteHeld) == SipHoldStateState.RemoteHeld)
            {
                return "Remote";
            }
            return "None";
        }

        internal static String CallStateToString(SipAVCallState state)
        {
            switch (state)
            {
                case SipAVCallState.EarlyMedia:
                    {
                        return "Early Media";
                    }
                case SipAVCallState.InCall:
                    {
                        return "In Call";
                    }
                case SipAVCallState.Incoming:
                    {
                        return "Incoming";
                    }
                case SipAVCallState.InProgress:
                    {
                        return "In Progress";
                    }
                case SipAVCallState.RemoteRinging:
                    {
                        return "Ringing";
                    }
                case SipAVCallState.Terminated:
                    {
                        return "Terminated";
                    }
                case SipAVCallState.Terminating:
                    {
                        return "Terminating";
                    }
                default:
                    {
                        return "Unknown";
                    }
            }
        }

        private void DisableAllAudioRouteButtons()
        {
            IsEarpieceButtonEnabled = false;
            IsSpeakerButtonEnabled = false;
            IsBluetoothButtonEnabled = false;
        }
    }
}
