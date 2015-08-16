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
using System.Xml.Serialization;
using BogheCore.Generated.oma.pidf_pres;
using System.Xml;
using System.IO;
using BogheCore.Utils;
using BogheCore.Generated.rpid;
using BogheCore.Generated.pidf;
using BogheCore.Generated.pidf_caps;

namespace BogheCore.Generated.data_model
{
    partial class device
    {
        private status status;
        private devcaps caps;
        private networkavailability netAvaibility;

        [XmlElement("status", Namespace = "urn:ietf:params:xml:ns:pidf", Order = 05)]
        public status Status
        {
            get { return this.status; }
            set { this.status = value; }
        }

        [XmlElement("devcaps", Namespace = "urn:ietf:params:xml:ns:pidf:caps", Order = 06)]
        public devcaps DeviceCapabilities
        {
            get { return this.caps; }
            set { this.caps = value; }
        }

        [XmlElement("network-availability", Namespace = "urn:oma:xml:prs:pidf:oma-pres", Order = 07)]
        public networkavailability NetworkAvaibility
        {
            get { return this.netAvaibility; }
            set { this.netAvaibility = value; }
        }
    }

    partial class person
    {
        private static readonly XmlSerializer overridingwillingnessSerializer = new XmlSerializer(typeof(overridingwillingness));
        private static readonly XmlSerializer activitiesSerializer = new XmlSerializer(typeof(activities));
        private static readonly XmlSerializer moodSerializer = new XmlSerializer(typeof(mood));
        private static readonly XmlSerializer statusIconSerializer = new XmlSerializer(typeof(statusicon));

        private activities activitiesElement;
        private mood moodElement;
        private overridingwillingness overridingWillingnessElement;
        private statusicon statusIconElement;

        private String cardField;
        private String displayNameField;
        private String homepageField;
        private String iconField;
        private String mapField;
#if NotOrderOverflow
        private String soundField;
#endif


        [XmlElement("overriding-willingness", Namespace = "urn:oma:xml:prs:pidf:oma-pres", Order = 00)]
        public overridingwillingness overridingWillingness
        {
            get
            {
                if (this.overridingWillingnessElement == null && this.anyField != null)
                {
                    this.overridingWillingnessElement = this.GetElement<overridingwillingness>("overriding-willingness", "urn:oma:xml:prs:pidf:oma-pres", overridingwillingnessSerializer);
                }
                return this.overridingWillingnessElement;
            }
            set { this.overridingWillingnessElement = value; }
        }

        [XmlElement("activities", Namespace = "urn:ietf:params:xml:ns:pidf:rpid", Order = 01)]
        public activities activities
        {
            get
            {
                if (this.activitiesElement == null && this.anyField != null)
                {
                    this.activitiesElement = this.GetElement<activities>("activities", "urn:ietf:params:xml:ns:pidf:rpid", activitiesSerializer);
                }
                return this.activitiesElement;
            }
            set { this.activitiesElement = value; }
        }

        [XmlElement("mood", Namespace = "urn:ietf:params:xml:ns:pidf:rpid", Order = 02)]
        public mood mood
        {
            get
            {
                if (this.moodElement == null && this.anyField != null)
                {
                    this.moodElement = this.GetElement<mood>("mood", "urn:ietf:params:xml:ns:pidf:rpid", moodSerializer);
                }
                return this.moodElement;
            }
            set { this.moodElement = value; }
        }

        [XmlElement("status-icon", Namespace = "urn:ietf:params:xml:ns:pidf:rpid", Order = 03)]
        public statusicon statusicon
        {
            get
            {
                if (this.statusIconElement == null && this.anyField != null)
                {
                    this.statusIconElement = this.GetElement<statusicon>("status-icon", "urn:ietf:params:xml:ns:pidf:rpid", statusIconSerializer);
                }
                return this.statusIconElement;
            }
            set { this.statusIconElement = value; }
        }

        public String GetNote()
        {
            String result = String.Empty;
            if (this.note != null && this.note.Length > 0)
            {
                result = this.note[0].Value;
            }
            else if (this.anyField != null)
            {
                result = this.GetValue("note", "urn:ietf:params:xml:ns:pidf:data-model");
            }
            return result;
        }

        public String GetTimeStamp()
        {
            String result = String.Empty;
            if (!String.IsNullOrEmpty(this.timestamp))
            {
                result = this.timestamp;
            }
            else if (this.anyField != null)
            {
                result = this.GetValue("timestamp", "urn:ietf:params:xml:ns:pidf:data-model");
            }
            return result;
        }

        [XmlElement("card", Namespace = "urn:ietf:params:xml:ns:pidf:cipid", Order = 04)]
        public String card
        {
            get
            {
                if (this.cardField == null && this.anyField != null)
                {
                    this.cardField = this.GetValue("card", "urn:ietf:params:xml:ns:pidf:cipid");
                }
                return this.cardField;
            }
            set { this.cardField = value; }
        }

        [XmlElement("display-name", Namespace = "urn:ietf:params:xml:ns:pidf:cipid", Order = 05)]
        public String displayName
        {
            get
            {
                if (this.displayNameField == null && this.anyField != null)
                {
                    this.displayNameField = this.GetValue("display-name", "urn:ietf:params:xml:ns:pidf:cipid");
                }
                return this.displayNameField;
            }
            set { this.displayNameField = value; }
        }

        [XmlElement("homepage", Namespace = "urn:ietf:params:xml:ns:pidf:cipid", Order = 06)]
        public String homepage
        {
            get
            {
                if (this.homepageField == null && this.anyField != null)
                {
                    this.homepageField = this.GetValue("homepage", "urn:ietf:params:xml:ns:pidf:cipid");
                }
                return this.homepageField;
            }
            set { this.homepageField = value; }
        }

        [XmlElement("icon", Namespace = "urn:ietf:params:xml:ns:pidf:cipid", Order = 07)]
        public String icon
        {
            get
            {
                if (this.iconField == null && this.anyField != null)
                {
                    this.iconField = this.GetValue("icon", "urn:ietf:params:xml:ns:pidf:cipid");
                }
                return this.iconField;
            }
            set { this.iconField = value; }
        }

        [XmlElement("map", Namespace = "urn:ietf:params:xml:ns:pidf:cipid", Order = 08)]
        public String map
        {
            get
            {
                if (this.mapField == null && this.anyField != null)
                {
                    this.mapField = this.GetValue("map", "urn:ietf:params:xml:ns:pidf:cipid");
                }
                return this.mapField;
            }
            set { this.mapField = value; }
        }

#if NotOrderOverflow // >= 09
        [XmlElement("sound", Namespace = "urn:ietf:params:xml:ns:pidf:cipid", Order = 08)]
        public String sound
        {
            get
            {
                if (this.soundField == null && this.anyField != null)
                {
                    this.soundField = this.GetValue("sound", "urn:ietf:params:xml:ns:pidf:cipid");
                }
                return this.soundField;
            }
            set { this.soundField = value; }
        }
#endif

        private String GetValue(String name, String ns)
        {
            foreach (XmlElement xmlElement in this.anyField)
            {
                if (xmlElement.LocalName.Equals(name) && xmlElement.NamespaceURI.Equals(ns))
                {
                    return xmlElement.InnerText;
                }
            }
            return null;
        }

        private T GetElement<T>(String name, String ns, XmlSerializer serializer) where T : class
        {
            T result = default(T);
            foreach (XmlElement xmlElement in this.anyField)
            {
                if (xmlElement.LocalName.Equals(name) && xmlElement.NamespaceURI.Equals(ns))
                {
                    String xml = xmlElement.OuterXml;
                    using (Stream stream = new MemoryStream(Encoding.Default.GetBytes(xml)))
                    {
                        result = serializer.Deserialize(stream) as T;
                        break;
                    }
                }
            }
            return result;
        }
    }
}
