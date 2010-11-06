using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Win32;
using log4net;

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

        public String Get(String folder, String entry, String defaultValue)
        {
            String result = defaultValue;
            try
            {
                using (RegistryKey regkey = this.basekey.CreateSubKey(folder))
                {
                    object o;
                    if ((o = regkey.GetValue(entry, defaultValue)) != null)
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

        public bool Set(String folder, String entry, String value)
        {
            if (value == null)
            {
                return false;
            }

            try
            {
                using (RegistryKey regkey = this.basekey.CreateSubKey(folder))
                {
                    regkey.SetValue(entry, value);
                    regkey.Close();
                }
            }
            catch (Exception e)
            {
                LOG.Error("Failed to set value into registry", e);
                return false;
            }

            return true;
        }

        public bool Get(String folder, String entry, bool defaultValue)
        {
            return Convert.ToBoolean(this.Get(folder, entry, defaultValue ? Boolean.TrueString : Boolean.FalseString)); 
        }

        public bool Set(String folder, String entry, bool value)
        {
            return this.Set(folder, entry, value ? Boolean.TrueString : Boolean.FalseString);
        }

        #endregion
    }
}
