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
#if WINRT
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace System.Timers
{
    public class Timer : System.Windows.Threading.DispatcherTimer
    {
        public event EventHandler<EventArgs> Elapsed;
        private bool mAutoReset = true;

        public Timer(double interval, bool bAutoReset) :
            base()
        {
            mAutoReset = bAutoReset;
            Interval = new TimeSpan(0, 0, 0, 0, (int)interval);
            Tick += (sender, e) =>
            {
                if (Elapsed != null)
                {
                    Elapsed(sender, e);
                }
                if (!mAutoReset)
                {
                    Stop();
                }
            };
        }

        public Timer(double interval) :
            this(interval, true)
        {
            
        }

        public bool Enabled
        {
            get { return IsEnabled; }
            set {
                if (value)
                {
                    Start();
                }
                else
                {
                    Stop();
                }
            }
        }

        public bool AutoReset
        {
            set { mAutoReset = value; }
            get { return mAutoReset; }
        }
    }
}
#endif // WINRT