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

namespace BogheCore.Model
{
    public class RCSServiceDescription : BaseObject, IComparable<RCSServiceDescription>
    {
        private String id;
        private String version;
        private String name;
        private String contactAddressType;

        public String Id
        {
            get { return this.id; }
            set { this.id = value; }
        }
        
        public String Version
        {
            get { return this.version; }
            set { this.version = value; }
        }
        
        public String Name
        {
            get { return this.name; }
            set { this.name = value; }
        }
        
        public String ContactAddressType
        {
            get { return this.contactAddressType; }
            set { this.contactAddressType = value; }
        }

        public int CompareTo(RCSServiceDescription other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            return String.Compare(this.Id, other.Id);
        }
    }
}
