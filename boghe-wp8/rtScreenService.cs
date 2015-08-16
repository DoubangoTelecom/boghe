using BogheCore.Services;
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

namespace BogheApp
{
    internal class rtScreenService : IScreenService
    {
        #region IService

        public bool Start()
        {
            return true;
        }

#if WINDOWS_PHONE
        public bool Stop(bool bEnteringBackground)
#else
        public bool Stop()
#endif
        {
            return true;
        }

        #endregion

        #region IScreenService

        public void SetProgressInfo(String text)
        {
        }

        #endregion
    }
}
