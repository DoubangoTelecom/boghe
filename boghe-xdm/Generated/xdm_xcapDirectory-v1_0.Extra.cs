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
using System.Xml;

namespace BogheXdm.Generated.oma.xcap_directory
{
    partial class xcapdirectoryFolder
    {
        private List<xcapdirectoryFolderEntry> entries = null;       

        [XmlIgnore]
        public List<xcapdirectoryFolderEntry> Entries
        {
            get
            {
                if (this.entries == null)
                {
                    /*this.entries = this.Items == null ?
                        new List<xcapdirectoryFolderEntry>() :
                        this.entries = this.Items.Cast<xcapdirectoryFolderEntry>().ToList<xcapdirectoryFolderEntry>();
                     */
                    
                    this.entries = new List<xcapdirectoryFolderEntry>();
                    if (this.Items != null)
                    {
                        foreach (object item in this.Items)
                        {
                            xcapdirectoryFolderEntry e = item as xcapdirectoryFolderEntry;
                            if (e != null)
                            {
                                this.entries.Add(e);
                            }
                        }
                    }
                }
                
                return this.entries;
            }
        }
    }

    public partial class xcapdirectoryFolderEntry
    {
        public String GetAttributeValue(String attributeName)
        {
            foreach (XmlAttribute attribute in this.AnyAttr)
            {
                if (attribute.Name.Equals(attributeName))
                {
                    return attribute.Value;
                }
            }
            return null;
        }
    }
}
