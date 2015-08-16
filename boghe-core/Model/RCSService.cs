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
using System.ComponentModel;
#if WINRT
using System.Runtime.Serialization;
using Serializable = System.Runtime.Serialization.DataContractAttribute;
#endif

namespace BogheCore.Model
{
    [Serializable]
    [XmlRoot("RCSService")]
    public class RCSService : BaseObject, IComparable<RCSService>
    {
        public const String DEVICE_ID = "urn:uuid:3ca54bcb-9a69-55a2-aab4-995a55a934a5";

        public const String SERVICEID_IMPAGER = "org.openmobilealliance:IM-pager-mode";
        public const String SERVICEID_IMSESSIOM = "org.openmobilealliance:IM-Session";
        public const String SERVICEID_FILETRANSFER = "org.openmobilealliance:File-Transfer";
        public const String SERVICEID_IMAGESHARE = "org.gsma.imageshare";
        public const String SERVICEID_VIDEOSHARE = "org.gsma.videoshare";
        public const String SERVICEID_VIDEOTELEPHONY = "org.3gpp.cs-videotelephony";
        public const String SERVICEID_PSVOICE = "org.3gpp.urn:urn-7:3gpp-service.ims.icsi.mmtel";
        public const String SERVICEID_SMS = "org.doubango:SMS";
        public const String SERVICEID_MMS = "org.doubango:MMS";

        public static readonly List<RCSService> AvailableServices = new List<RCSService>(new RCSService[]
        {
            new RCSService(SERVICEID_IMPAGER, "doubango.im"),
            new RCSService(SERVICEID_IMSESSIOM, "doubango.im-session"),
            new RCSService(SERVICEID_FILETRANSFER, "doubango.file-transfer"),
            new RCSService(SERVICEID_IMAGESHARE, "doubango.image-share"),
            new RCSService(SERVICEID_VIDEOSHARE, "doubango.video-share"),
            new RCSService(SERVICEID_VIDEOTELEPHONY, "doubango.video-telephony"),
            new RCSService(SERVICEID_PSVOICE, "doubango.ps-voice"),
            new RCSService(SERVICEID_SMS, "doubango.sms"),
            new RCSService(SERVICEID_MMS, "doubango.mms"),
        });

        private const String DESCRIPTION_VERSION = "1.0";
        private const decimal CONTACT_PRIORITY = 8.0M;

        private RCSServiceDescription description;
        private String contactAddress;
        private bool basicClosed;
        private bool willingnessClosed;
        private String tupleId;

        public RCSService(String Id, String tupleId)
        {
            this.description = new RCSServiceDescription();
            this.description.Id = Id;
            this.description.Version = RCSService.DESCRIPTION_VERSION;

            this.tupleId = tupleId;
            this.contactAddress = "sip:test@doubango.org";
        }

        public RCSServiceDescription Description
        {
            get { return this.description; }
            set { this.description = value; }
        }

        public String ContactAddress
        {
            get { return this.contactAddress; }
            set { this.contactAddress = value; }
        }


        public bool BasicClosed
        {
            get { return this.basicClosed; }
            set { this.basicClosed = value; }
        }

        public bool WillingnessClosed
        {
            get { return this.willingnessClosed; }
            set { this.willingnessClosed = value; }
        }

        public String TupleId
        {
            get { return this.tupleId; }
            set { this.tupleId = value; }
        }
        public decimal ContactPriority
        {
            get { return RCSService.CONTACT_PRIORITY; }
        }

        public static bool IsValidService(String serviceId)
        {
            return RCSService.AvailableServices.Any(x =>
                (serviceId != null && x.Description.Id.Equals(serviceId)));
        }

        public int CompareTo(RCSService other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            return String.Compare(this.Description.Id, other.Description.Id);
        }
    }
}
