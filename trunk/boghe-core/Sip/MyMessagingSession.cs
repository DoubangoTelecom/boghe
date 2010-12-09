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
using org.doubango.tinyWRAP;

namespace BogheCore.Sip
{
    public class MyMessagingSession : MySipSession
    {
        private readonly MessagingSession session;

        public MyMessagingSession(MySipStack sipStack, String toUri)
        :base(sipStack)
        {
            this.session = new MessagingSession(sipStack);
            this.session.setToUri(toUri);
            
            // commons
            base.init();

            // SigComp
            base.SigCompId = sipStack.SigCompId;
        }

        protected override SipSession Session
        {
            get { return this.session; }
        }

        public bool SendBinaryMessage(String text)
        {
            this.session.addHeader("Content-Type", ContentType.SMS_3GPP);
            this.session.addHeader("Content-Transfer-Encoding", "binary");
            this.session.addCaps("+g.3gpp.smsip");

            return false;
            //byte[] payload = Encoding.UTF8.GetBytes(text);
            //bool ret = this.session.send(payload, (uint)payload.Length);
            //return ret;
        }

        public bool SendTextMessage(String text)
        {
            this.session.addHeader("Content-Type", ContentType.TEXT_PLAIN);
            byte[] payload = Encoding.UTF8.GetBytes(text);
            bool ret = this.session.send(payload, (uint)payload.Length);
            return ret;
        }
    }
}
