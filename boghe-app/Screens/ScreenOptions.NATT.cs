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
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using BogheCore.Model;
using org.doubango.tinyWRAP;

namespace BogheApp.Screens
{
    partial class ScreenOptions
    {
        private void LoadNATT()
        {
            this.checkBoxForceSymetricRtpEnabled.IsChecked = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_SYMETRIC_RTP, Configuration.DEFAULT_NATT_USE_SYMETRIC_RTP);
            this.checkBoxIceEnabled.IsChecked = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_ICE, Configuration.DEFAULT_NATT_USE_ICE);
            this.checkBoxStunForSIP.IsChecked = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_STUN_FOR_SIP, Configuration.DEFAULT_NATT_USE_STUN_FOR_SIP);
            this.checkBoxStunForICE.IsChecked = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_STUN_FOR_ICE, Configuration.DEFAULT_NATT_USE_STUN_FOR_ICE);
            this.checkBoxTurnForICE.IsChecked = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_TURN_FOR_ICE, Configuration.DEFAULT_NATT_USE_TURN_FOR_ICE);
            this.checkBoxStunForICE.IsEnabled = this.checkBoxIceEnabled.IsEnabled;
            this.checkBoxTurnForICE.IsEnabled = this.checkBoxIceEnabled.IsEnabled;           
            this.radioButtonStunDiscover.IsChecked = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_DISCO, Configuration.DEFAULT_NATT_STUN_DISCO);
            this.radioButtonStunUseThis.IsChecked = !this.radioButtonStunDiscover.IsChecked;
            this.textBoxStunServerAddress.Text = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_SERVER, Configuration.DEFAULT_NATT_STUN_SERVER);
            this.textBoxStunPort.Text = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_PORT, Configuration.DEFAULT_NATT_STUN_PORT).ToString();
            this.textBoxStunUsername.Text = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_USERNAME, Configuration.DEFAULT_NATT_STUN_USERNAME).ToString();
            this.passwordBoxStunPassword.Password = this.configurationService.Get(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_PASSWORD, Configuration.DEFAULT_NATT_STUN_PASSWORD).ToString();
        }

        private bool UpdateNATT()
        {
            this.configurationService.Set(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_SYMETRIC_RTP, this.checkBoxForceSymetricRtpEnabled.IsChecked.Value);
            this.configurationService.Set(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_ICE, this.checkBoxIceEnabled.IsChecked.Value);
            this.configurationService.Set(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_STUN_FOR_SIP, this.checkBoxStunForSIP.IsChecked.Value);
            this.configurationService.Set(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_STUN_FOR_ICE, this.checkBoxStunForICE.IsChecked.Value);
            this.configurationService.Set(Configuration.ConfFolder.NATT, Configuration.ConfEntry.USE_TURN_FOR_ICE, this.checkBoxTurnForICE.IsChecked.Value);
            this.configurationService.Set(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_DISCO, this.radioButtonStunDiscover.IsChecked.Value);
            this.configurationService.Set(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_SERVER, this.textBoxStunServerAddress.Text);
            this.configurationService.Set(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_PORT, this.textBoxStunPort.Text);
            this.configurationService.Set(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_USERNAME, this.textBoxStunUsername.Text);
            this.configurationService.Set(Configuration.ConfFolder.NATT, Configuration.ConfEntry.STUN_PASSWORD, this.passwordBoxStunPassword.Password);

            // STUN informaions are checked before each registration which means that we don't need to pass the config to the native part
            // Pass other configs to the native part
            MediaSessionMgr.defaultsSetStunEnabled(this.checkBoxStunForSIP.IsChecked.Value);
            MediaSessionMgr.defaultsSetIceStunEnabled(this.checkBoxStunForICE.IsChecked.Value);
            MediaSessionMgr.defaultsSetIceTurnEnabled(this.checkBoxTurnForICE.IsChecked.Value);
            MediaSessionMgr.defaultsSetIceEnabled(this.checkBoxIceEnabled.IsChecked.Value);
            MediaSessionMgr.defaultsSetRtpSymetricEnabled(this.checkBoxForceSymetricRtpEnabled.IsChecked.Value);
            MediaSessionMgr.defaultsSetStunServer(this.textBoxStunServerAddress.Text, (ushort)Int32.Parse(this.textBoxStunPort.Text));
            MediaSessionMgr.defaultsSetStunCred(this.textBoxStunUsername.Text, this.passwordBoxStunPassword.Password);

            return true;
        }
    }
}
