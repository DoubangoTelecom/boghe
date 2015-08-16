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
using BogheCore.Services.Impl;
using log4net;

namespace BogheCore.Xcap
{
    public class MyXcapStack : IDisposable
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(MyXcapStack));

        private String xui;
        private String password;
        private String xcapRoot;
        private int timeout;
        private readonly XcapStack stack;
        private readonly MySyncXcapCallback synCallback;
        private bool running;

        public MyXcapStack(XcapCallback callback, String xui, String password, String xcapRoot, int timeout)
        {
            this.stack = new XcapStack(callback, xui, password, xcapRoot);

            if (callback is MySyncXcapCallback)
            {
                this.synCallback = callback as MySyncXcapCallback;
            }
            
            this.xui = xui;
            this.password = password;
            this.xcapRoot = xcapRoot;
            this.timeout = timeout;

            this.stack.setTimeout((uint)timeout);
        }

        ~MyXcapStack()
        {
            this.Dispose();
        }

        public void Dispose()
        {
            if (this.stack != null)
            {
                this.stack.Dispose();
            }
        }

        public bool Configure(String xui, String password, String xcapRoot, int timeout)
        {
            if (!this.stack.setCredentials(xui, password))
            {
                return false;
            }
            else
            {
                this.xui = xui;
                this.password = password;
            }

            if (!this.stack.setXcapRoot(xcapRoot))
            {
                return false;
            }
            else
            {
                this.xcapRoot = xcapRoot;
            }

            if (!this.stack.setTimeout((uint)timeout))
            {
                return false;
            }
            else
            {
                this.timeout = timeout;
            }
            return true;
        }

        internal XcapStack Stack
        {
            get { return this.stack; }
        }

        internal bool IsRunning
        {
            get { return this.running; }
        }

        public String XUI
        {
            get { return this.xui; }
        }

        public String Password
        {
            get { return this.password; }
        }

        public String XcapRoot
        {
            get { return this.xcapRoot; }
        }

        public int Timeout
        {
            get { return this.timeout; }
        }


        internal bool Start()
        {
            LOG.Debug(String.Format("XCAP-ROOT={0}", this.XcapRoot));
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return false;
            }

            if (this.stack.start())
            {
                this.running = true;
                return true;
            }
            return false;
        }

        internal bool AddHeader(string name, string value)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return false;
            }
            return this.stack.addHeader(name, value);
        }

        internal bool RemoveHeader(string name)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return false;
            }

            return this.stack.removeHeader(name);
        }

        internal MyXcapMessage GetDocument(string url)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return null;
            }

            if (!this.stack.getDocument(url))
            {
                return null;
            }

            return this.WaitThenReturnResult();
        }

        internal MyXcapMessage GetElement(string url)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return null;
            }

            if (!this.stack.getElement(url))
            {
                LOG.Error("Request failed");
                return null;
            }

            return this.WaitThenReturnResult();
        }

        internal MyXcapMessage GetAttribute(string url)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return null;
            }

            if (!this.stack.getAttribute(url))
            {
                LOG.Error("Request failed");
                return null;
            }

            return this.WaitThenReturnResult();
        }

        internal MyXcapMessage DeleteDocument(string url)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return null;
            }

            if (!this.stack.deleteDocument(url))
            {
                LOG.Error("Request failed");
                return null;
            }

            return this.WaitThenReturnResult();
        }

        internal MyXcapMessage DeleteElement(string url)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return null;
            }

            if (!this.stack.deleteElement(url))
            {
                LOG.Error("Request failed");
                return null;
            }

            return this.WaitThenReturnResult();
        }

        internal MyXcapMessage DeleteAttribute(string url)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return null;
            }

            if (!this.stack.deleteAttribute(url))
            {
                LOG.Error("Request failed");
                return null;
            }

            return this.WaitThenReturnResult();
        }

        internal MyXcapMessage PutDocument(string url, byte[] payload, uint len, String contentType)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return null;
            }

            if (!this.stack.putDocument(url, payload, contentType))
            {
                LOG.Error("Request failed");
                return null;
            }

            return this.WaitThenReturnResult();
        }

        internal MyXcapMessage PutElement(string url, byte[] payload, uint len)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return null;
            }

            if (!this.stack.putElement(url, payload))
            {
                LOG.Error("Request failed");
                return null;
            }

            return this.WaitThenReturnResult();
        }

        internal MyXcapMessage PutAttribute(string url, byte[] payload, uint len)
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return null;
            }

            if (!this.stack.putAttribute(url, payload))
            {
                LOG.Error("Request failed");
                return null;
            }

            return this.WaitThenReturnResult();
        }

        internal bool Stop()
        {
            if (this.stack == null)
            {
                LOG.Error("Invalid Internal XCAP Stack");
                return false;
            }

            if (this.stack.stop())
            {
                this.running = false;
                return true;
            }
            return false;
        }

        private MyXcapMessage WaitThenReturnResult()
        {
            if (this.synCallback != null)
            {
                if (!this.synCallback.XcapService.Synchronizer.WaitOne())
                {
                    LOG.Error("Failed to synchronize");
                    return null;
                }
                return this.synCallback.LastMessage;
            }
            return null;
        }
    }
}
