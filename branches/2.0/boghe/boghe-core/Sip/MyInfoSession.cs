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

namespace BogheCore.Sip
{
    public class MyInfoSession : MySipSession
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(MyInfoSession));

        private readonly InfoSession m_Session;

        public MyInfoSession(MySipStack sipStack, String toUri)
        :base(sipStack)
        {
            m_Session = new InfoSession(sipStack);

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
                ActionConfig config = new ActionConfig();
                config.addHeader("Content-Type", contentType);
                return m_Session.send(payload, config);
            }
            return m_Session.send(IntPtr.Zero, 0);
        }
    }
}
