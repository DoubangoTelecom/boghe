using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using BogheCore.Sip.Events;
using System.Threading;
using BogheApp.Screens;

namespace BogheApp
{
    partial class MainWindow
    {
        private void sipService_onStackEvent(object sender, StackEventArgs e)
        {
            if (this.Dispatcher.Thread != Thread.CurrentThread)
            {
                this.Dispatcher.BeginInvoke(System.Windows.Threading.DispatcherPriority.Normal,
                        new EventHandler<StackEventArgs>(this.sipService_onStackEvent), sender, new object[] { e });
                return;
            }

            switch (e.Type)
            {
                case StackEventTypes.START_OK:
                case StackEventTypes.START_NOK:
                case StackEventTypes.STOP_NOK:
                case StackEventTypes.STOP_OK:
                    this.screenService.SetProgressInfo(e.Phrase);
                    break;
            }
        }

        private void sipService_onRegistrationEvent(object sender, RegistrationEventArgs e)
        {
            if (this.Dispatcher.Thread != Thread.CurrentThread)
            {
                this.Dispatcher.BeginInvoke(System.Windows.Threading.DispatcherPriority.Normal,
                        new EventHandler<RegistrationEventArgs>(this.sipService_onRegistrationEvent), sender, new object[] { e });
                return;
            }

            switch (e.Type)
            {
                case RegistrationEventTypes.REGISTRATION_INPROGRESS:
                    this.screenService.SetProgressInfo("Trying to Sign In...");
                    break;

                case RegistrationEventTypes.REGISTRATION_NOK:
                    this.screenService.SetProgressInfo(e.Phrase);
                    break;

                case RegistrationEventTypes.REGISTRATION_OK:
                    this.screenService.SetProgressInfo("Signed In");

                    // Screens
                    this.screenService.Hide(ScreenType.Authentication);
                    this.screenService.Show(ScreenType.History, 1);
                    this.screenService.Show(ScreenType.Contacts, 0);

                    // Menus
                    this.MenuItemFile_SignIn.IsEnabled = false;
                    this.MenuItemFile_SignOut.IsEnabled = true;
                    this.MenuItemEAB.IsEnabled = true;
                    break;

                case RegistrationEventTypes.UNREGISTRATION_INPROGRESS:
                    this.screenService.SetProgressInfo("Trying to Sign Out...");
                    break;

                case RegistrationEventTypes.UNREGISTRATION_NOK:
                    this.screenService.SetProgressInfo(e.Phrase);
                    break;

                case RegistrationEventTypes.UNREGISTRATION_OK:
                    this.screenService.SetProgressInfo("Signed Out");

                    // Screens
                    this.screenService.Hide(ScreenType.Contacts);
                    this.screenService.Hide(ScreenType.History);
                    this.screenService.Show(ScreenType.Authentication, 0);

                    // Menus
                    this.MenuItemFile_SignIn.IsEnabled = true;
                    this.MenuItemFile_SignOut.IsEnabled = false;
                    this.MenuItemEAB.IsEnabled = false;
                    break;
            }
        }
    }
}
