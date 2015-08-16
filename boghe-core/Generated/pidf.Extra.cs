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
using System.Xml;
using System.Xml.Serialization;
using System.IO;
using BogheCore.Generated.oma.pidf_pres;
using BogheCore.Generated.data_model;
using BogheCore.Generated.rpid;
using BogheCore.Generated.pidf_caps;

namespace BogheCore.Generated.pidf
{
    partial class presence
    {
        private static readonly XmlSerializer personSerializer = new XmlSerializer(typeof(person));
        private static readonly XmlSerializer deviceSerializer = new XmlSerializer(typeof(device));

        private person[] persons = null;
        private device device = null;

        [XmlElement("person", Namespace = "urn:ietf:params:xml:ns:pidf:data-model", Order = 18)]
        public person[] Persons
        {
            get 
            {
                if (this.persons == null)
                {
                    List<person> values = this.GetElements<person>("person", "urn:ietf:params:xml:ns:pidf:data-model", personSerializer);
                    if (values.Count > 0)
                    {
                        this.persons = values.ToArray();
                    }
                }
                return this.persons; 
            }
            set { this.persons = value; }
        }

        [XmlElement("device", Namespace = "urn:ietf:params:xml:ns:pidf:data-model", Order = 19)]
        public device Device
        {
            get 
            {
                if (this.device == null)
                {
                    List<device> values = this.GetElements<device>("device", "urn:ietf:params:xml:ns:pidf:data-model", deviceSerializer);
                    if (values.Count > 0)
                    {
                        this.device = values[0];
                    }
                }
                return this.device; 
            }
            set { this.device = value; }
        }

        private List<T> GetElements<T>(String name, String ns, XmlSerializer serializer) where T : class
        {
            List<T> result = new List<T>();
            if (this.anyField != null)
            {
                foreach (XmlElement xmlElement in this.anyField)
                {
                    if (xmlElement.LocalName.Equals(name) && xmlElement.NamespaceURI.Equals(ns))
                    {
                        String xml = xmlElement.OuterXml;
                        using (Stream stream = new MemoryStream(Encoding.Default.GetBytes(xml)))
                        {
                            T t = serializer.Deserialize(stream) as T;
                            if (t != null)
                            {
                                result.Add(t);
                            }
                        }
                    }
                }
            }
            return result;
        }
    }

    public partial class tuple
    {
        private static readonly XmlSerializer serviceDescriptionSerializer = new XmlSerializer(typeof(servicedescription));
        private static readonly XmlSerializer willingnessSerializer = new XmlSerializer(typeof(willingness));

        private servicedescription serviceDescriptionElement;
        private String deviceIDField;
        private willingness willingnessElement;
        private relationship relationshipElement;
        private servcapstype caps;

        [XmlElement("willingness", Namespace = "urn:oma:xml:prs:pidf:oma-pres", Order = 05)]
        public willingness willingness
        {
            get
            {
                if (this.willingnessElement == null && this.anyField != null)
                {
                    this.willingnessElement = this.GetElement<willingness>("willingness", "urn:oma:xml:prs:pidf:oma-pres", willingnessSerializer);
                }
                return this.willingnessElement;
            }
            set { this.willingnessElement = value; }
        }

        [XmlElement("service-description", Namespace = "urn:oma:xml:prs:pidf:oma-pres", Order = 06)]
        public servicedescription serviceDescription
        {
            get
            {
                if (this.serviceDescriptionElement == null && this.anyField != null)
                {
                    this.serviceDescriptionElement = this.GetElement<servicedescription>("service-description", "urn:oma:xml:prs:pidf:oma-pres", serviceDescriptionSerializer);
                }
                return this.serviceDescriptionElement;
            }
            set { this.serviceDescriptionElement = value; }
        }

        [XmlElement("deviceID", Namespace = "urn:ietf:params:xml:ns:pidf:data-model", Order = 07)]
        public String deviceID
        {
            get { return this.deviceIDField; }
            set { this.deviceIDField = value; }
        }

        [XmlElement("relationship", Namespace = "urn:ietf:params:xml:ns:pidf:rpid", Order = 08)]
        public relationship relationship
        {
            get { return this.relationshipElement; }
            set { this.relationshipElement = value; }
        }

        [XmlElement("servcaps", Namespace = "urn:ietf:params:xml:ns:pidf:caps", Order = 09)]
        public servcapstype servcaps
        {
            get { return this.caps; }
            set { this.caps = value; }
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

    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("xsd", "2.0.50727.42")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(AnonymousType = true, Namespace = "urn:ietf:params:xml:ns:pidf-diff")]
    [System.Xml.Serialization.XmlRootAttribute("pidf-full", Namespace = "urn:ietf:params:xml:ns:pidf-diff", IsNullable = false)]
    public partial class pidffull : presence
    {

        private uint versionField;

        private bool versionFieldSpecified;

        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint version
        {
            get
            {
                return this.versionField;
            }
            set
            {
                this.versionField = value;
            }
        }

        /// <remarks/>
        [System.Xml.Serialization.XmlIgnoreAttribute()]
        public bool versionSpecified
        {
            get
            {
                return this.versionFieldSpecified;
            }
            set
            {
                this.versionFieldSpecified = value;
            }
        }
    }
}
