using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml.Serialization;

namespace BogheCore.Services.Impl
{
    partial class XcapService
    {
        /*== xcap-caps ==*/
	     const String XCAP_AUID_IETF_XCAP_CAPS_ID = "xcap-caps";
	     const String XCAP_AUID_IETF_XCAP_CAPS_MIME_TYPE = "application/xcap-caps+xml";
	     const String XCAP_AUID_IETF_XCAP_CAPS_NS = "urn:ietf:params:xml:ns:xcap-caps";
	     const String XCAP_AUID_IETF_XCAP_CAPS_DOC = "index";
    	
	    /*== resource-lists ==*/
	     const String XCAP_AUID_IETF_RESOURCE_LISTS_ID = "resource-lists";
	     const String XCAP_AUID_IETF_RESOURCE_LISTS_MIME_TYPE = "application/resource-lists+xml";
	     const String XCAP_AUID_IETF_RESOURCE_LISTS_NS = "urn:ietf:params:xml:ns:resource-lists";
	     const String XCAP_AUID_IETF_RESOURCE_LISTS_DOC = "index";
    	
	    /*== rls-services ==*/
	     const String XCAP_AUID_IETF_RLS_SERVICES_ID = "rls-services";
	     const String XCAP_AUID_IETF_RLS_SERVICES_MIME_TYPE = "application/rls-services+xml";
	     const String XCAP_AUID_IETF_RLS_SERVICES_NS = "urn:ietf:params:xml:ns:resource-lists";
	     const String XCAP_AUID_IETF_RLS_SERVICES_DOC = "index";
    	
	    /*== pres-rules ==*/
	     const String XCAP_AUID_IETF_PRES_RULES_ID = "pres-rules";
	     const String XCAP_AUID_IETF_PRES_RULES_MIME_TYPE = "application/auth-policy+xml";
	     const String XCAP_AUID_IETF_PRES_RULES_NS = "urn:ietf:params:xml:ns:pres-rules";
	     const String XCAP_AUID_IETF_PRES_RULES_DOC = "index";
    	
	    /*== org.openmobilealliance.pres-rules ==*/
	     const String XCAP_AUID_OMA_PRES_RULES_ID = "org.openmobilealliance.pres-rules";
	     const String XCAP_AUID_OMA_PRES_RULES_MIME_TYPE = "application/auth-policy+xml";
	     const String XCAP_AUID_OMA_PRES_RULES_NS = "urn:ietf:params:xml:ns:common-policy";
	     const String XCAP_AUID_OMA_PRES_RULES_DOC = "pres-rules";
    	
	    /*== directory ==*/
	     const String XCAP_AUID_IETF_DIRECTORY_ID = "directory";
	     const String XCAP_AUID_IETF_DIRECTORY_MIME_TYPE = "application/directory+xml";
	     const String XCAP_AUID_IETF_DIRECTORY_NS = "urn:ietf:params:xml:ns:xcap-directory";
	     const String XCAP_AUID_IETF_DIRECTORY_DOC = "directory.xml";
    	
	    /*== org.openmobilealliance.xcap-directory ==*/
	     const String XCAP_AUID_OMA_DIRECTORY_ID = "org.openmobilealliance.xcap-directory";
	     const String XCAP_AUID_OMA_DIRECTORY_MIME_TYPE = "application/vnd.oma.xcap-directory+xml";
	     const String XCAP_AUID_OMA_DIRECTORY_NS = "urn:oma:xml:xdm:xcap-directory";
	     const String XCAP_AUID_OMA_DIRECTORY_DOC = "directory.xml";
    	
	    /*== org.openmobilealliance.pres-content ==*/
	     const String XCAP_AUID_OMA_PRES_CONTENT_ID = "org.openmobilealliance.pres-content";
	     const String XCAP_AUID_OMA_PRES_CONTENT_MIME_TYPE = "application/vnd.oma.pres-content+xml";
	     const String XCAP_AUID_OMA_PRES_CONTENT_NS = "urn:oma:xml:prs:pres-content";
	     const String XCAP_AUID_OMA_PRES_CONTENT_DOC = "oma_status-icon/rcs_status_icon";
    	
	    /*== org.openmobilealliance.conv-history ==*/
	     const String XCAP_AUID_OMA_CONV_HISTORY_ID = "org.openmobilealliance.conv-history";
	     const String XCAP_AUID_OMA_CONV_HISTORY_MIME_TYPE = "application/vnd.oma.im.history-list+xml";
	     const String XCAP_AUID_OMA_CONV_HISTORY_NS = "urn:oma:xml:im:history-list";
	     const String XCAP_AUID_OMA_CONV_HISTORY_DOC = "conv-history";
    	
	    /*== org.openmobilealliance.deferred-list ==*/
	     const String XCAP_AUID_OMA_DEFERRED_LIST_ID = "org.openmobilealliance.deferred-list";
	     const String XCAP_AUID_OMA_DEFERRED_LIST_MIME_TYPE = "application/vnd.oma.im.deferred-list+xml";
	     const String XCAP_AUID_OMA_DEFERRED_LIST_NS = "urn:oma:xml:im:history-list";
	     const String XCAP_AUID_OMA_DEFERRED_LIST_DOC = "deferred-list";
    	
	    /*== org.openmobilealliance.group-usage-list ==*/
	     const String XCAP_AUID_OMA_SHARED_GROUPS_ID = "org.openmobilealliance.group-usage-list";
	     const String XCAP_AUID_OMA_SHARED_GROUPS_MIME_TYPE = "application/vnd.oma.group-usage-list+xml";
	     const String XCAP_AUID_OMA_SHARED_GROUPS_NS = "urn:ietf:params:xml:ns:resource-lists";
	     const String XCAP_AUID_OMA_SHARED_GROUPS_DOC = "index";


         private XmlSerializerNamespaces GetSerializerNSFromAUID(String auid)
         {
             XmlSerializerNamespaces namespaces = new XmlSerializerNamespaces();

             switch (auid)
             {
                 case XcapService.XCAP_AUID_IETF_RESOURCE_LISTS_ID:
                     namespaces.Add(String.Empty, "urn:ietf:params:xml:ns:resource-lists");
                     break;
                 case XcapService.XCAP_AUID_IETF_RLS_SERVICES_ID:
                     namespaces.Add("rl", "urn:ietf:params:xml:ns:resource-lists");
                     namespaces.Add(String.Empty, "urn:ietf:params:xml:ns:rls-services");
                     break;
                 case XcapService.XCAP_AUID_IETF_PRES_RULES_ID:
                     namespaces.Add(String.Empty, "urn:ietf:params:xml:ns:pres-rules");
                     namespaces.Add("cr", "urn:ietf:params:xml:ns:common-policy");
                     break;
                 case XcapService.XCAP_AUID_OMA_PRES_RULES_ID:
                     namespaces.Add(String.Empty, "urn:ietf:params:xml:ns:pres-rules");
                     namespaces.Add("ocp", "urn:oma:xml:xdm:common-policy");
                     namespaces.Add("op", "urn:oma:xml:prs:pres-rules");
                     namespaces.Add("cr", "urn:ietf:params:xml:ns:common-policy");
                     break;
                 case XcapService.XCAP_AUID_OMA_PRES_CONTENT_ID:
                     namespaces.Add(String.Empty, "urn:oma:xml:prs:pres-content");
                     break;
             }

             return namespaces;
         }
    }
}
