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
using System.Xml.Serialization;
using System.Collections.Generic;
using BogheXdm.Generated.oma.common_policy;

namespace BogheXdm.Generated.common_policy
{
    public partial class ruleset
    {
        [XmlIgnore]
        public List<ruleType> rules
        {
            get
            {
                List<ruleType> result;
                if (this.rule != null)
                {
                    result = new List<ruleType>(this.rule);
                }
                else
                {
                    result = new List<ruleType>();
                }
                return result;
            }
        }
    }

    [XmlRoot("rule", Namespace = "urn:ietf:params:xml:ns:common-policy")]
    public partial class ruleType
    {
        // Remove from generated
        private conditionsType conditionsField;

        [XmlElement(Order = 0)]
        public conditionsType conditions
        {
            get { return this.conditionsField; }
            set { this.conditionsField = value; }
        }
    }

    [Serializable]
    [XmlType(Namespace = "urn:ietf:params:xml:ns:common-policy")]
    [XmlRoot("conditions", Namespace = "urn:ietf:params:xml:ns:common-policy")]
    public partial class conditionsType
    {
        private object[] itemsField;

        [XmlAnyElement()]
        [XmlElement("identity", typeof(identityType), IsNullable = false)]
        [XmlElement("sphere", typeof(sphereType), IsNullable = false)]
        [XmlElement("validity", typeof(validityType), IsNullable = false)]
        [XmlElement("anonymous-request", typeof(anonymousRequest), IsNullable = false, Namespace = "urn:oma:xml:xdm:common-policy")]
        [XmlElement("other-identity", typeof(otherIdentity), IsNullable = false, Namespace = "urn:oma:xml:xdm:common-policy")]
        [XmlElement("external-list", typeof(externallist), IsNullable = false, Namespace = "urn:oma:xml:xdm:common-policy")]
        public object[] Items
        {
            get { return this.itemsField; }
            set { this.itemsField = value; }
        }
    }

    [XmlRoot("identity", Namespace = "urn:ietf:params:xml:ns:common-policy")]
    public partial class identityType
    {
    }

    [XmlRoot("sphere", Namespace = "urn:ietf:params:xml:ns:common-policy")]
    public partial class sphereType
    {
    }

    [XmlRoot("validity", Namespace = "urn:ietf:params:xml:ns:common-policy")]
    public partial class validityType
    {
    }

    [XmlRoot("one", Namespace = "urn:ietf:params:xml:ns:common-policy")]
    public partial class oneType
    {
    }

    [XmlRoot("many", Namespace = "urn:ietf:params:xml:ns:common-policy")]
    public partial class manyType
    {
    }
}
