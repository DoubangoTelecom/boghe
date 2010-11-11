/*
* Copyright (C) 2010 Mamadou Diop.
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
        private bool FromResouceListToContacts(resourcelists rlist)
        {
            List<Group> freshGroups = new List<Group>();
            List<Contact> freshContacts = new List<Contact>();

            foreach (listType list in rlist.list)
            {
                if (list != null && list.displayname != null && !String.IsNullOrEmpty(list.displayname.Value))
                {
                    // Group
                    Group group = new Group(list.name, list.displayname.Value);
                    group.Authorization = SpecialNames.GetAutorization(group.Name);
                    freshGroups.Add(group);

                    // Contact
                    foreach (entryType entry in list.EntryTypes)
                    {
                        Contact contact = new Contact();
                        contact.DisplayName = entry.displayname == null ? null : entry.displayname.Value;
                        contact.UriString = entry.uri;
                        contact.GroupName = group.Name;
                        if (entry.prop != null)
                        {
                            foreach (DoubangoProperty property in entry.prop)
                            {
                                if (property == null || String.IsNullOrEmpty(property.name))
                                {
                                    continue;
                                }
                                switch (property.name)
                                {
                                    case DoubangoProperty.PROP_DISPLAY_NAME:
                                    case DoubangoProperty.PROP_FIRST_NAME:
                                        break;
                                }
                            }
                        }
                        freshContacts.Add(contact);
                    }
                }
            }

            this.contactService.UpdateGroupsAndContacts(freshGroups, freshContacts);
            
            return true;
        }

        private bool handleResourceListsEvent(short code, byte[] content)
        {
            try
            {
                if (XcapService.IsSuccessCode(code))
                {
                    resourcelists rlist = this.Deserialize(content, typeof(resourcelists)) as resourcelists;
                    if (rlist == null || rlist.list == null)
                    {
                        return false;
                    }

                    return this.FromResouceListToContacts(rlist);
                }
            }
            catch (Exception e)
            {
                XcapService.LOG.Error("Fialed to handle 'resource-lists' event", e);
                return false;
            }

            return false;
        }

        private bool CreateResourceListsDocument()
        {
            return true;
        }
    }
}
