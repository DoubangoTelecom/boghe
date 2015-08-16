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
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace org.doubango.tinyWRAP
{
    public static class tinyWRAP
    {
        public static readonly int tsip_event_code_dialog_transport_error = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_transport_error;
        public static readonly int tsip_event_code_dialog_global_error = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_global_error;
        public static readonly int tsip_event_code_dialog_message_error = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_message_error;

		// 8xx ==> success
        public static readonly int tsip_event_code_dialog_request_incoming = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_request_incoming;
        public static readonly int tsip_event_code_dialog_request_outgoing = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_request_outgoing;
        public static readonly int tsip_event_code_dialog_request_cancelled = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_request_cancelled;
        public static readonly int tsip_event_code_dialog_request_sent = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_request_sent;

		// 9xx ==> Informational
        public static readonly int tsip_event_code_dialog_connecting = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_connecting;
        public static readonly int tsip_event_code_dialog_connected = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_connected;
        public static readonly int tsip_event_code_dialog_terminating = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_terminating;
        public static readonly int tsip_event_code_dialog_terminated = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_dialog_terminated;
        public static readonly int tsip_event_code_stack_starting = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_stack_starting;
        public static readonly int tsip_event_code_stack_started = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_stack_started;
        public static readonly int tsip_event_code_stack_stopping = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_stack_stopping;
        public static readonly int tsip_event_code_stack_stopped = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_stack_stopped;
        public static readonly int tsip_event_code_stack_failed_to_start = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_stack_failed_to_start;
        public static readonly int tsip_event_code_stack_failed_to_stop = (int)doubango_rt.BackEnd.rtConstants.rt_tsip_event_code_stack_failed_to_stop;
    }
}
