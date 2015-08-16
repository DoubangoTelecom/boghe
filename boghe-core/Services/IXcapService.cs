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
#if !WINRT
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using BogheCore.Xcap.Events;
using BogheCore.Model;

namespace BogheCore.Services
{
    public interface IXcapService : IService
    {
        bool IsReady { get; }
        String RLSPresUri { get; }
        String Avatar { get; }

        bool DownloadDocuments();

        bool ContactAdd(Contact contact);
        bool ContactUpdate(Contact contact, String prevGroupName);
        bool ContactDelete(Contact contact);
        bool ContactAuthorize(Contact contact, BogheXdm.Authorization authorization);

        bool GroupAdd(Group group);
        bool GroupUpdate(Group group);
        bool GroupDelete(Group group);
        bool GroupAuthorize(Group group, BogheXdm.Authorization authorization);

        bool AvatarPublish(String base64Content, String mimeType);

        bool Prepare();
        bool UnPrepare();

        event EventHandler<XcapEventArgs> onXcapEvent;
    }
}
#endif // !WINRT