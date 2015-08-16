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

#include <roapi.h>
#include "IVideoRenderer.h"
#include "SipService.h"
#include <vector>

namespace doubango_rt
{
    namespace BackEnd
    {
        // Forward declarations
		ref class SipService;

		public delegate void VideoFrameReceivedEventHandler(Windows::Storage::Streams::IBuffer ^pBuffer, UINT64 hnsPresentationTime, UINT64 hnsSampleDuration);
        
        // A singleton container that is used to hold other global singletons and background process-wide static state.
        // Another purpose of this class is to start the out-of-process WinRT server, so that the UI process
        // managed code can instantiate WinRT objects in this process.
        public ref class Globals sealed
        {
        public:
            // Start the out-of-process WinRT server, so that the UI process can instantiate WinRT objects in this process.
            void StartServer(const Platform::Array<Platform::String^>^ outOfProcServerClassNames);

            // Do some app-specific periodic tasks, to let the remote server know that this endpoint is still alive.
            void DoPeriodicKeepAlive();

            // Get the process id of the current process
            static unsigned int GetCurrentProcessId();

            // Get the name of the event that indicates if the UI is connected to the background process or not
            static Platform::String^ GetUiDisconnectedEventName(unsigned int backgroundProcessId);

            // Get the name of the event that indicates if the background process is ready or not
            static Platform::String^ GetBackgroundProcessReadyEventName(unsigned int backgroundProcessId);

            // Get the single instance of this class
            static property Globals^ Instance
            {
                Globals^ get();
            }

            // The singleton video renderer object.
            property IVideoRenderer^ VideoRenderer
            {
                IVideoRenderer^ get();
                void set(IVideoRenderer^ value);
            }

			// The singleton SIP service object.
			property doubango_rt::BackEnd::SipService^ SipService
            {
				doubango_rt::BackEnd::SipService^ get();
            }		

			event VideoFrameReceivedEventHandler^ VideoFrameReceived;

		internal:
			void ReceiveVideoFrame(BYTE* bytes, int byteCount, UINT64 hnsPresentationTime, UINT64 hnsSampleDurationTime);

        private:
            // Default constructor
            Globals();

            // Destructor
            ~Globals();

            // Name of the event that indicates if another instance of the VoIP background process exists or not
            static const LPCWSTR noOtherBackgroundProcessEventName;

            // Name of the event that indicates if the UI is connected to the background process or not
            static const LPCWSTR uiDisconnectedEventName;

            // Name of the event that indicates if the background process is ready or not
            static const LPCWSTR backgroundProcessReadyEventName;

            // The single instance of this class
            static Globals^ singleton;

            // Indicates if the out-of-process server has started or not
            bool started;

            // A cookie that is used to unregister remotely activatable objects in this process
            RO_REGISTRATION_COOKIE serverRegistrationCookie;

            // An event that indicates if another instance of the background process exists or not
            HANDLE noOtherBackgroundProcessEvent;

            // An event that indicates that the background process is ready
            HANDLE backgroundReadyEvent;

            // The video renderer object
            doubango_rt::BackEnd::IVideoRenderer^ videoRenderer;

			// The SIP service
			doubango_rt::BackEnd::SipService^ sipService;
        };
    }
}
