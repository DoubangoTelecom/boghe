/* 
    Copyright (c) 2012 Microsoft Corporation.  All rights reserved.
    Use of this sample source code is subject to the terms of the Microsoft license 
    agreement under which you licensed this sample source code and is provided AS-IS.
    If you did not accept the terms of the license agreement, you are not authorized 
    to use this sample source code.  For the terms of the license, please see the 
    license agreement between you and Microsoft.
*/
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
using Microsoft.Phone.Media;
using doubango_rt.BackEnd;
using System;
using System.Diagnostics;
using System.Windows;

namespace doubango_rt.Agents
{
    /// <summary>
    /// A class that renders video from the background process.
    /// Note, the MediaElement that actually displays the video is in the UI process - 
    /// this class receives video from the remote party and writes it to a media streamer.
    /// The media streamer handles connecting the rendered video stream to the media element that
    /// displays it in the UI process.
    /// </summary>
    internal class VideoRenderer : IVideoRenderer
    {
        /// <summary>
        /// Constructor
        /// </summary>
        internal VideoRenderer()
        {
        }

        #region IVideoRenderer methods

        /// <summary>
        /// Start rendering video.
        /// Note, this method may be called multiple times in a row.
        /// </summary>
        public void Start()
        {
            if (this.isRendering)
                return; // Nothing more to be done

            Deployment.Current.Dispatcher.BeginInvoke(() =>
            {
                try
                {
                    Debug.WriteLine("[VideoRenderer::Start] Video rendering setup");
                    StartMediaStreamer();
                    this.isRendering = true;
                }
                catch (Exception err)
                {
                    Debug.WriteLine("[VideoRenderer::Start] " + err.Message);
                }
            });
        }

        private void StartMediaStreamer()
        {
            if (mediaStreamer == null)
            {
                mediaStreamer = MediaStreamerFactory.CreateMediaStreamer(123);
            }

            // Using default resolution of 640x480
            mediaStreamSource = new VideoMediaStreamSource(null, 640, 480);
            mediaStreamer.SetSource(mediaStreamSource);
        }

        /// <summary>
        /// Stop rendering video.
        /// Note, this method may be called multiple times in a row.
        /// </summary>
        public void Stop()
        {
            Deployment.Current.Dispatcher.BeginInvoke(() =>
            {
                if (!this.isRendering)
                    return; // Nothing more to be done

                Debug.WriteLine("[VoIP Background Process] Video rendering stopped.");
                mediaStreamSource.Shutdown();                
                mediaStreamSource.Dispose();
                mediaStreamSource = null;
                mediaStreamer.Dispose();
                mediaStreamer = null;

                this.isRendering = false;
            });
        }

        #endregion

        #region Private members

        // Indicates if rendering is already in progress or not
        private bool isRendering;
        private VideoMediaStreamSource mediaStreamSource;
        private MediaStreamer mediaStreamer;

        #endregion
    }
}
