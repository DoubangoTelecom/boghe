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
#include "Server.h"

#include "rt_ActionConfig.h"
#include "rt_SipStack.h"
#include "rt_SipCallback.h"
#include "rt_SipSession.h"
#include "rt_Msrp.h"
#include "rt_SipUri.h"
#include "rt_DDebug.h"

using namespace doubango_rt::BackEnd;
using namespace doubango_rt::BackEnd::OutOfProcess;

rtSipStack^ Server::rtSipStackNew(rtISipCallback^ callback, Platform::String^ realmUri, Platform::String^ impiString, Platform::String^ impuUri)
{
	return ref new rtSipStack(callback, realmUri, impiString, impuUri);
}

rtSipCallback^ Server::rtSipCallbackNew(rtISipCallback^ callback)
{
	return ref new rtSipCallback(callback);
}

rtDDebugCallback^ Server::rtDDebugCallbackNew(rtIDDebugCallback^ callback)
{
	return ref new rtDDebugCallback(callback);
}

rtT140Callback^ Server::rtT140CallbackNew(rtIT140Callback^ callback)
{
	return ref new rtT140Callback(callback);
}

rtMsrpCallback^ Server::rtMsrpCallbackNew(rtIMsrpCallback^ callback)
{
	return ref new rtMsrpCallback(callback);
}

rtRegistrationSession^ Server::rtRegistrationSessionNew(rtSipStack^ stack)
{
	return ref new rtRegistrationSession(stack);
}

rtInfoSession^ Server::rtInfoSessionNew(rtSipStack^ stack)
{
	return ref new rtInfoSession(stack);
}

rtOptionsSession^ Server::rtOptionsSessionNew(rtSipStack^ stack)
{
	return ref new rtOptionsSession(stack);
}

rtPublicationSession^ Server::rtPublicationSessionNew(rtSipStack^ stack)
{
	return ref new rtPublicationSession(stack);
}

rtSubscriptionSession^ Server::rtSubscriptionSessionNew(rtSipStack^ stack)
{
	return ref new rtSubscriptionSession(stack);
}

rtMessagingSession^ Server::rtMessagingSessionNew(rtSipStack^ stack)
{
	return ref new rtMessagingSession(stack);
}


rtCallSession^ Server::rtCallSessionNew(rtSipStack^ stack)
{
	return ref new rtCallSession(stack);
}

rtMsrpSession^ Server::rtMsrpSessionNew(rtSipStack^ stack, rtIMsrpCallback^ callback)
{
	return ref new rtMsrpSession(stack, callback);
}

rtSipUri^ Server::rtSipUriNew(Platform::String^ uriString, Platform::String^ displayName)
{
	return ref new rtSipUri(uriString, displayName);
}

rtActionConfig^ Server::rtActionConfigNew()
{
	return ref new rtActionConfig();
}