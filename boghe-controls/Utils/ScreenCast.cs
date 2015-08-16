/*
* Boghe IMS/RCS Client - Copyright (C) 2014 Mamadou DIOP.
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
using System.Drawing;

namespace BogheControls.Utils
{
    public static class ScreenCast
    {
        delegate bool EnumWindowsProc(IntPtr hWnd, int lParam);
        // inspiration from http://blog.tcx.be/2006/05/getting-list-of-all-open-windows.html
        public static IDictionary<IntPtr, String> EnumWindows()
        {
            IntPtr lShellWindow = NativeMethods.GetShellWindow();
            Dictionary<IntPtr, String> lWindows = new Dictionary<IntPtr, string>();

            NativeMethods.EnumWindows(delegate(IntPtr hWnd, int lParam)
            {
                if (hWnd == lShellWindow) return true;
                if (!NativeMethods.IsWindowVisible(hWnd)) return true;

                int lLength = NativeMethods.GetWindowTextLength(hWnd);
                if (lLength == 0) return true;

                StringBuilder lBuilder = new StringBuilder(lLength + 1);
                NativeMethods.GetWindowText(hWnd, lBuilder, lBuilder.Capacity);

                lWindows[hWnd] = lBuilder.ToString();
                return true;

            }, 0);

            return lWindows;
        }

        public static Image GetSmallWindowIcon(IntPtr hWnd)
        {
            try
            {
                IntPtr hIcon = default(IntPtr);

                hIcon = NativeMethods.SendMessage(hWnd, (int)NativeMethods.WM_GETICON, NativeMethods.ICON_BIG, IntPtr.Zero);

                if (hIcon == IntPtr.Zero)
                {
                    hIcon = NativeMethods.SendMessage(hWnd, (int)NativeMethods.WM_GETICON, NativeMethods.ICON_SMALL2, IntPtr.Zero);
                }

                if (hIcon == IntPtr.Zero)
                {
                    hIcon = NativeMethods.SendMessage(hWnd, (int)NativeMethods.WM_GETICON, NativeMethods.ICON_SMALL, IntPtr.Zero);
                }

                if (hIcon == IntPtr.Zero)
                {
                    hIcon = GetClassLongPtr(hWnd, NativeMethods.GCL_HICON);
                }

                if (hIcon == IntPtr.Zero)
                {
                    hIcon = NativeMethods.LoadIcon(IntPtr.Zero, NativeMethods.IDI_APPLICATION);
                }

                if (hIcon != IntPtr.Zero)
                {
                    return new Bitmap(Icon.FromHandle(hIcon).ToBitmap(), 32, 32);
                }
                else
                {
                    return null;
                }
            }
            catch (Exception)
            {
                return null;
            }
        }

        static IntPtr GetClassLongPtr(IntPtr hWnd, int nIndex)
        {
            if (IntPtr.Size == 4)
            {
                return new IntPtr((long)NativeMethods.GetClassLong32(hWnd, nIndex));
            }
            else
            {
                return NativeMethods.GetClassLong64(hWnd, nIndex);
            }
        }
    }
}
