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
using System;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;
using doubango_rt.BackEnd;

using T140CallbackData = doubango_rt.BackEnd.rtT140CallbackData;

namespace org.doubango.tinyWRAP
{
    public class T140Callback : rtIT140Callback
    {
        readonly rtT140Callback m_rtT140Callback;

        public T140Callback()
        {
#if WINDOWS_PHONE
            m_rtT140Callback = org.doubango.WindowsPhone.BackgroundProcessController.Instance.rtT140CallbackNew(this);
#else
            m_rtT140Callback = new rtT140Callback(this);
#endif
        }

        public virtual int ondata(T140CallbackData pData)
        {
            return 0;
        }
    }
}
