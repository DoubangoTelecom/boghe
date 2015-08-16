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

namespace BogheCore.Services.Impl
{
    public abstract class ServiceManager
    {
        public abstract String ApplicationDataPath
        {
            get;
        }

        public abstract bool IsMultiInstanceEnabled
        {
            get;
        }

        public abstract String BuildStoragePath(String folder);

        public abstract IConfigurationService ConfigurationService
        {
            get;
        }

        public abstract IScreenService ScreenService
        {
            get;
        }
        
#if WINDOWS_PHONE
        public abstract doubango_rt.BackEnd.SipService SipService
        {
            get;
        }
#else
        public abstract ISipService SipService
        {
            get;
        }
#endif

        public abstract IContactService ContactService
        {
            get;
        }
#if !WINRT
        public abstract IXcapService XcapService
        {
            get;
        }
#endif

        public abstract IHistoryService HistoryService
        {
            get;
        }

        public abstract ISoundService SoundService
        {
            get;
        }

        public abstract IStateMonitorService StateMonitorService
        {
            get;
        }

        public abstract System.Windows.Threading.Dispatcher Dispatcher
        {
            get;
        }
    }
}
