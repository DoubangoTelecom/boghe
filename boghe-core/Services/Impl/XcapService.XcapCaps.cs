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
using BogheXdm.Generated.xcap_caps;

namespace BogheCore.Services.Impl
{
    partial class XcapService
    {
        // xcap-casps
        private bool handleXcapCapsEvent(short code, byte[] content)
        {
            try
            {
                if (XcapService.IsSuccessCode(code))
                {
                    xcapcaps caps = this.Deserialize(content, typeof(xcapcaps)) as xcapcaps;
                    if (caps == null || caps.auids == null || caps.auids.auid == null)
                    {
                        return false;
                    }
                    List<String> auids = new List<String>(caps.auids.auid);

                    this.hasOMADirectory = auids.Contains(XcapService.XCAP_AUID_OMA_DIRECTORY_ID);
                    this.hasResourceLists = auids.Contains(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID);
                    this.hasRLS = auids.Contains(XcapService.XCAP_AUID_IETF_RLS_SERVICES_ID);
                    this.hasPresRules = auids.Contains(XcapService.XCAP_AUID_IETF_PRES_RULES_ID);
                    this.hasOMAPresRules = auids.Contains(XcapService.XCAP_AUID_OMA_PRES_RULES_ID);
                    this.hasOMAPresenceContent = auids.Contains(XcapService.XCAP_AUID_OMA_PRES_CONTENT_ID);

                    return true;
                }
            }
            catch (Exception e)
            {
                XcapService.LOG.Error("Fialed to handle 'xcap-caps' event", e);
                return false;
            }

            return false;
        }
    }
}
#endif // !WINRT