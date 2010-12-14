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
using System.Threading;
using org.doubango.tinyWRAP;
using BogheCore.Utils;
using BogheCore.Xcap;

namespace BogheCore.Services.Impl
{
    partial class XcapService
    {
        private delegate void UpdateGroupsAndContactsDelegate(List<Group> freshGroups, List<Contact> freshContacts);

        private bool FromResouceListToContacts(resourcelists rlist)
        {
            List<Group> freshGroups = new List<Group>();
            List<Contact> freshContacts = new List<Contact>();

            foreach (listType list in rlist.list)
            {
                if (list != null && list.displayname != null && !String.IsNullOrEmpty(list.displayname.Value))
                {
                    // Group
                    Group group = this.ListToGroup(list);
                    freshGroups.Add(group);

                    // Contact
                    foreach (entryType entry in list.EntryTypes)
                    {
                        Contact contact = this.EntryToContact(entry, group.Name);
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
            
            // Update contacts/groups on the UI thread as CollectionView does not support changes from a thread different from the Dispatcher thread
            new Thread(new ThreadStart(delegate(){
                    this.manager.Dispatcher.Invoke(new UpdateGroupsAndContactsDelegate(this.contactService.UpdateGroupsAndContacts),
                        new object[] { freshGroups, freshContacts });
                })).Start();
            
            return true;
        }        

        private bool handleResourceListsEvent(short code, byte[] content)
        {
            try
            {
                resourcelists rlist;
                if (XcapService.IsSuccessCode(code))
                {
                    rlist = this.Deserialize(content, typeof(resourcelists)) as resourcelists;
                    if (rlist == null || rlist.list == null)
                    {
                        return false;
                    }

                    return this.FromResouceListToContacts(rlist);
                }
                else if (code == 404)
                {
                    if ((rlist = this.CreateResourceListsDocument()) != null)
                    {
                        return this.FromResouceListToContacts(rlist);
                    }
                }
            }
            catch (Exception e)
            {
                XcapService.LOG.Error("Fialed to handle 'resource-lists' event", e);
                return false;
            }

            return false;
        }

        private resourcelists CreateResourceListsDocument()
        {
            resourcelists list = new resourcelists();
            int count = 0;

            listType[] rcs = this.GetRCSLists();
            listType[] oma = this.GetOMALists();

            list.list = new listType[rcs.Length + oma.Length + 1];
            rcs.ToList().ForEach(x => list.list[count++] = x);
            oma.ToList().ForEach(x => list.list[count++] = x);

            // Doubango List
            list.list[count] = new listType();
            list.list[count].displayname = new displaynameType();
            list.list[count].displayname.Value = "My Default Contacts";
            list.list[count].name = SpecialNames.SHARED_DOUBANGO;

            String documentUrl;
            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID);
                documentUrl = this.xcapSelector.getString();
            }
            byte[] payload = this.Serialize(list, true, true, this.GetSerializerNSFromAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID));

            String test = Encoding.UTF8.GetString(payload);

            MyXcapMessage xcapMessage = this.xcapStack.PutDocument(documentUrl, payload, (uint)payload.Length, XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_MIME_TYPE);
            if (xcapMessage != null && XcapService.IsSuccessCode(xcapMessage.Code))
            {
                return list;
            }
            return null;
        }

        private String GetResourceListAnchorAsString(String list)
        {
            String ret;
            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                    .setAttribute("list", "name", list);
                ret = this.xcapSelector.getString();
            }
            return ret;
        }

        private Uri GetResourceListAnchorAsUri(String list)
        {
            return UriUtils.GetHttpUri(this.GetResourceListAnchorAsString(list));
        }

        private externalType GetResourceListAnchorAsExternalType(String list)
        {
            externalType externalType = new externalType();
            externalType.anchor = this.GetResourceListAnchorAsString(list);
            return externalType;
        }

        #region RCS

        private listType[] rcsLists = null;

        /*  oma_buddylist (not explicitly used in RCS)  
         *      -->rcs
         *      -->oma_pocbuddylist
         *      -->list-c
         *      -->list-d
         *  oma_grantedcontacts
         *      -->rcs
         *      -->oma_buddylist
         *  oma_blockedcontacts
         *      -->rcs_blockedcontacts
         *      -->rcs_revokedcontacts
         *  rcs
         *      -->me       (RCS 2)
         *      -->Default
         *      -->list-a
         *      -->list-b
         */
        private listType[] GetRCSLists()
        {
            if (this.rcsLists == null)
            {
                this.rcsLists = new listType[3] { new listType(), new listType(), new listType() };

                /*==  rcs ==*/
                this.rcsLists[0].displayname = new displaynameType();
                this.rcsLists[0].name = SpecialNames.SHARED_RCS;
                this.rcsLists[0].displayname.Value = "All Contacts";
                this.rcsLists[0].ExternalTypes.Add(this.GetResourceListAnchorAsExternalType(SpecialNames.SHARED_DOUBANGO));
                /* rcs 2: The RCS presentity is always part of this list, refer to § 11.4 */
                entryType me = new entryType();
                me.uri = this.xcapStack.XUI;
                rcsLists[0].EntryTypes.Add(me);

                /*==  rcs_blockedcontacts ==*/
                this.rcsLists[1].displayname = new displaynameType();
                this.rcsLists[1].name = SpecialNames.SHARED_RCS_BLOCKEDCONTACTS;
                this.rcsLists[1].displayname.Value = "Blocked Contacts";

                /*==  rcs_revokedcontacts ==*/
                this.rcsLists[2].displayname = new displaynameType();
                this.rcsLists[2].name = SpecialNames.SHARED_RCS_REVOKEDCONTACTS;
                this.rcsLists[2].displayname.Value = "Revoked Contacts";
            }

            return this.rcsLists;
        }

        #endregion

        #region OMA

        private listType[] omaLists = null;

        /*  oma_buddylist (not explicitly used in RCS)  
         *      -->rcs
         *      -->oma_pocbuddylist
         *      -->list-c
         *      -->list-d
         *  oma_grantedcontacts
         *      -->rcs
         *      -->oma_buddylist
         *  oma_blockedcontacts
         *      -->rcs_blockedcontacts
         *      -->rcs_revokedcontacts
         *  rcs
         *      -->Default
         *      -->list-a
         *      -->list-b
         */
        private listType[] GetOMALists()
        {
            if (this.omaLists == null)
            {
                this.omaLists = new listType[5] { new listType(), new listType(), new listType(), new listType(), new listType() };

                /*== oma_allcontacts ==*/
                this.omaLists[0] = new listType();
                this.omaLists[0].displayname = new displaynameType();
                this.omaLists[0].name = SpecialNames.SHARED_OMA_ALLCONTACTS;
                this.omaLists[0].displayname.Value = "OMA All Contacts";

                /*== oma_blockedcontacts ==*/
                this.omaLists[1] = new listType();
                this.omaLists[1].displayname = new displaynameType();
                this.omaLists[1].name = SpecialNames.SHARED_OMA_BLOCKEDCONTACTS;
                this.omaLists[1].displayname.Value = "OMA Blocked Contacts";
                this.omaLists[1].ExternalTypes.Add(this.GetResourceListAnchorAsExternalType(SpecialNames.SHARED_RCS_BLOCKEDCONTACTS));
                this.omaLists[1].ExternalTypes.Add(this.GetResourceListAnchorAsExternalType(SpecialNames.SHARED_RCS_REVOKEDCONTACTS));

                /*== oma_buddylist ==*/
                this.omaLists[2] = new listType();
                this.omaLists[2].displayname = new displaynameType();
                this.omaLists[2].name = SpecialNames.SHARED_OMA_BUDDYLIST;
                this.omaLists[2].displayname.Value = "OMA BuddyList";
                this.omaLists[2].ExternalTypes.Add(this.GetResourceListAnchorAsExternalType(SpecialNames.SHARED_RCS));
                this.omaLists[2].ExternalTypes.Add(this.GetResourceListAnchorAsExternalType(SpecialNames.SHARED_OMA_POCBUDDYLIST));

                /*== oma_grantedcontacts ==*/
                this.omaLists[3] = new listType();
                this.omaLists[3].displayname = new displaynameType();
                this.omaLists[3].name = SpecialNames.SHARED_OMA_GRANTEDCONTACTS;
                this.omaLists[3].displayname.Value = "OMA Granted Contacts";
                this.omaLists[3].ExternalTypes.Add(this.GetResourceListAnchorAsExternalType(SpecialNames.SHARED_RCS));
                this.omaLists[3].ExternalTypes.Add(this.GetResourceListAnchorAsExternalType(SpecialNames.SHARED_OMA_BUDDYLIST));

                /*== oma_pocbuddylist ==*/
                this.omaLists[4] = new listType();
                this.omaLists[4].displayname = new displaynameType();
                this.omaLists[4].name = SpecialNames.SHARED_OMA_POCBUDDYLIST;
                this.omaLists[4].displayname.Value = "OMA POC BuddyList";
            }

            return this.omaLists;
        }

        #endregion
    }
}
