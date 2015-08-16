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
using BogheCore.Utils;
using log4net;
#if WINRT
using MessagingSession = doubango_rt.BackEnd.rtMessagingSession;
using SipSession = doubango_rt.BackEnd.rtISipSession;
#endif

namespace BogheCore.Sip
{
    public class MyMessagingSession : MySipSession
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(MyMessagingSession));

        private readonly MessagingSession session;
#if !WINRT
        private static int SMS_MR = 0;
#endif

        public MyMessagingSession(MySipStack sipStack, String toUri)
            : base(sipStack)
        {
#if WINDOWS_PHONE
            this.session = org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtMessagingSessionNew(sipStack.WrappedStack);
#else
            this.session = new MessagingSession(sipStack.WrappedStack);
#endif

            // commons
            base.init();

            base.ToUri = toUri;

            // SigComp
            base.SigCompId = sipStack.SigCompId;
        }

        protected override SipSession Session
        {
            get { return this.session; }
        }
#if !WINRT
        public bool SendBinaryMessage(String text, String SMSC)
        {
            String SMSCPhoneNumber;
            String dstPhoneNumber;
            String dstSipUri = base.ToUri;

            if ((SMSCPhoneNumber = UriUtils.GetValidPhoneNumber(SMSC)) != null && (dstPhoneNumber = UriUtils.GetValidPhoneNumber(dstSipUri)) != null)
            {
                base.ToUri = SMSC;
                this.session.addHeader("Content-Type", ContentType.SMS_3GPP);
                this.session.addHeader("Content-Transfer-Encoding", "binary");
                this.session.addCaps("+g.3gpp.smsip");

                RPMessage rpMessage;
                //if(ServiceManager.getConfigurationService().getBoolean(CONFIGURATION_SECTION.RCS, CONFIGURATION_ENTRY.HACK_SMS, false)){
                    //rpMessage = SMSEncoder.encodeDeliver(++MyMessagingSession.SMS_MR, SMSCPhoneNumber, dstPhoneNumber, text);
                    //session.addHeader("P-Asserted-Identity", SMSC);
                //}
                //else{
                rpMessage = SMSEncoder.encodeSubmit(++MyMessagingSession.SMS_MR, SMSCPhoneNumber, dstPhoneNumber, text);
                //}
                
                bool ret = this.session.send(rpMessage.getPayload());
                rpMessage.Dispose();
                if (MyMessagingSession.SMS_MR >= 255)
                {
                    MyMessagingSession.SMS_MR = 0;
                }

                return ret;
            }
            else
            {
                LOG.Error(String.Format("SMSC={0} or RemoteUri={1} is invalid", SMSC, dstSipUri));
                return this.SendTextMessage(text);
            }
        }
#endif

        public bool SendTextMessage(String text, String contentType)
        {
            this.session.addHeader("Content-Type", String.IsNullOrEmpty(contentType) ? ContentType.TEXT_PLAIN : contentType);
#if !WINDOWS_PHONE
            byte[] payload = Encoding.UTF8.GetBytes(text);
#endif

#if WINRT
#if WINDOWS_PHONE
            bool ret = this.session.send(text);
#else
            IntPtr payloadPtr = System.Runtime.InteropServices.Marshal.AllocHGlobal(payload.Length);
            System.Runtime.InteropServices.Marshal.Copy(payload, 0, payloadPtr, payload.Length);
            bool ret = this.session.send(payloadPtr, (uint)payload.Length);
            System.Runtime.InteropServices.Marshal.FreeHGlobal(payloadPtr);
#endif // WINDOWS_PHONE
#else
            bool ret = this.session.send(payload);
#endif // WINRT
            return ret;
        }

        public bool SendTextMessage(String text)
        {
            return SendTextMessage(text, null);
        }
    }
}
