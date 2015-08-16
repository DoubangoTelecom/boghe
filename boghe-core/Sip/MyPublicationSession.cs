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
#if !WINRT
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using org.doubango.tinyWRAP;
using BogheCore.Generated.pidf;
using BogheCore.Generated.data_model;
using BogheCore.Utils;
using BogheCore.Generated.oma.pidf_pres;
using BogheCore.Generated.rpid;
using System.Xml.Serialization;
using System.Xml;
using BogheCore.Model;
using System.Runtime.InteropServices;

namespace BogheCore.Sip
{
    public class MyPublicationSession : MySipSession
    {
        private readonly PublicationSession session;

        private static int personIdCounter = 18;
        private static XmlSerializerNamespaces namespaces = new XmlSerializerNamespaces(
            new XmlQualifiedName[]{
                new XmlQualifiedName(String.Empty, "urn:ietf:params:xml:ns:pidf"),
                new XmlQualifiedName("op", "urn:oma:xml:prs:pidf:oma-pres"),
                new XmlQualifiedName("pdm", "urn:ietf:params:xml:ns:pidf:data-model"),
                new XmlQualifiedName("rpid", "urn:ietf:params:xml:ns:pidf:rpid"),
                new XmlQualifiedName("caps", "urn:ietf:params:xml:ns:pidf:caps"),
                new XmlQualifiedName("cp", "urn:ietf:params:xml:ns:pidf:cipid"),
                new XmlQualifiedName("p", "urn:ietf:params:xml:ns:pidf-diff")
            });

        private uint version = 3891;
        private bool partialPublication;
        private String personId;
        private String homePage;
        private String freeText;
        private String statusIconUrl;
        private PresenceStatus presenceStatus;
        private int hyperAvailabilityTimeout = Configuration.DEFAULT_RCS_HYPERAVAILABILITY_TIMEOUT;

        public MyPublicationSession(MySipStack sipStack, String toUri)
            : base(sipStack)
        {
            this.session = new PublicationSession(sipStack.WrappedStack);

            // commons
            base.init();

            // SigComp
            base.SigCompId = sipStack.SigCompId;

            // headers
            this.session.addHeader("Event", "presence");
            this.session.addHeader("Content-Type", ContentType.PIDF);

            this.ToUri = toUri;
            this.FromUri = toUri;
        }

        protected override SipSession Session
        {
            get { return this.session; }
        }

        public bool PartialPublication
        {
            get { return this.partialPublication; }
            set 
            {
                if (this.partialPublication != value)
                {
                    if (value)
                    {
                        this.session.addHeader("Content-Type", ContentType.PIDF_DIFF);
                    }
                    else
                    {
                        this.session.addHeader("Content-Type", ContentType.PIDF);
                    }
                }
                this.partialPublication = value; 
            }
        }

        public String PersonId
        {
            get { return this.personId; }
        }

        public String HomePage
        {
            get { return this.homePage; }
            set { this.homePage = value; }
        }

        public String FreeText
        {
            get { return this.freeText; }
            set { this.freeText = value; }
        }

        public String StatusIconUrl
        {
            get { return this.statusIconUrl; }
            set { this.statusIconUrl = value; }
        }

        public PresenceStatus PresenceStatus
        {
            get { return this.presenceStatus; }
            set { this.presenceStatus = value; }
        }

        public int HyperAvailabilityTimeout
        {
            get { return this.hyperAvailabilityTimeout; }
            set { this.hyperAvailabilityTimeout = value; }
        }

        public bool Publish()
        {
            return this.PublishFullState();
        }

        public bool Publish(PresenceStatus status)
        {
            this.presenceStatus = status;
            if (this.PartialPublication)
            {
                return false;
            }
            else
            {
                return this.PublishFullState();
            }
        }

        public bool PublishFullState()
        {
            presence pres = this.BuildFullPresence();

            if (this.PartialPublication)
            {
                pidffull full = pres as pidffull;
                full.versionSpecified = true;
                full.version = (this.version++);

                byte[] content = this.SerializeContent(full);
                return this.PublishContent(content);
            }
            else
            {
                byte[] content = this.SerializeContent(pres);
                return this.PublishContent(content);
            }
        }

        public bool UnPublish()
        {
            return this.session.unPublish();
        }


        private presence BuildFullPresence()
        {
            presence pres = this.PartialPublication ? new pidffull() : new presence();
            pres.entity = this.FromUri;

            if (this.personId == null)
            {
                this.personId = String.Format("{0}{1:D7}", "p", ++MyPublicationSession.personIdCounter);
            }

            basic status = basic.closed;
            String note = "Offline";
            BogheCore.Generated.rpid.ItemsChoiceType activity = BogheCore.Generated.rpid.ItemsChoiceType.unknown;
            switch (this.PresenceStatus)
            {
                case PresenceStatus.Busy:
                    note = "Busy";
                    status = basic.open;
                    activity = BogheCore.Generated.rpid.ItemsChoiceType.busy;
                    break;
                case PresenceStatus.Away:
                    note = "Away";
                    status = basic.open;
                    activity = BogheCore.Generated.rpid.ItemsChoiceType.away;
                    break;
                case PresenceStatus.Online:
                    note = "Online";
                    status = basic.open;
                    break;
                case PresenceStatus.HyperAvailable:
                    note = "Hyper-Available";
                    status = basic.open;
                    break;
                case PresenceStatus.BeRightBack:
                    note = "Be Right Back";
                    status = basic.open;
                    activity = BogheCore.Generated.rpid.ItemsChoiceType.vacation;
                    break;
                case PresenceStatus.OnThePhone:
                    note = "On The Phone";
                    status = basic.open;
                    activity = BogheCore.Generated.rpid.ItemsChoiceType.onthephone;
                    break;
                case PresenceStatus.OutToLunch:
                    note = "Out To Lunch";
                    status = basic.open;
                    activity = BogheCore.Generated.rpid.ItemsChoiceType.meal;
                    break;
            }

            /*== Person ==*/
            pres.Persons = new person[1] { new person() };
            pres.Persons[0].id = this.personId;
            pres.Persons[0].timestamp = Rfc3339DateTime.ToString(DateTime.UtcNow);

            pres.Persons[0].overridingWillingness = new overridingwillingness();
            pres.Persons[0].overridingWillingness.basicSpecified = true;
            pres.Persons[0].overridingWillingness.basic = (status == basic.closed) ? basicType.closed : basicType.open;
            if (this.PresenceStatus == PresenceStatus.HyperAvailable)
            {
                /* The RCS HyperAvailability information is carried by the OMA Overriding Willingness combined with an "until" value as specified in 
                 * [Presence2.0_DDS], with element basic->open. */
                pres.Persons[0].overridingWillingness.Until = Rfc3339DateTime.ToString(DateTime.UtcNow.AddMinutes(this.HyperAvailabilityTimeout));
            }

            pres.Persons[0].note = new BogheCore.Generated.data_model.Note_t[1] { new BogheCore.Generated.data_model.Note_t() };
            pres.Persons[0].note[0].Value = String.IsNullOrEmpty(this.FreeText) ? note : this.FreeText;

            pres.Persons[0].activities = new activities();
            pres.Persons[0].activities.ItemsElementName = new BogheCore.Generated.rpid.ItemsChoiceType[1];
            pres.Persons[0].activities.ItemsElementName[0] = activity;
            pres.Persons[0].activities.Items = new BogheCore.Generated.rpid.empty[1];
            pres.Persons[0].activities.Items[0] = new BogheCore.Generated.rpid.empty();

            /*pres.Persons[0].mood = new mood();
            pres.Persons[0].mood.ItemsElementName = new ItemsChoiceType1[1];
            pres.Persons[0].mood.ItemsElementName[0] = this.Mood;
            pres.Persons[0].mood.Items = new BogheCore.Generated.rpid.empty[1];
            pres.Persons[0].mood.Items[0] = new BogheCore.Generated.rpid.empty();*/

            if (!String.IsNullOrEmpty(this.StatusIconUrl))
            {
                pres.Persons[0].statusicon = new statusicon();
                pres.Persons[0].statusicon.Value = this.StatusIconUrl;
            }
            if (!String.IsNullOrEmpty(this.HomePage))
            {
                pres.Persons[0].homepage = this.HomePage;
            }

            /*== device ==*/
            pres.Device = new device();
            pres.Device.id = String.Format("{0}{1}", "d", "0001");
            pres.Device.deviceID = RCSService.DEVICE_ID;
            pres.Device.Status = new status();
            pres.Device.Status.basicSpecified = true;
            pres.Device.Status.basic = status;
            pres.Device.DeviceCapabilities = new BogheCore.Generated.pidf_caps.devcaps();
            pres.Device.DeviceCapabilities.mobility = new BogheCore.Generated.pidf_caps.mobilitytype();
            pres.Device.DeviceCapabilities.mobility.supported = new BogheCore.Generated.pidf_caps.mobilitytypes();
            pres.Device.DeviceCapabilities.mobility.supported.@fixed = String.Empty;
            pres.Device.NetworkAvaibility = new networkavailability();
            pres.Device.NetworkAvaibility.network = new networkavailabilityNetwork[1];
            pres.Device.NetworkAvaibility.network[0] = new networkavailabilityNetwork();
            pres.Device.NetworkAvaibility.network[0].id = "IMS";
            pres.Device.NetworkAvaibility.network[0].active = new emptyType();

            return pres;
        }

        private bool PublishContent(byte[] content)
        {
            if (content != null)
            {
                IntPtr ptr = Marshal.AllocHGlobal(content.Length);
                Marshal.Copy(content, 0, ptr, content.Length);
                bool ret = this.session.publish(ptr, (uint)content.Length);
                Marshal.FreeHGlobal(ptr);
                return ret;
            }
            return false;
        }

        private byte[] SerializeContent(object obj)
        {
            return MyXmlSerializer.Serialize(obj, MyPublicationSession.namespaces);
        }
    }
}
#endif //!WINRT