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
    public class SubscriptionEventArgs : MyEventArgs
    {
        private readonly SubscriptionEventTypes type;
	    private readonly short sipCode;
	    private readonly String phrase;
	    private readonly byte[] content;
        private readonly String contentType;
        private readonly MySubscriptionSession.EVENT_PACKAGE_TYPE package;

        public const String EXTRA_SESSION = "session";
        public const String EXTRA_CONTENTYPE_TYPE = "ContentTypeType";
        public const String EXTRA_CONTENTYPE_START = "ContentTypeStart";
        public const String EXTRA_CONTENTYPE_BOUNDARY = "ContentTypeBoundary";

        public SubscriptionEventArgs(SubscriptionEventTypes type, short sipCode, String phrase, byte[] content, String contentType, MySubscriptionSession.EVENT_PACKAGE_TYPE package)
            :base()
        {
            this.type = type;
            this.sipCode = sipCode;
            this.phrase = phrase;
            this.content = content;
            this.contentType = contentType;
            this.package = package;
        }

        public SubscriptionEventTypes Type
        {
            get { return this.type; }
        }

        public short SipCode
        {
            get { return this.sipCode; }
        }

        public String Phrase
        {
            get { return this.phrase; }
        }

        public byte[] Content
        {
            get { return this.content; }
        }

        public String ContentType
        {
            get { return this.contentType; }
        }

        public MySubscriptionSession.EVENT_PACKAGE_TYPE Package
        {
            get { return this.package; }
        }
    }
}
