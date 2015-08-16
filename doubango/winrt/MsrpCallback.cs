/*Copyright (C) 2013 Doubango Telecom <http://www.doubango.org>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using doubango_rt.BackEnd;

namespace org.doubango.tinyWRAP
{
    public class MsrpCallback : rtIMsrpCallback, IDisposable
    {
        readonly rtMsrpCallback m_rtMsrpCallback;

        public MsrpCallback()
        {
#if WINDOWS_PHONE
            m_rtMsrpCallback = org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtMsrpCallbackNew(this);
#else
            m_rtMsrpCallback = new rtMsrpCallback(this);
#endif
        }

        public virtual int OnEvent(rtMsrpEvent pEvent)
        {
            return 0;
        }

        public virtual void Dispose()
        {
            if (m_rtMsrpCallback != null)
            {
                m_rtMsrpCallback.Dispose();
            }
        }
    }
}
