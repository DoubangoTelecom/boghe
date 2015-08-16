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
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls;
using BogheCore.Events;
using doubango_rt.BackEnd;
using Microsoft.Phone.Controls;
using log4net;

namespace BogheApp
{

    internal class SipStackEventArgs : MyEventArgs
    {
        private readonly SipStackState mState;
        private readonly String mDescription;

        internal SipStackEventArgs(SipStackState state, String description)
        {
            mState = state;
            mDescription = description;
        }

        internal SipStackState State
        {
            get { return mState; }
        }

        internal String Description
        {
            get { return mDescription; }
        }
    };

    internal class AudioRoutingEventArgs : MyEventArgs
    {
        private readonly AudioRoute mRoute;

        internal AudioRoutingEventArgs(AudioRoute route)
        {
            mRoute = route;
        }

        internal AudioRoute Route
        {
            get { return mRoute; }
        }
    }

    internal class SipHoldEventArgs : MyEventArgs
    {
        private readonly SipHoldStateState mState;

        internal SipHoldEventArgs(SipHoldStateState state)
        {
            mState = state;
        }

        internal SipHoldStateState State
        {
            get { return mState; }
        }
    }

    internal class SipRegistrationEventArgs : MyEventArgs
    {
        private readonly SipSessionState mState;
        private readonly String mDescription;
        private readonly ushort mSipCode;

        internal SipRegistrationEventArgs(SipSessionState state, ushort sipCode, String description)
        {
            mState = state;
            mSipCode = sipCode;
            mDescription = description;
        }

        internal SipSessionState State
        {
            get { return mState; }
        }

        internal String Description
        {
            get { return mDescription; }
        }

        internal ushort SipCode
        {
            get { return mSipCode; }
        }
    };

    internal class SipAVCallEventArgs : MyEventArgs
    {
        private readonly SipAVCallState mState;
        private readonly String mDescription;
        private readonly ushort mSipCode;

        internal SipAVCallEventArgs(SipAVCallState state, ushort sipCode, String description)
        {
            mState = state;
            mSipCode = sipCode;
            mDescription = description;
        }

        internal SipAVCallState State
        {
            get { return mState; }
        }

        internal String Description
        {
            get { return mDescription; }
        }

        internal ushort SipCode
        {
            get { return mSipCode; }
        }
    };


    internal class NativeEventsListner : ISipRegistrationStateChangedListener, ISipStackStateChangedListener, ISipAVCallStateChangedListener, IAudioStateChangedListener, IDebugMessageListener
    {
        private static readonly ILog LOG = LogManager.GetLogger(typeof(NativeEventsListner));

        public event EventHandler<AudioRoutingEventArgs> onAudioRoutingChanged;
        public event EventHandler<SipRegistrationEventArgs> onRegistrationEvent;
        public event EventHandler<SipStackEventArgs> onStackEvent;
        public event EventHandler<SipAVCallEventArgs> onAVCallEvent;
        public event EventHandler<SipHoldEventArgs> onHoldEvent;

        public NativeEventsListner()
        {
            
        }

        ~NativeEventsListner()
        {
            Stop();
        }

        public void Start()
        {
            SipService sipService = rtServiceManager.Instance.SipService;

            if (sipService != null)
            {
                sipService.SetDebugMessageListener(this);
                sipService.SetAudioStateChangedListener(this);
                sipService.SetSipStackStateChangedListener(this);
                sipService.SetSipRegistrationStateChangedListener(this);
                sipService.SetSipAVCallStateChangedListener(this);
            }
        }

        public void Stop()
        {
            SipService sipService = rtServiceManager.Instance.SipService;

            if (sipService != null)
            {
                sipService.SetDebugMessageListener(null);
                sipService.SetAudioStateChangedListener(null);
                sipService.SetSipStackStateChangedListener(null);
                sipService.SetSipRegistrationStateChangedListener(null);
                sipService.SetSipAVCallStateChangedListener(null);
            }
        }

        public void OnRegistrationStateChanged(SipSessionState newState, ushort sipCode, String description)
        {
            if (onRegistrationEvent != null)
            {
                onRegistrationEvent(this, new SipRegistrationEventArgs(newState, sipCode, description));
            }
        }

        public void OnStackStateChanged(SipStackState newState, String description)
        {
            if (onStackEvent != null)
            {
                onStackEvent(this, new SipStackEventArgs(newState, description));
            }
        }

        public void OnAVCallStateChanged(SipAVCallState newState, ushort sipCode, String description)
        {
            if (onAVCallEvent != null)
            {
                onAVCallEvent(this, new SipAVCallEventArgs(newState, sipCode, description));
            }
        }

        public void OnHoldStateChanged(SipHoldStateState newState)
        {
            if (onHoldEvent != null)
            {
                onHoldEvent(this, new SipHoldEventArgs(newState));
            }
        }

        public void OnAudioRoutingChanged(AudioRoute newRoute)
        {
            if (onAudioRoutingChanged != null)
            {
                onAudioRoutingChanged(this, new AudioRoutingEventArgs(newRoute));
            }
        }

        public void OnDebugMessage(DebugLevel level, String message)
        {
            switch (level)
            {
                case DebugLevel.Info:
                    {
                        LOG.Info(message);
                        break;
                    }
                case DebugLevel.Warn:
                    {
                        LOG.Warn(message);
                        break;
                    }
                case DebugLevel.Error:
                    {
                        LOG.Error(message);
                        break;
                    }
                case DebugLevel.Fatal:
                    {
                        LOG.Fatal(message);
                        break;
                    }
            }
        }
    }
}
