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

namespace BogheCore.Sip
{
    public class MyMsrpSession : MyInviteSession
    {
        private readonly MsrpSession session;
        private readonly MyMsrpCallback callback;

        private static IDictionary<long, MyMsrpSession> sessions = new Dictionary<long, MyMsrpSession>();

        public static MyMsrpSession TakeIncomingSession(MySipStack sipStack, MsrpSession session, SipMessage message)
        {
            return null;
        }

        public static MyMsrpSession CreateOutgoingSession(MySipStack sipStack, MediaType mediaType)
        {
            if (mediaType == MediaType.FileTransfer || mediaType == MediaType.Chat)
            {
                MyMsrpSession msrpSession = new MyMsrpSession(sipStack, null, mediaType);
                MyMsrpSession.sessions.Add(msrpSession.Id, msrpSession);

                return msrpSession;
            }
            return null;
        }

        public static void ReleaseSession(MyAVSession session)
        {
            if (session != null)
            {
                lock (MyMsrpSession.sessions)
                {
                    long id = session.Id;
                    session.Dispose();
                    MyMsrpSession.sessions.Remove(id);
                }
            }
        }

        public static MyMsrpSession GetSession(long id)
        {
            lock (MyMsrpSession.sessions)
            {
                if (MyMsrpSession.sessions.ContainsKey(id))
                    return MyMsrpSession.sessions[id];
                else
                    return null;
            }
        }

        public static bool HasSession(long id)
        {
            lock (MyMsrpSession.sessions)
            {
                return MyMsrpSession.sessions.ContainsKey(id);
            }
        }

        public MyMsrpSession(MySipStack sipStack, MsrpSession session, MediaType mediaType) : base(sipStack)
        {
            this.callback = new MyMsrpCallback(this);
            base.mediaType = mediaType;

            if (session == null)
            {
                this.outgoing = true;
                this.session = new MsrpSession(sipStack, this.callback);
            }
            else 
            {
                this.outgoing = false;
                this.session = session;
                this.session.setCallback(this.callback);
            }

            // commons
            base.init();

            // SigComp
            base.SigCompId = sipStack.SigCompId;
        }

        protected override SipSession Session
        {
            get { return this.session; }
        }



        class MyMsrpCallback : MsrpCallback
        {
            readonly MyMsrpSession session;

            internal MyMsrpCallback(MyMsrpSession session)
                :base()
            {
                this.session = session;
            }
        }
    }
}
