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
using System.Globalization;

namespace BogheControls
{
    public class BaseItem<T>: UserControl
    {
        private bool loaded;
        public event EventHandler ValueLoaded;
        
        public static DependencyProperty ValueProperty = DependencyProperty.Register(
            "Value", typeof(T), typeof(BaseItem<T>));

        public BaseItem() : base()
        {
            this.Loaded += this.BaseItem_Loaded;
        }

        public T Value
        {
            get { return ((T)this.GetValue(ValueProperty)); }
            set { this.SetValue(ValueProperty, value); }
        } 

        public void BaseItem_Loaded(object sender, System.Windows.RoutedEventArgs e)
        {
            if (!this.loaded)
            {
                this.loaded = true;
                if (this.ValueLoaded != null)
                {
                    this.ValueLoaded(sender, EventArgs.Empty);
                }
            }
        }

        protected static String GetFriendlyDateString(DateTime date)
        {
            DateTime _date = new DateTime(date.Year, date.Month, date.Day);
            if (DateTime.Today.Equals(_date))
            {
                return String.Format("Today {0}", date.ToLongTimeString());
            }
            else if ((DateTime.Today - _date).Days == 1)
            {
                return String.Format("Yesterday {0}", date.ToLongTimeString());
            }
            else
            {
                return date.ToString("yyyy-MM-dd HH:mm:ss", CultureInfo.CurrentUICulture);
            }
        }
    }
}
