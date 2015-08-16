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
using BogheCore.Sip.Events;
using BogheCore.Sip;
using BogheCore.Events;

namespace BogheCore.Services
{
    public interface ISipService : IService
    {

        String DefaultIdentity { get; set; }
        MySipStack SipStack { get; }
        bool IsRegistered { get; }
#if !WINRT
        bool IsXcapEnabled { get; }
        bool IsPublicationEnabled { get; }
        bool IsSubscriptionEnabled { get; }
        bool IsSubscriptionToRLSEnabled { get; }
#endif
        int Codecs { get; set; }
#if !WINRT
        byte[] SubRLSContent { get; }
        byte[] SubRegContent { get; }
        byte[] SubMwiContent { get; }
        byte[] SubWinfoContent { get; }
#endif

        bool StopStack();
        bool Register();
        bool UnRegister();
#if !WINRT
        bool PresencePublish();
        bool PresencePublish(PresenceStatus status);
#endif

        bool RaiseEvent(EventArgs eargs);

        event EventHandler<RegistrationEventArgs> onRegistrationEvent;
        event EventHandler<StackEventArgs> onStackEvent;
        event EventHandler<InviteEventArgs> onInviteEvent;
        event EventHandler<MessagingEventArgs> onMessagingEvent;
        event EventHandler<SubscriptionEventArgs> onSubscriptionEvent;
#if !WINRT
        event EventHandler onHyperAvailabilityTimedout;
#endif

    }
}
