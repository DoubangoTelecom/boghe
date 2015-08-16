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
using BogheCore.Events;

namespace BogheCore.Sip.Events
{
    public class MsrpEventArgs : MyEventArgs
    {
        private readonly long sessionId;
        private readonly MsrpEventTypes type;

        public const String EXTRA_SESSION= InviteEventArgs.EXTRA_SESSION;
        public const String EXTRA_DATA = "data";
        public const String EXTRA_CONTENT_TYPE = "content-type";
        public const String EXTRA_WRAPPED_CONTENT_TYPE = "w-content-type";
        public const String EXTRA_BYTE_RANGE_START = "byte-start";
        public const String EXTRA_BYTE_RANGE_END = "byte-end";
        public const String EXTRA_BYTE_RANGE_TOTAL = "byte-total";
        public const String EXTRA_RESPONSE_CODE = "response-code";
        public const String EXTRA_REQUEST_TYPE = "request-type";

        public MsrpEventArgs(long sessionId, MsrpEventTypes type)
            : base()
        {
            this.sessionId = sessionId;
            this.type = type;
        }


        public long SessionId
        {
            get { return this.sessionId; }
        }

        public MsrpEventTypes Type
        {
            get { return this.type; }
        }
    }
}
