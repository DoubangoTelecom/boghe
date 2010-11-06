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
using System.Windows.Controls;
using BogheApp.Screens;
using BogheControls;
using System.Threading;
using System.Windows.Threading;

namespace BogheApp.Services.Impl
{
    class ScreenService : IWin32ScreenService
    {
        private TabControl tabControl;
        private Label labelProgressInfo;

        private ScreenType loadedScreens = ScreenType.None;

        private ScreenAbout screenAbout;
        private ScreenAuthentication screenAuthentication;
        private ScreenOptions screenOptions;

        #region IService

        /// <summary>
        /// Starts the service
        /// </summary>
        /// <returns></returns>
        public bool Start()
        {
            return true;
        }

        /// <summary>
        /// Stops the service
        /// </summary>
        /// <returns></returns>
        public bool Stop()
        {
            return true;
        }

        #endregion

        #region IScreenService

        public void SetTabControl(TabControl tabControl)
        {
            this.tabControl = tabControl;
        }

        public void SetProgressLabel(Label labelProgressInfo)
        {
            this.labelProgressInfo = labelProgressInfo;
        }

        public void SetProgressInfo(String text)
        {
            if (this.labelProgressInfo == null)
            {
                return;
            }

            if (this.labelProgressInfo.Dispatcher.Thread == Thread.CurrentThread)
            {
                this.labelProgressInfo.Content = text;
            }
            else
            {
                this.labelProgressInfo.Dispatcher.BeginInvoke((ThreadStart)delegate ()
                {
                    this.labelProgressInfo.Content = text;
                }, 
                null);
            }
        }

        public ScreenAbout ScreenAbout
        {
            get
            {
                if (this.screenAbout == null)
                {
                    this.screenAbout = new ScreenAbout();
                }
                return this.screenAbout;
            }
        }

        public ScreenAuthentication ScreenAuthentication 
        {
            get
            {
                if (this.screenAuthentication == null)
                {
                    this.screenAuthentication = new ScreenAuthentication();
                }
                return this.screenAuthentication;
            }
        }

        public ScreenOptions ScreenOptions 
        {
            get
            {
                if (this.screenOptions == null)
                {
                    this.screenOptions = new ScreenOptions();
                }
                return this.screenOptions;
            }
        }


        public void Show(ScreenType type)
        {
            TabItem tabItem = null;
            if ((this.loadedScreens & type) == type)
            {
                int index = this.GetScreenIndex(type);
                if (index != -1)
                {
                    this.tabControl.SelectedIndex = index;
                }
                return;
            }

            switch (type)
            {
                case ScreenType.About:
                    tabItem = this.CreateTabItem(this.ScreenAbout, true);
                    break;
                case ScreenType.Authentication:
                    tabItem = this.CreateTabItem(this.ScreenAuthentication, false);
                    break;
                case ScreenType.Options:
                    tabItem = this.CreateTabItem(this.ScreenOptions, true);
                    break;
            }

            if (tabItem != null)
            {
                this.tabControl.Items.Add(tabItem);
                this.tabControl.SelectedItem = tabItem;
                this.loadedScreens |= type;
            }
        }

        public void Hide(ScreenType type)
        {
            if ((this.loadedScreens & type) != type)
            {
                return;
            }

            TabItem tabItem = this.GetItem(type);
            if (tabItem != null)
            {
                this.tabControl.Items.Remove(tabItem);
                tabItem.Content = null;
                this.loadedScreens &= ~type;
            }
        }

        #endregion

        private TabItem GetItem(ScreenType type)
        {
            foreach (TabItem tabItem in this.tabControl.Items)
            {
                if (tabItem.Content == null)
                {
                    continue;
                }
                BaseScreen screen = tabItem.Content as BaseScreen;
                if (screen != null && (ScreenType)screen.BaseScreenType == type)
                {
                    return tabItem;
                }
            }
            return null;
        }

        private int GetScreenIndex(ScreenType type)
        {
            int index = -1;
            foreach (TabItem tabItem in this.tabControl.Items)
            {
                index++;

                if (tabItem.Content == null)
                {
                    continue;
                }
                BaseScreen screen = tabItem.Content as BaseScreen;
                if (screen != null && (ScreenType)screen.BaseScreenType == type)
                {
                    return index;
                }
            }
            return -1;
        }

        private TabItem CreateTabItem(BaseScreen baseScreen, bool closeable)
        {
            TabItem tabItem = closeable? new CloseableTabItem() : new TabItem();
            tabItem.Header = baseScreen.BaseScreenTitle;
            tabItem.Content = baseScreen;

            return tabItem;
        }
    }
}
