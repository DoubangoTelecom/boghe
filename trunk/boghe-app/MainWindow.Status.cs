using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BogheApp
{
    partial class MainWindow
    {
        public class Status
        {
            string text;
            string imageSource;

            public Status(string text, String imageSource)
            {
                this.text = text;
                this.imageSource = imageSource;
            }

            public String Text
            {
                get { return this.text; }
            }

            public String ImageSource
            {
                get { return this.imageSource; }
            }
        }
    }
}
