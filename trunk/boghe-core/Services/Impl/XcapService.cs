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

namespace BogheCore.Services.Impl
{
    public partial class XcapService : IXcapService
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(XcapService));

        private readonly MyXcapCallback callback;
        private readonly IDictionary<String, String> documentsUris;

        private IConfigurationService configurationService;
        private ISipService sipService;
        private IContactService contactService;
        private readonly ServiceManager manager;

        private MyXcapStack xcapStack;
        private XcapSelector xcapSelector;
        private bool prepared;
        private State currentState;

        private bool hasOMADirectory;
        private bool hasResourceLists;
        private bool hasRLS;
        private bool hasPresRules;
        private bool hasOMAPresRules;
        private bool hasOMAPresenceContent;

        private String rlsPresUri;
        private bool ready;

        public enum State
        {
            NONE,
            GET_XCAP_CAPS,
            GET_OMA_DIRECTORY,
            GET_RESOURCE_LISTS,
            PUT_RESOURCE_LISTS,
            GET_RLS
        }

        public XcapService(ServiceManager manager)
        {
            this.callback = new MyXcapCallback(this);
            this.documentsUris = new Dictionary<String, String>();

            this.manager = manager;
            this.CurrentState = State.NONE;        
        }

        private State CurrentState
        {
            get { return this.currentState; }
            set
            {
                LOG.Debug(String.Format("XCAP Current State={0}", value));
                this.currentState = value;
            }
        }

        #region IService

        public bool Start()
        {
            this.configurationService = this.manager.ConfigurationService;
            this.sipService = this.manager.SipService;
            this.contactService = this.manager.ContactService;

            return true;
        }

        public bool Stop()
        {
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

        public void DownloadDocuments()
        {
            if (!this.prepared)
            {
                LOG.Error("XCAP sevice not prepared");
                return;
            }

            this.CurrentState = State.GET_XCAP_CAPS;

            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_IETF_XCAP_CAPS_ID);
                this.xcapStack.getDocument(this.xcapSelector.getString());
            }
        }

        public bool ContactAdd(Contact contact)
        {
            if (!this.hasResourceLists)
            {
                LOG.Warn("Contact connot be added as XDMS doen't support 'resource-lists'");
                return false;
            }

            bool ret;

            entryType entry = this.ContactToEntry(contact);
            byte[] payload = this.Serialize(entry, true, true, this.GetSerializerNSFromAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID));
            XcapSelector selector = new XcapSelector(this.xcapStack);
            selector.setAUID(XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID)
                .setAttribute("list", "name", contact.GroupName)
                .setAttribute("entry", "uri", contact.UriString);
            ret = this.xcapStack.putElement(selector.getString(), payload, (uint)payload.Length);
            selector.Dispose();

            return ret;
        }

        public bool ContactUpdate(Contact contact, String prevGroupName)
        {
            if (!this.hasResourceLists)
            {
                LOG.Warn("Contact connot be added as XDMS doen't support 'resource-lists'");
                return false;
            }

            if (!this.hasResourceLists)
            {
                LOG.Warn("Contact connot be added as XDMS doen't support 'resource-lists'");
                return false;
            }

            return false;
        }

        public bool ContactDelete(Contact contact)
        {
            return false;
        }

        public bool Prepare()
        {
            if (this.prepared)
            {
                LOG.Warn("XCAP service already prepared");
                return true;
            }

            String impu = this.configurationService.Get(
                Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU, Configuration.DEFAULT_IMPU);
            String xcap_ui = this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.USERNAME, impu);
            String xcap_root = this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.XCAP_ROOT, Configuration.DEFAULT_XCAP_ROOT);
            String xcap_password = this.configurationService.Get(
                    Configuration.ConfFolder.XCAP, Configuration.ConfEntry.PASSWORD, Configuration.DEFAULT_XCAP_ROOT);

            if (this.xcapStack == null)
            {
                this.xcapStack = new MyXcapStack(this.callback, xcap_ui, xcap_password, xcap_root);
                this.xcapSelector = new XcapSelector(this.xcapStack);
            }
            else
            {
                this.xcapStack.setCredentials(xcap_ui, xcap_password);
                this.xcapStack.setXcapRoot(xcap_root);
            }

            if ((this.prepared = this.xcapStack.start()))
            {
                this.xcapStack.addHeader("Connection", "Keep-Alive");
                this.xcapStack.addHeader("User-Agent", "XDM-client/OMA1.1");
                this.xcapStack.addHeader("X-3GPP-Intended-Identity", xcap_ui);
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

            this.documentsUris.Clear();

            if (this.xcapStack.stop())
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

        private void downloadDocument(String auid)
        {
		    String documentUrl;
    		
		    LOG.Debug("Downloading '"+ auid +"' document...");


            if (this.documentsUris.ContainsKey(auid))
            {
                documentUrl = this.documentsUris[auid];
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

            this.xcapStack.getDocument(documentUrl);
	    }
    }
}
