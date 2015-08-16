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
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows;
using System.Drawing;

namespace BogheControls.Utils
{
    public static class MyImageConverter
    {
        public static ImageSource FromBitmap(Bitmap bitmap)
        {
            if (bitmap == null)
            {
                return null;
            }
            return System.Windows.Interop.Imaging.CreateBitmapSourceFromHBitmap(bitmap.GetHbitmap(), IntPtr.Zero,
                        Int32Rect.Empty, BitmapSizeOptions.FromEmptyOptions());
        }

        public static ImageSource FromImage(Image image)
        {
            if (image == null)
            {
                return null;
            }
            return MyImageConverter.FromBitmap(new Bitmap(image));
        }

        public static ImageSource FromIcon(Icon icon)
        {
            if (icon == null)
            {
                return null;
            }
            return System.Windows.Interop.Imaging.CreateBitmapSourceFromHIcon(icon.Handle,
                        Int32Rect.Empty, BitmapSizeOptions.FromEmptyOptions());
        }    
    }
}
