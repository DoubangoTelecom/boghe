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
using BogheCore.Services;
using BogheCore.Model;
using org.doubango.tinyWRAP;
using BogheCore.Services.Impl;
using log4net;
#if WINRT
using SipUri = doubango_rt.BackEnd.rtSipUri;
#endif

namespace BogheCore.Utils
{
    //FIXME: THIS IS THE WORST CLASS YOU WILL FIND IN THE PROJECT ;)
    public static class UriUtils
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(UriUtils));

        private static ServiceManager serviceManager = null;

        private const long MAX_PHONE_NUMBER = 1000000000000L;
	    private const String INVALID_SIP_URI = "sip:invalid@open-ims.test";

        public static ServiceManager ServiceManager
        {
            set
            {
                UriUtils.serviceManager = value;
            }
            get
            {
                return UriUtils.serviceManager;
            }
        }

        public static Uri GetHttpUri(String UriString)
        {
            try
            {
                return new Uri(UriString);
            }
            catch
            {
                return new Uri("http://doubango.org");
            }
        }

        public static String GetDisplayName(String uri)
        {
            String displayname = null;
            if (!String.IsNullOrEmpty(uri))
            {
                Contact contact = UriUtils.ServiceManager.ContactService.ContactFind(uri);
                if (contact != null && (displayname = contact.DisplayName) != null)
                {
                    return displayname;
                }
                return GetUserName(uri);
            }

            return uri;
        }

        public static String GetUserName(String uri)
        {
            String userName = null;
            if (!String.IsNullOrEmpty(uri))
            {
                SipUri sipUri = new SipUri(uri);
#if WINDOWS_PHONE
                if (sipUri.isValid_())
#else
                if (sipUri.isValid())
#endif
                {
                    userName = sipUri.getUserName();
                }
                sipUri.Dispose();
            }

            return (userName == null ? uri : userName);
        }

        public static bool IsValidSipUri(String uri)
        {
            return SipUri.isValid(uri);
        }

        // Very very basic and bad
        public static String GetValidSipUri(String uri)
        {
            if (String.IsNullOrEmpty(uri))
            {
                return UriUtils.INVALID_SIP_URI;
            }
            if (uri.StartsWith("sip:") || uri.StartsWith("sip:") || uri.StartsWith("tel:"))
            {
                //FIXME
                return uri;
            }
            else
            {
                if (uri.Contains("@"))
                {
                    return String.Format("sip:{0}", uri);
                }
                else
                {
                    String realm = UriUtils.ServiceManager.ConfigurationService.Get(Configuration.ConfFolder.NETWORK, Configuration.ConfEntry.REALM, Configuration.DEFAULT_NETWORK_REALM);
                    if (realm.StartsWith("sip:") || realm.StartsWith("sips:")) // do not forget that IPv6 address could contain ":"
                    {
                        realm = realm.Substring(realm.IndexOf(":") + 1);
                    }
                    // FIXME: Should be done by doubango
                    return String.Format("sip:{0}@{1}", uri.Replace("(", "").Replace(")", "").Replace("-", ""), realm);
                }
            }
        }

        // very dirty
        public static String GetValidPhoneNumber(String uri)
        {
            if (uri != null && (uri.StartsWith("sip:") || uri.StartsWith("sip:") || uri.StartsWith("tel:")))
            {
                SipUri sipUri = new SipUri(uri);
#if WINDOWS_PHONE
                if (sipUri.isValid_())
#else
                if (sipUri.isValid())
#endif
                {
                    String userName = sipUri.getUserName();
                    if (userName != null)
                    {
                        try
                        {
                            String scheme = sipUri.getScheme();
                            if (scheme != null && scheme.Equals("tel"))
                            {
                                userName = userName.Replace("-", "");
                            }

                            long result = Convert.ToInt64(userName.StartsWith("+") ? userName.Substring(1) : userName);
                            if (result < UriUtils.MAX_PHONE_NUMBER)
                            {
                                return userName;
                            }
                        }
                        catch (FormatException ) { }
                        catch (Exception e)
                        {
                            LOG.Error(e);
                        }
                    }
                }
                sipUri.Dispose();
            }
            else
            {
                try
                {
                    uri = uri.Replace("-", "");
                    long result = Convert.ToInt64(uri.StartsWith("+") ? uri.Substring(1) : uri);
                    if (result < UriUtils.MAX_PHONE_NUMBER)
                    {
                        return uri;
                    }
                }
                catch (FormatException ) { }
                catch (Exception e)
                {
                    LOG.Error(e);
                }
            }
            return null;
        }
    }
}
