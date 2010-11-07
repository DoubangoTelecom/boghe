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
using org.doubango.tinyWRAP;
using System.Threading;
using BogheXdm.Generated.xcap_caps;

namespace BogheCore.Services.Impl
{
    partial class XcapService
    {
        private static bool IsSuccessCode(short code)
        {
            return (code > 199 && code < 300);
        }

        private void handleEvent(short code, String phrase, String contentType, byte[] content)
        {
            if (!this.sipService.IsRegistered)
            {
                LOG.Warn("No longer connected => Stop XCAP process");
                return;
            }

            switch (this.currentState)
            {
                
                // ==============
                case State.GET_XCAP_CAPS:
                    {
                        if (XcapService.IsSuccessCode(code) && XcapService.XCAP_AUID_IETF_XCAP_CAPS_MIME_TYPE.Equals(contentType, StringComparison.InvariantCultureIgnoreCase) && content != null)
                        {
                            xcapcaps caps = this.Deserialize(content, typeof(xcapcaps)) as xcapcaps;
                            if (caps == null) return;
                            List<String> auids = new List<String>(caps.auids.auid);

                            this.haveOMADirectory = auids.Contains(XcapService.XCAP_AUID_OMA_DIRECTORY_ID);
                            this.haveResourceLists = auids.Contains(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID);
                            this.haveRLS = auids.Contains(XcapService.XCAP_AUID_IETF_RLS_SERVICES_ID);

                            if (this.haveOMADirectory)
                            {
                                this.currentState = State.GET_OMA_DIRECTORY;
                                this.downloadDocument(XcapService.XCAP_AUID_OMA_DIRECTORY_ID);
                            }
                            else if (this.haveResourceLists)
                            {
                                this.currentState = State.GET_RESOURCE_LISTS;
                                this.downloadDocument(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID);
                            }
                        }
                        break;
                    }

                // ==============
                case State.GET_OMA_DIRECTORY:
                    {
                        break;
                    }
            }
        }

        internal class MyXcapCallback : XcapCallback
        {
            private readonly XcapService xcapService;

            internal MyXcapCallback(XcapService xcapService)
            :base()
            {
                this.xcapService = xcapService;
            }

            public override int onEvent(XcapEvent e)
            {
                XcapMessage message = e.getXcapMessage();
                String contentType;

                if (message == null || (contentType = message.getXcapHeaderValue("Content-Type")) == null)
                {
                    LOG.Error("Invalid XCAP message");
                    return -1;
                }

                short code = message.getCode();
                String phrase = message.getPhrase();
                uint clen = message.getXcapContentLength();
                byte[] content = null;
                if (clen > 0)
                {
                    content = new byte[clen];
                    message.getXcapContent(content, clen);
                }
                
                new Thread(new ThreadStart(delegate
                {
                    try
                    {
                        this.xcapService.handleEvent(code, phrase, contentType, content);
                    }
                    catch (Exception ex)
                    {
                        LOG.Error("Failed to handle xcap event", ex);
                    }
                }))
                .Start();

                return 0; 
            }
        }
    }
}
