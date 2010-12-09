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
using System.Configuration;
using System.Data;
using System.Linq;
using System.Windows;
using BogheCore.Services.Impl;
using BogheApp.Services.Impl;
using System.IO;
using log4net.Config;
using log4net;

namespace BogheApp
{
    /// <summary>
    /// Interaction logic for App.xaml
    /// </summary>
    public partial class App : Application
    {
        private static ILog LOG;

        private void Application_Startup(object sender, StartupEventArgs e)
        {
            try
            {
                System.Threading.Thread.CurrentThread.Name = "Main Thread";
                using (Stream stream = new MemoryStream(BogheApp.Properties.Resources.log4net_xml))
                {
                    XmlConfigurator.Configure(stream);
                    LOG = LogManager.GetLogger(typeof(App));
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
                this.Shutdown();
            }

            LOG.Debug("====================================================");
            LOG.Debug("======Starting Boghe - IMS/RCS Client v1.0.0 r501====");
            LOG.Debug("====================================================");


            if (!Win32ServiceManager.SharedManager.Start())
            {
                MessageBox.Show("Failed to start service manager");
                this.Shutdown();
            }
        }

        private void Application_Exit(object sender, ExitEventArgs e)
        {
            Win32ServiceManager.SharedManager.Stop();
        }
    }
}
