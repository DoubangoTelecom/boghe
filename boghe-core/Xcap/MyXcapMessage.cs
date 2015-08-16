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
using System.Runtime.InteropServices;

namespace BogheCore.Xcap
{
    internal class MyXcapMessage
    {
        readonly short code;
        readonly String phrase;
        readonly String contentType;
        readonly byte[] content;

        // When the callback thead exist the native message will be destroy. To avoid such beh. we copy
        // the message for asyn. use
        internal MyXcapMessage(XcapMessage message)
        {
            if (message == null)
            {
                this.code = -1;
                this.phrase = String.Empty;
                this.contentType = String.Empty;
            }
            else
            {
                this.code = message.getCode();
                this.phrase = message.getPhrase();
                this.contentType = message.getXcapHeaderValue("Content-Type");

                uint clen = message.getXcapContentLength();
                if (clen > 0)
                {
                    this.content = new byte[clen];
                    IntPtr ptr = Marshal.AllocHGlobal((int)clen);
                    message.getXcapContent(ptr, clen);
                    Marshal.Copy(ptr, this.content, 0, this.content.Length);
                    Marshal.FreeHGlobal(ptr);
                }
                else
                {
                    this.content = null;
                }
            }
        }

        internal short Code
        {
            get { return this.code; }
        }

        internal String Phrase
        {
            get { return this.phrase; }
        }

        internal String ContentType
        {
            get { return this.contentType; }
        }

        internal byte[] Content
        {
            get { return this.content; }
        }
    }
}
