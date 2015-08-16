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
#include <hstring.h>
#include <memory>
#include <activation.h>
#include <wrl\module.h>
#include <crtdbg.h>
#include "Globals.h"
#include "ApiLock.h"
#include "BackEndNativeBuffer.h"

#include <algorithm>

using namespace doubango_rt::BackEnd;
using namespace Windows::Foundation;
using namespace Windows::Phone::Media::Capture;
using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Details;

// Maximum number of characters required to contain the string version of an unsigned integer
#define MAX_CHARS_IN_UINT_AS_STRING ((sizeof(unsigned int) * 4) + 1)

const LPCWSTR Globals::noOtherBackgroundProcessEventName = L"doubango_rt.noOtherBackgroundProcess";
const LPCWSTR Globals::uiDisconnectedEventName = L"doubango_rt.uiDisconnected.";
const LPCWSTR Globals::backgroundProcessReadyEventName = L"doubango_rt.backgroundProcessReady.";
Globals^ Globals::singleton = nullptr;

void Globals::StartServer(const Platform::Array<Platform::String^>^ outOfProcServerClassNames)
{
    // Make sure only one API call is in progress at a time
    std::lock_guard<std::recursive_mutex> lock(g_apiLock);

    std::unique_ptr<PFNGETACTIVATIONFACTORY[]> activationFactoryCallbacks;
    std::unique_ptr<HSTRING[]> hOutOfProcServerClassNames;

    if (outOfProcServerClassNames == nullptr)
    {
        throw ref new Platform::InvalidArgumentException(L"outOfProcServerClassNames cannot be null");
    }
    unsigned int numOutOfProcServerClassNames = outOfProcServerClassNames->Length;

    if (this->started)
    {
        return; // Nothing more to be done
    }

    // Initialize the structures required to register the out-of-proc server classes
    activationFactoryCallbacks.reset(new PFNGETACTIVATIONFACTORY[numOutOfProcServerClassNames]);        
    hOutOfProcServerClassNames.reset(new HSTRING[numOutOfProcServerClassNames]);
    for(unsigned int index = 0; index < numOutOfProcServerClassNames; index++)
    {
        activationFactoryCallbacks[index] = &(Microsoft::WRL::Details::ActivationFactoryCallback<Microsoft::WRL::OutOfProcDisableCaching>);
        hOutOfProcServerClassNames[index] = reinterpret_cast<HSTRING>(outOfProcServerClassNames[index]);
    }

    // Register the out-of-proc server classes
    HRESULT hr = ::RoRegisterActivationFactories(
        hOutOfProcServerClassNames.get(), activationFactoryCallbacks.get(), numOutOfProcServerClassNames, &this->serverRegistrationCookie);
    if (FAILED(hr))
    {
        throw ref new Platform::COMException(hr, L"Unable to start server");
    }

    // Set an event that indicates that the background process is ready.
    this->backgroundReadyEvent = ::CreateEventEx(
        NULL,
        Globals::GetBackgroundProcessReadyEventName(Globals::GetCurrentProcessId())->Data(),
        CREATE_EVENT_INITIAL_SET | CREATE_EVENT_MANUAL_RESET,
        EVENT_ALL_ACCESS);
    if (this->backgroundReadyEvent == NULL)
    {
        // Something went wrong
        DWORD dwErr = ::GetLastError();
        hr = HRESULT_FROM_WIN32(dwErr);
        throw ref new Platform::COMException(hr, L"An error occurred trying to create an event that indicates that the background process is ready");
    }

    // Set the event
    BOOL success = ::SetEvent(this->backgroundReadyEvent);
    if (success == FALSE)
    {
        DWORD dwErr = ::GetLastError();
        hr = HRESULT_FROM_WIN32(dwErr);
        throw ref new Platform::COMException(hr, L"An error occurred trying to set an event that indicates that the background process is ready");
    }

    this->started = true;
}

void Globals::DoPeriodicKeepAlive()
{
    // Make sure only one API call is in progress at a time
    std::lock_guard<std::recursive_mutex> lock(g_apiLock);

    // TODO: Do stuff here - refresh tokens, get new certs from server, etc.
}

void Globals::ReceiveVideoFrame(BYTE* bytes, int byteCount, UINT64 hnsPresentationTime, UINT64 hnsSampleDurationTime)
{
	static const int MaxPacketSize = 10*1024*1024;

    int bytesToSend = byteCount;

    while (bytesToSend)
    {
        int chunkSize = bytesToSend > MaxPacketSize ? MaxPacketSize : bytesToSend;
        ComPtr<NativeBuffer> spNativeBuffer = NULL;
        
        // Temporarily duplicating this for sample so that MSS can own this
        // buffer, and will be released when the stream itself is released
        BYTE* pMem = new BYTE[chunkSize];
                
        memcpy((void*) pMem, (void*) bytes, chunkSize);

        MakeAndInitialize<NativeBuffer>(&spNativeBuffer, pMem, chunkSize, TRUE);
		VideoFrameReceived(NativeBuffer::GetIBufferFromNativeBuffer(spNativeBuffer), hnsPresentationTime, hnsSampleDurationTime);
        

        // Increment byte position
        bytes += chunkSize;
        bytesToSend -= chunkSize;            
    }
}

unsigned int Globals::GetCurrentProcessId()
{
    return ::GetCurrentProcessId();
}

Platform::String^ Globals::GetUiDisconnectedEventName(unsigned int backgroundProcessId)
{
    WCHAR backgroundProcessIdString[MAX_CHARS_IN_UINT_AS_STRING];
    if (swprintf_s<_countof(backgroundProcessIdString)>(backgroundProcessIdString, L"%u", backgroundProcessId) < 0)
        throw ref new Platform::FailureException(L"Could not create string version of background process id");

    auto eventName = ref new Platform::String(Globals::uiDisconnectedEventName) + ref new Platform::String(backgroundProcessIdString);
    return eventName;
}

Platform::String^ Globals::GetBackgroundProcessReadyEventName(unsigned int backgroundProcessId)
{
    WCHAR backgroundProcessIdString[MAX_CHARS_IN_UINT_AS_STRING];
    if (swprintf_s<_countof(backgroundProcessIdString)>(backgroundProcessIdString, L"%u", backgroundProcessId) < 0)
        throw ref new Platform::FailureException(L"Could not create string version of background process id");

    auto eventName = ref new Platform::String(Globals::backgroundProcessReadyEventName) + ref new Platform::String(backgroundProcessIdString);
    return eventName;
}

Globals^ Globals::Instance::get()
{
    if (Globals::singleton == nullptr)
    {
        // Make sure only one API call is in progress at a time
        std::lock_guard<std::recursive_mutex> lock(g_apiLock);

        if (Globals::singleton == nullptr)
        {
            Globals::singleton = ref new Globals();
        }
        // else: some other thread has created an instance of the call controller
    }

    return Globals::singleton;
}

IVideoRenderer^ Globals::VideoRenderer::get()
{
    // No need to lock - this get is idempotent
    return this->videoRenderer;
}

void Globals::VideoRenderer::set(IVideoRenderer^ value)
{
    // Make sure only one API call is in progress at a time
    std::lock_guard<std::recursive_mutex> lock(g_apiLock);

    this->videoRenderer = value;
}

doubango_rt::BackEnd::SipService^ Globals::SipService::get()
{
	return this->sipService;
}

Globals::Globals() :
    started(false),
    serverRegistrationCookie(NULL),
	sipService(nullptr),
    videoRenderer(nullptr),
    noOtherBackgroundProcessEvent(NULL),
    backgroundReadyEvent(NULL)
{
    {
        WCHAR szBuffer[256];
        swprintf_s<ARRAYSIZE(szBuffer)>(szBuffer, L"[Globals::Globals] => VoIP background process with id %d starting up\n", this->GetCurrentProcessId());
        ::OutputDebugString(szBuffer);
    }

    // Create an event that indicates if any other VoIP background exits or not
    this->noOtherBackgroundProcessEvent = ::CreateEventEx(NULL, Globals::noOtherBackgroundProcessEventName, CREATE_EVENT_INITIAL_SET | CREATE_EVENT_MANUAL_RESET, EVENT_ALL_ACCESS);
    if (this->noOtherBackgroundProcessEvent == NULL)
    {
        // Something went wrong
        DWORD dwErr = ::GetLastError();
        HRESULT hr = HRESULT_FROM_WIN32(dwErr);
        throw ref new Platform::COMException(hr, L"An error occurred trying to create an event that indicates if the background process exists or not");
    }

    // Wait for up to 30 seconds for the event to become set - if another instance of this process exists, this event would be in the reset state
    DWORD reason = ::WaitForSingleObjectEx(this->noOtherBackgroundProcessEvent, 30 * 1000, FALSE);
    _ASSERT(reason != WAIT_FAILED); // We don't care about any of the other reasons why WaitForSingleObjectEx returned
    if (reason == WAIT_TIMEOUT)
    {
        throw ref new Platform::FailureException(L"Another instance of the VoIP background process exists and that process did not exit within 30 seconds. Cannot continue.");
    }

    // Reset the event to indicate that there is a VoIP background process
    BOOL success = ::ResetEvent(this->noOtherBackgroundProcessEvent);
    if (success == FALSE)
    {
        // Something went wrong
        DWORD dwErr = ::GetLastError();
        HRESULT hr = HRESULT_FROM_WIN32(dwErr);
        throw ref new Platform::COMException(hr, L"An error occurred trying to reset the event that indicates if the background process exists or not");
    }

	// Initialize the SIP service
	this->sipService = ref new doubango_rt::BackEnd::SipService();
}

Globals::~Globals()
{
    // The destructor of this singleton object is called when the process is shutting down.

	// Stop SIP service
	if(this->sipService)
	{
		this->sipService->Stop(true);
	}

    // Before shutting down, make sure the UI process is not connected
    HANDLE uiDisconnectedEvent = ::OpenEvent(EVENT_ALL_ACCESS, FALSE, Globals::GetUiDisconnectedEventName(Globals::GetCurrentProcessId())->Data());
    if (uiDisconnectedEvent != NULL)
    {
        // The event exists - wait for it to get signaled (for a maximum of 30 seconds)
        DWORD reason = ::WaitForSingleObjectEx(uiDisconnectedEvent, 30 * 1000, FALSE);
        _ASSERT(reason != WAIT_FAILED); // We don't care about any of the other reasons why WaitForSingleObjectEx returned
    }

    // At this point, the UI is no longer connected to the background process.
    // It is possible that the UI now reconnects to the background process - this would be a bug,
    // and we should exit the background process anyway.

    // Unset the event that indicates that the background process is ready
    BOOL success;
    if (this->backgroundReadyEvent != NULL)
    {
        success = ::ResetEvent(this->backgroundReadyEvent);
        _ASSERT(success);

        ::CloseHandle(this->backgroundReadyEvent);
        this->backgroundReadyEvent = NULL;
    }

    // Unregister the activation factories for out-of-process objects hosted in this process
    if (this->started)
    {
        RoRevokeActivationFactories(this->serverRegistrationCookie);
    }

    // Set the event that indicates that no instance of the VoIP background process exists
    if (this->noOtherBackgroundProcessEvent != NULL)
    {
        success = ::SetEvent(this->noOtherBackgroundProcessEvent);
        _ASSERT(success);

        ::CloseHandle(this->noOtherBackgroundProcessEvent);
        this->noOtherBackgroundProcessEvent = NULL;
    }

	// Destroy SIP service right now (do not wait for the GC)
	if(this->sipService)
	{
		delete this->sipService;
		this->sipService = nullptr;
	}

    {
        WCHAR szBuffer[256];
        swprintf_s<ARRAYSIZE(szBuffer)>(szBuffer, L"[Globals::~Globals] => VoIP background process with id %d shutting down\n", this->GetCurrentProcessId());
        ::OutputDebugString(szBuffer);
    }
}
