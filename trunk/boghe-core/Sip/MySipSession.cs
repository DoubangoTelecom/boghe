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
using org.doubango.tinyWRAP;
using log4net;
using BogheCore.Utils;

namespace BogheCore.Sip
{
    public abstract class MySipSession : IComparable<MySipSession>, IDisposable
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(MySipSession));
        protected MySipStack sipStack;
        protected bool connected;
        protected bool outgoing;
        protected String fromUri;
        protected String toUri;
        protected String compId;
        protected String remotePartyUri;
        protected String remotePartyDisplayName = null;

        public MySipSession(MySipStack sipStack)
        {
            this.sipStack = sipStack;
            this.outgoing = false;
            /* init must be called by the child class after session_create() */
            /* this.init(); */
        }

        public long Id
        {
            get { return this.Session.getId(); }
        }

        public MySipStack Stack
        {
            get { return this.sipStack; }
        }

        public bool IsConnected
        {
            get { return this.connected; }
            set { this.connected = value; }
        }

        public String FromUri
        {
            get { return this.fromUri; }
            set
            {
                if (!this.Session.setFromUri(value))
                {
                    LOG.Error(String.Format("{0} is invalid for as FromUri", value));
                    return;
                }
                this.fromUri = value;
            }
        }

        public String ToUri
        {
            get { return this.toUri; }
            set
            {
                if (!this.Session.setToUri(value))
                {
                    LOG.Error(String.Format("{0} is invalid for as toUri", value));
                    return;
                }
                this.toUri = value;
            }
        }

        // Helper Property. Will not talk to the SIP Stack
        public String RemotePartyUri
        {
            get 
            {
                if (String.IsNullOrEmpty(remotePartyUri))
                {
                    this.remotePartyUri =  this.outgoing ? this.toUri : this.fromUri;
                }
                return String.IsNullOrEmpty(this.remotePartyUri) ? "(null)" : this.remotePartyUri;
            }
            set
            {
                this.remotePartyUri = value;
            }
        }
        
        public String RemotePartyDisplayName
        {
            get
            {
                if (String.IsNullOrEmpty(this.remotePartyDisplayName))
                {
                    this.remotePartyDisplayName = UriUtils.GetDisplayName(this.RemotePartyUri);
                    this.remotePartyDisplayName = String.IsNullOrEmpty(this.remotePartyDisplayName) ? "(null)" : this.remotePartyDisplayName;
                }
                return this.remotePartyDisplayName;
            }
        }

        public String SigCompId
        {
            get { return this.compId; }
            set
            {
                if (this.compId != null && this.compId != value)
                {
                    this.Session.removeSigCompCompartment();
                }
                if ((this.compId = value) != null)
                {
                    this.Session.addSigCompCompartment(this.compId);
                }
            }
        }

        public void Dispose()
        {
            this.Session.Dispose();
        }

        protected abstract SipSession Session
        {
            get;
        }

        protected void init()
        {
            // Sip Expires
            //this.Session.setExpires(this.configurationService.getInt(CONFIGURATION_SECTION.QOS, CONFIGURATION_ENTRY.SIP_SESSIONS_TIMEOUT, Configuration.DEFAULT_QOS_SIP_SESSIONS_TIMEOUT));

            // Sip Headers (common to all sessions)
            this.Session.addCaps("+g.oma.sip-im");
            this.Session.addCaps("language", "\"en,fr\"");
        }

        public int CompareTo(MySipSession other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            return (int)(this.Session.getId() - other.Session.getId());
        }
    }
}
