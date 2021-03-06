﻿/*
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
using BogheCore.Events;

namespace BogheCore.Sip.Events
{
    public class InviteEventArgs : MyEventArgs
    {
        private readonly long sessionId;
        private readonly InviteEventTypes type;
        private readonly String phrase;

        public const String EXTRA_SESSION = "session";
        public const String EXTRA_SIP_CODE = "sipcode";
        public const String EXTRA_REFERTO_URI = "refer-to-uri";

        public InviteEventArgs(long sessionId, InviteEventTypes type, String phrase)
            :base()
        {
            this.sessionId = sessionId;
            this.type = type;
            this.phrase = phrase;
        }

        public long SessionId
        {
            get { return this.sessionId; }
        }

        public InviteEventTypes Type
        {
            get { return this.type; }
        }

        public String Phrase
        {
            get { return this.phrase; }
        }
    }
}
