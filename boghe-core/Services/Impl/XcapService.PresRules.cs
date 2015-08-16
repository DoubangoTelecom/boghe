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
using BogheXdm.Generated.common_policy;
using BogheXdm.Generated.oma.common_policy;
using BogheXdm;
using System.Xml;
using BogheCore.Xcap;

namespace BogheCore.Services.Impl
{
    partial class XcapService
    {
        private bool HandleOMAPresRules(short code, byte[] content)
        {
            try
            {
                ruleset document;
                if (XcapService.IsSuccessCode(code))
                {
                    document = this.Deserialize(content, typeof(ruleset)) as ruleset;
                    if (document != null && document.rules != null)
                    {
                        if (document.rules.Count(x =>
                            SpecialNames.PRESRULES_OMA_ALLOW_OWN.Equals(x.id) ||
                            SpecialNames.PRESRULES_OMA_BLOCKED_CONTACTS.Equals(x.id) ||
                            SpecialNames.PRESRULES_OMA_GRANTED_CONTACTS.Equals(x.id) ||
                            SpecialNames.PRESRULES_OMA_UNLISTED.Equals(x.id) ||
                            SpecialNames.PRESRULES_RCS_ALLOW_SERVICE_ANONYMOUS.Equals(x.id)) != 5)
                        {
                            return ((document = this.CreateOMAPresRulesDocument()) != null);
                        }
                        return true;
                    }

                    return false;
                }
                else if (code == 404)
                {
                    return ((document = this.CreateOMAPresRulesDocument()) != null);
                }
            }
            catch (Exception e)
            {
                XcapService.LOG.Error("Failed to handle 'resource-lists' event", e);
                return false;
            }

            return false;
        }

        private ruleset CreateOMAPresRulesDocument()
        {
            ruleset document = new ruleset();

            //<cr:conditions>
            //  <cr:identity>
            //    <cr:one id="sip:test@doubango.org" />
            //  </cr:identity>
            //</cr:conditions>
            identityType identityCond = new identityType();
            identityCond.Items = new oneType[1];
            oneType otype = new oneType();
            otype.id = this.xcapStack.XUI;
            identityCond.Items[0] = otype;

            //<cr:conditions>
            //  <anonymous-request xmlns="urn:oma:xml:xdm:common-policy" />
            //</cr:conditions>
            anonymousRequest anonymousCond = new anonymousRequest();

            // <cr:conditions>
            //  <other-identity xmlns="urn:oma:xml:xdm:common-policy" />
            //</cr:conditions>
            otherIdentity otherIdentityCond = new otherIdentity();

            // <cr:conditions>
            //  <external-list xmlns="urn:oma:xml:xdm:common-policy">
            //    <entry anc="http://doubango.org:8080/services/resource-lists/users/sip:test@doubango.org/index/~~/resource-lists/list%5B@name=%22oma_grantedcontacts%22%5D" />
            //  </external-list>
            //</cr:conditions>
            externallist omaGrantedCond = this.CreatePresRulesExternalList(SpecialNames.SHARED_OMA_GRANTEDCONTACTS);

            //<cr:conditions>
            //  <external-list xmlns="urn:oma:xml:xdm:common-policy">
            //    <entry anc="http://doubango.org:8080/services/resource-lists/users/sip:test@doubango.org/index/~~/resource-lists/list%5B@name=%22oma_blockedcontacts%22%5D" />
            //  </external-list>
            //</cr:conditions>
            externallist omaBlockedCond = this.CreatePresRulesExternalList(SpecialNames.SHARED_OMA_BLOCKEDCONTACTS);

            document.rule = new ruleType[]
                {
                    CreatePresRule(SpecialNames.PRESRULES_OMA_ALLOW_OWN, "allow", true, identityCond),
                    CreatePresRule(SpecialNames.PRESRULES_RCS_ALLOW_SERVICE_ANONYMOUS, "allow", true, anonymousCond),
                    CreatePresRule(SpecialNames.PRESRULES_OMA_UNLISTED, "confirm", false, otherIdentityCond),
                    CreatePresRule(SpecialNames.PRESRULES_OMA_GRANTED_CONTACTS, "allow", true, omaGrantedCond),
                    CreatePresRule(SpecialNames.PRESRULES_OMA_BLOCKED_CONTACTS, "block", false, omaBlockedCond)
                };


            String documentUrl;
            //if(this.xcapDocumentsUris.ContainsKey())
            lock (this.xcapSelector)
            {
                this.xcapSelector.reset();
                this.xcapSelector.setAUID(XcapService.XCAP_AUID_OMA_PRES_RULES_ID);
                documentUrl = this.xcapSelector.getString();
            }
            byte[] payload = this.Serialize(document, true, true, this.GetSerializerNSFromAUID(XcapService.XCAP_AUID_OMA_PRES_RULES_ID));

            MyXcapMessage xcapMessage = this.xcapStack.PutDocument(documentUrl, payload, (uint)payload.Length, XcapService.XCAP_AUID_OMA_PRES_RULES_MIME_TYPE);
            if (xcapMessage != null && XcapService.IsSuccessCode(xcapMessage.Code))
            {
                return document;
            }
            return null;
        }


        private externallist CreatePresRulesExternalList(String list)
        {
            externallist eList = new externallist();
            eList.entry = new anchorType[1];
            eList.entry[0] = new anchorType();
            eList.entry[0].anc = this.GetResourceListAnchorAsString(list);
            return eList;
        }

        private static ruleType CreatePresRule(String id, String subhandling, bool useTransformations, object condition)
        {
            XmlDocument document = new XmlDocument();

            ruleType rule = new ruleType();
            rule.id = id;
            rule.conditions = new conditionsType();
            rule.conditions.Items = new object[1];
            rule.conditions.Items[0] = condition;
            
            //<cr:actions>
            //  <sub-handling>allow</sub-handling>
            //</cr:actions>
            XmlElement subHandling = document.CreateElement("sub-handling", XcapService.XCAP_AUID_IETF_PRES_RULES_NS);
            subHandling.InnerText = subhandling;
            rule.actions = new extensibleType();
            rule.actions.Any = new XmlElement[] { subHandling };

            //<cr:transformations>...
            if (useTransformations)
            {
                //<provide-services>
                //    <all-services />
                //</provide-services>
                XmlElement allServices = document.CreateElement("all-services", XcapService.XCAP_AUID_IETF_PRES_RULES_NS);
                XmlElement provideServices = document.CreateElement("provide-services", XcapService.XCAP_AUID_IETF_PRES_RULES_NS);
                provideServices.AppendChild(allServices);

                //<provide-persons>
                //    <all-persons />
                // </provide-persons>
                XmlElement allPersons = document.CreateElement("all-persons", XcapService.XCAP_AUID_IETF_PRES_RULES_NS);
                XmlElement providePersons = document.CreateElement("provide-persons", XcapService.XCAP_AUID_IETF_PRES_RULES_NS);
                providePersons.AppendChild(allPersons);
                
                //<provide-devices>
                //    <all-devices />
                //</provide-devices>
                XmlElement allDevices = document.CreateElement("all-devices", XcapService.XCAP_AUID_IETF_PRES_RULES_NS);
                XmlElement provideDevices = document.CreateElement("provide-devices", XcapService.XCAP_AUID_IETF_PRES_RULES_NS);
                provideDevices.AppendChild(allDevices);

                // <provide-all-attributes />
                XmlElement provideAllAttributes = document.CreateElement("provide-all-attributes", XcapService.XCAP_AUID_IETF_PRES_RULES_NS);

                rule.transformations = new extensibleType();
                rule.transformations.Any = new XmlElement[] { provideServices, providePersons, provideAllAttributes, provideDevices };
            }

            return rule;
        }
    }
}
