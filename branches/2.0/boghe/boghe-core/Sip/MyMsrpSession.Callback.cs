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
using org.doubango.tinyWRAP;
using System.IO;
using BogheCore.Events;
using BogheCore.Sip.Events;

namespace BogheCore.Sip
{
    partial class MyMsrpSession
    {
        class MyMsrpCallback : MsrpCallback
        {
            private readonly MyMsrpSession session;
            private byte[] tempBuffer;
            private MemoryStream chatStream;
            private String contentType;
            private String wContentType;

            internal MyMsrpCallback(MyMsrpSession session)
                : base()
            {
                this.session = session;
            }

            public override void Dispose()
            {
                if (this.chatStream != null)
                {
                    this.chatStream.Close();
                }
            }

            private bool AppenData(byte[] data, uint len)
            {
                try
                {
                    if (this.session.MediaType == MediaType.Chat)
                    {
                        if (this.chatStream == null)
                        {
                            this.chatStream = new MemoryStream(); // Expandable memory stream
                        }

                        this.chatStream.Write(data, 0, (int)len);
                    }
                    else if (this.session.MediaType == MediaType.FileTransfer)
                    {
                        if (this.session.mOutFileStream == null)
                        {
                            LOG.Error("Null FileStream");
                            return false;
                        }
                        else
                        {
                            lock (this.session.mOutFileStream)
                            {
                                this.session.mOutFileStream.Write(data, 0, (int)len);
                            }
                        }
                    }
                }
                catch (Exception e)
                {
                    LOG.Error(e);
                    return false;
                }

                return true;
            }

            private void ProcessResponse(MsrpMessage message)
            {
                short code = message.getCode();

                if (code >= 200 && code <= 299)
                {
                    // File Transfer => ProgressBar
                    if (this.session.MediaType == MediaType.FileTransfer)
                    {
                        long start = -1, end = -1, total = -1;
                        message.getByteRange(out start, out end, out total);
                        MsrpEventArgs eargs = new MsrpEventArgs(this.session.Id, MsrpEventTypes.SUCCESS_2XX);
                        eargs.AddExtra(MsrpEventArgs.EXTRA_BYTE_RANGE_START, start)
                            .AddExtra(MsrpEventArgs.EXTRA_BYTE_RANGE_END, end)
                            .AddExtra(MsrpEventArgs.EXTRA_BYTE_RANGE_TOTAL, total)
                            .AddExtra(MsrpEventArgs.EXTRA_RESPONSE_CODE, code)
                            .AddExtra(MsrpEventArgs.EXTRA_SESSION, this.session);
                        EventHandlerTrigger.TriggerEvent<MsrpEventArgs>(this.session.mOnMsrpEvent, this.session, eargs);
                    }
                }
                else if (code >= 300)
                {
                    MsrpEventArgs eargs = new MsrpEventArgs(this.session.Id, MsrpEventTypes.ERROR);
                        eargs.AddExtra(MsrpEventArgs.EXTRA_RESPONSE_CODE, code)
                            .AddExtra(MsrpEventArgs.EXTRA_SESSION, this.session);
                    EventHandlerTrigger.TriggerEvent<MsrpEventArgs>(this.session.mOnMsrpEvent, this.session, eargs);
                }
            }

            private void ProcessRequest(MsrpMessage message)
            {
                tmsrp_request_type_t type = message.getRequestType();

                switch (type)
                {
                    case tmsrp_request_type_t.tmsrp_SEND:
                        {
                            uint clen = message.getMsrpContentLength();
                            uint read = 0;
                            if (clen == 0)
                            {
                                LOG.Info("Empty MSRP message");
                                return;
                            }

                            if (this.tempBuffer == null || this.tempBuffer.Length < clen)
                            {
                                this.tempBuffer = new byte[(int)clen];
                            }

                            read = message.getMsrpContent(this.tempBuffer, (uint)this.tempBuffer.Length);
                            if (message.isFirstChunck())
                            {
                                this.contentType = message.getMsrpHeaderValue("Content-Type");
                                if (!String.IsNullOrEmpty(contentType) && contentType.StartsWith(ContentType.CPIM, StringComparison.InvariantCultureIgnoreCase))
                                {
                                    MediaContentCPIM mediaContent = MediaContent.parse(this.tempBuffer, read);
                                    if (mediaContent != null)
                                    {
                                        this.wContentType = mediaContent.getHeaderValue("Content-Type");
                                        this.tempBuffer = mediaContent.getPayload();
                                        read = (uint)this.tempBuffer.Length;
                                        mediaContent.Dispose(); // Hi GC, I want my memory right now
                                    }
                                }
                            }
                             
                            this.AppenData(this.tempBuffer, read);

                            // File Transfer => ProgressBar
                            if (this.session.MediaType == MediaType.FileTransfer)
                            {
                                long start = -1, end = -1, total = -1;
                                message.getByteRange(out start, out end, out total);
                                MsrpEventArgs eargs = new MsrpEventArgs(this.session.Id, MsrpEventTypes.DATA);
                                eargs.AddExtra(MsrpEventArgs.EXTRA_BYTE_RANGE_START, start)
                                    .AddExtra(MsrpEventArgs.EXTRA_BYTE_RANGE_END, end)
                                    .AddExtra(MsrpEventArgs.EXTRA_BYTE_RANGE_TOTAL, total)
                                    .AddExtra(MsrpEventArgs.EXTRA_REQUEST_TYPE, "SEND")
                                    .AddExtra(MsrpEventArgs.EXTRA_SESSION, this.session);
                                EventHandlerTrigger.TriggerEvent<MsrpEventArgs>(this.session.mOnMsrpEvent, this.session, eargs);
                            }

                            if (message.isLastChunck())
                            {
                                if (this.session.MediaType == MediaType.Chat && this.chatStream != null)
                                {
                                    MsrpEventArgs eargs = new MsrpEventArgs(this.session.Id, MsrpEventTypes.DATA);
                                    eargs.AddExtra(MsrpEventArgs.EXTRA_CONTENT_TYPE, this.contentType)
                                        .AddExtra(MsrpEventArgs.EXTRA_WRAPPED_CONTENT_TYPE, this.wContentType)
                                        .AddExtra(MsrpEventArgs.EXTRA_DATA, this.chatStream.ToArray())
                                        .AddExtra(MsrpEventArgs.EXTRA_SESSION, this.session);
                                    EventHandlerTrigger.TriggerEvent<MsrpEventArgs>(this.session.mOnMsrpEvent, this.session, eargs);
                                    this.chatStream.SetLength(0);
                                }
                                else if (this.session.MediaType == MediaType.FileTransfer)
                                {
                                    if (this.session.mOutFileStream != null)
                                    {
                                        lock (this.session.mOutFileStream)
                                        {
                                            this.session.mOutFileStream.Close();
                                            this.session.mOutFileStream = null;
                                        }
                                    }
                                }
                            }

                            break;
                        }

                    case tmsrp_request_type_t.tmsrp_REPORT:
                        {
                            break;
                        }

                    case tmsrp_request_type_t.tmsrp_NONE:
                    case tmsrp_request_type_t.tmsrp_AUTH:
                    default:
                        break;
                }
            }

            public override int OnEvent(MsrpEvent e)
            {
                tmsrp_event_type_t type = e.getType();
                SipSession session = e.getSipSession();

                if (session == null || session.getId() != this.session.Id)
                {
                    LOG.Error("Invalid session");
                    return -1;
                }

                switch (type)
                {
                    case tmsrp_event_type_t.tmsrp_event_type_connected:
                        {
                            MsrpEventArgs eargs = new MsrpEventArgs(this.session.Id, MsrpEventTypes.CONNECTED);
                            eargs.AddExtra(MsrpEventArgs.EXTRA_SESSION, this.session);
                            EventHandlerTrigger.TriggerEvent<MsrpEventArgs>(this.session.mOnMsrpEvent, this.session, eargs);

                            if (this.session.mPendingMessages != null && this.session.mPendingMessages.Count > 0)
                            {
                                if (this.session.IsConnected)
                                {
                                    foreach (PendingMessage pendingMsg in this.session.mPendingMessages)
                                    {
                                        LOG.Info("Sending pending message...");
                                        this.session.SendMessage(pendingMsg.Message, pendingMsg.ContentType, pendingMsg.WContentType);
                                    }
                                    this.session.mPendingMessages.Clear();
                                }
                                else
                                {
                                    LOG.Warn("There are pending messages but we are not connected");
                                }
                            }
                            break;
                        }

                    case tmsrp_event_type_t.tmsrp_event_type_disconnected:
                        {
                            if (this.session.mOutFileStream != null)
                            {
                                lock (this.session.mOutFileStream)
                                {
                                    if (this.session.mOutFileStream != null)
                                    {
                                        this.session.mOutFileStream.Close();
                                        this.session.mOutFileStream = null;
                                    }
                                }
                            }

                            MsrpEventArgs eargs = new MsrpEventArgs(this.session.Id, MsrpEventTypes.DISCONNECTED);
                            eargs.AddExtra(MsrpEventArgs.EXTRA_SESSION, this.session);
                            EventHandlerTrigger.TriggerEvent<MsrpEventArgs>(this.session.mOnMsrpEvent, this.session, eargs);
                            break;
                        }

                    case tmsrp_event_type_t.tmsrp_event_type_message:
                        {
                            MsrpMessage message = e.getMessage();
                            if (message == null)
                            {
                                LOG.Error("Invalid MSRP content");
                                return -1;
                            }

                            if (message.isRequest())
                            {
                                this.ProcessRequest(message);
                            }
                            else
                            {
                                this.ProcessResponse(message);
                            }

                            break;
                        }

                    default:
                        break;
                }

                return 0;
            }
        }
    }
}
