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
using System.Runtime.InteropServices;

namespace BogheCore
{
    internal static class NativeMethods
    {
        [DllImport("winmm.dll", EntryPoint = "PlaySound", SetLastError = true)]
        internal static extern bool PlaySound(byte[] ptrToSound, UIntPtr hmod, SoundFlags fdwSound);
        
        [DllImport("winmm.dll", EntryPoint = "PlaySound", SetLastError = true)]
        internal static extern bool PlaySound(IntPtr ptrToSound, UIntPtr hmod, SoundFlags fdwSound);

        [Flags]
        internal enum SoundFlags
        {
            SND_SYNC = 0x0000, // play synchronously (default)
            SND_ASYNC = 0x0001, // play asynchronously
            SND_NODEFAULT = 0x0002, // silence (!default) if sound not found
            SND_MEMORY = 0x0004, // pszSound points to a memory file
            SND_LOOP = 0x0008, // loop the sound until next sndPlaySound
            SND_NOSTOP = 0x0010, // don't stop any currently playing sound
            SND_NOWAIT = 0x00002000, // don't wait if the driver is busy
            SND_ALIAS = 0x00010000, // name is a registry alias
            SND_ALIAS_ID = 0x00110000, // alias is a predefined id
            SND_FILENAME = 0x00020000, // name is file name
            SND_PURGE = 0x0040 // purge non-static events for task
        }
    }
}
