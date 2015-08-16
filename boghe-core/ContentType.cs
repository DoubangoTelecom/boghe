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

namespace BogheCore
{
    public static class ContentType
    {
        public const String CONFERENCE_INFO = "application/conference-info+xml";
        public const String DIALOG_INFO = "application/dialog-info+xml";
        public const String EXTERNAL_BODY = "message/external-body";
        public const String MESSAGE_SUMMARY = "application/simple-message-summary";
        public const String MULTIPART_RELATED = "multipart/related";
        public const String OMA_DEFERRED_LIST = "application/vnd.oma.im.deferred-list+xml";
        public const String PIDF = "application/pidf+xml";
        public const String PIDF_DIFF = "application/pidf-diff+xml";
        public const String REG_INFO = "application/reginfo+xml";
        public const String RLMI = "application/rlmi+xml";
        public const String RPID = "application/rpid+xml";

        public const String WATCHER_INFO = "application/watcherinfo+xml";
        public const String XCAP_DIFF = "application/xcap-diff+xml";

        public const String SMS_3GPP = "application/vnd.3gpp.sms";

        public const String CPIM = "message/CPIM";
        public const String TEXT_PLAIN = "text/plain";
        public const String IS_COMPOSING = "application/im-iscomposing+xml";

        public const String DOUBANGO_DEVICE_INFO = "doubango/device-info";


        public const String UNKNOWN = "unknown/unknown";
    }
}
