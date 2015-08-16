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
#include "SipService.h"

#include "rt_Config.h"
#include "rt_SipEvent.h"
#include "rt_SipSession.h"
#include "rt_SipStack.h"
#include "rt_String.h"
#include "rt_ActionConfig.h"
#include "rt_Enums.h"
#include "rt_SipMessage.h"

#include "tsk_debug.h"

using namespace std;
using namespace Platform;
using namespace doubango_rt::BackEnd;
using namespace Windows::System::Threading;
using namespace Windows::Foundation;
using namespace Windows::Phone::Media::Devices;
using namespace Windows::Phone::Networking::Voip;


//
//	SipConfig
//
SipConfig::SipConfig(Platform::String^ realmUri, Platform::String^ impiString, Platform::String^ impuUri)
	: m_pDisplayName(nullptr)
	, m_pRealmUri(realmUri)
	, m_pImpiString(impiString)
	, m_pImpuUri(impuUri)
	, m_pPassword(nullptr)
	, m_pProxyHost(nullptr)
	, m_nProxyPort(5060)
	, m_bEarlyIMS(false)
	, m_eTransport(SipNetworkTransport::UDP)
	, m_eIPVersion(doubango_rt::BackEnd::IPVersion::IPv4)
	, m_pPushNotificationUri(nullptr)
	, m_pUserAgent(nullptr)
	, m_bEchoSupp(true)
	, m_nEchoTail(100)
	, m_nEchoSkew(0)
	, m_bNoiseSupp(true)
	, m_bVad(false)
	, m_bAgc(false)
	, m_nJbMaxLateRate(1)
	, m_bRtcp(true)
	, m_bRtcpMux(true)
{
}

SipConfig::~SipConfig()
{

}

//
//	SipAVCall
//
SipAVCall::SipAVCall(bool bWithVideo, rtCallSession^ pCallSession, VoipPhoneCall^ pVoipCall)
	: m_bWithVideo(bWithVideo)
	, m_eState(SipAVCallState::None)
	, m_eHoldState(SipHoldStateState::None)
	, m_pUriRemote(nullptr)
	, m_pCallSession(pCallSession)
	, m_pVoipCall(pVoipCall)
{
}

SipAVCall::~SipAVCall()
{
	if(m_pVoipCall)
	{
		m_pVoipCall->NotifyCallEnded();
	}
}

bool SipAVCall::Accept(rtActionConfig^ config)
{
	if(m_pCallSession != nullptr)
	{
		return m_pCallSession->accept(config);
	}
	return false;
}

bool SipAVCall::HangUp(rtActionConfig^ config)
{
	if(m_pCallSession != nullptr)
	{
		return m_pCallSession->hangup(config);
	}
	return false;
}

bool SipAVCall::Hold(rtActionConfig^ config)
{
	if(m_pVoipCall != nullptr)
	{
		return m_pCallSession->hold(config);
	}
	return false;
}

bool SipAVCall::Resume(rtActionConfig^ config)
{
	if(m_pCallSession != nullptr)
	{
		return m_pCallSession->resume(config);
	}
	return false;
}

bool SipAVCall::SendDTMF(int32 dtmfCode)
{
	if(m_pCallSession != nullptr)
	{
		return m_pCallSession->sendDTMF(dtmfCode);
	}
	return false;
}

//
//	SipService
//
SipService::SipService()
	: m_pSessionReg(nullptr)

	, m_eCameraLocation(doubango_rt::BackEnd::CameraSensorLocation::Front)

	, m_pDebugMessageListener(nullptr)
	, m_pAudioStateChangedListener(nullptr)
	, m_pSipRegistrationStateChangedListener(nullptr)
	, m_pSipStackStateChangedListener(nullptr)
	, m_pSipAVCallStateChangedListener(nullptr)

	, m_eSessionStateRegistration(SipSessionState::None)
	, m_eStackState(SipStackState::None)

	, m_pSipActiveAVCall(nullptr)

	, m_pAsyncStopThread(nullptr)

	, m_pCallInProgressPageUri(L"/CallPage.xaml")
    , m_pVoipServiceName(L"Boghe")
	, m_pDefaultContactImageUri(nullptr)
	, m_pBrandingImageUri(nullptr)
	, m_pRingtoneUri(nullptr)
	, m_pAudioRoutingManager(nullptr)
	, m_pCallCoordinator(nullptr)
{
	TSK_DEBUG_INFO("SipService::ctor()");

	m_pSipConfig = ref new doubango_rt::BackEnd::SipConfig("open-ims.test", "001@open-ims.test", "sip:001@open-ims.test");
	m_pSipStack = ref new rtSipStack(this, m_pSipConfig->RealmUri, m_pSipConfig->ImpiString, m_pSipConfig->ImpuUri);
#if 0
	m_pSipStack->addHeader("Allow", "INVITE, ACK, CANCEL, BYE, MESSAGE, OPTIONS, NOTIFY, PRACK, UPDATE, REFER");
    m_pSipStack->addHeader("Privacy", "none");
    m_pSipStack->addHeader("P-Access-Network-Info", "ADSL;utran-cell-id-3gpp=00000000");
#endif
	m_pSipStack->setDebugCallback(this);

	m_pCallCoordinator = VoipCallCoordinator::GetDefault();
    m_pAudioRoutingManager = AudioRoutingManager::GetDefault();

	String^ installFolder = String::Concat(Windows::ApplicationModel::Package::Current->InstalledLocation->Path, "\\");
    m_pDefaultContactImageUri = ref new Uri(installFolder, "Assets\\DefaultContactImage.png");
    m_pVoipServiceName = ref new String(L"Boghe");
    m_pBrandingImageUri = ref new Uri(installFolder, "Assets\\ApplicationIcon.png");
    m_pRingtoneUri = ref new Uri(installFolder, "Assets\\Ringtone.wma");

	m_pAcceptCallRequestedHandler = ref new TypedEventHandler<VoipPhoneCall^, CallAnswerEventArgs^>(this, &SipService::OnAcceptCallRequested);
    m_pRejectCallRequestedHandler = ref new TypedEventHandler<VoipPhoneCall^, CallRejectEventArgs^>(this, &SipService::OnRejectCallRequested);
    m_pHoldCallRequestedHandler = ref new TypedEventHandler<VoipPhoneCall^, CallStateChangeEventArgs^>(this, &SipService::OnHoldCallRequested);
    m_pResumeCallRequestedHandler = ref new TypedEventHandler<VoipPhoneCall^, CallStateChangeEventArgs^>(this, &SipService::OnResumeCallRequested);
    m_pEndCallRequestedHandler = ref new TypedEventHandler<VoipPhoneCall^, CallStateChangeEventArgs^>(this, &SipService::OnEndCallRequested);

	m_pAudioRoutingManager->AudioEndpointChanged += ref new TypedEventHandler<AudioRoutingManager^, Object^>(this, &SipService::OnAudioEndpointChanged);
}

// The destructor of this singleton object is called when the process is shutting down
SipService::~SipService()
{
	if(m_pSipStack)
	{
		// To avoid receiving callbacks while destroying the service
		m_pSipStack->setDebugCallback(nullptr);
	}

	::OutputDebugString(L"SipService::dtor()");
	static const bool __bEnteringBackground = false;

	Stop(__bEnteringBackground);
	
	if(m_pAsyncStopThread)
	{
		m_pAsyncStopThread->Cancel();
		m_pAsyncStopThread->Close();
		m_pAsyncStopThread = nullptr;
	}

	rtSafeDelete(m_pSipStack);
	rtSafeDelete(m_pSessionReg);
}

SipSessionState SipService::RegistrationState::get()
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	return m_eSessionStateRegistration;
}

AudioRoute SipService::AvailableAudioRoutes::get()
{
    std::lock_guard<std::recursive_mutex> lock(mLock);

	if (m_pSipActiveAVCall == nullptr || m_pSipActiveAVCall->VoipCall == nullptr || (m_pSipActiveAVCall->State != SipAVCallState::InCall && m_pSipActiveAVCall->State != SipAVCallState::EarlyMedia))
    {
        return doubango_rt::BackEnd::AudioRoute::None;
    }

    return (doubango_rt::BackEnd::AudioRoute)(m_pAudioRoutingManager->AvailableAudioEndpoints);
}

AudioRoute SipService::AudioRoute::get()
{
    std::lock_guard<std::recursive_mutex> lock(mLock);

    if (m_pSipActiveAVCall == nullptr || m_pSipActiveAVCall->VoipCall == nullptr)
    {
        // There is no call in progress
        return doubango_rt::BackEnd::AudioRoute::None;
    }

    auto audioEndpoint = m_pAudioRoutingManager->GetAudioEndpoint();
    switch(audioEndpoint)
    {
    case AudioRoutingEndpoint::Earpiece:
    case AudioRoutingEndpoint::WiredHeadset:
    case AudioRoutingEndpoint::WiredHeadsetSpeakerOnly:
        return doubango_rt::BackEnd::AudioRoute::Earpiece;

    case AudioRoutingEndpoint::Default:
    case AudioRoutingEndpoint::Speakerphone:
        return doubango_rt::BackEnd::AudioRoute::Speakerphone;

    case AudioRoutingEndpoint::Bluetooth:
    case AudioRoutingEndpoint::BluetoothWithNoiseAndEchoCancellation:
        return doubango_rt::BackEnd::AudioRoute::Bluetooth;

    default:
        throw ref new FailureException("Unexpected audio routing endpoint");
    }

}

void SipService::AudioRoute::set(doubango_rt::BackEnd::AudioRoute newRoute)
{
    std::lock_guard<std::recursive_mutex> lock(mLock);

	if (m_pSipActiveAVCall == nullptr || m_pSipActiveAVCall->VoipCall == nullptr || (m_pSipActiveAVCall->State != SipAVCallState::InCall && m_pSipActiveAVCall->State != SipAVCallState::EarlyMedia))
    {
        // There is no call in progress - do nothing
        return;
    }

    switch(newRoute)
    {
    case doubango_rt::BackEnd::AudioRoute::Earpiece:
        m_pAudioRoutingManager->SetAudioEndpoint(AudioRoutingEndpoint::Earpiece);
        break;

    case doubango_rt::BackEnd::AudioRoute::Speakerphone:
        m_pAudioRoutingManager->SetAudioEndpoint(AudioRoutingEndpoint::Speakerphone);
        break;

    case doubango_rt::BackEnd::AudioRoute::Bluetooth:
        m_pAudioRoutingManager->SetAudioEndpoint(AudioRoutingEndpoint::Bluetooth);
        break;

    case doubango_rt::BackEnd::AudioRoute::None:
    default:
        throw ref new FailureException("Cannot set audio route to CallAudioRoute::None");
    }
}

doubango_rt::BackEnd::CameraSensorLocation SipService::CameraLocation::get()
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

    return m_eCameraLocation;
}

void SipService::CameraLocation::set(doubango_rt::BackEnd::CameraSensorLocation newLocation)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	if(m_eCameraLocation != newLocation)
	{
		m_eCameraLocation = newLocation;
		if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession)
		{
			rtMediaSessionMgr^ mediaSessionMgr = m_pSipActiveAVCall->CallSession->getMediaMgr();
			if(mediaSessionMgr)
			{
				mediaSessionMgr->producerSetInt32(rt_twrap_media_type_t::twrap_media_video, "camera-location", (int32)m_eCameraLocation);
			}
		}
	}
}

void SipService::SetDebugMessageListener(IDebugMessageListener^ pListener)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	m_pDebugMessageListener = pListener;
}

void SipService::SetAudioStateChangedListener(IAudioStateChangedListener^ pListener)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	m_pAudioStateChangedListener = pListener;
}

void SipService::SetSipRegistrationStateChangedListener(ISipRegistrationStateChangedListener^ pListener)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	m_pSipRegistrationStateChangedListener = pListener;
}

void SipService::SetSipStackStateChangedListener(ISipStackStateChangedListener^ pListener)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	m_pSipStackStateChangedListener = pListener;
}

void SipService::SetSipAVCallStateChangedListener(ISipAVCallStateChangedListener^ pListener)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	m_pSipAVCallStateChangedListener = pListener;
}


void SipService::OnAcceptCallRequested(VoipPhoneCall^ sender, CallAnswerEventArgs^ args)
{
    std::lock_guard<std::recursive_mutex> lock(mLock);

    TSK_DEBUG_INFO("OnAcceptCallRequested");

    VoipPhoneCall^ incomingCall = (VoipPhoneCall^)sender;

	if(m_pSipActiveAVCall && m_pSipActiveAVCall->VoipCall == incomingCall)
	{
		incomingCall->NotifyCallActive();

		rtActionConfig^ pConfig = ref new rtActionConfig();
		if(pConfig)
		{
			rt_twrap_media_type_t mediaType = rt_twrap_media_type_t::twrap_media_none;
			if((args->AcceptedMedia & Windows::Phone::Networking::Voip::VoipCallMedia::Audio) == Windows::Phone::Networking::Voip::VoipCallMedia::Audio)
			{
				mediaType = (mediaType | rt_twrap_media_type_t::twrap_media_audio);
			}
			if((args->AcceptedMedia & Windows::Phone::Networking::Voip::VoipCallMedia::Video) == Windows::Phone::Networking::Voip::VoipCallMedia::Video)
			{
				mediaType = (mediaType | rt_twrap_media_type_t::twrap_media_video);
			}
			m_pSipActiveAVCall->WithVideo_ = ((mediaType & rt_twrap_media_type_t::twrap_media_video) == rt_twrap_media_type_t::twrap_media_video);
			pConfig->setActiveMedia(mediaType);
		}
		
		if(m_pSipAVCallStateChangedListener)
		{
			static const uint16 __sipCode = 0;
			m_pSipActiveAVCall->State_ = SipAVCallState::Incoming;
			m_pSipAVCallStateChangedListener->OnAVCallStateChanged(m_pSipActiveAVCall->State, __sipCode, "Incoming");
		}

		m_pSipActiveAVCall->Accept(pConfig);
	}
}

void SipService::OnRejectCallRequested(VoipPhoneCall^ sender, CallRejectEventArgs^ args)
{
    std::lock_guard<std::recursive_mutex> lock(mLock);

	TSK_DEBUG_INFO("OnRejectCallRequested");

    VoipPhoneCall^ incomingCall = (VoipPhoneCall^)sender;

	if(m_pSipActiveAVCall && m_pSipActiveAVCall->VoipCall == incomingCall)
	{
		m_pSipActiveAVCall->VoipCall = nullptr; // to avoid calling NotifyCallEnded() on it as it was never activated
		m_pSipActiveAVCall->HangUp(nullptr);
	}
	else
	{
		// https://groups.google.com/group/doubango/browse_thread/thread/3ce21cfd6ed043ad
		// If the call doesn't match this means it's already ended or unknown (looks to be a bug in WP8)
		incomingCall->NotifyCallEnded();
	}
}

void SipService::OnHoldCallRequested(VoipPhoneCall^ sender, CallStateChangeEventArgs^ args)
{
    std::lock_guard<std::recursive_mutex> lock(mLock);

	TSK_DEBUG_INFO("OnHoldCallRequested");

    VoipPhoneCall^ callToPutOnHold = (VoipPhoneCall^)sender;

    if (m_pSipActiveAVCall && m_pSipActiveAVCall->VoipCall == callToPutOnHold)
    {
		m_pSipActiveAVCall->Hold(nullptr);
    }
}

void SipService::OnResumeCallRequested(VoipPhoneCall^ sender, CallStateChangeEventArgs^ args)
{
    std::lock_guard<std::recursive_mutex> lock(mLock);

	TSK_DEBUG_INFO("OnResumeCallRequested");

    VoipPhoneCall^ callToResume = (VoipPhoneCall^)sender;

    if (m_pSipActiveAVCall && m_pSipActiveAVCall->VoipCall == callToResume)
    {
		m_pSipActiveAVCall->Resume(nullptr);
    }
}

void SipService::OnEndCallRequested(VoipPhoneCall^ sender, CallStateChangeEventArgs^ args)
{
    std::lock_guard<std::recursive_mutex> lock(mLock);

	TSK_DEBUG_INFO("OnEndCallRequested");

    VoipPhoneCall^ callToEnd = (VoipPhoneCall^)sender;

	if (m_pSipActiveAVCall && m_pSipActiveAVCall->VoipCall == callToEnd)
    {
		m_pSipActiveAVCall->HangUp(nullptr);
    }
}

void SipService::OnAudioEndpointChanged(AudioRoutingManager^ sender, Object^ args)
{
    std::lock_guard<std::recursive_mutex> lock(mLock);

	if (m_pSipActiveAVCall != nullptr && m_pSipActiveAVCall->VoipCall != nullptr && m_pAudioStateChangedListener != nullptr)
    {
        m_pAudioStateChangedListener->OnAudioRoutingChanged(this->AudioRoute);
    }
}

bool SipService::Start()
{
	std::lock_guard<std::recursive_mutex> lock(mLockStack);

	bool ret = true;

	{
		std::lock_guard<std::recursive_mutex> selflock(mLock);

		// Global values (called here to share same global memory)
		rtMediaSessionMgr::defaultsSetAgcEnabled(m_pSipConfig->Agc);
		rtMediaSessionMgr::defaultsSetEchoSuppEnabled(m_pSipConfig->EchoSupp);
		rtMediaSessionMgr::defaultsSetEchoTail(m_pSipConfig->EchoTail);
		rtMediaSessionMgr::defaultsSetEchoSkew(m_pSipConfig->EchoSkew);
		rtMediaSessionMgr::defaultsSetNoiseSuppEnabled(m_pSipConfig->NoiseSupp);
		rtMediaSessionMgr::defaultsSetVadEnabled(m_pSipConfig->Vad);
		rtMediaSessionMgr::defaultsSetJbMaxLateRate(m_pSipConfig->JbMaxLateRate);
		rtMediaSessionMgr::defaultsSetRtcpEnabled(m_pSipConfig->Rtcp);
		rtMediaSessionMgr::defaultsSetRtcpMuxEnabled(m_pSipConfig->RtcpMux);

		
		// Stack-level values
		ret &= m_pSipStack->setDisplayName(m_pSipConfig->DisplayName);
		ret &= m_pSipStack->setRealm(m_pSipConfig->RealmUri);
		ret &= m_pSipStack->setIMPI(m_pSipConfig->ImpiString);
		ret &= m_pSipStack->setIMPU(m_pSipConfig->ImpuUri);
		ret &= m_pSipStack->setPassword(m_pSipConfig->Password);
		ret &= m_pSipStack->setEarlyIMS(m_pSipConfig->EarlyIMS);
		ret &= m_pSipStack->setProxyCSCF(
			m_pSipConfig->ProxyHost, 
			m_pSipConfig->ProxyPort, 
			m_pSipConfig->Transport == doubango_rt::BackEnd::SipNetworkTransport::TCP ? "tcp" : "udp", 
			m_pSipConfig->IPVersion == doubango_rt::BackEnd::IPVersion::IPv6 ? "ipv6" : "ipv4");
		ret &= m_pSipStack->addHeader("WindowsPhonePushNotificationUri", m_pSipConfig->PushNotificationUri);
		if(m_pSipConfig->UserAgent){
			ret &= m_pSipStack->addHeader("User-Agent", m_pSipConfig->UserAgent);
		}
	}

	if(!ret)
	{
		return ret;
	}

	if(m_pAsyncStopThread)
	{
		m_pAsyncStopThread->Cancel();
		m_pAsyncStopThread->Close();
		m_pAsyncStopThread = nullptr;
	}

	return m_pSipStack->start();
}

bool SipService::Stop(bool bEnteringBackground)
{
	std::lock_guard<std::recursive_mutex> lock(mLockStack);

	if(bEnteringBackground && SipActiveAVCall != nullptr)
	{
		TSK_DEBUG_INFO("Ignore SipService::Stop() as there is active call and the function is called because we are entering on background");
		return true;
	}

	TSK_DEBUG_INFO("SipService::Stop()");
	
	if(m_pSipStack)
	{
#if 0
		if(m_pAsyncStopThread == nullptr)
		{
			auto workItemHandler = ref new WorkItemHandler([=](IAsyncAction^)
			{
				try
				{
					if(m_pSipStack)
					{
						m_pSipStack->stop();
					}
				}
				catch (...) 
				{ 
					if(m_pAsyncStopThread)
					{
						m_pAsyncStopThread->Cancel();
						m_pAsyncStopThread->Close();
						m_pAsyncStopThread = nullptr;
					}
				}
			}, CallbackContext::Any);

			m_pAsyncStopThread = ThreadPool::RunAsync(workItemHandler, WorkItemPriority::High, WorkItemOptions::TimeSliced);
		}
#else
		return m_pSipStack->stop();
#endif
	}

	return true;
}

bool SipService::Register()
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	if(!m_pSessionReg)
	{
		m_pSessionReg = ref new rtRegistrationSession(m_pSipStack);
	}
	return m_pSessionReg->register_();
}

bool SipService::UnRegister()
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	if(m_pSessionReg)
	{
		return m_pSessionReg->unRegister();
	}
	return true;
}

SipAVCall^ SipService::MakeCallAudio(rtSipUri^ pTo, rtActionConfig^ pConfig)
{
	return MakeCall(pTo, false, pConfig);
}

SipAVCall^ SipService::MakeCallAudioVideo(rtSipUri^ pTo, rtActionConfig^ pConfig)
{
	return MakeCall(pTo, true, pConfig);
}

SipAVCall^ SipService::MakeCall(rtSipUri^ pTo, bool bWithVideo, rtActionConfig^ pConfig)
{
	if(!pTo)
	{
		TSK_DEBUG_ERROR("Invalid parameter");
		return nullptr;
	}
	if(m_pSipActiveAVCall)
	{
		if(m_pSipActiveAVCall->State != SipAVCallState::Terminating)
		{
			TSK_DEBUG_ERROR("Only one active call is allowed");
			return nullptr;
		}
		rtSafeDelete(m_pSipActiveAVCall);
	}

	VoipPhoneCall^ pVoipCall = nullptr;

    // Start a new outgoing call.
	String^ recipientName = pTo->getDisplayName();
	if(!recipientName)
	{
		if(!(recipientName = pTo->getUserName()))
		{
			recipientName = L"Unknown";
		}
	}
	m_pCallCoordinator->RequestNewOutgoingCall(
		m_pCallInProgressPageUri, 
		recipientName, 
		"Boghe SIP Video Client", 
		bWithVideo ? VoipCallMedia::Audio : VoipCallMedia::Audio | VoipCallMedia::Video, 
		&pVoipCall);
		
	pVoipCall->HoldRequested += m_pHoldCallRequestedHandler;
	pVoipCall->ResumeRequested += m_pResumeCallRequestedHandler;
	pVoipCall->EndRequested += m_pEndCallRequestedHandler;

	if((m_pSipActiveAVCall = ref new SipAVCall(bWithVideo, ref new rtCallSession(m_pSipStack), pVoipCall)))
	{
		m_pSipActiveAVCall->UriRemote_ = pTo;
		if(!m_pSipActiveAVCall->CallSession->call(pTo, bWithVideo ? rt_twrap_media_type_t::twrap_media_audio_video : rt_twrap_media_type_t::twrap_media_audio, pConfig))
		{
			rtSafeDelete(m_pSipActiveAVCall);
		}
	}

	if(m_pSipActiveAVCall)
	{
		pVoipCall->NotifyCallActive();
	}

	return m_pSipActiveAVCall;
}

bool SipService::SetCodecs(enum class rt_tdav_codec_id_t codecs)
{
	rtSipStack::setCodecs(codecs);
	return true;
}

//
// rtISipCallback
//

// Override "rtISipCallback::OnDialogEvent"
int SipService::OnDialogEvent(rtDialogEvent^ e)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	rtISipSession^ pSipSession = e->getBaseSession();
	if(!pSipSession)
	{
		TSK_DEBUG_ERROR("Null session");
		return 0;
	}

	rtSipMessage^ sipMessage = e->getSipMessage();
	const short nCode = e->getCode();
	uint64 sessionId = pSipSession->getId();
	uint16 sipCode = (sipMessage != nullptr && sipMessage->isResponse()) ? sipMessage->getResponseCode() : 0;

	TSK_DEBUG_INFO("OnDialogEvent(%s)", rtString::toUtf8(e->getPhrase()).data());

	switch (nCode)
	{
		case tsip_event_code_dialog_connecting:
			{
				// REGISTER
				if(m_pSessionReg && m_pSessionReg->getId() == sessionId)
				{
					m_eSessionStateRegistration = SipSessionState::Connecting;
					if(m_pSipRegistrationStateChangedListener)
					{
						m_pSipRegistrationStateChangedListener->OnRegistrationStateChanged(m_eSessionStateRegistration, sipCode, e->getPhrase());
					}
				}
				// INVITE
				else if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession->getId() == sessionId)
				{
					m_pSipActiveAVCall->State_ = SipAVCallState::InProgress;
					if(m_pSipAVCallStateChangedListener)
					{
						m_pSipAVCallStateChangedListener->OnAVCallStateChanged(m_pSipActiveAVCall->State, sipCode, e->getPhrase());
					}
				}
				break;
			}

		case tsip_event_code_dialog_connected:
			{
				// REGISTER
				if(m_pSessionReg && m_pSessionReg->getId() == sessionId)
				{
					m_eSessionStateRegistration = SipSessionState::Connected;
					if(m_pSipRegistrationStateChangedListener)
					{
						m_pSipRegistrationStateChangedListener->OnRegistrationStateChanged(m_eSessionStateRegistration, sipCode, e->getPhrase());
					}
				}
				// INVITE
				else if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession->getId() == sessionId)
				{
					m_pSipActiveAVCall->State_ = SipAVCallState::InCall;
					if(m_pSipAVCallStateChangedListener)
					{
						m_pSipAVCallStateChangedListener->OnAVCallStateChanged(m_pSipActiveAVCall->State, sipCode, e->getPhrase());
					}
				}
				break;
			}

		case tsip_event_code_dialog_terminating:
			{
				// REGISTER
				if(m_pSessionReg && m_pSessionReg->getId() == sessionId)
				{
					m_eSessionStateRegistration = SipSessionState::Terminating;
					if(m_pSipRegistrationStateChangedListener)
					{
						m_pSipRegistrationStateChangedListener->OnRegistrationStateChanged(m_eSessionStateRegistration, sipCode, e->getPhrase());
					}
				}
				// INVITE
				else if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession->getId() == sessionId)
				{
					m_pSipActiveAVCall->State_ = SipAVCallState::Terminating;
					if(m_pSipAVCallStateChangedListener)
					{
						m_pSipAVCallStateChangedListener->OnAVCallStateChanged(m_pSipActiveAVCall->State, sipCode, e->getPhrase());
					}
				}
				break;
			}

		case tsip_event_code_dialog_terminated:
			{
				// REGISTER
				if(m_pSessionReg && m_pSessionReg->getId() == sessionId)
				{
					bool bError = !(m_eSessionStateRegistration != SipSessionState::Terminating);
					m_eSessionStateRegistration = SipSessionState::Terminated;
					if(m_pSipRegistrationStateChangedListener)
					{
						m_pSipRegistrationStateChangedListener->OnRegistrationStateChanged(bError ? SipSessionState::Terminated : SipSessionState::Error, sipCode, e->getPhrase());
					}
					m_pSessionReg = nullptr;
				}
				// INVITE
				else if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession->getId() == sessionId)
				{
					m_pSipActiveAVCall->State_ = SipAVCallState::Terminated;
					if(m_pSipAVCallStateChangedListener)
					{
						m_pSipAVCallStateChangedListener->OnAVCallStateChanged(m_pSipActiveAVCall->State, sipCode, e->getPhrase());
					}
					if(m_pSipActiveAVCall->VoipCall)
					{
						m_pSipActiveAVCall->VoipCall->NotifyCallEnded();
						m_pSipActiveAVCall->VoipCall = nullptr;
					}
					m_pSipActiveAVCall = nullptr;
				}
				break;
			}
	}

	return 0;
}

// Override "rtISipCallback::OnDialogEvent"
int SipService::OnStackEvent(rtStackEvent^ e)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	switch(e->getCode())
	{
		case rtConstants::rt_tsip_event_code_stack_stopped:
		case rtConstants::rt_tsip_event_code_stack_failed_to_start:
			{
				m_pSessionReg = nullptr;
				m_pSipActiveAVCall = nullptr;
				break;
			}
	}

	return 0;
}

int SipService::OnInviteEvent(rtInviteEvent^ e)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	rtISipSession^ pSipSession = e->getBaseSession();
	const rt_tsip_invite_event_type_t type = e->getType();

	if(!pSipSession)
	{
		TSK_DEBUG_ERROR("Null session");
		return -1;
	}

	const short nCode = e->getCode();
	uint64 sessionId = pSipSession->getId();
	

	switch(type)
	{
		case rt_tsip_invite_event_type_t::tsip_i_newcall:
			{
				rtSipMessage^ sipMessage = e->getSipMessage();
				if(!sipMessage)
				{
					TSK_DEBUG_ERROR("Null SIP message");
					return -1;
				}
				rt_twrap_media_type_t mediaType = e->getMediaType();
				switch(mediaType)
				{
					case rt_twrap_media_type_t::twrap_media_audio:
					case rt_twrap_media_type_t::twrap_media_audiovideo:
					case rt_twrap_media_type_t::twrap_media_video:
						{
							rtCallSession^ pCallSession = e->takeCallSessionOwnership();
							if(!pCallSession)
							{
								TSK_DEBUG_ERROR("Failed to take incoming call");
								return -1;
							}
							if(m_pSipActiveAVCall)
							{
								if(m_pSipActiveAVCall->State != SipAVCallState::Terminating)
								{
									TSK_DEBUG_ERROR("Incoming call but there is already an active call (Multi-line not supported on Windows Phone)");
									rtActionConfig^ actionConfig = ref new rtActionConfig();
									actionConfig->setResponseLine(603, "Already on Call");
									pCallSession->hangup(actionConfig);
									rtSafeDelete(actionConfig);
									return -1;
								}
								rtSafeDelete(m_pSipActiveAVCall);
							}

							TimeSpan timeout;
							timeout.Duration = 90 * 10 * 1000 * 1000; // in 100ns units

							VoipPhoneCall^ incomingCall = nullptr;

							bool withVideo = (mediaType & rt_twrap_media_type_t::twrap_media_video) == rt_twrap_media_type_t::twrap_media_video;
							rtSipUri^ uriTo = ref new rtSipUri(sipMessage->getSipHeaderValue("f"));
							String^ contactNumber = uriTo->getUserName();
							String^ contactName = uriTo->getDisplayName();
							if(!contactName)
							{
								contactName = contactNumber;
							}
							m_pCallCoordinator->RequestNewIncomingCall(
								m_pCallInProgressPageUri,
								contactName,
								contactNumber,
								m_pDefaultContactImageUri,
								m_pVoipServiceName,
								m_pBrandingImageUri,
								"",
								m_pRingtoneUri,
								withVideo ? VoipCallMedia::Audio | VoipCallMedia::Video : VoipCallMedia::Audio,
								timeout,
								&incomingCall);

							incomingCall->AnswerRequested += m_pAcceptCallRequestedHandler;
							incomingCall->RejectRequested += m_pRejectCallRequestedHandler;
							incomingCall->HoldRequested += m_pHoldCallRequestedHandler;
							incomingCall->ResumeRequested += m_pResumeCallRequestedHandler;
							incomingCall->EndRequested += m_pEndCallRequestedHandler;

							m_pSipActiveAVCall = ref new SipAVCall(withVideo, pCallSession, incomingCall);
							m_pSipActiveAVCall->UriRemote_ = uriTo;
#if 0
							incomingCall->NotifyCallActive();
							if(m_pSipActiveAVCall && m_pSipAVCallStateChangedListener)
							{
								m_pSipAVCallStateChangedListener->OnAVCallStateChanged(SipAVCallState::Incoming, e->getPhrase());
							}
#endif
							break;
						}
					default:
						{
							TSK_DEBUG_ERROR("%d not supported media type", (int32)mediaType);
							return -1;
						}
				}

				break;
			}
		case rt_tsip_invite_event_type_t::tsip_m_remote_hold:
			{
				if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession->getId() == sessionId)
				{
					m_pSipActiveAVCall->HoldState_ = (SipHoldStateState)(m_pSipActiveAVCall->HoldState & SipHoldStateState::RemoteHeld);
					if(m_pSipAVCallStateChangedListener)
					{
						m_pSipAVCallStateChangedListener->OnHoldStateChanged(m_pSipActiveAVCall->HoldState);
					}
				}
				break;
			}
		case rt_tsip_invite_event_type_t::tsip_m_remote_resume:
			{
				if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession->getId() == sessionId)
				{
					m_pSipActiveAVCall->HoldState_ = (SipHoldStateState)(m_pSipActiveAVCall->HoldState & ~SipHoldStateState::RemoteHeld);
					if(m_pSipAVCallStateChangedListener)
					{
						m_pSipAVCallStateChangedListener->OnHoldStateChanged(m_pSipActiveAVCall->HoldState);
					}
				}
				break;
			}
		case rt_tsip_invite_event_type_t::tsip_m_local_hold_ok:
			{
				if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession->getId() == sessionId)
				{
					m_pSipActiveAVCall->HoldState_ = (SipHoldStateState)(m_pSipActiveAVCall->HoldState | SipHoldStateState::LocalHeld);
#if 0
					m_pSipActiveAVCall->VoipCall->NotifyCallHeld();
#endif
					
					if(m_pSipAVCallStateChangedListener)
					{
						m_pSipAVCallStateChangedListener->OnHoldStateChanged(m_pSipActiveAVCall->HoldState);
					}
				}
				break;
			}
		case rt_tsip_invite_event_type_t::tsip_m_local_resume_ok:
			{
				if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession->getId() == sessionId)
				{
					m_pSipActiveAVCall->HoldState_ = (SipHoldStateState)(m_pSipActiveAVCall->HoldState & ~SipHoldStateState::LocalHeld);
#if 0
					m_pSipActiveAVCall->VoipCall->NotifyCallActive();
#endif
					
					if(m_pSipAVCallStateChangedListener)
					{
						m_pSipAVCallStateChangedListener->OnHoldStateChanged(m_pSipActiveAVCall->HoldState);
					}
				}
				break;
			}
		case rt_tsip_invite_event_type_t::tsip_m_local_hold_nok:
			{
				if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession->getId() == sessionId)
				{
					if(m_pSipAVCallStateChangedListener)
					{
						m_pSipAVCallStateChangedListener->OnHoldStateChanged(m_pSipActiveAVCall->HoldState);
					}
				}
				break;
			}
		case rt_tsip_invite_event_type_t::tsip_m_local_resume_nok:
			{
				if(m_pSipActiveAVCall && m_pSipActiveAVCall->CallSession->getId() == sessionId)
				{
					m_pSipActiveAVCall->HoldState_ = (SipHoldStateState)(m_pSipActiveAVCall->HoldState | SipHoldStateState::Error);
					if(m_pSipAVCallStateChangedListener)
					{
						m_pSipAVCallStateChangedListener->OnHoldStateChanged(m_pSipActiveAVCall->HoldState);
					}
				}
				break;
			}
		
	}

	return 0;
}

// Override "rtISipCallback::OnDialogEvent"
int SipService::OnMessagingEvent(rtMessagingEvent^ e)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	return 0;
}

// Override "rtISipCallback::OnDialogEvent"
int SipService::OnInfoEvent(rtInfoEvent^ e)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	return 0;
}

// Override "rtISipCallback::OnDialogEvent"
int SipService::OnOptionsEvent(rtOptionsEvent^ e)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	return 0;
}

// Override "rtISipCallback::OnDialogEvent"
int SipService::OnPublicationEvent(rtPublicationEvent^ e)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	return 0;
}

// Override "rtISipCallback::OnDialogEvent"
int SipService::OnRegistrationEvent(rtRegistrationEvent^ e)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	return 0;
}

// Override "rtISipCallback::OnDialogEvent"
int SipService::OnSubscriptionEvent(rtSubscriptionEvent^ e)
{
	std::lock_guard<std::recursive_mutex> lock(mLock);

	return 0;
}


//
// rtIDDebugCallback
//

#define OnDebug(level, message) \
	if(m_pDebugMessageListener) m_pDebugMessageListener->OnDebugMessage((level), (message)); \
	else ::OutputDebugString((message)->Data()); \
	

// rtIDDebugCallback::OnDebugInfo
int SipService::OnDebugInfo(Platform::String^ message)
{
#if 0 // MUST not
	std::lock_guard<std::recursive_mutex> lock(mLock);
#endif

	OnDebug(DebugLevel::Info, message);
	return 0;
}

// rtIDDebugCallback::OnDebugInfo
int SipService::OnDebugWarn(Platform::String^ message)
{
#if 0 // MUST not
	std::lock_guard<std::recursive_mutex> lock(mLock);
#endif

	OnDebug(DebugLevel::Info, message);
	return 0;
}

// rtIDDebugCallback::OnDebugInfo
int SipService::OnDebugError(Platform::String^ message)
{
#if 0 // MUST not
	std::lock_guard<std::recursive_mutex> lock(mLock);
#endif

	OnDebug(DebugLevel::Info, message);
	return 0;
}

// rtIDDebugCallback::OnDebugInfo
int SipService::OnDebugFatal(Platform::String^ message)
{
#if 0 // MUST not
	std::lock_guard<std::recursive_mutex> lock(mLock);
#endif

	OnDebug(DebugLevel::Info, message);
	return 0;
}