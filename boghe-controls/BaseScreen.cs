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

namespace BogheControls
{
    public class BaseScreen : UserControl
    {
        protected String baseScreenId;

        public BaseScreen()
        {
            this.HorizontalAlignment = System.Windows.HorizontalAlignment.Stretch;
            this.VerticalAlignment = System.Windows.VerticalAlignment.Stretch;
            this.baseScreenId = Guid.NewGuid().ToString();
        }

        public virtual String BaseScreenId
        {
            get { return this.baseScreenId; }
            set { this.baseScreenId = value; }
        }

        public virtual String BaseScreenTitle
        {
            get { throw new Exception("BaseScreen::ScreenType must be overrided."); }
        }

        public virtual int BaseScreenType
        {
            get { throw new Exception("BaseScreen::ScreenType must be overrided."); }
        }

        public virtual void BeforeLoading()
        {
            throw new Exception("BaseScreen::BeforeLoding must be overrided.");
        }

        public virtual void AfterLoading()
        {
            throw new Exception("BaseScreen::AfterLoading must be overrided.");
        }

        public virtual void BeforeUnLoading()
        {
            throw new Exception("BaseScreen::BeforeUnLoding must be overrided.");
        }

        public virtual void AfterUnLoading()
        {
            throw new Exception("BaseScreen::AfterUnLoading must be overrided.");
        }
    }
}
