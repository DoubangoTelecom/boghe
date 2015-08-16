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
using System.ComponentModel;

namespace BogheCore.Model
{
    public class RunningApp : IComparable<RunningApp>, INotifyPropertyChanged
    {
        readonly IntPtr m_hWnd;
        readonly String m_Description;
        readonly Image m_Icon;

        public RunningApp(IntPtr hWnd, String description, Image icon)
        {
            m_hWnd = hWnd;
            m_Description = description;
            m_Icon = icon;
        }

        public IntPtr hWnd
        {
            get
            {
                return m_hWnd;
            }
        }
        public String Description
        {
            get
            {
                return m_Description;
            }
        }
        public Image Icon
        {
            get
            {
                return m_Icon;
            }
        }

        public int CompareTo(RunningApp other)
        {
            if (other == null)
            {
                throw new ArgumentNullException("other");
            }
            return this.hWnd.ToInt32() - other.hWnd.ToInt32();
        }

        public event PropertyChangedEventHandler PropertyChanged;
        private void OnPropertyChanged(String propertyName)
        {
            if (this.PropertyChanged != null)
            {
                this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
            }
        }
    }
}
