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
using System.Windows.Controls;
using System.Windows;

namespace BogheControls
{
    public class BaseItem2<U,V> : UserControl
    {
        private bool loaded;
        public event EventHandler ValuesLoaded;
        
        public static DependencyProperty Value1Property = DependencyProperty.Register(
            "Value1", typeof(U), typeof(BaseItem<U>));
        public static DependencyProperty Value2Property = DependencyProperty.Register(
            "Value2", typeof(V), typeof(BaseItem<V>));

        public BaseItem2()
            : base()
        {
            this.Loaded += this.BaseItem_Loaded;
        }

        public U Value1
        {
            get { return ((U)this.GetValue(Value1Property)); }
            set { this.SetValue(Value1Property, value); }
        }

        public V Value2
        {
            get { return ((V)this.GetValue(Value2Property)); }
            set { this.SetValue(Value2Property, value); }
        }

        public void BaseItem_Loaded(object sender, System.Windows.RoutedEventArgs e)
        {
            if (!this.loaded)
            {
                this.loaded = true;
                if (this.ValuesLoaded != null)
                {
                    this.ValuesLoaded(sender, EventArgs.Empty);
                }
            }
        }
    }
}
