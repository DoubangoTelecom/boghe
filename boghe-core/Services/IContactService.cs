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
using BogheCore.Model;
using System.Collections.ObjectModel;
using BogheCore.Events;


namespace BogheCore.Services
{
    public interface IContactService : IService
    {
        void Download();

        bool IsLoading { get; }

        bool ContactAdd(Contact contact);
        bool ContactUpdate(Contact contact, String prevGroupName);
        bool ContactDelete(Contact contact);
        bool ContactAuthorize(Contact contact, BogheXdm.Authorization authorization);
        Contact ContactFind(String uri);
        

        bool GroupAdd(Group group);
        bool GroupUpdate(Group group);
        bool GroupDelete(Group group);
        bool GroupAuthorize(Group group, BogheXdm.Authorization authorization);
        Group GroupFind(String name);

        MyObservableCollection<Contact> Contacts { get; }
        MyObservableCollection<Group> Groups { get; }

        void UpdateGroupsAndContacts(List<Group> freshGroups, List<Contact> freshContacts);

        event EventHandler<ContactEventArgs> onContactEvent;
    }
}
