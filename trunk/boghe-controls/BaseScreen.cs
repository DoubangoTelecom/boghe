using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Controls;

namespace BogheControls
{
    public class BaseScreen : UserControl
    {
        public BaseScreen()
        {
            this.HorizontalAlignment = System.Windows.HorizontalAlignment.Stretch;
            this.VerticalAlignment = System.Windows.VerticalAlignment.Stretch;
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
