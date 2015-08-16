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

namespace BogheCore.Sip.Events
{
    public enum InviteEventTypes
    {
        INCOMING,
        INPROGRESS,
        RINGING,
        EARLY_MEDIA,
        CONNECTED,
        TERMWAIT,
        DISCONNECTED,
        LOCAL_HOLD_OK,
        LOCAL_HOLD_NOK,
        LOCAL_RESUME_OK,
        LOCAL_RESUME_NOK,
        REMOTE_HOLD,
        REMOTE_RESUME,
        MEDIA_UPDATING,
        MEDIA_UPDATED,
        INFO,
        LOCAL_TRANSFER_TRYING,
        LOCAL_TRANSFER_ACCEPTED,
        LOCAL_TRANSFER_COMPLETED,
        LOCAL_TRANSFER_FAILED,
        LOCAL_TRANSFER_NOTIFY,
        REMOTE_TRANSFER_REQUESTED,
        REMOTE_TRANSFER_NOTIFY,
        REMOTE_TRANSFER_INPROGESS,
        REMOTE_TRANSFER_FAILED,
        REMOTE_TRANSFER_COMPLETED
    }
}
