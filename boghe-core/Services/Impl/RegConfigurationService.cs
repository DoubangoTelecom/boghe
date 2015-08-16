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
#if !WINRT
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Win32;
using log4net;
using BogheCore.Model;
using BogheCore.Events;

namespace BogheCore.Services.Impl
{
    public class RegConfigurationService : IConfigurationService
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(RegConfigurationService));
        private readonly RegistryKey basekey;

        public RegConfigurationService()
        {
            try
            {
                this.basekey = Registry.CurrentUser.CreateSubKey(@"Software\\Doubango\\Boghe");
            }
            catch (Exception e)
            {
                LOG.Error("Failed to get base registry", e);
            }
        }

        #region IService

        public bool Start()
        {
            if (this.basekey == null)
            {
                return false;
            }


            return true;
        }

        public bool Stop()
        {
            return true;
        }

        #endregion

        #region IConfigurationService

        public String Get(Configuration.ConfFolder folder, Configuration.ConfEntry entry, String defaultValue)
        {
            String result = defaultValue;
            try
            {
                using (RegistryKey regkey = this.basekey.CreateSubKey(folder.ToString()))
                {
                    object o;
                    if ((o = regkey.GetValue(entry.ToString(), defaultValue)) != null)
                    {
                        if (!String.IsNullOrEmpty(o.ToString()))
                        {
                            result = o.ToString();
                        }
                    }
                    regkey.Close();
                }
            }
            catch (Exception e)
            {
                LOG.Error("Failed to get value from registry", e);
            }

            return result;
        }

        public bool Set(Configuration.ConfFolder folder, Configuration.ConfEntry entry, String value)
        {
            if (value == null)
            {
                return false;
            }

            try
            {
                using (RegistryKey regkey = this.basekey.CreateSubKey(folder.ToString()))
                {
                    regkey.SetValue(entry.ToString(), value);
                    regkey.Close();
                }
            }
            catch (Exception e)
            {
                LOG.Error("Failed to set value into registry", e);
                return false;
            }

            // Trigger
            EventHandlerTrigger.TriggerEvent<ConfigurationEventArgs>(this.onConfigurationEvent, this, new ConfigurationEventArgs(folder, entry, value));

            return true;
        }

        public int Get(Configuration.ConfFolder folder, Configuration.ConfEntry entry, int defaultValue)
        {
            int result = defaultValue;
            String value = this.Get(folder, entry, defaultValue.ToString());
            if (Int32.TryParse(value, out result))
            {
                return result;
            }
            return defaultValue;
        }

        public bool Set(Configuration.ConfFolder folder, Configuration.ConfEntry entry, int value)
        {
            return this.Set(folder, entry, value.ToString());
        }

        public bool Get(Configuration.ConfFolder folder, Configuration.ConfEntry entry, bool defaultValue)
        {
            return Convert.ToBoolean(this.Get(folder, entry, defaultValue ? Boolean.TrueString : Boolean.FalseString)); 
        }

        public bool Set(Configuration.ConfFolder folder, Configuration.ConfEntry entry, bool value)
        {
            return this.Set(folder, entry, value ? Boolean.TrueString : Boolean.FalseString);
        }

        public event EventHandler<ConfigurationEventArgs> onConfigurationEvent;

        #endregion
    }
}
#endif // !WINRT