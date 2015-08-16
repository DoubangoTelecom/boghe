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
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Windows.Media;
using System.Threading;
using System.Diagnostics;

namespace doubango_rt.Agents
{
    public class VideoMediaStreamSource : MediaStreamSource, IDisposable
    {
        public class VideoSample
        {
            public VideoSample(Windows.Storage.Streams.IBuffer _buffer, UInt64 _hnsPresentationTime, UInt64 _hnsSampleDuration)
            {
                buffer = _buffer;
                hnsPresentationTime = _hnsPresentationTime;
                hnsSampleDuration = _hnsSampleDuration;
            }

            public Windows.Storage.Streams.IBuffer buffer;
            public UInt64 hnsPresentationTime;
            public UInt64 hnsSampleDuration;
        }

        private const int maxQueueSize = 4;
        private int _frameWidth;
        private int _frameHeight;
        private bool isDisposed = false;
        private Queue<VideoSample> _sampleQueue;

        private object lockObj = new object();
        private ManualResetEvent shutdownEvent;

        private int _outstandingGetVideoSampleCount;

        private MediaStreamDescription _videoDesc;
        private Dictionary<MediaSampleAttributeKeys, string> _emptySampleDict = new Dictionary<MediaSampleAttributeKeys, string>();

        public VideoMediaStreamSource(Stream audioStream, int frameWidth, int frameHeight)
        {
            Debug.WriteLine("VideoMediaStreamSource::ctor()");

            _frameWidth = frameWidth;
            _frameHeight = frameHeight;
            shutdownEvent = new ManualResetEvent(false);
            _sampleQueue = new Queue<VideoSample>(VideoMediaStreamSource.maxQueueSize);
            _outstandingGetVideoSampleCount = 0;
            BackEnd.Globals.Instance.VideoFrameReceived += Instance_VideoFrameReceived;
        }

        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        public void Shutdown()
        {
            shutdownEvent.Set();
            lock (lockObj)
            {
                if (_outstandingGetVideoSampleCount > 0)
                {
                    // ReportGetSampleCompleted must be called after GetSampleAsync to avoid memory leak. So, send
                    // an empty MediaStreamSample here.
                    MediaStreamSample msSamp = new MediaStreamSample(
                        _videoDesc,
                        null,
                        0,
                        0,
                        0,
                        0,
                        _emptySampleDict);
                    ReportGetSampleCompleted(msSamp);
                    _outstandingGetVideoSampleCount = 0;
                }
            }
        }

        protected virtual void Dispose(bool disposing)
        {
            if (!this.isDisposed)
            {
                if (disposing)
                {
                    //BackEnd.Globals.Instance.TransportController.VideoMessageReceived -= TransportController_VideoMessageReceived;
                    BackEnd.Globals.Instance.VideoFrameReceived -= Instance_VideoFrameReceived;
                }
                isDisposed = true;
            }
        }

        void Instance_VideoFrameReceived(Windows.Storage.Streams.IBuffer ibuffer, ulong hnsPresenationTime, ulong hnsSampleDuration)
        {
            lock (lockObj)
            {
                if (_sampleQueue.Count >= VideoMediaStreamSource.maxQueueSize)
                {
                    // Dequeue and discard oldest
                    _sampleQueue.Dequeue();
                }

                _sampleQueue.Enqueue(new VideoSample(ibuffer, hnsPresenationTime, hnsSampleDuration));
                SendSamples();
            }
        }

        private void SendSamples()
        {
            while (_sampleQueue.Count() > 0 && _outstandingGetVideoSampleCount > 0)
            {
                if (!(shutdownEvent.WaitOne(0)))
                {
                    VideoSample vs = _sampleQueue.Dequeue();
                    Stream s = System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions.AsStream(vs.buffer);

                    // Send out the next sample
                    MediaStreamSample msSamp = new MediaStreamSample(
                        _videoDesc,
                        s,
                        0,
                        s.Length,
                        (long)vs.hnsPresentationTime,
                        (long)vs.hnsSampleDuration,
                        _emptySampleDict);

                    ReportGetSampleCompleted(msSamp);
                    _outstandingGetVideoSampleCount--;
                }
                else
                {
                    // If video rendering is shutting down we should no longer deliver frames
                    return;
                }
            }
        }

        private void PrepareVideo()
        {
            Debug.WriteLine("VideoMediaStreamSource::PrepareVideo()");
            // Stream Description 
            Dictionary<MediaStreamAttributeKeys, string> streamAttributes =
                new Dictionary<MediaStreamAttributeKeys, string>();

            // Select the same encoding and dimensions as the video capture
            streamAttributes[MediaStreamAttributeKeys.VideoFourCC] = "H264";
            streamAttributes[MediaStreamAttributeKeys.Height] = _frameHeight.ToString();
            streamAttributes[MediaStreamAttributeKeys.Width] = _frameWidth.ToString();

            MediaStreamDescription msd =
                new MediaStreamDescription(MediaStreamType.Video, streamAttributes);

            _videoDesc = msd;
        }

        private void PrepareAudio()
        {
        }

        protected override void OpenMediaAsync()
        {
            Debug.WriteLine("VideoMediaStreamSource::OpenMediaAsync()");

            // Init
            Dictionary<MediaSourceAttributesKeys, string> sourceAttributes =
                new Dictionary<MediaSourceAttributesKeys, string>();
            List<MediaStreamDescription> availableStreams =
                new List<MediaStreamDescription>();

            PrepareVideo();

            availableStreams.Add(_videoDesc);

            // a zero timespan is an infinite video
            sourceAttributes[MediaSourceAttributesKeys.Duration] =
                TimeSpan.FromSeconds(0).Ticks.ToString(CultureInfo.InvariantCulture);

            sourceAttributes[MediaSourceAttributesKeys.CanSeek] = false.ToString();

            // tell Silverlight that we've prepared and opened our video
            ReportOpenMediaCompleted(sourceAttributes, availableStreams);
        }

        protected override void GetSampleAsync(MediaStreamType mediaStreamType)
        {
            if (mediaStreamType == MediaStreamType.Audio)
            {
            }
            else if (mediaStreamType == MediaStreamType.Video)
            {
                lock (lockObj)
                {
                    _outstandingGetVideoSampleCount++;
                    SendSamples();
                }
            }
        }

        protected override void CloseMedia()
        {
        }

        protected override void GetDiagnosticAsync(MediaStreamSourceDiagnosticKind diagnosticKind)
        {
            throw new NotImplementedException();
        }

        protected override void SwitchMediaStreamAsync(MediaStreamDescription mediaStreamDescription)
        {
            throw new NotImplementedException();
        }

        protected override void SeekAsync(long seekToTime)
        {
            ReportSeekCompleted(seekToTime);
        }
    }
}
