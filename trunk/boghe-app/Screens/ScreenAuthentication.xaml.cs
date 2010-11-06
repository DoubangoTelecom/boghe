using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using BogheControls;
using BogheCore.Services;
using BogheApp.Services.Impl;

namespace BogheApp.Screens
{
    /// <summary>
    /// Interaction logic for ScreenAuthentication.xaml
    /// </summary>
    public partial class ScreenAuthentication : BaseScreen
    {
        public ScreenAuthentication()
        {
            InitializeComponent();

            this.textBoxDisplayName.Text = Configuration.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.DISPLAY_NAME, Configuration.DEFAULT_DISPLAY_NAME);
            this.textBoxPublicIdentity.Text = Configuration.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU, Configuration.DEFAULT_IMPU);
            this.textBoxPrivateIdentity.Text = Configuration.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPI, Configuration.DEFAULT_IMPI);
            this.textBoxPassword.Text = Configuration.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.PASSWORD, String.Empty);
            this.textBoxRealm.Text = Configuration.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.REALM, Configuration.DEFAULT_REALM);
        }
    }
}
