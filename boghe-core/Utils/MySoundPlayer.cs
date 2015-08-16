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
#if !WINRT
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;
using System.IO;

namespace BogheCore.Utils
{
    public class MySoundPlayer : IDisposable
    {
        private GCHandle? handle;
        private Object owner;
        private const NativeMethods.SoundFlags FLAGS = NativeMethods.SoundFlags.SND_MEMORY | NativeMethods.SoundFlags.SND_SYNC;

        public void Play(Object owner, Stream stream, bool loop)
        {
            this.owner = owner;
            this.Play(null, MySoundPlayer.FLAGS);
            this.Play(stream, loop ? MySoundPlayer.FLAGS | NativeMethods.SoundFlags.SND_LOOP : MySoundPlayer.FLAGS);
        }

        public void Play(Object owner, Stream stream)
        {
            this.Play(owner, stream, false);
        }

        public void Stop(Object owner)
        {
            if (owner == this.owner)
            {
                this.Play(null, MySoundPlayer.FLAGS);
                this.Free();
            }
        }
        
        public void Dispose()
        {
            this.Stop(this.owner);
            this.Free();
        }

        private void Play(Stream stream, NativeMethods.SoundFlags flags)
        {
            byte[] bytesToPlay = GetBytes(stream);
            if (bytesToPlay != null)
            {
                this.handle = GCHandle.Alloc(bytesToPlay, GCHandleType.Pinned);
                NativeMethods.PlaySound(handle.Value.AddrOfPinnedObject(), UIntPtr.Zero, flags);
            }
            else
            {
                NativeMethods.PlaySound(null, UIntPtr.Zero, flags);
            }
        }
        
        private void Free()
        {
            if (this.handle != null)
            {
                NativeMethods.PlaySound(null, UIntPtr.Zero, 0);
                this.handle.Value.Free();
                this.handle = null;
            }
        }
        
        private static byte[] GetBytes(Stream stream)
        {
            if (stream != null)
            {
                byte[] bytes = new byte[stream.Length];
                stream.Read(bytes, 0, bytes.Length);
                return bytes;
            }
            return null;
        }
    }
}
#endif //!WINRT