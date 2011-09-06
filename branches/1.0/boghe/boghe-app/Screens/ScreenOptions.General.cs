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

namespace BogheApp.Screens
{
    partial class ScreenOptions
    {
        private void LoadGeneral()
        {
            this.checkBoxLaunchWhenStart.IsChecked = this.configurationService.Get(Configuration.ConfFolder.GENERAL, Configuration.ConfEntry.AUTO_START, Configuration.DEFAULT_GENERAL_AUTOSTART);
            this.textBoxENUM.Text = this.configurationService.Get(Configuration.ConfFolder.GENERAL, Configuration.ConfEntry.ENUM_DOMAIN, Configuration.DEFAULT_GENERAL_ENUM_DOMAIN);
        }

        private bool UpdateGeneral()
        {
            this.configurationService.Set(Configuration.ConfFolder.GENERAL, Configuration.ConfEntry.AUTO_START, this.checkBoxLaunchWhenStart.IsChecked.Value);
            this.configurationService.Set(Configuration.ConfFolder.GENERAL, Configuration.ConfEntry.ENUM_DOMAIN, this.textBoxENUM.Text);

            return true;
        }
    }
}
