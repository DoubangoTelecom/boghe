using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using BogheCore.Sip.Events;

namespace BogheApp
{
    partial class MainWindow
    {
        public void sipService_onRegistrationEvent(object sender, RegistrationEventArgs e)
        {
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
                    break;

                case RegistrationEventTypes.UNREGISTRATION_INPROGRESS:
                    this.screenService.SetProgressInfo("Trying to Sign Out...");
                    break;

                case RegistrationEventTypes.UNREGISTRATION_NOK:
                    this.screenService.SetProgressInfo(e.Phrase);
                    break;

                case RegistrationEventTypes.UNREGISTRATION_OK:
                    this.screenService.SetProgressInfo("Signed Out");
                    break;
            }
        }
    }
}
