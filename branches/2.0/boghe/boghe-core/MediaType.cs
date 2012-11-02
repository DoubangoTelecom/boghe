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
        T140 = 0x01 << 6,
        AudioT140 = Audio | T140,
        AudioVideoT140 = AudioVideo | T140,
        VideoT140 = Video | T140,

        All = 0xFF
    }

    public static class MediaTypeUtils
    {
        public static MediaType ConvertFromNative(twrap_media_type_t mediaType)
        {
            switch (mediaType)
            {
                case twrap_media_type_t.twrap_media_audio:
                    return MediaType.Audio;
                case twrap_media_type_t.twrap_media_video:
                    return MediaType.Video;
                case twrap_media_type_t.twrap_media_audio_video:
                    return MediaType.AudioVideo;
                case twrap_media_type_t.twrap_media_audio_t140:
                    return MediaType.AudioT140;
                case twrap_media_type_t.twrap_media_audio_video_t140:
                    return MediaType.AudioVideoT140;
                case twrap_media_type_t.twrap_media_t140:
                    return MediaType.T140;
                case twrap_media_type_t.twrap_media_video_t140:
                    return MediaType.VideoT140;
                case twrap_media_type_t.twrap_media_msrp:
                    return MediaType.Chat | MediaType.FileTransfer;
                default:
                    return MediaType.None;
            }
        }

        public static twrap_media_type_t ConvertToNative(MediaType mediaType)
        {
            switch (mediaType)
            {
                case MediaType.Audio:
                    return twrap_media_type_t.twrap_media_audio;
                case MediaType.Video:
                    return twrap_media_type_t.twrap_media_video;
                case MediaType.AudioVideo:
                    return twrap_media_type_t.twrap_media_audio_video;
                case MediaType.AudioT140:
                    return twrap_media_type_t.twrap_media_audio_t140;
                case MediaType.VideoT140:
                    return twrap_media_type_t.twrap_media_video_t140;
                case MediaType.AudioVideoT140:
                    return twrap_media_type_t.twrap_media_audio_video_t140;
                case MediaType.T140:
                    return twrap_media_type_t.twrap_media_t140;
                case MediaType.Chat: 
                case MediaType.FileTransfer:
                    return twrap_media_type_t.twrap_media_msrp;
                default:
                    return twrap_media_type_t.twrap_media_none;
            }
        }
    }
}
