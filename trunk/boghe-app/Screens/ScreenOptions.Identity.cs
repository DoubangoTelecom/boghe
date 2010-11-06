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
using BogheCore.Model;

namespace BogheApp.Screens
{
    partial class ScreenOptions
    {
        private void LoadIdentity()
        {
            this.textBoxDisplayName.Text = this.configurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.DISPLAY_NAME, Configuration.DEFAULT_DISPLAY_NAME);
            this.textBoxPublicIdentity.Text = this.configurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU, Configuration.DEFAULT_IMPU);
            this.textBoxPrivateIdentity.Text = this.configurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPI, Configuration.DEFAULT_IMPI);
            this.passwordBoxSipPassword.Password = this.configurationService.Get(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.PASSWORD, String.Empty);
            this.textBoxRealm.Text = this.configurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.REALM, Configuration.DEFAULT_REALM);
            this.checkBoxEarlyIMS.IsChecked = this.configurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.EARLY_IMS, Configuration.DEFAULT_EARLY_IMS);

            this.textBoxAMF.Text = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IMSAKA_AMF, Configuration.DEFAULT_IMSAKA_AMF);
            this.textBoxOperatorId.Text = this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IMSAKA_OPID, Configuration.DEFAULT_IMSAKA_OPID);
        }

        private bool UpdateIdentity()
        {
            this.configurationService.Set(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.DISPLAY_NAME, this.textBoxDisplayName.Text);
            this.configurationService.Set(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPU, this.textBoxPublicIdentity.Text);
            this.configurationService.Set(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.IMPI, this.textBoxPrivateIdentity.Text);
            this.configurationService.Set(Configuration.ConfFolder.IDENTITY, Configuration.ConfEntry.PASSWORD, this.passwordBoxSipPassword.Password);
            this.configurationService.Set(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.REALM, this.textBoxRealm.Text);
            this.configurationService.Set(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.EARLY_IMS, this.checkBoxEarlyIMS.IsChecked.HasValue ? this.checkBoxEarlyIMS.IsChecked.Value : Configuration.DEFAULT_EARLY_IMS);

            this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IMSAKA_AMF, this.textBoxAMF.Text);
            this.configurationService.Get(Configuration.ConfFolder.SECURITY, Configuration.ConfEntry.IMSAKA_OPID, this.textBoxOperatorId.Text);

            return true;
        }
    }
}
