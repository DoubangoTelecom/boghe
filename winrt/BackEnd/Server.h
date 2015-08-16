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
#include "Globals.h"
#include "SipService.h"

namespace doubango_rt
{
    namespace BackEnd
    {
		ref class rtSipStack;
		ref class rtCallSession;
		ref class rtRegistrationSession;
		ref class rtMsrpSession;
		ref class rtMessagingSession;
		ref class rtInfoSession;
		ref class rtOptionsSession;
		ref class rtPublicationSession;
		ref class rtSubscriptionSession;
		ref class rtSipCallback;
		ref class rtDDebugCallback;
		ref class rtT140Callback;
		ref class rtMsrpCallback;

		ref class rtActionConfig;
		ref class rtSipUri;

		interface class rtIDDebugCallback;
		interface class rtISipCallback;
		interface class rtIT140Callback;
		interface class rtIMsrpCallback;

        namespace OutOfProcess
        {
            // A remotely activatable class that is used by the UI process and managed code within
            // the VoIP background process to get access to native objects that exist in the VoIP background process.
            public ref class Server sealed
            {
            public:
                // Constructor
                Server()
                {
                }

                // Destructor
                virtual ~Server()
                {
                }

				// Called by the UI process
                property doubango_rt::BackEnd::Globals^ Globals
                {
                    doubango_rt::BackEnd::Globals^ get()
                    {
                        return doubango_rt::BackEnd::Globals::Instance;
                    };
                }

				// Called by the UI process to get the SIP service object
				property SipService^ SipService
                {
                    doubango_rt::BackEnd::SipService^ get()
                    {
                        return doubango_rt::BackEnd::Globals::Instance->SipService;
                    };
                }

				rtSipStack^ rtSipStackNew(rtISipCallback^ callback, Platform::String^ realmUri, Platform::String^ impiString, Platform::String^ impuUri);
				rtSipCallback^ rtSipCallbackNew(rtISipCallback^ callback);
				rtDDebugCallback^ rtDDebugCallbackNew(rtIDDebugCallback^ callback);
				rtT140Callback^ rtT140CallbackNew(rtIT140Callback^ callback);
				rtMsrpCallback^ rtMsrpCallbackNew(rtIMsrpCallback^ callback);

				rtRegistrationSession^ rtRegistrationSessionNew(rtSipStack^ stack);
				rtMessagingSession^ rtMessagingSessionNew(rtSipStack^ stack);
				rtInfoSession^ rtInfoSessionNew(rtSipStack^ stack);
				rtOptionsSession^ rtOptionsSessionNew(rtSipStack^ stack);
				rtPublicationSession^ rtPublicationSessionNew(rtSipStack^ stack);
				rtSubscriptionSession^ rtSubscriptionSessionNew(rtSipStack^ stack);
				rtCallSession^ rtCallSessionNew(rtSipStack^ stack);
				rtMsrpSession^ rtMsrpSessionNew(rtSipStack^ stack, rtIMsrpCallback^ callback);

				rtSipUri^ rtSipUriNew(Platform::String^ uriString, Platform::String^ displayName);
				rtActionConfig^ rtActionConfigNew();
            };
        }
    }
}
