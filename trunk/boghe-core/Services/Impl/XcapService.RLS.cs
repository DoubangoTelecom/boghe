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
using BogheXdm.Generated.rls_services;
using org.doubango.tinyWRAP;
using BogheXdm;

namespace BogheCore.Services.Impl
{
    partial class XcapService
    {
        private String GetPresenceServiceUri(rlsservices services, String presList)
        {
            if (services == null || services.service == null || String.IsNullOrEmpty(presList))
            {
                LOG.Warn("Invalid RLS document");
                return String.Empty;
            }

            String resourceList; // e.g.:http://doubango.org:8080/services/resource-lists/users/sip:boghe@doubango.org/index/~~/resource-lists/list%5B@name=%22rcs%22%5D
            XcapSelector selector = new XcapSelector(this.xcapStack);
            selector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                .setAttribute("list", "name", presList);
            resourceList = selector.getString();
            selector.Dispose();
            
            foreach (serviceType service in services.service)
            {
                if (service.packages == null || String.IsNullOrEmpty(service.uri))
                {
                    continue;
                }

                String _resourceList = service.Item as String;
                if (!String.IsNullOrEmpty(_resourceList) && _resourceList.Equals(resourceList))
                {
                    if (service.packages.Packages.Contains("presence"))
                    {
                        return service.uri;
                    }
                }
            }

            return String.Empty;
        }

        private bool handleRLSEvent(short code, byte[] content)
        {
            try
            {
                if (XcapService.IsSuccessCode(code))
                {
                    rlsservices rls = this.Deserialize(content, typeof(rlsservices)) as rlsservices;
                    if (rls == null)
                    {
                        return false;
                    }

                    // RCS Service Uri
                    this.rlsPresUri = this.GetPresenceServiceUri(rls, SpecialNames.SHARED_RCS);
                }
            }
            catch (Exception e)
            {
                XcapService.LOG.Error("Fialed to handle 'resource-lists' event", e);
                return false;
            }

            return true;
        }
    }
}
