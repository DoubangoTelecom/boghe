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
using org.doubango.tinyWRAP;
using BogheCore.Model;

namespace BogheApp.Screens
{
    partial class ScreenOptions
    {
        void InitializeQoS()
        {
            new String[] { 
                    Configuration.QoSStrengthToString(tmedia_qos_strength_t.tmedia_qos_strength_none), 
                    Configuration.QoSStrengthToString(tmedia_qos_strength_t.tmedia_qos_strength_optional),
                    Configuration.QoSStrengthToString(tmedia_qos_strength_t.tmedia_qos_strength_mandatory) 
            }.ToList().ForEach(x => this.comboBoxPreconditionStrength.Items.Add(x));
            new String[]{
                Configuration.QoSTypeToString(tmedia_qos_stype_t.tmedia_qos_stype_none),
                Configuration.QoSTypeToString(tmedia_qos_stype_t.tmedia_qos_stype_segmented),
                Configuration.QoSTypeToString(tmedia_qos_stype_t.tmedia_qos_stype_e2e),
                
            }.ToList().ForEach(x => this.comboBoxPreconditionType.Items.Add(x));
            new String[]{
                Configuration.QoSBandwidthToString(tmedia_bandwidth_level_t.tmedia_bl_low),
                Configuration.QoSBandwidthToString(tmedia_bandwidth_level_t.tmedia_bl_medium),
                Configuration.QoSBandwidthToString(tmedia_bandwidth_level_t.tmedia_bl_hight)
            }.ToList().ForEach(x => this.comboBoxPreconditionBandwidth.Items.Add(x));

            this.comboBoxSessionTimerRefreser.Items.Add("none");
            this.comboBoxSessionTimerRefreser.Items.Add("uac");
            this.comboBoxSessionTimerRefreser.Items.Add("uas");
        }

        void LoadQoS()
        {
            String strength = this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.PRECOND_STRENGTH, Configuration.DEFAULT_QOS_PRECOND_STRENGTH);
            String type = this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.PRECOND_TYPE, Configuration.DEFAULT_QOS_PRECOND_TYPE);
            String bandwidth = this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.PRECOND_BANDWIDTH, Configuration.DEFAULT_QOS_PRECOND_BANDWIDTH);
            String refresher = this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS_REFRESHER, Configuration.DEFAULT_QOS_SESSION_TIMERS_REFRESHER);
            int timeout = this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS_TIMEOUT, Configuration.DEFAULT_QOS_SESSION_TIMERS_TIMEOUT);

            this.checkBoxSessionTimersEnable.IsChecked = this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS, Configuration.DEFAULT_QOS_SESSION_TIMERS);
            this.comboBoxPreconditionStrength.SelectedValue = Configuration.QoSStrengthToString((tmedia_qos_strength_t)Enum.Parse(typeof(tmedia_qos_strength_t), strength));
            this.comboBoxPreconditionType.SelectedValue = Configuration.QoSTypeToString((tmedia_qos_stype_t)Enum.Parse(typeof(tmedia_qos_stype_t), type));
            this.comboBoxPreconditionBandwidth.SelectedValue = Configuration.QoSBandwidthToString((tmedia_bandwidth_level_t)Enum.Parse(typeof(tmedia_bandwidth_level_t), bandwidth));
            this.comboBoxSessionTimerRefreser.SelectedValue = refresher;
            this.textBoxSessionTimersTimeout.Text = timeout.ToString();
        }

        bool UpdateQoS()
        {
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS, 
                this.checkBoxSessionTimersEnable.IsChecked.Value);            
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS_REFRESHER, this.comboBoxSessionTimerRefreser.SelectedValue.ToString());
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS_TIMEOUT, this.textBoxSessionTimersTimeout.Text);
            
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.PRECOND_STRENGTH,
                Configuration.QoSStrengthFromString(this.comboBoxPreconditionStrength.SelectedValue.ToString()).ToString());
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.PRECOND_TYPE,
                Configuration.QoSTypeFromString(this.comboBoxPreconditionType.SelectedValue.ToString()).ToString());
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.PRECOND_BANDWIDTH,
                Configuration.QoSBandwidthFromString(this.comboBoxPreconditionBandwidth.SelectedValue.ToString()).ToString());


            // Transmit values to the native part (global)
            if (this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS, Configuration.DEFAULT_QOS_SESSION_TIMERS))
            {
                MediaSessionMgr.defaultsSetInviteSessionTimers(
                   this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS_TIMEOUT, Configuration.DEFAULT_QOS_SESSION_TIMERS_TIMEOUT),
                   this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS_REFRESHER, Configuration.DEFAULT_QOS_SESSION_TIMERS_REFRESHER));
            }
            else
            {
                MediaSessionMgr.defaultsSetInviteSessionTimers(0, null);
            }
            

            return true;
        }
    }
}
