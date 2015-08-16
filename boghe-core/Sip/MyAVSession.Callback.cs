/*
* Boghe IMS/RCS Client - Copyright (C) 2012 Mamadou Diop.
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
using System.Runtime.InteropServices;
using BogheCore.Sip.Events;
using BogheCore.Events;
#if WINRT
using T140CallbackData = doubango_rt.BackEnd.rtT140CallbackData;
using tmedia_t140_data_type_t = doubango_rt.BackEnd.rt_tmedia_t140_data_type_t;
#endif
namespace BogheCore.Sip
{
    partial class MyAVSession
    {
        class MyT140Callback : T140Callback
        {
            readonly MyAVSession mSession;

            internal MyT140Callback(MyAVSession session)
                : base()
            {
                mSession = session;
            }
#if !WINRT
            public override int  ondata(T140CallbackData pData)
            {
                tmedia_t140_data_type_t pDataType = pData.getType();
                switch (pDataType)
                {
                    case tmedia_t140_data_type_t.tmedia_t140_data_type_utf8:
                        {
                            uint size = pData.getSize();
                            if (size > 0)
                            {
                                IntPtr ptr = Marshal.AllocHGlobal((int)size);
                                if (ptr != IntPtr.Zero)
                                {
                                    uint s;
                                    if ((s = pData.getData(ptr, size)) != 0)
                                    {
                                        byte[] content = new byte[(int)s];
                                        Marshal.Copy(ptr, content, 0, (int)s);
                                        MessagingEventArgs eargs = new MessagingEventArgs(mSession.Id, MessagingEventTypes.INCOMING, "T.140", content);
                                        eargs
                                            .AddExtra(MessagingEventArgs.EXTRA_REMOTE_PARTY, mSession.RemotePartyUri)
                                            .AddExtra(MessagingEventArgs.EXTRA_CONTENT_TYPE, ContentType.TEXT_PLAIN);
                                        mSession.Stack.SipService.RaiseEvent(eargs);
                                    }
                                    Marshal.FreeHGlobal(ptr);
                                }
                            }
                            break;
                        }
                    default:
                        {
                            break;
                        }
                }

                return 0;
            }
#endif
        }
    }
}
