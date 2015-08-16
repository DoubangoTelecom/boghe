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
#if WINRT
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace log4net
{
    public class loger
    {
    }

    public interface ILog
    {
        void Debug(object message);
        void Debug(object message, Exception exception);
        void Info(object message);
        void Info(object message, Exception exception);
        void Warn(object message);
        void Warn(object message, Exception exception);
        void Error(object message);
        void Error(object message, Exception exception);
        void Fatal(object message);
        void Fatal(object message, Exception exception);
    }

    public sealed class LogManager
    {
        public static ILog GetLogger(Type type)
        {
            return new ConsoleLogger(type);
        }
    }

    public class ConsoleLogger : ILog
    {
        readonly Type m_Type;

        public ConsoleLogger(Type type)
        {
            m_Type = type;
        }

        public void Debug(object message)
        {
            System.Diagnostics.Debug.WriteLine("#DEBUG: " + message);
        }

        public void Debug(object message, Exception exception)
        {
            System.Diagnostics.Debug.WriteLine("#DEBUG: {0}, {1}", message, exception);
        }

        public void Info(object message)
        {
            System.Diagnostics.Debug.WriteLine("#INFO [{0}]: {1}", m_Type, message);
        }

        public void Info(object message, Exception exception)
        {
            System.Diagnostics.Debug.WriteLine("#INFO [{0}]: {1}, {2}", m_Type, message, exception);
        }

        public void Warn(object message)
        {
            System.Diagnostics.Debug.WriteLine("#WARN: " + message);
        }

        public void Warn(object message, Exception exception)
        {
            System.Diagnostics.Debug.WriteLine("#WARN: {0}, {1}", message, exception);
        }

        public void Error(object message)
        {
            System.Diagnostics.Debug.WriteLine("#ERROR" + message);
        }

        public void Error(object message, Exception exception)
        {
            Console.WriteLine("#ERROR: {0}, {1}", message, exception);
        }

        public void Fatal(object message)
        {
            System.Diagnostics.Debug.WriteLine("#FATAL: " + message);
        }

        public void Fatal(object message, Exception exception)
        {
            System.Diagnostics.Debug.WriteLine("#FATAL: {0}, {1}", message, exception);
        }
    }
}
#endif // WINRT