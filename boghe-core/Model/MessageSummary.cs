/*
* Boghe IMS/RCS Client - Copyright (C) 2012 Doubango Telecom <http://www.doubango.org>
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
using System.Text.RegularExpressions;
using log4net;

namespace BogheCore.Model
{
    public class MessageSummary
    {
        private readonly String mAccount;
        private readonly bool mHaveWaitingMessages;
        private readonly Dictionary<String, int> mNewMessages = new Dictionary<String, int>();
        private readonly Dictionary<String, int> mOldMessages = new Dictionary<String, int>();
        private readonly Dictionary<String, int> mNewUrgentMessages = new Dictionary<String, int>();
        private readonly Dictionary<String, int> mOldUrgentMessages = new Dictionary<String, int>();

        private static readonly ILog LOG = LogManager.GetLogger(typeof(MessageSummary));

        private static readonly Regex MESSAGE_SUMMARY_EXPR = new Regex(
            @"(?<msg_status_line>^Messages-Waiting\s*:\s*(?<msg_status>yes|no)(\r\n)?)" +
            @"(?<msg_account>^Message\-Account\s*:\s*(?<account_uri>sips*:[A-Za-z0-9@\.]+)(\r\n)?)?" +
            @"(?<msg_summary_line>^(?<message_context_class>Voice-Message|Fax-Message|Pager-Message|Multimedia-Message|Text-Message)\s*:\s*(?<newmsgs>[0-9]{1,16})\/(?<oldmsgs>[0-9]{1,16})(\s*\((?<new_urgentmsgs>[0-9]{1,16})\/(?<old_urgentmsgs>[0-9]{1,16})\))?(\r\n)?)*",
            RegexOptions.IgnoreCase | RegexOptions.Multiline | RegexOptions.CultureInvariant);

        private static readonly Regex SUMMARY_LINE_EXPR = new Regex(
            @"(?<message_context_class>Voice-Message|Fax-Message|Pager-Message|Multimedia-Message|Text-Message)\s*:\s*(?<newmsgs>[0-9]{1,16})\/(?<oldmsgs>[0-9]{1,16})(\s*\((?<new_urgentmsgs>[0-9]{1,16})\/(?<old_urgentmsgs>[0-9]{1,16})\))?",
            RegexOptions.IgnoreCase | RegexOptions.CultureInvariant);

        private MessageSummary(String account, bool haveWaitingMessages)
        {
            mAccount = account;
            mHaveWaitingMessages = haveWaitingMessages;
        }
        
        private void SetMessageCount(String messageClass, int newMessagesValue, int oldMessagesValue, int newUrgentMessagesValue, int oldUrgentMessagesValue)
        {
            mNewMessages[messageClass] = newMessagesValue;
            mOldMessages[messageClass] = oldMessagesValue;
            mNewUrgentMessages[messageClass] = newUrgentMessagesValue;
            mOldUrgentMessages[messageClass] = oldUrgentMessagesValue;
        }
        
        public string Account
        {
            get { return mAccount; }
        }
        
        public bool HaveWaitingMessages
        {
            get { return mHaveWaitingMessages; }
        }
        
        public int GetNewMessages(String messageClass)
        {
            return (mNewMessages.ContainsKey(messageClass) ? mNewMessages[messageClass] : 0);
        }
        
        public int GetOldMessages(String messageClass)
        {
            return (mOldMessages.ContainsKey(messageClass) ? mOldMessages[messageClass] : 0);
        }
        
        public int GetNewUrgentMessages(String messageClass)
        {
            return (mNewUrgentMessages.ContainsKey(messageClass) ? mNewUrgentMessages[messageClass] : 0);
        }
        
        public int GetOldUrgentMessages(String messageClass)
        {
            return (mOldUrgentMessages.ContainsKey(messageClass) ? mOldUrgentMessages[messageClass] : 0);
        }


        public static MessageSummary Parse(byte[] content)
        {
            try
            {
                if (content == null || content.Length == 0)
                {
                    return null;
                }

                MessageSummary ret = null;
                String body = Encoding.UTF8.GetString(content, 0, content.Length);

                Match messageMatch = MESSAGE_SUMMARY_EXPR.Match(body);
                if (messageMatch != null && messageMatch.Success)
                {
                    String status = messageMatch.Groups["msg_status"].Success ? messageMatch.Groups["msg_status"].Value : String.Empty;
                    String account = messageMatch.Groups["account_uri"].Success ? messageMatch.Groups["account_uri"].Value : String.Empty;

                    if (!String.IsNullOrEmpty(status) && !String.IsNullOrEmpty(account))
                    {
                        bool waitingMessages = (String.Equals(status, "yes", StringComparison.InvariantCultureIgnoreCase));

                        ret = new MessageSummary(account, waitingMessages);
                        if (waitingMessages)
                        {
                            System.Text.RegularExpressions.Group lines = messageMatch.Groups["msg_summary_line"];
                            foreach (Capture capture in lines.Captures)
                            {
                                String line = capture.Value;
                                Match lineMatch = SUMMARY_LINE_EXPR.Match(line);
                                if (lineMatch != null && lineMatch.Success)
                                {
                                    String messageClass = lineMatch.Groups["message_context_class"].Value;
                                    int newMessages = Convert.ToInt32(lineMatch.Groups["newmsgs"].Success ? lineMatch.Groups["newmsgs"].Value : "0");
                                    int oldMessages = Convert.ToInt32(lineMatch.Groups["oldmsgs"].Success ? lineMatch.Groups["oldmsgs"].Value : "0");
                                    int newUrgentMessages = Convert.ToInt32(lineMatch.Groups["new_urgentmsgs"].Success ? lineMatch.Groups["new_urgentmsgs"].Value : "0");
                                    int oldUrgentMessages = Convert.ToInt32(lineMatch.Groups["old_urgentmsgs"].Success ? lineMatch.Groups["old_urgentmsgs"].Value : "0");

                                    ret.SetMessageCount(messageClass, newMessages, oldMessages, newUrgentMessages, oldUrgentMessages);
                                }
                            }
                        }
                    }
                }
                return ret;
            }
            catch (Exception e)
            {
                LOG.Error(e);
                return null;
            }
        }
    }
}
