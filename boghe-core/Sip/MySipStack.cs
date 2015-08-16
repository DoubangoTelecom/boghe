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
using BogheCore.Services;
#if WINRT
using SipStack = doubango_rt.BackEnd.rtSipStack;
#endif

namespace BogheCore.Sip
{
    public class MySipStack : IDisposable
    {
        public enum STACK_STATE {
		    NONE, STARTING, STARTED, STOPPING, STOPPED, DISCONNECTED
	    }

	    private STACK_STATE state = STACK_STATE.NONE;
	    private String compId;
        private String privacy;
        private String userAgent;
        private String pAccessNetworkInfo;
        private ISipService mSipService;
        private readonly SipStack mSipStack;  

        public MySipStack(SipCallback callback, String realmUri, String impiUri, String impuUri)
        {
#if WINDOWS_PHONE
            mSipStack = org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtSipStackNew(callback, realmUri, impiUri, impuUri);
#else
            mSipStack = new SipStack(callback, realmUri, impiUri, impuUri);
#endif
             // Sip headers
            mSipStack.addHeader("Allow", "INVITE, ACK, CANCEL, BYE, MESSAGE, OPTIONS, NOTIFY, PRACK, UPDATE, REFER");
            mSipStack.addHeader("Privacy", "none");
            mSipStack.addHeader("P-Access-Network-Info", "ADSL;utran-cell-id-3gpp=00000000");
            mSipStack.addHeader("User-Agent", String.Format("IM-client/OMA1.0 Boghe-{0}/v{1}",
#if WINRT
                "WinRT"
#else
                "Win32"
#endif
                    ,System.Reflection.Assembly.GetExecutingAssembly().GetName().Version));
        }

        public SipStack WrappedStack
        {
            get { return mSipStack; }
        }

        public void Dispose()
        {
            // To avoid usage from other external stacks (e.g. HTTP, ...)
            mSipStack.setDebugCallback(null);
            if (mSipStack != null)
            {
                mSipStack.Dispose();
            }
        }

        public ISipService SipService
        {
            get { return mSipService; }
            set { mSipService = value; }
        }

        public STACK_STATE State
        {
            get { return this.state; }
            set { this.state = value; }
        }

        public String Privacy
        {
            get { return this.privacy; }
            set
            {
                this.privacy = value;
                mSipStack.addHeader("Privacy", value);
            }
        }

        public String UserAgent
        {
            get { return this.userAgent; }
            set
            {
                this.userAgent = value;
                mSipStack.addHeader("User-Agent", value);
            }
        }

        public String PAccessNetworkInfo
        {
            get { return this.pAccessNetworkInfo; }
            set
            {
                this.pAccessNetworkInfo = value;
                mSipStack.addHeader("P-Access-Network-Info", value);
            }
        }

        public String SigCompId
        {
            get { return this.compId; }
            set
            {
                if (this.compId != null && this.compId != value)
                {
                    mSipStack.removeSigCompCompartment(this.compId);
                }
                if ((this.compId = value) != null)
                {
                    mSipStack.addSigCompCompartment(this.compId);
                }
            }
        }
    }
}
