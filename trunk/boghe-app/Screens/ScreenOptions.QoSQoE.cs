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
        const String QOS_STRENGTH_NONE = "None";
        const String QOS_STRENGTH_MANDATORY = "Mandatory";
        const String QOS_STRENGTH_OPTIONAL = "Optional";
        const String QOS_STRENGTH_FAILURE = "Failure";
        const String QOS_STRENGTH_UNKNOWN = "Unknown";

        const String QOS_TYPE_NONE = "None";
        const String QOS_TYPE_SEGMENTED = "Segmented";
        const String QOS_TYPE_E2E = "End-to-End";

        const String QOS_BANDWIDTH_LOW = "Low";
        const String QOS_BANDWIDTH_MEDIUM = "Medium";
        const String QOS_BANDWIDTH_HIGH = "High";

        void InitializeQoS()
        {
            new String[] { 
                    StrengthToString(tmedia_qos_strength_t.tmedia_qos_strength_none), 
                    StrengthToString(tmedia_qos_strength_t.tmedia_qos_strength_optional),
                    StrengthToString(tmedia_qos_strength_t.tmedia_qos_strength_mandatory) 
            }.ToList().ForEach(x => this.comboBoxPreconditionStrength.Items.Add(x));
            new String[]{
                TypeToString(tmedia_qos_stype_t.tmedia_qos_stype_none),
                TypeToString(tmedia_qos_stype_t.tmedia_qos_stype_segmented),
                TypeToString(tmedia_qos_stype_t.tmedia_qos_stype_e2e),
                
            }.ToList().ForEach(x => this.comboBoxPreconditionType.Items.Add(x));
            new String[]{
                BandwidthToString(tmedia_bandwidth_level_t.tmedia_bl_low),
                BandwidthToString(tmedia_bandwidth_level_t.tmedia_bl_medium),
                BandwidthToString(tmedia_bandwidth_level_t.tmedia_bl_hight)
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
            String refresher = this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.REFRESHER, Configuration.DEFAULT_QOS_REFRESHER);
            int timeout = this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SIP_CALLS_TIMEOUT, Configuration.DEFAULT_QOS_SIP_CALLS_TIMEOUT);

            this.checkBoxSessionTimersEnable.IsChecked = this.configurationService.Get(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SESSION_TIMERS
                , Configuration.DEFAULT_QOS_SESSION_TIMERS);
            this.comboBoxPreconditionStrength.SelectedValue = StrengthToString((tmedia_qos_strength_t)Enum.Parse(typeof(tmedia_qos_strength_t), strength));
            this.comboBoxPreconditionType.SelectedValue = TypeToString((tmedia_qos_stype_t)Enum.Parse(typeof(tmedia_qos_stype_t), type));
            this.comboBoxPreconditionBandwidth.SelectedValue = BandwidthToString((tmedia_bandwidth_level_t)Enum.Parse(typeof(tmedia_bandwidth_level_t), bandwidth));
            this.comboBoxSessionTimerRefreser.SelectedValue = refresher;
            this.textBoxSessionTimersTimeout.Text = timeout.ToString();
        }

        bool UpdateQoS()
        {
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.PRECOND_STRENGTH,
                StrengthFromString(this.comboBoxPreconditionStrength.SelectedValue.ToString()).ToString());
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.PRECOND_TYPE,
                TypeFromString(this.comboBoxPreconditionType.SelectedValue.ToString()).ToString());
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.PRECOND_BANDWIDTH,
                BandwidthFromString(this.comboBoxPreconditionBandwidth.SelectedValue.ToString()).ToString());
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.REFRESHER, this.comboBoxSessionTimerRefreser.SelectedValue.ToString());
            this.configurationService.Set(Configuration.ConfFolder.QOS, Configuration.ConfEntry.SIP_CALLS_TIMEOUT, this.textBoxSessionTimersTimeout.Text);

            return true;
        }

        static String StrengthToString(tmedia_qos_strength_t strength)
        {
            switch (strength)
            {
                case tmedia_qos_strength_t.tmedia_qos_strength_none:
                    return ScreenOptions.QOS_STRENGTH_NONE;
                case tmedia_qos_strength_t.tmedia_qos_strength_mandatory:
                    return ScreenOptions.QOS_STRENGTH_MANDATORY;
                case tmedia_qos_strength_t.tmedia_qos_strength_optional:
                    return ScreenOptions.QOS_STRENGTH_OPTIONAL;
                case tmedia_qos_strength_t.tmedia_qos_strength_failure:
                    return ScreenOptions.QOS_STRENGTH_FAILURE;
                case tmedia_qos_strength_t.tmedia_qos_strength_unknown:
                default:
                    return ScreenOptions.QOS_STRENGTH_UNKNOWN;
            }
        }

        static tmedia_qos_strength_t StrengthFromString(String strength)
        {
            if (ScreenOptions.QOS_STRENGTH_NONE.Equals(strength))
            {
                return tmedia_qos_strength_t.tmedia_qos_strength_none;
            }
            else if (ScreenOptions.QOS_STRENGTH_MANDATORY.Equals(strength))
            {
                return tmedia_qos_strength_t.tmedia_qos_strength_mandatory;
            }
            else if (ScreenOptions.QOS_STRENGTH_OPTIONAL.Equals(strength))
            {
                return tmedia_qos_strength_t.tmedia_qos_strength_optional;
            }
            else if (ScreenOptions.QOS_STRENGTH_FAILURE.Equals(strength))
            {
                return tmedia_qos_strength_t.tmedia_qos_strength_failure;
            }
            else
            {
                return tmedia_qos_strength_t.tmedia_qos_strength_unknown;
            }
        }

        String TypeToString(tmedia_qos_stype_t type)
        {
            switch (type)
            {
                case tmedia_qos_stype_t.tmedia_qos_stype_e2e:
                    return ScreenOptions.QOS_TYPE_E2E;
                case tmedia_qos_stype_t.tmedia_qos_stype_none:
                default:
                    return ScreenOptions.QOS_TYPE_NONE;
                case tmedia_qos_stype_t.tmedia_qos_stype_segmented:
                    return ScreenOptions.QOS_TYPE_SEGMENTED;
            }
        }

        tmedia_qos_stype_t TypeFromString(String type)
        {
            if (ScreenOptions.QOS_TYPE_E2E.Equals(type))
            {
                return tmedia_qos_stype_t.tmedia_qos_stype_e2e;
            }
            else if (ScreenOptions.QOS_TYPE_SEGMENTED.Equals(type))
            {
                return tmedia_qos_stype_t.tmedia_qos_stype_segmented;
            }
            else
            {
                return tmedia_qos_stype_t.tmedia_qos_stype_none;
            }
        }

        String BandwidthToString(tmedia_bandwidth_level_t bl)
        {
            switch (bl)
            {
                case tmedia_bandwidth_level_t.tmedia_bl_hight:
                default:
                    return ScreenOptions.QOS_BANDWIDTH_HIGH;
                case tmedia_bandwidth_level_t.tmedia_bl_low:
                    return ScreenOptions.QOS_BANDWIDTH_LOW;
                case tmedia_bandwidth_level_t.tmedia_bl_medium:
                    return QOS_BANDWIDTH_MEDIUM;
            }
        }

        tmedia_bandwidth_level_t BandwidthFromString(String bl)
        {
            if (ScreenOptions.QOS_BANDWIDTH_LOW.Equals(bl))
            {
                return tmedia_bandwidth_level_t.tmedia_bl_low;
            }
            else if (ScreenOptions.QOS_BANDWIDTH_MEDIUM.Equals(bl))
            {
                return tmedia_bandwidth_level_t.tmedia_bl_medium;
            }
            else
            {
                return tmedia_bandwidth_level_t.tmedia_bl_hight;
            }
        }
    }
}
