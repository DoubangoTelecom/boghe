using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BogheApp.Screens
{
    partial class ScreenAuthentication
    {
        public override String BaseScreenTitle
        {
            get { return "Authentication"; }
        }

        public override int BaseScreenType
        {
            get { return (int)BogheApp.Screens.ScreenType.Authentication; }
        }

        public override void BeforeLoading()
        {

        }

        public override void AfterLoading()
        {

        }

        public override void BeforeUnLoading()
        {

        }

        public override void AfterUnLoading()
        {

        }
    }
}
