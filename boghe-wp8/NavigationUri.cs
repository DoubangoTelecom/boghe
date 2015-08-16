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
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BogheApp
{
    enum NavigationUriType
    {
        None,
        MakeCall,
        ReceiveCall
    };

    internal class NavigationUriMakeCall : NavigationUriCall
    {
        internal NavigationUriMakeCall(String remoteParty, bool withVideo)
            : base(NavigationUriType.MakeCall, remoteParty, withVideo)
        {
        }
    }

    internal class NavigationUriReceiveCall : NavigationUriCall
    {
        internal NavigationUriReceiveCall(String remoteParty, bool withVideo)
            : base(NavigationUriType.ReceiveCall, remoteParty, withVideo)
        {
        }
    }

    internal class NavigationUriCall : NavigationUri
    {
        readonly String mRemoteParty;
        readonly bool mWithVideo;

        internal NavigationUriCall(NavigationUriType type, String remoteParty, bool withVideo)
            : base(type)
        {
            Debug.Assert((type == NavigationUriType.MakeCall || type == NavigationUriType.ReceiveCall));
            mRemoteParty = remoteParty;
            mWithVideo = withVideo;
        }

        internal String RemoteParty
        {
            get { return mRemoteParty; }
        }

        internal bool WithVideo
        {
            get { return mWithVideo; }
        }
    }

    internal class NavigationUri
    {
        readonly NavigationUriType mType;

        internal NavigationUri(NavigationUriType type)
        {
            mType = type;
        }

        internal NavigationUriType Type
        {
            get { return mType; }
        }

        private static String BuildCallUriString(String pageUri, NavigationUriType type, String remoteParty, bool withVideo)
        {
            return String.Format("/{0}?Type={1}&RemoteParty={2}&WithVideo={3}", pageUri, type, remoteParty, withVideo);
        }

        internal static String BuildMakeCallUriString(String pageUri, String remoteParty, bool withVideo)
        {
            return BuildCallUriString(pageUri, NavigationUriType.MakeCall, remoteParty, withVideo);
        }

        internal static String BuildReceiveCallUriString(String pageUri, String remoteParty, bool withVideo)
        {
            return BuildCallUriString(pageUri, NavigationUriType.ReceiveCall, remoteParty, withVideo);
        }

        internal static NavigationUri Build(Uri uri)
        {
            String uriString = uri.ToString();
            String uriParamsString = uriString.Substring(uriString.IndexOf("?") + 1);
            String[] uriParams = uriParamsString.Split("&".ToArray());
            NavigationUriType navigationUriType = NavigationUriType.None;
            String remoteParty = null;
            bool withVideo = false;

            foreach (String uriParam in uriParams)
            {
                String[] kvp = uriParam.Split("=".ToArray());
                if (kvp.Length != 2)
                {
                    continue;
                }
                if (kvp[0] == "Type")
                {
                    navigationUriType = (NavigationUriType)Enum.Parse(typeof(NavigationUriType), kvp[1]);
                }
                else if (kvp[0] == "RemoteParty")
                {
                    remoteParty = kvp[1];
                }
                else if (kvp[0] == "WithVideo")
                {
                    withVideo = Boolean.Parse(kvp[1]);
                }
            }

            switch (navigationUriType)
            {
                case NavigationUriType.MakeCall:
                    {
                        Debug.Assert(!String.IsNullOrEmpty(remoteParty));
                        return new NavigationUriMakeCall(remoteParty, withVideo);
                    }
                case NavigationUriType.ReceiveCall:
                    {
                        Debug.Assert(!String.IsNullOrEmpty(remoteParty));
                        return new NavigationUriReceiveCall(remoteParty, withVideo);
                    }
                default:
                    {
                        return null;
                    }
            }
        }
    }
}
