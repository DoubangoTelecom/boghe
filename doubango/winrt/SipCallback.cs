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
using System.Text;
using System.Threading.Tasks;
using doubango_rt.BackEnd;

using DialogEvent = doubango_rt.BackEnd.rtDialogEvent;

namespace org.doubango.tinyWRAP
{
    public class SipCallback : rtISipCallback
    {
        readonly rtSipCallback m_rtSipCallback;

        public SipCallback()
        {
#if WINDOWS_PHONE
            m_rtSipCallback = org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtSipCallbackNew(this);
#else
            m_rtSipCallback = new rtSipCallback(this);
#endif
        }

        public virtual int OnDialogEvent(DialogEvent e)
        {
            return 0;
        }

        public virtual int OnInfoEvent(rtInfoEvent e)
        {
            return 0;
        }

        public virtual int OnInviteEvent(rtInviteEvent e)
        {
            return 0;
        }

        public virtual int OnMessagingEvent(rtMessagingEvent e)
        {
            return 0;
        }

        public virtual int OnOptionsEvent(rtOptionsEvent e)
        {
            return 0;
        }

        public virtual int OnPublicationEvent(rtPublicationEvent e)
        {
            return 0;
        }

        public virtual int OnRegistrationEvent(rtRegistrationEvent e)
        {
            return 0;
        }

        public virtual int OnStackEvent(rtStackEvent e)
        {
            return 0;
        }

        public virtual int OnSubscriptionEvent(rtSubscriptionEvent e)
        {
            return 0;
        }
    }
}
