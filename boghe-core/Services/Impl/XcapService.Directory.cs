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
using BogheXdm.Generated.oma.xcap_directory;

namespace BogheCore.Services.Impl
{
    partial class XcapService
    {
        // org.openmobilealliance.xcap-directory
        private bool handleOMADirectoryEvent(short code, byte[] content)
        {
            try
            {
                if (XcapService.IsSuccessCode(code))
                {
                    this.xcapDocumentsUris.Clear();

                    xcapdirectory xcap_dir = this.Deserialize(content, typeof(xcapdirectory)) as xcapdirectory;
                    if (xcap_dir == null || xcap_dir.folder == null)
                    {
                        return false;
                    }

                    foreach (xcapdirectoryFolder folder in xcap_dir.folder)
                    {
                        if (String.IsNullOrEmpty(folder.auid) || folder.Entries.Count == 0)
                            continue;

                        xcapdirectoryFolderEntry entry = null;

                        if (String.Equals(folder.auid, XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID))
                        {
                            // I prefer 'index' document
                            entry = folder.Entries.FirstOrDefault(x => x != null && !String.IsNullOrEmpty(x.uri) && x.uri.EndsWith(String.Format("/{0}", XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_DOC)));
                        }
                        if (entry == null)
                        {
                            entry = folder.Entries.FirstOrDefault(x => x != null && !String.IsNullOrEmpty(x.uri));
                        }
                        if (entry != null)
                        {
                            this.xcapDocumentsUris.Add(folder.auid, entry.uri);
                        }
                    }

                    return true;
                }
            }
            catch (Exception e)
            {
                XcapService.LOG.Error("Fialed to handle 'org.openmobilealliance.xcap-directory' event", e);
                return false;
            }

            return false;
        }
    }
}
