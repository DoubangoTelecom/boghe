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
using System.Net;
using System.Collections.Generic;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Navigation;
using Microsoft.Phone.Controls;
using Microsoft.Phone.Shell;
using BogheCore.Model;
using BogheCore.Sip.Events;
using System.ComponentModel;
using org.doubango.WindowsPhone;
using doubango_rt.BackEnd;
using BogheCore.Utils;
using System.Threading;

namespace BogheApp
{
    public partial class MainPage : BasePage
    {
        public MainPage()
        {
            InitializeComponent();

            buttonSaveSettings.Click += buttonSaveSettings_Click;
        }

        // Load data for the ViewModel Items
        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
            base.OnNavigatedTo(e);

            buttonKeyPadDel.Visibility = String.IsNullOrEmpty(textBlockNumber.Text) ? Visibility.Collapsed : Visibility.Visible;

            LoadSettings();

            this.ViewModel.Update();
        }

        protected override void OnNavigatedFrom(NavigationEventArgs e)
        {
            SaveSettings();

            base.OnNavigatedFrom(e);
        }

        void panoramaMain_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            
        }

        #region KeyPad

        private void buttonKeyPad_Click(object sender, RoutedEventArgs e)
        {
            if (e.OriginalSource == buttonKeyPad0)
            {
                textBlockNumber.Text += "0";
            }
            else if (e.OriginalSource == buttonKeyPad1)
            {
                textBlockNumber.Text += "1";
            }
            else if (e.OriginalSource == buttonKeyPad2)
            {
                textBlockNumber.Text += "2";
            }
            else if (e.OriginalSource == buttonKeyPad3)
            {
                textBlockNumber.Text += "3";
            }
            else if (e.OriginalSource == buttonKeyPad4)
            {
                textBlockNumber.Text += "4";
            }
            else if (e.OriginalSource == buttonKeyPad5)
            {
                textBlockNumber.Text += "5";
            }
            else if (e.OriginalSource == buttonKeyPad6)
            {
                textBlockNumber.Text += "6";
            }
            else if (e.OriginalSource == buttonKeyPad7)
            {
                textBlockNumber.Text += "7";
            }
            else if (e.OriginalSource == buttonKeyPad8)
            {
                textBlockNumber.Text += "8";
            }
            else if (e.OriginalSource == buttonKeyPad9)
            {
                textBlockNumber.Text += "9";
            }
            else if (e.OriginalSource == buttonKeyPadStar)
            {
                textBlockNumber.Text += "*";
            }
            else if (e.OriginalSource == buttonKeyPadSharp)
            {
                textBlockNumber.Text += "#";
            }
            else if (e.OriginalSource == buttonKeyPadDel)
            {
                if (!String.IsNullOrEmpty(textBlockNumber.Text))
                {
                    textBlockNumber.Text = textBlockNumber.Text.Substring(0, textBlockNumber.Text.Length - 1);
                }
            }

            buttonKeyPadDel.Visibility = String.IsNullOrEmpty(textBlockNumber.Text) ? Visibility.Collapsed : Visibility.Visible;
        }

        private void buttonKeyPad_Hold(object sender, System.Windows.Input.GestureEventArgs e)
        {
            if (e.OriginalSource == buttonKeyPad0 || e.OriginalSource == textBlockKeyPad0 || e.OriginalSource == textBlockKeyPad0Plus)
            {
                textBlockNumber.Text += "+";
            }
            else if (e.OriginalSource == buttonKeyPadDel || e.OriginalSource == imageKeyPadDel)
            {
                textBlockNumber.Text = String.Empty;
            }

            buttonKeyPadDel.Visibility = String.IsNullOrEmpty(textBlockNumber.Text) ? Visibility.Collapsed : Visibility.Visible;
        }

        #endregion       

        #region Settings

        void buttonSaveSettings_Click(object sender, RoutedEventArgs e)
        {
            buttonSaveSettings.IsEnabled = false;
            SaveSettings();

            new Thread(() =>
            {
                SipService sipService = rtServiceManager.Instance.SipService;
                if (sipService != null && sipService.SipActiveAVCall == null)
                {
                    if (sipService.Stop(false))
                    {
                        rtServiceManager.Instance.UpdateSipConfig();
                        if (sipService.Start())
                        {
                            sipService.Register();
                        }
                    }
                }
            }).Start();
        }

        void LoadSettings()
        {
            textBoxDisplayName.Text = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.DISPLAY_NAME, Configuration.DEFAULT_IDENTITY_DISPLAY_NAME);
            textBoxPublicIdentity.Text = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU, Configuration.DEFAULT_IDENTITY_IMPU);
            textBoxPrivateIdentity.Text = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPI, Configuration.DEFAULT_IDENTITY_IMPI);
            passwordBoxPassword.Password = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.PASSWORD, Configuration.DEFAULT_IDENTITY_PASSWORD);

            textBoxRealm.Text = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.REALM, Configuration.DEFAULT_NETWORK_REALM);
            textBoxProxyHost.Text = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_HOST, Configuration.DEFAULT_NETWORK_PCSCF_HOST);
            textBoxProxyPort.Text = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_PORT, Configuration.DEFAULT_NETWORK_PCSCF_PORT).ToString();

            String transport = rtServiceManager.Instance.ConfigurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.TRANSPORT, Configuration.DEFAULT_NETWORK_TRANSPORT);
            radioButtonTransportUDP.IsChecked = transport.Equals("UDP", StringComparison.InvariantCultureIgnoreCase);
            radioButtonTransportTCP.IsChecked = !radioButtonTransportUDP.IsChecked;
        }

        void SaveSettings()
        {
            rtServiceManager.Instance.ConfigurationService.Set(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.DISPLAY_NAME, textBoxDisplayName.Text);
            rtServiceManager.Instance.ConfigurationService.Set(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU, textBoxPublicIdentity.Text);
            rtServiceManager.Instance.ConfigurationService.Set(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPI, textBoxPrivateIdentity.Text);
            rtServiceManager.Instance.ConfigurationService.Set(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.PASSWORD, passwordBoxPassword.Password);

            rtServiceManager.Instance.ConfigurationService.Set(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.REALM, textBoxRealm.Text);
            rtServiceManager.Instance.ConfigurationService.Set(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_HOST, textBoxProxyHost.Text);
            rtServiceManager.Instance.ConfigurationService.Set(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.PCSCF_PORT, Int16.Parse(textBoxProxyPort.Text));
            rtServiceManager.Instance.ConfigurationService.Set(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.TRANSPORT, (radioButtonTransportTCP.IsChecked.HasValue && radioButtonTransportTCP.IsChecked.Value) ? "TCP" : "UDP");
        }

        void textBoxSettings_TextChanged(object sender, TextChangedEventArgs e)
        {
            buttonSaveSettings.IsEnabled = true;
        }

        private void passwordBoxPassword_PasswordChanged(object sender, RoutedEventArgs e)
        {
            buttonSaveSettings.IsEnabled = true;
        }

        private void radioButtonTransport_Click(object sender, RoutedEventArgs e)
        {
            buttonSaveSettings.IsEnabled = true;
        }

        #endregion

        #region Call

        void MakeCall(bool bWithVideo)
        {
            if (!String.IsNullOrEmpty(textBlockNumber.Text))
            {
                NavigationService.Navigate(new Uri(NavigationUri.BuildMakeCallUriString("/CallPage.xaml", textBlockNumber.Text, bWithVideo), UriKind.Relative));
            }
        }

        private void buttonCall_Click(object sender, RoutedEventArgs e)
        {
            MakeCall (e.OriginalSource == buttonCallVideo);
        }

        #endregion
    }
}