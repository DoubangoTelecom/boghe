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
using System.Windows.Interop;
using System.Runtime.InteropServices;
using System.Drawing;

namespace BogheControls
{
    public class VideoDisplay : HwndHost
    {
        private IntPtr hwndThis;
        private IntPtr hwndParent;

        protected override HandleRef BuildWindowCore(HandleRef hwndParent)
        {
            int width = (int)this.Width;
            int height  = (int)this.Height;            

            this.hwndParent = hwndParent.Handle;
            this.hwndThis = NativeMethods.CreateWindowEx(0, "static", String.Empty,
                NativeMethods.WS_CHILD | NativeMethods.WS_CLIPSIBLINGS | NativeMethods.WS_CLIPCHILDREN,
                0, 0,
                width, height,
                this.hwndParent,
                IntPtr.Zero,
                IntPtr.Zero,
                0);

            return new HandleRef(this, this.hwndThis);
        }

        protected override void OnWindowPositionChanged(System.Windows.Rect rcBoundingBox)
        {
            base.OnWindowPositionChanged(rcBoundingBox);
        }

        protected override void DestroyWindowCore(HandleRef hwnd)
        {
            NativeMethods.DestroyWindow(hwnd.Handle);
        }

        protected override IntPtr WndProc(IntPtr hwnd, int msg, IntPtr wParam, IntPtr lParam, ref bool handled)
        {
            if (msg == NativeMethods.WM_ERASEBKGND)
            {
                Graphics g = Graphics.FromHdc(wParam);
                g.FillRectangle(new SolidBrush(Color.Black), new Rectangle(0, 0, (int)this.Width, (int)this.Height));
                g.Dispose();
                return IntPtr.Zero;
            }
            return base.WndProc(hwnd, msg, wParam, lParam, ref handled);
        }
    }

}
