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
#if !WINRT8
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using log4net;
using System.Xml.Serialization;
using System.Timers;
using BogheCore.Model;
using System.ComponentModel;
using System.IO;
using BogheCore.Events;
#if WINRT
using System.Runtime.Serialization;
using Serializable = System.Runtime.Serialization.DataContractAttribute;
using System.IO.IsolatedStorage;
#endif

namespace BogheCore.Services.Impl
{
    public class XmlConfigurationService : IConfigurationService
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(XmlConfigurationService));

        private const String FILE_NAME = "configuration.xml";
        private String fileFullPath;
        private readonly ServiceManager manager;

        private MyObservableCollection<XmlSection> sections;
        private readonly Timer deferredSaveTimer;
        private readonly XmlSerializer xmlSerializer;

        public XmlConfigurationService(ServiceManager manager)
        {
            this.manager = manager;

            this.xmlSerializer = new XmlSerializer(typeof(MyObservableCollection<XmlSection>));

            this.deferredSaveTimer = new Timer(2500);
            this.deferredSaveTimer.AutoReset = false;
        }

        #region IService

        public bool Start()
        {
            bool ret = true;

            this.fileFullPath = this.manager.BuildStoragePath(XmlConfigurationService.FILE_NAME);
            LOG.Debug(String.Format("Loading XML configuration from {0}", this.fileFullPath));

            try
            {
#if WINRT
                if(!IsolatedStorageFile.GetUserStoreForApplication().FileExists(this.fileFullPath))
#else
                if (!File.Exists(this.fileFullPath))
#endif
                {
                    LOG.Debug(String.Format("{0} doesn't exist, trying to create new one", this.fileFullPath));
#if WINRT
                    IsolatedStorageFile.GetUserStoreForApplication().CreateFile(this.fileFullPath).Close();
#else
                    File.Create(this.fileFullPath).Close();
#endif
                    // create xml declaration
                    this.sections = new MyObservableCollection<XmlSection>();
                    this.ImmediateSave();
                }

#if WINRT
                using (StreamReader reader = new StreamReader(new IsolatedStorageFileStream(this.fileFullPath, FileMode.OpenOrCreate, IsolatedStorageFile.GetUserStoreForApplication())))
#else
                using (StreamReader reader = new StreamReader(this.fileFullPath))
#endif
                {
                    try
                    {
                        this.sections = this.xmlSerializer.Deserialize(reader) as MyObservableCollection<XmlSection>;
                    }
                    catch (InvalidOperationException ie)
                    {
                        LOG.Error("Failed to load configuration", ie);

                        reader.Close();
#if WINRT
                        IsolatedStorageFile.GetUserStoreForApplication().DeleteFile(this.fileFullPath);
#else
                        File.Delete(this.fileFullPath);
#endif
                    }
                }

                this.deferredSaveTimer.Elapsed += delegate
                {
                    this.ImmediateSave();
                };
            }
            catch (Exception e)
            {
                LOG.Error("Failed to load configuration", e);
                ret = false;
            }

            return ret;
        }

#if WINDOWS_PHONE
        public bool Stop(bool bEnteringBackground)
#else
        public bool Stop()
#endif
        {
            if (this.deferredSaveTimer.Enabled)
            {
                try
                {
                    this.deferredSaveTimer.Stop();
                    this.ImmediateSave();
                }
                catch (System.UnauthorizedAccessException e)
                {
                    LOG.Error(e);
                }
            }
            return true;
        }
        
        #endregion

        #region IConfigurationService

        public String Get(Configuration.ConfFolder folder, Configuration.ConfEntry entry, String defaultValue)
        {
            String result = defaultValue;
            try
            {
                lock (this.sections)
                {
                    XmlSection section = this.sections.FirstOrDefault((x) => String.Equals(x.Name, folder.ToString()));
                    if (section != null)
                    {
                        XmlSectionEntry sectionEntry = section.Entries.FirstOrDefault((x) => String.Equals(x.Key, entry.ToString()));
                        if (sectionEntry != null)
                        {
                            result = sectionEntry.Value;
                        }
                    }
                }
            }
            catch (Exception e)
            {
                LOG.Error(e);
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
                lock (this.sections)
                {
                    XmlSection section = this.sections.FirstOrDefault((x) => String.Equals(x.Name, folder.ToString()));
                    if (section == null)
                    {
                        section = new XmlSection(folder.ToString());
                        this.sections.Add(section);
                    }

                    XmlSectionEntry sectionEntry = section.Entries.FirstOrDefault((x) => String.Equals(x.Key, entry.ToString()));
                    if (sectionEntry == null)
                    {
                        sectionEntry = new XmlSectionEntry(entry.ToString(), value);
                        section.Entries.Add(sectionEntry);
                    }
                    else
                    {
                        sectionEntry.Value = value;
                    }
                }
            }
            catch (Exception e)
            {
                LOG.Error("Failed to set value into registry", e);
                return false;
            }

            // Trigger
            EventHandlerTrigger.TriggerEvent<ConfigurationEventArgs>(this.onConfigurationEvent, this, new ConfigurationEventArgs(folder, entry, value));

            this.DeferredSave();

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


        private void DeferredSave()
        {
            this.deferredSaveTimer.Stop();
            this.deferredSaveTimer.Start();
        }

        private bool ImmediateSave()
        {
            lock (this.sections)
            {
                LOG.Debug("Saving configuration...");
                try
                {
#if WINRT
                    using (StreamWriter writer = new StreamWriter(new IsolatedStorageFileStream(this.fileFullPath, FileMode.OpenOrCreate, IsolatedStorageFile.GetUserStoreForApplication())))
#else
                    using (StreamWriter writer = new StreamWriter(this.fileFullPath))
#endif
                    {
                        this.xmlSerializer.Serialize(writer, this.sections);
                        writer.Flush();
                        writer.Close();
                    }
                    return true;
                }
                catch (IOException ioe)
                {
                    LOG.Error("Failed to save configuration", ioe);
                }
            }
            return false;
        }


        [Serializable]
        [XmlRoot("section", ElementName="section")] //  Because of Android and iOS versions, do not call it "folder"
        public class XmlSection : BaseObject, IEquatable<XmlSection>, IComparable<XmlSection>, INotifyPropertyChanged
        {
            private String name;
            private MyObservableCollection<XmlSectionEntry> entries;

            public XmlSection()
                :this(null)
            {
            }

            public XmlSection(String name)
            {
                this.name = name;
                this.entries = new MyObservableCollection<XmlSectionEntry>();
            }

            [XmlElement("entry")]
            public MyObservableCollection<XmlSectionEntry> Entries
            {
                get { return this.entries; }
                set
                {
                    this.entries = value;
                }
            }

            [XmlAttribute("name")]
            public String Name
            {
                get { return this.name; }
                set
                {
                    this.name = value;
                    this.OnPropertyChanged("Name");
                }
            }

            #region IEquatable

            public bool Equals(XmlSection other)
            {
                if (other == null)
                {
                    throw new ArgumentNullException("other");
                }
                return this.Name.Equals(other.Name);
            }

            #endregion

            #region IComparable

            public int CompareTo(XmlSection other)
            {
                if (other == null)
                {
                    throw new ArgumentNullException("other");
                }
                return this.Name.CompareTo(other.Name);
            }

            #endregion

            #region INotifyPropertyChanged

            public event PropertyChangedEventHandler PropertyChanged;

            protected void OnPropertyChanged(String propertyName)
            {
                if (this.PropertyChanged != null)
                {
                    this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
                }
            }

            #endregion
        }

        [Serializable]
        [XmlRoot("entry", ElementName="entry")] //  Because of Android and iOS versions, do not change
        public class XmlSectionEntry : BaseObject, IEquatable<XmlSectionEntry>, IComparable<XmlSectionEntry>, INotifyPropertyChanged
        {
            private String key;
            private String value;

            public XmlSectionEntry()
                :this(null, null)
            {
            }

            public XmlSectionEntry(String key, String value)
            {
                this.key = key;
                this.value = value;
            }

            [XmlAttribute("key")]
            public String Key
            {
                get { return this.key; }
                set
                {
                    this.key = value;
                    this.OnPropertyChanged("Key");
                }
            }

            [XmlAttribute("value")]
            public String Value
            {
                get { return this.value; }
                set
                {
                    this.value = value;
                    this.OnPropertyChanged("Value");
                }
            }

            #region IEquatable

            public bool Equals(XmlSectionEntry other)
            {
                if (other == null)
                {
                    throw new ArgumentNullException("other");
                }
                return this.Key.Equals(other.Key);
            }

            #endregion

            #region IComparable

            public int CompareTo(XmlSectionEntry other)
            {
                if (other == null)
                {
                    throw new ArgumentNullException("other");
                }
                return this.Key.CompareTo(other.Key);
            }

            #endregion

            #region INotifyPropertyChanged

            public event PropertyChangedEventHandler PropertyChanged;

            protected void OnPropertyChanged(String propertyName)
            {
                if (this.PropertyChanged != null)
                {
                    this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
                }
            }

            #endregion
        }
    }
}
#endif //!WINRT