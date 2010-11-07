using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BogheApp.Screens
{
    partial class ScreenContacts
    {
        public override String BaseScreenTitle
        {
            get { return "Contacts"; }
        }

        public override int BaseScreenType
        {
            get { return (int)BogheApp.Screens.ScreenType.Contacts; }
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
