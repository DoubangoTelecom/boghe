using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace BogheCore.Model
{
    public class Configuration : BaseObject
    {
        public enum ConfFolder
        {
            IDENTITY,
            GENERAL,
            LTE,
            NETWORK,
            QOS,
            RCS,
            SECURITY,
            SESSIONS,
            MEDIA,
            NATT,
            XCAP
        }

        public static String PCSCF_DISCOVERY_NONE = "None";
        public static String PCSCF_DISCOVERY_DNS = "DNS NAPTR+SRV";

        // Default values
        public static String DEFAULT_DISPLAY_NAME = "johndoe";
        public static String DEFAULT_IMPI = "johndoe@open-ims.test";
        public static String DEFAULT_IMPU = "sip:johndoe@open-ims.test";

        public static bool DEFAULT_EARLY_IMS = false;
        public static bool DEFAULT_PCSCF_DISCOVERY_DNS = false;
        public static bool DEFAULT_PCSCF_DISCOVERY_DHCP = false;
        public static String DEFAULT_PCSCF_HOST = "127.0.0.1";
        public static int DEFAULT_PCSCF_PORT = 5060;
        public static String DEFAULT_REALM = "sip:open-ims.test";
        public static bool DEFAULT_SIGCOMP = false;
        public static String DEFAULT_TRANSPORT = "UDP";
        public static String DEFAULT_IP_VERSION = "ipv4";
        public static bool DEFAULT_WIFI = true;
        public static bool DEFAULT_3G = false;

        public static bool DEFAULT_GENERAL_FULL_SCREEN_VIDEO = true;
        public static bool DEFAULT_GENERAL_FFC = true;
        public static bool DEFAULT_GENERAL_AUTOSTART = true;
        public static float DEFAULT_GENERAL_AUDIO_PLAY_LEVEL = 0.25f;
        public static String DEFAULT_GENERAL_ENUM_DOMAIN = "e164.org";

        public static String DEFAULT_RCS_AVATAR_PATH = "";
        public static bool DEFAULT_RCS_BINARY_SMS = true;
        public static String DEFAULT_RCS_CONF_FACT = "sip:Conference-Factory@open-ims.test";
        public static String DEFAULT_RCS_FREE_TEXT = "Hello world";
        public static bool DEFAULT_RCS_MSRP_FAILURE = true;
        public static bool DEFAULT_RCS_MSRP_SUCCESS = false;
        public static bool DEFAULT_RCS_MWI = false;
        public static bool DEFAULT_RCS_OMAFDR = false;
        public static bool DEFAULT_RCS_PARTIAL_PUB = false;
        public static bool DEFAULT_RCS_PRESENCE_SUB = false;
        public static bool DEFAULT_RCS_PRESENCE_PUB = false;
        public static bool DEFAULT_RCS_RLS = true;
        public static String DEFAULT_RCS_SMSC = "sip:+331000000000@open-ims.test";
        public static String DEFAULT_RCS_HOME_PAGE = "http://www.doubango.org";
        //public static PresenceStatus DEFAULT_RCS_STATUS = PresenceStatus.Online;

        public static String DEFAULT_QOS_PRECOND_BANDWIDTH = "Low";
        //public static String DEFAULT_QOS_PRECOND_STRENGTH = tmedia_qos_strength_t.tmedia_qos_strength_none.toString();
        //public static String DEFAULT_QOS_PRECOND_TYPE = tmedia_qos_stype_t.tmedia_qos_stype_none.toString();
        public static String DEFAULT_QOS_REFRESHER = "none";
        public static int DEFAULT_QOS_SIP_SESSIONS_TIMEOUT = 600000;
        public static int DEFAULT_QOS_SIP_CALLS_TIMEOUT = 3600;
        public static bool DEFAULT_QOS_SESSION_TIMERS = false;

        public static String DEFAULT_TLS_CA_FILE = "";
        public static String DEFAULT_TLS_PRIV_KEY_FILE = "";
        public static String DEFAULT_TLS_PUB_KEY_FILE = "";
        public static bool DEFAULT_TLS_SEC_AGREE = false;
        public static String DEFAULT_IMSAKA_AMF = "0x0000";
        public static String DEFAULT_IMSAKA_OPID = "0x00000000000000000000000000000000";

        public static int DEFAULT_NATT_HACK_AOR_TIMEOUT = 2000;
        public static bool DEFAULT_NATT_HACK_AOR = false;
        public static bool DEFAULT_NATT_USE_STUN = false;
        public static bool DEFAULT_NATT_USE_ICE = false;
        public static bool DEFAULT_NATT_STUN_DISCO = false;
        public static String DEFAULT_NATT_STUN_SERVER = "numb.viagenie.ca";
        public static int DEFAULT_NATT_STUN_PORT = 3478;

        public static bool DEFAULT_XCAP_ENABLED = false;
        public static String DEFAULT_XCAP_ROOT = "http://doubango.org:8080/services";
        public static String DEFAULT_XUI = "sip:johndoe@open-ims.test";
        public static int DEFAULT_XCAP_TIMEOUT = 6000; // milliseconds


        public enum ConfEntry
        {
            TIMEOUT, PASSWORD,

            /* === IDENTITY === */
            DISPLAY_NAME, IMPI, IMPU, /*PASSWORD,*/

            /* === GENERAL === */
            FULL_SCREEN_VIDEO, FFC, AUDIO_PLAY_LEVEL, ENUM_DOMAIN,

            /* === VoLTE === */

            /* === NETWORK === */
            EARLY_IMS, IP_VERSION, PCSCF_DISCOVERY_DNS, PCSCF_DISCOVERY_DHCP, PCSCF_HOST, PCSCF_PORT, REALM, SIGCOMP, THREE_3G, TRANSPORT, WIFI,

            /* === QOS/QOE === */
            PRECOND_BANDWIDTH, PRECOND_STRENGTH, PRECOND_TYPE, REFRESHER, SIP_CALLS_TIMEOUT, SIP_SESSIONS_TIMEOUT, SESSION_TIMERS,

            /* === RCS (GSMA Rich Communication Suite) === */
            AVATAR_PATH, BINARY_SMS, CONF_FACT, FREE_TEXT, HACK_SMS, HOME_PAGE, MSRP_FAILURE, MSRP_SUCCESS, MWI, OMAFDR, PARTIAL_PUB, PRESENCE_PUB, PRESENCE_SUB, RLS, SMSC, STATUS,

            /* === SECURITY === */
            TLS_CA_FILE, TLS_PRIV_KEY_FILE, TLS_PUB_KEY_FILE, TLS_SEC_AGREE, IMSAKA_AMF, IMSAKA_OPID,

            /* === SESSIONS === */

            /* === MEDIA === */
            CODECS,

            /* === NATT === */
            HACK_AOR, HACK_AOR_TIMEOUT, USE_STUN, USE_ICE, STUN_DISCO, STUN_SERVER, STUN_PORT,

            /* === XCAP === */
            /* PASSWORD, */ ENABLED, XCAP_ROOT, USERNAME/*, TIMEOUT*/
        }
    }
}
