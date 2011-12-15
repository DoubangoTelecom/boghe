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
    [Flags]
    public enum MediaType
    {
        None = 0,

        Audio = 0x01 << 0,
        Video = 0x01 << 1,
        AudioVideo = Audio | Video,
        SMS = 0x01 << 2,
        ShortMessage = 0x01 << 3,
        Chat = 0x01 << 4,
        Messaging = SMS | Chat | ShortMessage,
        FileTransfer = 0x01 << 5,

        All = AudioVideo | Messaging | FileTransfer
    }
}
