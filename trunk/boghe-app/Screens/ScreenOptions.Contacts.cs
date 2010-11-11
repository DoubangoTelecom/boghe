using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using BogheCore.Model;

namespace BogheApp.Screens
{
    partial class ScreenOptions
    {
        private void LoadContacts()
        {
            this.radioButtonContactsRemote.IsChecked = this.configurationService.Get(Configuration.ConfFolder.XCAP, Configuration.ConfEntry.ENABLED, Configuration.DEFAULT_XCAP_ENABLED);
            this.textBoxXcapRoot.Text = this.configurationService.Get(Configuration.ConfFolder.XCAP, Configuration.ConfEntry.XCAP_ROOT, Configuration.DEFAULT_XCAP_ROOT);
            this.textBoxXUI.Text = this.configurationService.Get(Configuration.ConfFolder.XCAP, Configuration.ConfEntry.USERNAME, Configuration.DEFAULT_XUI);
            this.passwordBoxXUI.Password = this.configurationService.Get(Configuration.ConfFolder.XCAP, Configuration.ConfEntry.PASSWORD, String.Empty);

            this.groupBoxXCAP.IsEnabled = this.radioButtonContactsRemote.IsChecked.HasValue ? this.radioButtonContactsRemote.IsChecked.Value : Configuration.DEFAULT_XCAP_ENABLED;
        }

        private bool UpdateContacts()
        {
            this.configurationService.Set(Configuration.ConfFolder.XCAP, Configuration.ConfEntry.ENABLED, this.radioButtonContactsRemote.IsChecked.HasValue ? this.radioButtonContactsRemote.IsChecked.Value : Configuration.DEFAULT_XCAP_ENABLED);
            this.configurationService.Set(Configuration.ConfFolder.XCAP, Configuration.ConfEntry.XCAP_ROOT, this.textBoxXcapRoot.Text);
            this.configurationService.Set(Configuration.ConfFolder.XCAP, Configuration.ConfEntry.USERNAME, this.textBoxXUI.Text);
            this.configurationService.Set(Configuration.ConfFolder.XCAP, Configuration.ConfEntry.PASSWORD, this.passwordBoxXUI.Password);

            return true;
        }
    }
}
