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
using BogheCore.Services.Impl;
using org.doubango.tinyWRAP;
using log4net;
using System.Threading;
using BogheCore.Services;

namespace BogheCore.Xcap
{
    // Synchronous XCAP callBack
    internal class MySyncXcapCallback : XcapCallback
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(MySyncXcapCallback));

        private readonly XcapService xcapService;
        private MyXcapMessage lastMessage;

        internal MySyncXcapCallback(XcapService xcapService)
            : base()
        {
            this.xcapService = xcapService;
        }

        internal MyXcapMessage LastMessage
        {
            get { return this.lastMessage; }
        }

        internal XcapService XcapService
        {
            get { return this.xcapService; }
        }

        public override int onEvent(XcapEvent e)
        {
            thttp_event_type_t type = e.getType();

            switch (type)
            {
                case thttp_event_type_t.thttp_event_dialog_started:
                    {
                        this.lastMessage = null;
                        break;
                    }

                case thttp_event_type_t.thttp_event_auth_failed:
                case thttp_event_type_t.thttp_event_message:
                    {
                        this.lastMessage = new MyXcapMessage(e.getXcapMessage());
                        break;
                    }

                case thttp_event_type_t.thttp_event_dialog_terminated:
                    {
                        if (this.xcapService.Synchronizer != null)
                        {
                            try
                            {
                                this.xcapService.Synchronizer.Release();
                            }
                            catch (SemaphoreFullException ex)
                            {
                                LOG.Error(ex);
                            }
                        }
                        break;
                    }
            }

            return 0;
        }
    }
}
