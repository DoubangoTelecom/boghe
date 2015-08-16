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
using log4net;
using BogheCore.Sip.Events;
using BogheCore.Model;
using BogheCore.Xcap;
using org.doubango.tinyWRAP;
using BogheCore.Xcap.Events;
using BogheXdm.Generated.resource_lists;
using BogheCore.Events;

namespace BogheCore.Services.Impl
{
    public partial class XcapService : IXcapService
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(XcapService));

        private readonly XcapCallback callback;
        private readonly IDictionary<String, String> xcapDocumentsUris;

        private IConfigurationService configurationService;
        private ISipService sipService;
        private IContactService contactService;
        private readonly ServiceManager manager;

        private System.Threading.Semaphore synchronizer;
        private MyXcapStack xcapStack;
        private XcapSelector xcapSelector;
        private bool prepared;

        private bool hasOMADirectory;
        private bool hasResourceLists;
        private bool hasRLS;
        private bool hasPresRules;
        private bool hasOMAPresRules;
        private bool hasOMAPresenceContent;

        private String rlsPresUri;
        private String avatar;
        private bool ready;

        public XcapService(ServiceManager manager)
        {
#if ASYNCHRONOUSLY
            this.callback = new MyAsyncXcapCallback(this);
#else
            this.callback = new MySyncXcapCallback(this);
#endif
            this.xcapDocumentsUris = new Dictionary<String, String>();

            this.manager = manager;
            this.ready = false;
        }

        internal int Timeout
        {
            get 
            {
                if (this.xcapStack == null)
                {
                    return this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.TIMEOUT, Configuration.DEFAULT_XCAP_TIMEOUT);
                }
                else
                {
                    return this.xcapStack.Timeout;
                }
            }
        }

        internal System.Threading.Semaphore Synchronizer
        {
            get { return this.synchronizer; }
        }

        #region IService

        public bool Start()
        {
            this.configurationService = this.manager.ConfigurationService;
            this.sipService = this.manager.SipService;
            this.contactService = this.manager.ContactService;

#if !ASYNCHRONOUSLY
            this.synchronizer = new System.Threading.Semaphore(0, 1);
#endif

            return true;
        }

        public bool Stop()
        {
            if (this.synchronizer != null)
            {
                this.synchronizer.Close();
                this.synchronizer = null;
            }
            return true;
        }

        #endregion

        #region IXcapService

        public event EventHandler<XcapEventArgs> onXcapEvent;

        public bool IsReady
        {
            get { return this.ready; }
        }

        public String RLSPresUri 
        {
            get { return this.rlsPresUri; }
        }

        public String Avatar 
        {
            get { return this.avatar; }
            set { this.avatar = value; }
        }

        public bool DownloadDocuments()
        {
            if (!this.prepared)
            {
                LOG.Error("XCAP sevice not prepared");
                return false;
            }

            this.ready = false;
            this.xcapDocumentsUris.Clear();
            this.rlsPresUri = null;

            lock (this.xcapSelector)
            {
                MyXcapMessage xcapMessage;

                // ============== xcap-caps ============== //
                String xcapCapsUrl;
                lock (this.xcapSelector)
                {
                    this.xcapSelector.reset();
                    this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_XCAP_CAPS_ID);
                    xcapCapsUrl = this.xcapSelector.getString();
                }
                xcapMessage = this.xcapStack.GetDocument(xcapCapsUrl);
                // xcap-caps is mandatory ==> continue the process only if all is ok
                if (xcapMessage == null)
                {
                    LOG.Error("Failed to get 'xcap-caps' document");
                    return false;
                }
                if (!this.handleXcapCapsEvent(xcapMessage.Code, xcapMessage.Content))
                {
                    LOG.Error("Failed to handle 'xcap-caps' document");
                    return false;
                }


                // ============== org.openmobilealliance.xcap-directory ============== //
                if (this.hasOMADirectory)
                {
                    if (this.xcapStack.IsRunning)
                    {
                        xcapMessage = this.GetWellKnownDocument(XcapService.XCAP_AUID_OMA_DIRECTORY_ID);
                        if (xcapMessage != null)
                        {
                            if (!this.handleOMADirectoryEvent(xcapMessage.Code, xcapMessage.Content))
                            {
                                LOG.Error("Failed to handle 'org.openmobilealliance.xcap-directory' document");
                            }
                        }
                        else
                        {
                            LOG.Error("Failed to get 'org.openmobilealliance.xcap-directory' document");
                        }
                    }
                    else
                    {
                        LOG.Warn("XCAP Stack not running");
                    }
                }
                else
                {
                    LOG.Warn("'org.openmobilealliance.xcap-directory' not supported");
                }

                // ============== resource-lists ============== //
                if (hasResourceLists)
                {
                    if (this.xcapStack.IsRunning)
                    {
                        xcapMessage = this.GetWellKnownDocument(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID);
                        if (xcapMessage != null)
                        {
                            if (!this.HandleResourceListsEvent(xcapMessage.Code, xcapMessage.Content))
                            {
                                LOG.Error("Failed to handle 'resource-lists' document");
                            }
                            else
                            {
                                EventHandlerTrigger.TriggerEvent<XcapEventArgs>(this.onXcapEvent, this, 
                                    new XcapEventArgs(XcapEventTypes.RESOURCE_LISTS_DONE, xcapMessage.Code, xcapMessage.Phrase));
                            }
                        }
                        else
                        {
                            LOG.Error("Failed to get 'resource-lists' document");
                        }
                    }
                    else
                    {
                        LOG.Warn("XCAP Stack not running");
                    }
                }
                else
                {
                    LOG.Error("'resource-lists' not supported");
                }

                // ============== rls-services ============== //
                if (this.hasRLS)
                {
                    if (this.xcapStack.IsRunning)
                    {
                        xcapMessage = this.GetWellKnownDocument(XcapService.XCAP_AUID_IETF_RLS_SERVICES_ID);
                        if (xcapMessage != null)
                        {
                            if (!this.HandleRLSEvent(xcapMessage.Code, xcapMessage.Content))
                            {
                                LOG.Error("Failed to handle 'resource-lists' document");
                            }
                            else
                            {
                                EventHandlerTrigger.TriggerEvent<XcapEventArgs>(this.onXcapEvent, this,
                                    new XcapEventArgs(XcapEventTypes.RLS_DONE, xcapMessage.Code, xcapMessage.Phrase));
                            }
                        }
                        else
                        {
                            LOG.Error("Failed to get 'resource-lists' document");
                        }
                    }
                    else
                    {
                        LOG.Warn("XCAP Stack not running");
                    }
                }
                else
                {
                    LOG.Error("'rls-services' not supported");
                }

                // ============== org.openmobilealliance.pres-content ============== //
                if (this.hasOMAPresRules)
                {
                    if (this.xcapStack.IsRunning)
                    {
                        xcapMessage = this.GetWellKnownDocument(XcapService.XCAP_AUID_OMA_PRES_RULES_ID);
                        if (xcapMessage != null)
                        {
                            if (!this.HandleOMAPresRules(xcapMessage.Code, xcapMessage.Content))
                            {
                                LOG.Error("Failed to handle 'org.openmobilealliance.pres-content' document");
                            }
                        }
                        else
                        {
                            LOG.Error("Failed to get 'org.openmobilealliance.pres-content' document");
                        }
                    }
                    else
                    {
                        LOG.Warn("XCAP Stack not running");
                    }
                }
                else
                {
                    LOG.Error("'org.openmobilealliance.pres-content' not supported");
                }

                // ============== org.openmobilealliance.pres-content ============== //
                if (this.hasOMAPresenceContent)
                {
                    if (this.xcapStack.IsRunning)
                    {
                        xcapMessage = this.GetWellKnownDocument(XcapService.XCAP_AUID_OMA_PRES_CONTENT_ID);
                        if (xcapMessage != null)
                        {
                            if (!this.HandlePresContent(xcapMessage.Code, xcapMessage.Content))
                            {
                                LOG.Error("Failed to handle 'org.openmobilealliance.pres-content' document");
                            }
                            else
                            {
                                XcapEventArgs eargs = new XcapEventArgs(XcapEventTypes.PRESCONTENT_DONE, xcapMessage.Code, xcapMessage.Phrase);
                                eargs.AddExtra(XcapEventArgs.EXTRA_CONTENT, this.Avatar);
                                EventHandlerTrigger.TriggerEvent<XcapEventArgs>(this.onXcapEvent, this, eargs);
                            }
                        }
                        else
                        {
                            LOG.Error("Failed to get 'org.openmobilealliance.pres-content' document");
                        }
                    }
                    else
                    {
                        LOG.Warn("XCAP Stack not running");
                    }
                }











            }

            this.ready = true;

            return true;
        }

        public bool ContactAdd(Contact contact)
        {
            if (!this.hasResourceLists)
            {
                LOG.Warn("Contact connot be added as XDMS doesn't support 'resource-lists'");
                return false;
            }            

            entryType entry = this.ContactToEntry(contact);
            byte[] payload = this.Serialize(entry, true, true, this.GetSerializerNSFromAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID));
            String url;

            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                    .setAttribute("list", "name", contact.GroupName)
                    .setAttribute("entry", "uri", contact.UriString);
                url = this.xcapSelector.getString();
            }

            MyXcapMessage xcapMessage = this.xcapStack.PutElement(url, payload, (uint)payload.Length);
            return (xcapMessage != null && XcapService.IsSuccessCode(xcapMessage.Code));
        }

        public bool ContactUpdate(Contact contact, String prevGroupName)
        {
            if (!this.hasResourceLists)
            {
                LOG.Warn("Contact connot be updated as XDMS doesn't support 'resource-lists'");
                return false;
            }

            // 1. Add contact
            entryType entry = this.ContactToEntry(contact);
            byte[] payload = this.Serialize(entry, true, true, this.GetSerializerNSFromAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID));
            String url;

            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                    .setAttribute("list", "name", contact.GroupName)
                    .setAttribute("entry", "uri", contact.UriString);
                url = this.xcapSelector.getString();
            }

            MyXcapMessage xcapMessage = this.xcapStack.PutElement(url, payload, (uint)payload.Length);
            bool ok = (xcapMessage != null && XcapService.IsSuccessCode(xcapMessage.Code));

            // 2. Remove from old group
            if (ok && !String.Equals(contact.GroupName, prevGroupName))
            {
                Contact clone = new Contact();
                clone.UriString = contact.UriString;
                clone.GroupName = prevGroupName;
                ok &= this.ContactDelete(clone);
            }

            return ok;
        }

        public bool ContactDelete(Contact contact)
        {
            if (!this.hasResourceLists)
            {
                LOG.Warn("Contact connot be deleted as XDMS doesn't support 'resource-lists'");
                return false;
            }

            String url;
            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                    .setAttribute("list", "name", contact.GroupName)
                    .setAttribute("entry", "uri", contact.UriString);
                url = this.xcapSelector.getString();
            }

            MyXcapMessage xcapMessage = this.xcapStack.DeleteElement(url);
            return (xcapMessage != null && XcapService.IsSuccessCode(xcapMessage.Code));
        }

        public bool ContactAuthorize(Contact contact, BogheXdm.Authorization authorization)
        {
            LOG.Error("Not Implemented");
            return false;
        }

        public bool GroupAdd(Group group)
        {
            if (!this.hasResourceLists)
            {
                LOG.Warn("Group connot be added as XDMS doesn't support 'resource-lists'");
                return false;
            }

            listType list = this.GroupToList(group);
            byte[] payload = this.Serialize(list, true, true, this.GetSerializerNSFromAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID));
            String url;

            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                    .setAttribute("list", "name", group.Name);
                url = this.xcapSelector.getString();
            }
            MyXcapMessage xcapMessage = this.xcapStack.PutElement(url, payload, (uint)payload.Length);
            return (xcapMessage != null && XcapService.IsSuccessCode(xcapMessage.Code));
        }

        public bool GroupUpdate(Group group)
        {
            if (!this.hasResourceLists)
            {
                LOG.Warn("Group connot be updated as XDMS doesn't support 'resource-lists'");
                return false;
            }

            listType list = this.GroupToList(group);
            byte[] payload = this.Serialize(list, true, true, this.GetSerializerNSFromAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID));
            String url;

            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                    .setAttribute("list", "name", group.Name);
                url = this.xcapSelector.getString();
            }
            MyXcapMessage xcapMessage = this.xcapStack.PutElement(url, payload, (uint)payload.Length);
            return (xcapMessage != null && XcapService.IsSuccessCode(xcapMessage.Code));
        }

        public bool GroupDelete(Group group)
        {
            if (!this.hasResourceLists)
            {
                LOG.Warn("Group connot be updated as XDMS doesn't support 'resource-lists'");
                return false;
            }

            String url;
            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                    .setAttribute("list", "name", group.Name);
                url = this.xcapSelector.getString();
            }
            MyXcapMessage xcapMessage = this.xcapStack.DeleteElement(url);
            bool ok = (xcapMessage != null && XcapService.IsSuccessCode(xcapMessage.Code));

            // FIXME: Delete all anchors
            LOG.Error("Anchors must also be deleted");

            return ok;
        }

        public bool GroupAuthorize(Group group, BogheXdm.Authorization authorization)
        {
            LOG.Error("Not Implemented");
            return false;
        }

        public bool AvatarPublish(String base64Content, String mimeType)
        {
            if (!this.prepared)
            {
                LOG.Error("XCAP sevice not prepared");
                return false;
            }
            if (!this.hasOMAPresenceContent)
            {
                LOG.Error("OMAPresenceContent not supported");
                return false;
            }

            new System.Threading.Thread(delegate()
                {
                    if (this.CreatePresenceContentDocument(base64Content, mimeType))
                    {
                        this.Avatar = base64Content;
                        XcapEventArgs eargs = new XcapEventArgs(XcapEventTypes.PRESCONTENT_DONE, 200, "OK");
                        eargs.AddExtra(XcapEventArgs.EXTRA_CONTENT, this.Avatar);
                        EventHandlerTrigger.TriggerEvent<XcapEventArgs>(this.onXcapEvent, this, eargs);
                    }
                })
                .Start();

            return true;
        }

        public bool Prepare()
        {
            if (this.prepared)
            {
                LOG.Debug("XCAP service already prepared");
                return true;
            }

            String impu = this.configurationService.Get(
                Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU, Configuration.DEFAULT_IDENTITY_IMPU);
            String xcap_ui = this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.USERNAME, impu);
            String xcap_root = this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.XCAP_ROOT, Configuration.DEFAULT_XCAP_ROOT);
            String xcap_password = this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.PASSWORD, Configuration.DEFAULT_XCAP_ROOT);
            int xcap_timeout = this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.TIMEOUT, Configuration.DEFAULT_XCAP_TIMEOUT);

            if (this.xcapStack == null)
            {
                this.xcapStack = new MyXcapStack(this.callback, xcap_ui, xcap_password, xcap_root, xcap_timeout);
                this.xcapSelector = new XcapSelector(this.xcapStack.Stack);
            }
            else
            {
                // update configuration
                if (!this.xcapStack.Configure(xcap_ui, xcap_password, xcap_root, xcap_timeout))
                {
                    LOG.Error("Failed to configure the XCAP stack");
                    return false;
                }
            }            

            if ((this.prepared = this.xcapStack.Start()))
            {
                this.xcapStack.AddHeader("Connection", "Keep-Alive");
                this.xcapStack.AddHeader("User-Agent", "XDM-client/OMA1.1");
                this.xcapStack.AddHeader("X-3GPP-Intended-Identity", this.xcapStack.XUI);
            }
            else
            {
                LOG.Error("Failed to start XCAP Stack");
            }

            return this.prepared;
        }

        public bool UnPrepare()
        {
            if (!this.prepared)
            {
                LOG.Warn("XCAP service not prepared");
                return true;
            }

            this.xcapDocumentsUris.Clear();
            this.Avatar = null;

            if (this.xcapStack.Stop())
            {
                this.prepared = false;
            }
            else
            {
                LOG.Error("Failed to stop the XCAP stack");
            }

            return !this.prepared;
        }

        #endregion        

        private MyXcapMessage GetWellKnownDocument(String auid)
        {
		    String documentUrl;
    		
		    LOG.Debug("Downloading '"+ auid +"' document...");


            if (this.xcapDocumentsUris.ContainsKey(auid))
            {
                documentUrl = this.xcapDocumentsUris[auid];
            }
            else
            {
                lock (this.xcapSelector)
                {
                    this.xcapSelector.reset();
                    this.xcapSelector.setAUID(auid);
                    documentUrl = this.xcapSelector.getString();
                }
            }

            return this.xcapStack.GetDocument(documentUrl);
	    }

        private static bool IsSuccessCode(short code)
        {
            return (code > 199 && code < 300);
        }
    }
}
