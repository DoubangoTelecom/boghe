/* Copyright (C) 2011 Doubango Telecom <http://www.doubango.org>
* Boghe IMS/RCS Client - Copyright (C) 2011 Mamadou Diop.
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
using org.doubango.tinyWRAP;
using log4net;
#if WINRT
using InfoSession = doubango_rt.BackEnd.rtInfoSession;
using ActionConfig = doubango_rt.BackEnd.rtActionConfig;
using SipSession = doubango_rt.BackEnd.rtISipSession;
#endif

namespace BogheCore.Sip
{
    public class MyInfoSession : MySipSession
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(MyInfoSession));

        private readonly InfoSession m_Session;

        public MyInfoSession(MySipStack sipStack, String toUri)
        :base(sipStack)
        {
#if WINDOWS_PHONE
            m_Session = org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtInfoSessionNew(sipStack.WrappedStack);
#else
            m_Session = new InfoSession(sipStack.WrappedStack);
#endif

            // commons
            base.init();

            base.ToUri = toUri;

            // SigComp
            base.SigCompId = sipStack.SigCompId;
        }

        protected override SipSession Session
        {
            get { return m_Session; }
        }

        public bool Send(byte[] payload, String contentType)
        {
            if (payload != null && !String.IsNullOrEmpty(contentType))
            {
                ActionConfig config =
#if WINDOWS_PHONE
 org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtActionConfigNew();
#else
            new ActionConfig();
#endif
                config.addHeader("Content-Type", contentType);
#if WINRT
#if WINDOWS_PHONE
                m_Session.send(Encoding.UTF8.GetString(payload, 0, payload.Length), config);
#else
                IntPtr payloadPtr = System.Runtime.InteropServices.Marshal.AllocHGlobal(payload.Length);
                System.Runtime.InteropServices.Marshal.Copy(payload, 0, payloadPtr, payload.Length);
                bool ret = m_Session.send(payloadPtr, (uint)payload.Length, config);
                System.Runtime.InteropServices.Marshal.FreeHGlobal(payloadPtr);
                return ret;
#endif
#else
                return m_Session.send(payload, config);
#endif
            }
#if WINDOWS_PHONE
            return m_Session.send(String.Empty);
#else
            return m_Session.send(IntPtr.Zero, 0);
#endif
        }
    }
}
