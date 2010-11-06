using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BogheCore.Services.Impl
{
    public abstract class ServiceManager
    {
        public abstract IConfigurationService ConfigurationService
        {
            get;
        }
    }
}
