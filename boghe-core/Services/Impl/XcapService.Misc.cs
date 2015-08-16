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
using BogheXdm.Generated.resource_lists;
using BogheCore.Model;
using BogheXdm;

namespace BogheCore.Services.Impl
{
    partial class XcapService
    {
        private entryType ContactToEntry(Contact contact)
        {
            entryType entry = new entryType();
            entry.uri = contact.UriString;
            entry.displayname = new entryTypeDisplayname();
            entry.displayname.Value = contact.DisplayName;

            return entry;
        }

        private Contact EntryToContact(entryType entry, String groupName)
        {
            Contact contact = new Contact();
            contact.DisplayName = entry.displayname == null ? null : entry.displayname.Value;
            contact.UriString = entry.uri;
            contact.GroupName = groupName;
            return contact;
        }

        private listType GroupToList(Group group)
        {
            listType list = new listType();
            list.name = group.Name;
            list.displayname = new displaynameType();
            list.displayname.Value = group.DisplayName;
            return list;
        }

        private Group ListToGroup(listType list)
        {
            Group group = new Group(list.name, list.displayname.Value);
            group.Authorization = SpecialNames.GetAutorization(group.Name);
            if (group.Authorization == Authorization.UnKnown)
            {
                group.Authorization = Authorization.Allowed; // FIXME
            }
            return group;
        }
    }
}
