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
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.ComponentModel;
using BogheCore.Events;

namespace BogheCore
{
    public class MyObservableCollection<T> : ObservableCollection<T>
        where T : IComparable<T>, INotifyPropertyChanged
    {
        private readonly bool trackItemsPropChanges;
        public event EventHandler<StringEventArgs> onItemPropChanged;

        public MyObservableCollection()
            : this(false)
        {
        }

        public MyObservableCollection(bool trackItemsPropChanges)
            : base() 
        {
            this.trackItemsPropChanges = trackItemsPropChanges;
        }

        public MyObservableCollection(IEnumerable<T> collection, bool trackItemsPropChanges)
            : base(collection) 
        {
            this.trackItemsPropChanges = trackItemsPropChanges;
        }

        public void RemoveRange(IEnumerable<T> collection)
        {
            foreach (var i in collection)
            {
                this.Items.Remove(i);
            }

            this.OnCollectionChanged(new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Reset));
        }
        
        public void Replace(T item)
        {
            this.ReplaceRange(new T[] { item });
        }

        public void ReplaceRange(IEnumerable<T> collection)
        {
            this.Items.Clear();

            foreach (var i in collection)
            {
                this.Items.Add(i);
            }

            this.OnCollectionChanged(new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Reset));
        }

        public void AddRange(IEnumerable<T> collection)
        {
            foreach (var i in collection)
            {
                this.Items.Add(i);
            }

            this.OnCollectionChanged(new NotifyCollectionChangedEventArgs(NotifyCollectionChangedAction.Reset));
        }

        public List<T> FindAll(Predicate<T> matcher)
        {
            List<T> items = this.Items as List<T>;
            return items.FindAll(matcher);
        }

        public int RemoveAll(Predicate<T> match)
        {
            List<T> items = this.Items as List<T>;
            return items.RemoveAll(match);
        }

        protected override void OnCollectionChanged(NotifyCollectionChangedEventArgs e)
        {
            if (this.trackItemsPropChanges)
            {
                switch (e.Action)
                {
                    case NotifyCollectionChangedAction.Add:
                        {
                            foreach (T item in e.NewItems)
                            {
                                item.PropertyChanged += this.item_PropertyChanged;
                            }
                            break;
                        }

                    case NotifyCollectionChangedAction.Remove:
                        {
                            foreach (T item in e.OldItems)
                            {
                                item.PropertyChanged -= this.item_PropertyChanged;
                            }
                            break;
                        }

                    case NotifyCollectionChangedAction.Reset:
                        {
                            foreach (T item in this.Items)
                            {
                                item.PropertyChanged += this.item_PropertyChanged;
                            }
                            break;
                        }
                }
            }

            base.OnCollectionChanged(e);
        }

        private void item_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            EventHandlerTrigger.TriggerEvent<StringEventArgs>(this.onItemPropChanged, this, 
                new StringEventArgs(e.PropertyName));
        }
    }
}
