/* 
    Copyright (c) 2012 Microsoft Corporation.  All rights reserved.
    Use of this sample source code is subject to the terms of the Microsoft license 
    agreement under which you licensed this sample source code and is provided AS-IS.
    If you did not accept the terms of the license agreement, you are not authorized 
    to use this sample source code.  For the terms of the license, please see the 
    license agreement between you and Microsoft.
*/
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
#pragma once
#include <windows.h>
#include <mutex>

#include "rt_SipCallback.h"
#include "rt_DDebug.h"

namespace doubango_rt
{
    namespace BackEnd
    {
		ref class rtSipStack;
		ref class rtCallSession;
		ref class rtRegistrationSession;
		ref class rtSipUri;
		ref class rtActionConfig;

		public enum class AudioRoute
        {
            None            = Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints::None,
            Earpiece        = Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints::Earpiece,
            Speakerphone    = Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints::Speakerphone,
            Bluetooth       = Windows::Phone::Media::Devices::AvailableAudioRoutingEndpoints::Bluetooth
        };

		public enum class CameraSensorLocation
		{
			Front = Windows::Phone::Media::Capture::CameraSensorLocation::Front,
			Back = Windows::Phone::Media::Capture::CameraSensorLocation::Back
		};

		public enum class DebugLevel
        {
			Info,
			Warn,
			Error,
			Fatal
		};

		public enum class SipSessionState
        {
			None,
			Connecting,
            Connected,
            Terminating,
            Terminated,
			Error
        };
		public enum class SipStackState
        {
			None,
			Starting,
            Started,
            Stopping,
            Stopped,
			Error
        };
		public enum class SipAVCallState
        {
            None,
            Incoming,
            InProgress,
            RemoteRinging,
            EarlyMedia,
            InCall,
            Terminating,
            Terminated
        };
		
		public enum class SipHoldStateState
        {
			None = 0x00,
			LocalHeld = 0x01 << 0,
			RemoteHeld = 0x01 << 1,
			Error = 0x01 << 2
		};

		public enum class SipNetworkTransport
		{
			UDP,
			TCP
		};

		public enum class IPVersion
		{
			IPv4,
			IPv6
		};

		public interface class IDebugMessageListener
        {
			void OnDebugMessage(DebugLevel level, Platform::String^ message);
		};

		public interface class IAudioStateChangedListener
        {
			void OnAudioRoutingChanged(doubango_rt::BackEnd::AudioRoute newRoute);
		};

		public interface class ISipRegistrationStateChangedListener
        {
			void OnRegistrationStateChanged(SipSessionState newState, uint16 sipCode, Platform::String^ description);
		};

		public interface class ISipAVCallStateChangedListener
        {
			void OnAVCallStateChanged(SipAVCallState newState, uint16 sipCode, Platform::String^ description);
			void OnHoldStateChanged(SipHoldStateState newState);
		};

		public interface class ISipStackStateChangedListener
        {
			void OnStackStateChanged(SipStackState newState, Platform::String^ description);
		};
		
		public ref class SipConfig sealed
		{
		public:
			virtual ~SipConfig();
			#define DECLARE_PROPERTY_RW(name, prefix, type)\
				property type name\
				{\
					type get()\
					{\
						return m_##prefix##name;\
					};\
					void set(type value)\
					{\
						m_##prefix##name = value;\
					};\
				}\

			DECLARE_PROPERTY_RW(DisplayName, p, Platform::String^);
			DECLARE_PROPERTY_RW(RealmUri, p, Platform::String^);
			DECLARE_PROPERTY_RW(ImpiString, p, Platform::String^);
			DECLARE_PROPERTY_RW(ImpuUri, p, Platform::String^);
			DECLARE_PROPERTY_RW(Password, p, Platform::String^);
			DECLARE_PROPERTY_RW(ProxyHost, p, Platform::String^);
			DECLARE_PROPERTY_RW(ProxyPort, n, uint16);
			DECLARE_PROPERTY_RW(EarlyIMS, b, bool);
			DECLARE_PROPERTY_RW(Transport, e, SipNetworkTransport);
			DECLARE_PROPERTY_RW(IPVersion, e, doubango_rt::BackEnd::IPVersion);
			DECLARE_PROPERTY_RW(PushNotificationUri, p, Platform::String^);
			DECLARE_PROPERTY_RW(UserAgent, p, Platform::String^);
			
		internal:
			SipConfig(Platform::String^ realmUri, Platform::String^ impiString, Platform::String^ impuUri);

		private:
			Platform::String^ m_pDisplayName;
			Platform::String^ m_pRealmUri;
			Platform::String^ m_pImpiString;
			Platform::String^ m_pImpuUri;
			Platform::String^ m_pPassword;
			Platform::String^ m_pProxyHost;
			uint16 m_nProxyPort;
			bool m_bEarlyIMS;
			SipNetworkTransport m_eTransport;
			doubango_rt::BackEnd::IPVersion m_eIPVersion;
			Platform::String^ m_pPushNotificationUri;
			Platform::String^ m_pUserAgent;
		};

		public ref class SipAVCall sealed
		{
		internal:
			SipAVCall(bool bWithVideo, rtCallSession^ pCallSession, Windows::Phone::Networking::Voip::VoipPhoneCall^ pVoipCall);

			property rtCallSession^ CallSession
            {
                rtCallSession^ get()
                {
                    return m_pCallSession;
                };
            }

			property Windows::Phone::Networking::Voip::VoipPhoneCall^ VoipCall
            {
                Windows::Phone::Networking::Voip::VoipPhoneCall^ get()
                {
                    return m_pVoipCall;
                };
				void set(Windows::Phone::Networking::Voip::VoipPhoneCall^ value)
                {
                    m_pVoipCall = value;
                };
            }

			property rtSipUri^ UriRemote_
            {
                void set(rtSipUri^ value)
				{
					m_pUriRemote = value;
				};
            }
			property SipAVCallState State_
            {
                void set(SipAVCallState value)
                {
                    m_eState = value;
                };
            }
			property SipHoldStateState HoldState_
            {
                void set(SipHoldStateState value)
                {
                    m_eHoldState = value;
                };
            }
			property bool WithVideo_
            {
                void set(bool value)
                {
                    m_bWithVideo = value;
                };
            }

		public:
			virtual ~SipAVCall();

			property bool WithVideo
            {
                bool get()
                {
                    return m_bWithVideo;
                };
            }
			property SipAVCallState State
            {
                SipAVCallState get()
                {
                    return m_eState;
                };
            }
			property SipHoldStateState HoldState
            {
                SipHoldStateState get()
                {
                    return m_eHoldState;
                };
            }
			
			property rtSipUri^ UriRemote
            {
                rtSipUri^ get()
                {
                    return m_pUriRemote;
                };
            }

			bool Accept(rtActionConfig^ config);
			bool HangUp(rtActionConfig^ config);
			bool Hold(rtActionConfig^ config);
			bool Resume(rtActionConfig^ config);

		private:
			bool m_bWithVideo;
			SipAVCallState m_eState;
			SipHoldStateState m_eHoldState;
			rtSipUri^ m_pUriRemote;
			rtCallSession^ m_pCallSession;
			Windows::Phone::Networking::Voip::VoipPhoneCall^ m_pVoipCall;
		};

		public ref class SipService sealed: public rtISipCallback, public rtIDDebugCallback
        {
        public:
			virtual ~SipService();
		internal:
			SipService();


		public:
			
			property doubango_rt::BackEnd::SipConfig^ SipConfig
            {
				doubango_rt::BackEnd::SipConfig ^ get()
				{
					return m_pSipConfig;
				}
            }

			property SipSessionState RegistrationState
            {
				SipSessionState get();
            }

			property SipAVCall^ SipActiveAVCall
            {
                SipAVCall^ get()
                {
                    return m_pSipActiveAVCall;
                };
            }

			property AudioRoute AvailableAudioRoutes
            {
                AudioRoute get();
            }

			property AudioRoute AudioRoute
            {
                doubango_rt::BackEnd::AudioRoute get();
				void set(doubango_rt::BackEnd::AudioRoute newRoute);
            }

			property doubango_rt::BackEnd::CameraSensorLocation CameraLocation
            {
                doubango_rt::BackEnd::CameraSensorLocation get();
				void set(doubango_rt::BackEnd::CameraSensorLocation newLocation);
            }

			void SetDebugMessageListener(IDebugMessageListener^ pListener);
			void SetAudioStateChangedListener(IAudioStateChangedListener^ pListener);
			void SetSipRegistrationStateChangedListener(ISipRegistrationStateChangedListener^ pListener);
			void SetSipStackStateChangedListener(ISipStackStateChangedListener^ pListener);
			void SetSipAVCallStateChangedListener(ISipAVCallStateChangedListener^ pListener);

			bool Start();
			bool Stop(bool bEnteringBackground);
			bool Register();
			bool UnRegister();

			SipAVCall^ MakeCallAudio(rtSipUri^ pTo, rtActionConfig^ pConfig);
			SipAVCall^ MakeCallAudioVideo(rtSipUri^ pTo, rtActionConfig^ pConfig);

		private:
			SipAVCall^ MakeCall(rtSipUri^ pTo, bool bWithVideo, rtActionConfig^ pConfig);

		public:
			// rtISipCallback
			virtual int OnDialogEvent(rtDialogEvent^ e);
			virtual int OnStackEvent(rtStackEvent^ e);
			virtual int OnInviteEvent(rtInviteEvent^ e);
			virtual int OnMessagingEvent(rtMessagingEvent^ e);
			virtual int OnInfoEvent(rtInfoEvent^ e);
			virtual int OnOptionsEvent(rtOptionsEvent^ e);
			virtual int OnPublicationEvent(rtPublicationEvent^ e);
			virtual int OnRegistrationEvent(rtRegistrationEvent^ e);
			virtual int OnSubscriptionEvent(rtSubscriptionEvent^ e);
			// rtIDDebugCallback
			virtual int OnDebugInfo(Platform::String^ message);
			virtual int OnDebugWarn(Platform::String^ message);
			virtual int OnDebugError(Platform::String^ message);
			virtual int OnDebugFatal(Platform::String^ message);


		private:
            void OnAcceptCallRequested(Windows::Phone::Networking::Voip::VoipPhoneCall^ sender, Windows::Phone::Networking::Voip::CallAnswerEventArgs^ args);
            void OnRejectCallRequested(Windows::Phone::Networking::Voip::VoipPhoneCall^ sender, Windows::Phone::Networking::Voip::CallRejectEventArgs^ args);
            void OnHoldCallRequested(Windows::Phone::Networking::Voip::VoipPhoneCall^ sender, Windows::Phone::Networking::Voip::CallStateChangeEventArgs^ args);
            void OnResumeCallRequested(Windows::Phone::Networking::Voip::VoipPhoneCall^ sender, Windows::Phone::Networking::Voip::CallStateChangeEventArgs^ args);
            void OnEndCallRequested(Windows::Phone::Networking::Voip::VoipPhoneCall^ sender, Windows::Phone::Networking::Voip::CallStateChangeEventArgs^ args);

			void OnAudioEndpointChanged(Windows::Phone::Media::Devices::AudioRoutingManager^ sender, Object^ args);
			
            static SipService^ singleton;
			rtSipStack^ m_pSipStack;
			doubango_rt::BackEnd::SipConfig^ m_pSipConfig;

			Windows::Foundation::TypedEventHandler<Windows::Phone::Networking::Voip::VoipPhoneCall^, Windows::Phone::Networking::Voip::CallAnswerEventArgs^>^ m_pAcceptCallRequestedHandler;
            Windows::Foundation::TypedEventHandler<Windows::Phone::Networking::Voip::VoipPhoneCall^, Windows::Phone::Networking::Voip::CallRejectEventArgs^>^ m_pRejectCallRequestedHandler;
            Windows::Foundation::TypedEventHandler<Windows::Phone::Networking::Voip::VoipPhoneCall^, Windows::Phone::Networking::Voip::CallStateChangeEventArgs^>^ m_pHoldCallRequestedHandler;
            Windows::Foundation::TypedEventHandler<Windows::Phone::Networking::Voip::VoipPhoneCall^, Windows::Phone::Networking::Voip::CallStateChangeEventArgs^>^ m_pResumeCallRequestedHandler;
            Windows::Foundation::TypedEventHandler<Windows::Phone::Networking::Voip::VoipPhoneCall^, Windows::Phone::Networking::Voip::CallStateChangeEventArgs^>^ m_pEndCallRequestedHandler;

			doubango_rt::BackEnd::CameraSensorLocation m_eCameraLocation;
			
			IDebugMessageListener^ m_pDebugMessageListener;
			IAudioStateChangedListener^ m_pAudioStateChangedListener;
			ISipStackStateChangedListener^ m_pSipStackStateChangedListener;
			ISipRegistrationStateChangedListener^ m_pSipRegistrationStateChangedListener;
			ISipAVCallStateChangedListener^ m_pSipAVCallStateChangedListener;

			rtRegistrationSession^ m_pSessionReg;

			SipStackState m_eStackState;
			SipSessionState m_eSessionStateRegistration;

			SipAVCall^ m_pSipActiveAVCall;

            Platform::String^ m_pCallInProgressPageUri;
            Platform::String^ m_pVoipServiceName;
            Windows::Foundation::Uri^ m_pDefaultContactImageUri;
            Windows::Foundation::Uri^ m_pBrandingImageUri;
            Windows::Foundation::Uri^ m_pRingtoneUri;
			Windows::Phone::Media::Devices::AudioRoutingManager^ m_pAudioRoutingManager;
			Windows::Phone::Networking::Voip::VoipCallCoordinator^ m_pCallCoordinator;

			std::recursive_mutex mLock;
			std::recursive_mutex mLockStack;
			Windows::Foundation::IAsyncAction^ m_pAsyncStopThread;
		};
	}
}