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
using BogheXdm.Generated.oma.pres_content;
using BogheCore.Events;
using BogheCore.Xcap.Events;
using BogheCore.Xcap;

namespace BogheCore.Services.Impl
{
    partial class XcapService
    {
        private bool HandlePresContent(short code, byte[] content)
        {
            try
            {
                if (XcapService.IsSuccessCode(code))
                {
                    content presContent = this.Deserialize(content, typeof(content)) as content;
                    if (presContent != null && presContent.data != null && !String.IsNullOrEmpty(presContent.data.Value))
                    {
                        this.Avatar = presContent.data.Value;
                        return true;
                    }
                }
                else if (code == 404)
                {
                    XcapService.LOG.Error("'org.openmobilealliance.pres-content' document not found");
                    return true;
                }
            }
            catch (Exception e)
            {
                XcapService.LOG.Error("Fialed to handle 'org.openmobilealliance.pres-content' event", e);
                return false;
            }

            return false;
        }

        public bool CreatePresenceContentDocument(String base64Content, String mimeType)
        {
            if (String.IsNullOrEmpty(base64Content) || String.IsNullOrEmpty(mimeType))
            {
                LOG.Error("Invalid content or mimeType");
                return false;
            }

            content document = new content();
            document.mimetype = new contentMimetype();
            document.mimetype.Value = mimeType;
            document.encoding = new contentEncoding();
            document.encoding.Value = "base64";
            document.description = new contentDescription[1];
            document.description[0] = new contentDescription();
            document.description[0].Value = "Doubango";
            document.data = new contentData();
            document.data.Value = base64Content;

            String documentUrl;
            if (this.xcapDocumentsUris.ContainsKey(XcapService.XCAP_AUID_OMA_PRES_CONTENT_ID))
            {
                documentUrl = this.xcapDocumentsUris[XcapService.XCAP_AUID_OMA_PRES_CONTENT_ID];
            }
            else
            {
                lock (this.xcapSelector)
                {
                    this.xcapSelector.reset();
                    this.xcapSelector.setAUID(XcapService.XCAP_AUID_OMA_PRES_CONTENT_ID);
                    documentUrl = this.xcapSelector.getString();
                }
            }
            byte[] payload = this.Serialize(document, true, true, this.GetSerializerNSFromAUID(XcapService.XCAP_AUID_OMA_PRES_CONTENT_ID));

            MyXcapMessage xcapMessage = this.xcapStack.PutDocument(documentUrl, payload, (uint)payload.Length, XcapService.XCAP_AUID_OMA_PRES_CONTENT_MIME_TYPE);
            if (xcapMessage != null)
            {
                if (XcapService.IsSuccessCode(xcapMessage.Code))
                {
                    return true;
                }
                else
                {
                    LOG.Error(String.Format("Failed to update statusicon with code={0}", xcapMessage.Code));
                }
            }
            else
            {
                LOG.Error("Failed to update statusicon");
            }

            return false;
        }
    }
}
