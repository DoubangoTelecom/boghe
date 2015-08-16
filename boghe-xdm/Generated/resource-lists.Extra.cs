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

namespace BogheXdm.Generated.resource_lists
{
    partial class listType
    {
        private List<externalType> externalTypes = null;
        private List<entryType> entryTypes = null;
        private List<entryrefType> entryrefTypes = null;
        private List<listTypeList> listTypeLists = null;

        [XmlElementAttribute("entry", Order = 09)]
        public List<entryType> EntryTypes
        {
            get
            {
                if (this.entryTypes == null)
                {
                    this.entryTypes = new List<entryType>();
                }
                if (this.entryTypes.Count == 0 && this.Items != null)
                {
                    foreach (object item in this.Items)
                    {
                        entryType etype = item as entryType;
                        if (etype != null)
                        {
                            this.entryTypes.Add(etype);
                        }
                    }
                }
                
                return this.entryTypes;
            }
            set
            {
                this.entryTypes = value;
            }
        }

        [XmlIgnore]
        public List<entryrefType> EntryrefTypes
        {
            get
            {
                if (this.entryrefTypes == null)
                {
                    this.entryrefTypes = new List<entryrefType>();
                    if (this.Items != null)
                    {
                        foreach (object item in this.Items)
                        {
                            entryrefType entryrefType = item as entryrefType;
                            if (entryrefType != null)
                            {
                                this.entryrefTypes.Add(entryrefType);
                            }
                        }
                    }
                }
                
                return this.entryrefTypes;
            }
        }

        [XmlElementAttribute("external", Order = 08)]
        public List<externalType> ExternalTypes
        {
            get
            {
                if (this.externalTypes == null)
                {
                    this.externalTypes = new List<externalType>();
                }
                if (this.externalTypes.Count == 0 && this.Items != null)
                {
                    foreach (object item in this.Items)
                    {
                        externalType externalType = item as externalType;
                        if (externalType != null)
                        {
                            this.externalTypes.Add(externalType);
                        }
                    }
                }
                
                return this.externalTypes;
            }
            set
            {
                this.externalTypes = value;
            }
        }

        [XmlIgnore]
        public List<listTypeList> ListTypeLists
        {
            get
            {
                if (this.listTypeLists == null)
                {
                    this.listTypeLists = new List<listTypeList>();
                    if (this.Items != null)
                    {
                        foreach (object item in this.Items)
                        {
                            listTypeList listTypeList = item as listTypeList;
                            if (listTypeList != null)
                            {
                                this.listTypeLists.Add(listTypeList);
                            }
                        }
                    }
                }
                
                return this.listTypeLists;
            }
        }
    }

    [XmlRoot("entry", Namespace = "urn:ietf:params:xml:ns:resource-lists")]
    partial class entryType
    {
        private DoubangoProperty[] propField = null;
        
        [XmlElementAttribute("prop", Namespace = "urn:doubango:params:xml:ns:properties", Order = 09)]
        public DoubangoProperty[] prop
        {
            get { return this.propField; }
            set { this.propField = value; }
        }
    }

    [XmlRoot("list", Namespace = "urn:ietf:params:xml:ns:resource-lists")]
    partial class listType
    {
    }

    [XmlRoot("external", Namespace = "urn:ietf:params:xml:ns:resource-lists")]
    partial class externalType
    {
    }

    [XmlRoot("entry-ref", Namespace = "urn:ietf:params:xml:ns:resource-lists")]
    partial class entryrefType
    {
    }        
}
