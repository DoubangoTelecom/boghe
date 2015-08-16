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
using System.Globalization;
using BogheCore.Xcap;
using BogheXdm.Generated.xcap_error;

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

            String resourceList; // e.g.:http://doubango.org:8080/services/resource-lists/users/sip%3Amamadou%40colibria.com/index/~~/resource-lists/list%5B%40name%3D%22rcs%22%5D

            if (this.xcapDocumentsUris.ContainsKey(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID))
            {
                resourceList = String.Format("{0}/~~/resource-lists/list%5B%40name%3D%22{1}%22%5D", 
                    this.xcapDocumentsUris[XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID],
                    presList);
            }
            else
            {
                lock (this.xcapSelector)
                {
                    this.xcapSelector.reset();
                    this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                        .setAttribute("list", "name", presList);
                    resourceList = this.xcapSelector.getString();
                }
            }
            
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

        private bool HandleRLSEvent(short code, byte[] content)
        {
            rlsservices rls = null;

            try
            {
                if (XcapService.IsSuccessCode(code))
                {
                    rls = this.Deserialize(content, typeof(rlsservices)) as rlsservices;
                }
                else if (code == 404)
                {
                    rls = this.CreateRLSDocument();
                }

                // RCS Service Uri used as request URI in the SUBSCRIBE requests
                if (rls != null)
                {
                    this.rlsPresUri = this.GetPresenceServiceUri(rls, SpecialNames.SHARED_RCS);
                }
            }
            catch (Exception e)
            {
                XcapService.LOG.Error("Fialed to handle 'rls-services' event", e);
                return false;
            }

            return (rls != null);
        }

        private rlsservices CreateRLSDocument()
        {
            rlsservices rls = new rlsservices();

            rls.service = new serviceType[]
            {
                // RCS service
                this.CreatePresenceService(SpecialNames.SHARED_RCS),
                // OMA services
                this.CreatePresenceService(SpecialNames.SHARED_OMA_BUDDYLIST),
                this.CreatePresenceService(SpecialNames.SHARED_OMA_POCBUDDYLIST)
            };

            String documentUrl;
            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RLS_SERVICES_ID);
                documentUrl = this.xcapSelector.getString();
            }

            byte[] payload = this.Serialize(rls, true, true, this.GetSerializerNSFromAUID(XcapService.XCAP_AUID_IETF_RLS_SERVICES_ID));
            MyXcapMessage xcapMessage = this.xcapStack.PutDocument(documentUrl, payload, (uint)payload.Length, XcapService.XCAP_AUID_IETF_RLS_SERVICES_MIME_TYPE);

            if (xcapMessage != null)
            {
                if (XcapService.IsSuccessCode(xcapMessage.Code))
                {
                    return rls;
                }
                else if (xcapMessage.Content != null && xcapMessage.Code == 409/*Conflict*/ || xcapMessage.Code == 415/*Unsupported Media Type*/)
                {
                    object content = this.Deserialize(xcapMessage.Content, typeof(xcaperror));
                    xcaperror xerror;

                    if (content != null && ((xerror = content as xcaperror) != null))
                    {
                        LOG.Error(String.Format("XCAP Error={0}", xerror.ErrorPhrase));
                        if (xerror.ErrorType == xcaperror.xcaperrorItemType.ErrorElementUniquenessfailure)
                        {
                            xcaperrorErrorelementUniquenessfailure errorUniquenessfailure = xerror.Item as xcaperrorErrorelementUniquenessfailure;
                            if (errorUniquenessfailure != null && errorUniquenessfailure.exists != null && errorUniquenessfailure.exists.Length > 0)
                            {
                                xcaperrorErrorelementUniquenessfailureExists errorUniquenessfailureExists = errorUniquenessfailure.exists[0];
                                if (errorUniquenessfailureExists != null)
                                {
                                    String field = errorUniquenessfailureExists.field;
                                    String altvalue = (errorUniquenessfailureExists.altvalue != null && errorUniquenessfailureExists.altvalue.Length > 0) ? errorUniquenessfailureExists.altvalue[0] : null;

                                    if (String.IsNullOrEmpty(altvalue))
                                    {
                                        SipUri sipUri = new SipUri(this.xcapStack.XUI);
                                        if (sipUri.isValid())
                                        {
                                            altvalue = String.Format(CultureInfo.CurrentCulture,
                                                "{0}:{1}_alt{2}",
                                                sipUri.getScheme(), sipUri.getUserName(), DateTime.Now.Ticks);
                                        }
                                        else
                                        {
                                            altvalue = "sip:error@doubango.org";
                                        }
                                    }
                                    rls.service[0].uri = altvalue;

                                    payload = this.Serialize(rls, true, true, this.GetSerializerNSFromAUID(XcapService.XCAP_AUID_IETF_RLS_SERVICES_ID));
                                    xcapMessage = this.xcapStack.PutDocument(documentUrl, payload, (uint)payload.Length, XcapService.XCAP_AUID_IETF_RLS_SERVICES_MIME_TYPE);
                                    if (xcapMessage != null && XcapService.IsSuccessCode(xcapMessage.Code))
                                    {
                                        return rls;
                                    }
                                }
                            }
                        }
                    }
                }
            }            
            return null;
        }

        private serviceType CreatePresenceService(String presList)
        {
            serviceType service = new serviceType();
            service.packages = new packagesType();

            // "sip:test@doubango.org;pres-list=rcs
            service.uri = String.Format(CultureInfo.CurrentCulture,
                "{0};{1}={2}",
                this.xcapStack.XUI, "pres-list", presList
                );
            // <packages> <package>presence</package> </packages>
            service.packages.Items = new String[] { "presence" };
            // <resource-list>http://doubango.org:8080/services/resource-lists/users/sip:test@doubango.org/index/~~/resource-lists/list%5B@name=%22rcs%22%5D</resource-list>
            if (this.xcapDocumentsUris.ContainsKey(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID))
            {
                service.Item = this.xcapDocumentsUris[XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID];
            }
            else
            {
                lock (this.xcapSelector)
                {
                    this.xcapSelector.reset();
                    this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                        .setAttribute("list", "name", presList);
                    service.Item = this.xcapSelector.getString();
                }
            }

            return service;
        }
    }
}
