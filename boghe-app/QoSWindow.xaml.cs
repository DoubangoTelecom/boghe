using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;
using org.doubango.tinyWRAP;

namespace BogheApp
{
    /// <summary>
    /// Interaction logic for QoSWindow.xaml
    /// </summary>
    public partial class QoSWindow : Window
    {
        QoS mInfo;

        public QoSWindow()
        {
            InitializeComponent();
        }

        public QoS Info
        {
            get
            {
                return mInfo;
            }
            set
            {
                mInfo = value;
                if (mInfo == null)
                {
                    labelInfo.Content = "<< none >>";
                }
                else
                {
                    labelInfo.Content = String.Format("Quality:  {0}%\nReceiving:  {1}Kbps\nSending:  {2}Kbps\nVideo in:  {3}x{4}\nVideo out:  {5}x{6}\nVideo in fps:  {7}\nVideo enc. time:  {8}millis\nVideo dec. time:  {9}millis",
                                (uint)(mInfo.getQavg() * 100),
                                mInfo.getBandwidthDownKbps(),
                                mInfo.getBandwidthUpKbps(),
                                mInfo.getVideoInWidth(),
                                mInfo.getVideoInHeight(),
                                mInfo.getVideoOutWidth(),
                                mInfo.getVideoOutHeight(),
                                mInfo.getVideoInAvgFps(),
                                mInfo.getVideoEncAvgTime(),
                                mInfo.getVideoDecAvgTime()
                                );
                }
            }
        }
    }
}
