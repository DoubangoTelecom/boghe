using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using BogheApp.Services.Impl;
using BogheApp.Screens;

namespace BogheApp
{
    partial class MainWindow
    {
        #region MenuItemHelp

        private void MenuItemHelp_Click(object sender, RoutedEventArgs e)
        {
            MenuItem menuItem = e.OriginalSource as MenuItem;
            if (menuItem == null)
            {
                return;
            }

            if (menuItem == this.MenuItemHelp_About)
            {
                Win32ServiceManager.SharedManager.ScreenService.Show(ScreenType.About);
            }
        }

        #endregion

        #region MenuItemTools

        private void MenuItemTools_Click(object sender, RoutedEventArgs e)
        {
            MenuItem menuItem = e.OriginalSource as MenuItem;
            if (menuItem == null)
            {
                return;
            }

            if (menuItem == this.MenuItemTools_Options)
            {
                Win32ServiceManager.SharedManager.ScreenService.Show(ScreenType.Options);
            }
        }

        #endregion
    }
}
