using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BogheCore.Services.Impl
{
    partial class XcapService
    {
        /*== xcap-caps ==*/
	     static String XCAP_AUID_IETF_XCAP_CAPS_ID = "xcap-caps";
	     static String XCAP_AUID_IETF_XCAP_CAPS_MIME_TYPE = "application/xcap-caps+xml";
	     static String XCAP_AUID_IETF_XCAP_CAPS_NS = "urn:ietf:params:xml:ns:xcap-caps";
	     static String XCAP_AUID_IETF_XCAP_CAPS_DOC = "index";
    	
	    /*== resource-lists ==*/
	     static String XCAP_AUID_IETF_RESOURCE_LISTS_ID = "resource-lists";
	     static String XCAP_AUID_IETF_RESOURCE_LISTS_MIME_TYPE = "application/resource-lists+xml";
	     static String XCAP_AUID_IETF_RESOURCE_LISTS_NS = "urn:ietf:params:xml:ns:resource-lists";
	     static String XCAP_AUID_IETF_RESOURCE_LISTS_DOC = "index";
    	
	    /*== rls-services ==*/
	     static String XCAP_AUID_IETF_RLS_SERVICES_ID = "rls-services";
	     static String XCAP_AUID_IETF_RLS_SERVICES_MIME_TYPE = "application/rls-services+xml";
	     static String XCAP_AUID_IETF_RLS_SERVICES_NS = "urn:ietf:params:xml:ns:resource-lists";
	     static String XCAP_AUID_IETF_RLS_SERVICES_DOC = "index";
    	
	    /*== pres-rules ==*/
	     static String XCAP_AUID_IETF_PRES_RULES_ID = "pres-rules";
	     static String XCAP_AUID_IETF_PRES_RULES_MIME_TYPE = "application/auth-policy+xml";
	     static String XCAP_AUID_IETF_PRES_RULES_NS = "urn:ietf:params:xml:ns:pres-rules";
	     static String XCAP_AUID_IETF_PRES_RULES_DOC = "index";
    	
	    /*== org.openmobilealliance.pres-rules ==*/
	     static String XCAP_AUID_OMA_PRES_RULES_ID = "org.openmobilealliance.pres-rules";
	     static String XCAP_AUID_OMA_PRES_RULES_MIME_TYPE = "application/auth-policy+xml";
	     static String XCAP_AUID_OMA_PRES_RULES_NS = "urn:ietf:params:xml:ns:common-policy";
	     static String XCAP_AUID_OMA_PRES_RULES_DOC = "pres-rules";
    	
	    /*== directory ==*/
	     static String XCAP_AUID_IETF_DIRECTORY_ID = "directory";
	     static String XCAP_AUID_IETF_DIRECTORY_MIME_TYPE = "application/directory+xml";
	     static String XCAP_AUID_IETF_DIRECTORY_NS = "urn:ietf:params:xml:ns:xcap-directory";
	     static String XCAP_AUID_IETF_DIRECTORY_DOC = "directory.xml";
    	
	    /*== org.openmobilealliance.xcap-directory ==*/
	     static String XCAP_AUID_OMA_DIRECTORY_ID = "org.openmobilealliance.xcap-directory";
	     static String XCAP_AUID_OMA_DIRECTORY_MIME_TYPE = "application/vnd.oma.xcap-directory+xml";
	     static String XCAP_AUID_OMA_DIRECTORY_NS = "urn:oma:xml:xdm:xcap-directory";
	     static String XCAP_AUID_OMA_DIRECTORY_DOC = "directory.xml";
    	
	    /*== org.openmobilealliance.pres-content ==*/
	     static String XCAP_AUID_OMA_PRES_CONTENT_ID = "org.openmobilealliance.pres-content";
	     static String XCAP_AUID_OMA_PRES_CONTENT_MIME_TYPE = "application/vnd.oma.pres-content+xml";
	     static String XCAP_AUID_OMA_PRES_CONTENT_NS = "urn:oma:xml:prs:pres-content";
	     static String XCAP_AUID_OMA_PRES_CONTENT_DOC = "oma_status-icon/rcs_status_icon";
    	
	    /*== org.openmobilealliance.conv-history ==*/
	     static String XCAP_AUID_OMA_CONV_HISTORY_ID = "org.openmobilealliance.conv-history";
	     static String XCAP_AUID_OMA_CONV_HISTORY_MIME_TYPE = "application/vnd.oma.im.history-list+xml";
	     static String XCAP_AUID_OMA_CONV_HISTORY_NS = "urn:oma:xml:im:history-list";
	     static String XCAP_AUID_OMA_CONV_HISTORY_DOC = "conv-history";
    	
	    /*== org.openmobilealliance.deferred-list ==*/
	     static String XCAP_AUID_OMA_DEFERRED_LIST_ID = "org.openmobilealliance.deferred-list";
	     static String XCAP_AUID_OMA_DEFERRED_LIST_MIME_TYPE = "application/vnd.oma.im.deferred-list+xml";
	     static String XCAP_AUID_OMA_DEFERRED_LIST_NS = "urn:oma:xml:im:history-list";
	     static String XCAP_AUID_OMA_DEFERRED_LIST_DOC = "deferred-list";
    	
	    /*== org.openmobilealliance.group-usage-list ==*/
	     static String XCAP_AUID_OMA_SHARED_GROUPS_ID = "org.openmobilealliance.group-usage-list";
	     static String XCAP_AUID_OMA_SHARED_GROUPS_MIME_TYPE = "application/vnd.oma.group-usage-list+xml";
	     static String XCAP_AUID_OMA_SHARED_GROUPS_NS = "urn:ietf:params:xml:ns:resource-lists";
	     static String XCAP_AUID_OMA_SHARED_GROUPS_DOC = "index";
    }
}
