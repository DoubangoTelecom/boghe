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
#if WINRT
using twrap_media_type_t = doubango_rt.BackEnd.rt_twrap_media_type_t;
#endif

namespace BogheCore
{
    [Flags]
    public enum MediaType
    {
        None = 0,

        Audio = (0x00000001 << 0),
        Video = (0x00000001 << 1),
        Msrp = (0x00000001 << 2),
        T140 = (0x00000001 << 3),
        BFCP = (0x00000001 << 4),
        Audiobfcp = (0x00000001 << 5) | BFCP,
        Videobfcp = (0x00000001 << 6) | BFCP,

        // == Types without native mappings  == //
        SMS = 0x00000001 << 16,
        ShortMessage = 0x00000001 << 17,
        Chat = 0x00000001 << 18,
        FileTransfer = 0x00000001 << 19,
        Messaging = SMS | Chat | ShortMessage,
        AudioT140 = (Audio | T140),
        AudioVideo = (Audio | Video),

        All = ~0
    }

    public static class MediaTypeUtils
    {
        struct media_type_bind_s
        {
	        public MediaType twrap;
	        public twrap_media_type_t tnative;
            public media_type_bind_s(MediaType _twrap, twrap_media_type_t _tnative)
            {
                this.twrap = _twrap;
                this.tnative = _tnative;
            }
        };
        static media_type_bind_s[] __media_type_binds = 
        {
	        new media_type_bind_s(MediaType.Msrp, twrap_media_type_t.twrap_media_msrp),
	        new media_type_bind_s(MediaType.Audio, twrap_media_type_t.twrap_media_audio),
	        new media_type_bind_s(MediaType.Video, twrap_media_type_t.twrap_media_video),
	        new media_type_bind_s(MediaType.T140, twrap_media_type_t.twrap_media_t140),
	        new media_type_bind_s(MediaType.BFCP, twrap_media_type_t.twrap_media_bfcp),
	        new media_type_bind_s(MediaType.Audiobfcp, twrap_media_type_t.twrap_media_bfcp_audio),
	        new media_type_bind_s(MediaType.Videobfcp, twrap_media_type_t.twrap_media_bfcp_video),
        };

        public static MediaType ConvertFromNative(twrap_media_type_t mediaType)
        {
            MediaType t = MediaType.None;
            for (int i = 0; i < __media_type_binds.Length; ++i)
            {
                if ((__media_type_binds[i].tnative & mediaType) == __media_type_binds[i].tnative)
                {
                    t |= __media_type_binds[i].twrap;
                }
            }
            return t;
        }

        public static twrap_media_type_t ConvertToNative(MediaType mediaType)
        {
            twrap_media_type_t t = twrap_media_type_t.twrap_media_none;
            for (int i = 0; i < __media_type_binds.Length; ++i)
            {
                if ((__media_type_binds[i].twrap & mediaType) == __media_type_binds[i].twrap)
                {
                    t |= __media_type_binds[i].tnative;
                }
            }
            return t;
        }
    }
}
