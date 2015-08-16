using BogheCore.Events;
using BogheCore.Model;
using log4net;
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
using System.IO.IsolatedStorage;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Timers;

namespace BogheCore.Services.Impl
{
    public class IsfConfigurationService : IConfigurationService
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(IsfConfigurationService));

        private readonly Timer mDeferredSaveTimer;

        public IsfConfigurationService()
        {
            mDeferredSaveTimer = new Timer(2500);
            mDeferredSaveTimer.AutoReset = false;

            mDeferredSaveTimer.Elapsed += delegate
            {
                this.ImmediateSave();
            };
        }

        #region IService
        
        public bool Start()
        {
            lock (this)
            {
            }
            return true;
        }

        public bool Stop(bool bEnteringBackground)
        {
            lock (this)
            {
                if (mDeferredSaveTimer.IsEnabled)
                {
                    this.ImmediateSave();
                }
            }
            return false;
        }

        #endregion

        #region IConfigurationService

        public event EventHandler<ConfigurationEventArgs> onConfigurationEvent;

        public String Get(Configuration.ConfFolder folder, Configuration.ConfEntry entry, String defaultValue)
        {
            lock (this)
            {
                if (mDeferredSaveTimer.IsEnabled)
                {
                    this.ImmediateSave();
                }
                String value;
                if (!IsolatedStorageSettings.ApplicationSettings.TryGetValue(BuildKey(folder, entry), out value))
                {
                    value = defaultValue;
                }
                return value;
            }
        }

        public bool Set(Configuration.ConfFolder folder, Configuration.ConfEntry entry, String value)
        {
            return InternalSet(folder, entry, value);
        }

        public int Get(Configuration.ConfFolder folder, Configuration.ConfEntry entry, int defaultValue)
        {
            lock (this)
            {
                if (mDeferredSaveTimer.IsEnabled)
                {
                    this.ImmediateSave();
                }
                int value;
                if (!IsolatedStorageSettings.ApplicationSettings.TryGetValue(BuildKey(folder, entry), out value))
                {
                    value = defaultValue;
                }
                return value;
            }
        }

        public bool Set(Configuration.ConfFolder folder, Configuration.ConfEntry entry, int value)
        {
            return InternalSet(folder, entry, value);
        }

        public bool Get(Configuration.ConfFolder folder, Configuration.ConfEntry entry, bool defaultValue)
        {
            lock (this)
            {
                if (mDeferredSaveTimer.IsEnabled)
                {
                    this.ImmediateSave();
                }
                bool value;
                if (!IsolatedStorageSettings.ApplicationSettings.TryGetValue(BuildKey(folder, entry), out value))
                {
                    value = defaultValue;
                }
                return value;
            }
        }

        public bool Set(Configuration.ConfFolder folder, Configuration.ConfEntry entry, bool value)
        {
            return InternalSet(folder, entry, value);
        }

        #endregion

        #region Private

        String BuildKey(Configuration.ConfFolder folder, Configuration.ConfEntry entry)
        {
            return String.Format("{0}/{1}", folder, entry);
        }

        public bool InternalSet(Configuration.ConfFolder folder, Configuration.ConfEntry entry, object value)
        {
            lock (this)
            {
                IsolatedStorageSettings.ApplicationSettings[BuildKey(folder, entry)] = value;
                EventHandlerTrigger.TriggerEvent<ConfigurationEventArgs>(this.onConfigurationEvent, this, new ConfigurationEventArgs(folder, entry, value));

                this.DeferredSave();
                return true;
            }
        }

        private void DeferredSave()
        {
            lock (this)
            {
                mDeferredSaveTimer.Stop();
                mDeferredSaveTimer.Start();
            }
        }

        private void ImmediateSave()
        {
            lock (this)
            {
                LOG.Info("Saving configuration");
                IsolatedStorageSettings.ApplicationSettings.Save();
            }
        }

        #endregion
    }
}
