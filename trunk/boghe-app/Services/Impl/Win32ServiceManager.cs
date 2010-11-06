/*
* Copyright (C) 2010 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango.org>
*	
* This file is part of Boghe Project (http://code.google.com/p/boghe)
*
* imsdroid is free software: you can redistribute it and/or modify it under the terms of 
* the GNU General Public License as published by the Free Software Foundation, either version 3 
* of the License, or (at your option) any later version.
*	
* imsdroid is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
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
using BogheCore.Services;

namespace BogheApp.Services.Impl
{
    class Win32ServiceManager : ServiceManager
    {
        private static Win32ServiceManager singleton = null;

        private IScreenService screenService;
        private ILogService logService;
        private IConfigurationService configurationService;

        /// <summary>
        /// Shared Service manager
        /// </summary>
        public static Win32ServiceManager SharedManager
        {
            get
            {
                if (Win32ServiceManager.singleton == null)
                {
                    Win32ServiceManager.singleton = new Win32ServiceManager();
                }
                return Win32ServiceManager.singleton;
            }
        }

        /// <summary>
        /// Starts the manager
        /// </summary>
        /// <returns></returns>
        public bool Start()
        {
            bool ret = true;

            // Log service should be the first to start

            ret &= this.LogService.Start();
            ret &= this.ConfigurationService.Start();
            ret &= this.ScreenService.Start();
            

            return ret;
        }

        /// <summary>
        /// Stops the manager
        /// </summary>
        /// <returns></returns>
        public bool Stop()
        {
            bool ret = true;

            // Log service should be last to stop

            ret &= this.ScreenService.Stop();
            ret &= this.ConfigurationService.Stop();
            ret &= this.LogService.Stop();

            return ret;
        }

        /// <summary>
        /// Screen Service
        /// </summary>
        public IScreenService ScreenService
        {
            get
            {
                if (this.screenService == null)
                {
                    this.screenService = new ScreenService();
                }
                return this.screenService;
            }
        }

        /// <summary>
        /// Log Service
        /// </summary>
        public ILogService LogService
        {
            get
            {
                if (this.logService == null)
                {
                    this.logService = new LogService();
                }
                return this.logService;
            }
        }

        #region ServiceManager

        public override IConfigurationService ConfigurationService
        {
            get
            {
                if (this.configurationService == null)
                {
                    this.configurationService = new RegConfigurationService();
                }
                return this.configurationService;
            }
        }

        #endregion
    }
}
