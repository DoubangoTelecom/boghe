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
        public static String DEFAULT_IDENTITY_DISPLAY_NAME = "John Doe";
        public static String DEFAULT_IDENTITY_IMPI = "johndoe@open-ims.test";
        public static String DEFAULT_IDENTITY_IMPU = "sip:johndoe@open-ims.test";
        public static String DEFAULT_IDENTITY_PRIVACY = "none";

        public static bool DEFAULT_NETWORK_EARLY_IMS = false;
        public static bool DEFAULT_NETWORK_PCSCF_DISCOVERY_DNS = false;
        public static bool DEFAULT_NETWORK_PCSCF_DISCOVERY_DHCP = false;
        public static String DEFAULT_NETWORK_PCSCF_HOST = "127.0.0.1";
        public static int DEFAULT_NETWORK_PCSCF_PORT = 5060;
        public static String DEFAULT_NETWORK_REALM = "sip:open-ims.test";
        public static bool DEFAULT_NETWORK_SIGCOMP = false;
        public static String DEFAULT_NETWORK_TRANSPORT = "UDP";
        public static String DEFAULT_NETWORK_IP_VERSION = "ipv4";
        public static bool DEFAULT_NETWORK_WIFI = true;
        public static bool DEFAULT_NETWORK_3G = false;
        public static String DEFAULT_NETWORK_LOCAL_IP = "192.168.0.11";
        public static int DEFAULT_NETWORK_LOCAL_PORT = 5060;

        public static bool DEFAULT_GENERAL_FULL_SCREEN_VIDEO = true;
        public static bool DEFAULT_GENERAL_FFC = true;
        public static bool DEFAULT_GENERAL_AUTOSTART = true;
        public static float DEFAULT_GENERAL_AUDIO_PLAY_LEVEL = 0.25f;
        public static String DEFAULT_GENERAL_ENUM_DOMAIN = "e164.org";
        public static int DEFAULT_GENERAL_AUDIO_VOLUME = 100;

        public static String DEFAULT_RCS_AVATAR_PATH = "";
        public static bool DEFAULT_RCS_BINARY_SMS = false;
        public static String DEFAULT_RCS_CONF_FACT = "sip:Conference-Factory@open-ims.test";
        public static String DEFAULT_RCS_FREE_TEXT = "Hello world";
        public static bool DEFAULT_RCS_MSRP_FAILURE = true;
        public static bool DEFAULT_RCS_MSRP_SUCCESS = false;
        public static bool DEFAULT_RCS_MWI = false;
        public static bool DEFAULT_RCS_OMAFDR = false;
        public static bool DEFAULT_RCS_PARTIAL_PUB = false;
        public static bool DEFAULT_RCS_PRESENCE_SUB = true;
        public static bool DEFAULT_RCS_PRESENCE_PUB = true;
        public static bool DEFAULT_RCS_RLS = true;
        public static String DEFAULT_RCS_SMSC = "sip:+331000000000@open-ims.test";
        public static String DEFAULT_RCS_HOME_PAGE = "http://www.doubango.org";
        public static int DEFAULT_RCS_HYPERAVAILABILITY_TIMEOUT = 1; //minutes
        public static bool DEFAULT_RCS_IMDN = false;
        public static bool DEFAULT_RCS_ISCOMOPING = true;
        public static PresenceStatus DEFAULT_RCS_STATUS = PresenceStatus.Online;

        public static String DEFAULT_QOS_BANDWIDTH = org.doubango.tinyWRAP.tmedia_bandwidth_level_t.tmedia_bl_hight.ToString(); //@deprecated
        public static String DEFAULT_QOS_PREF_VIDEO_SIZE = org.doubango.tinyWRAP.tmedia_pref_video_size_t.tmedia_pref_video_size_vga.ToString();
        public static String DEFAULT_QOS_PRECOND_STRENGTH = org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_none.ToString();
        public static String DEFAULT_QOS_PRECOND_TYPE = org.doubango.tinyWRAP.tmedia_qos_stype_t.tmedia_qos_stype_none.ToString();
        public static String DEFAULT_QOS_SESSION_TIMERS_REFRESHER = "none";
        public static int DEFAULT_QOS_SIP_SESSIONS_TIMEOUT = 600000;
        public static int DEFAULT_QOS_SESSION_TIMERS_TIMEOUT = 3600;
        public static bool DEFAULT_QOS_SESSION_TIMERS = false;

        public static String DEFAULT_TLS_CA_FILE = String.Empty;
        public static String DEFAULT_TLS_PRIV_KEY_FILE = String.Empty;
        public static String DEFAULT_TLS_PUB_KEY_FILE = String.Empty;
        public static bool DEFAULT_TLS_SEC_AGREE = false;
        public static String DEFAULT_IMSAKA_AMF = "0x0000";
        public static String DEFAULT_IMSAKA_OPID = "0x00000000000000000000000000000000";
        public static String DEFAULT_SECURITY_SRTP_MODE = org.doubango.tinyWRAP.tmedia_srtp_mode_t.tmedia_srtp_mode_none.ToString();
        public static String DEFAULT_SECURITY_IPSEC_ALGO = "hmac-md5-96";
        public static String DEFAULT_SECURITY_IPSEC_EALGO = "null";
        public static String DEFAULT_SECURITY_IPSEC_MODE = "trans";
        public static String DEFAULT_SECURITY_IPSEC_PROTO = "ah";
        public static bool DEFAULT_SECURITY_IPSEC_SEC_AGREE = false;

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

        public static int DEFAULT_MEDIA_CODECS = 
			(int)(org.doubango.tinyWRAP.tdav_codec_id_t.tdav_codec_id_gsm |
			org.doubango.tinyWRAP.tdav_codec_id_t.tdav_codec_id_pcma |
			org.doubango.tinyWRAP.tdav_codec_id_t.tdav_codec_id_pcmu |
			org.doubango.tinyWRAP.tdav_codec_id_t.tdav_codec_id_speex_nb |
			
			org.doubango.tinyWRAP.tdav_codec_id_t.tdav_codec_id_mp4ves_es |
			org.doubango.tinyWRAP.tdav_codec_id_t.tdav_codec_id_theora |
            org.doubango.tinyWRAP.tdav_codec_id_t.tdav_codec_id_h264_bp |
			org.doubango.tinyWRAP.tdav_codec_id_t.tdav_codec_id_h263p |
			org.doubango.tinyWRAP.tdav_codec_id_t.tdav_codec_id_h263);

        public static String DEFAULT_MEDIA_PROFILE = org.doubango.tinyWRAP.tmedia_profile_t.tmedia_profile_default.ToString();

        public enum ConfEntry
        {
            TIMEOUT, PASSWORD,

            /* === IDENTITY === */
            DISPLAY_NAME, IMPI, IMPU, /*PASSWORD,*/ PRIVACY,

            /* === GENERAL === */
            FULL_SCREEN_VIDEO, FFC, AUDIO_PLAY_LEVEL, AUDIO_VOLUME, ENUM_DOMAIN, AUTO_START,

            /* === VoLTE === */

            /* === NETWORK === */
            EARLY_IMS, IP_VERSION, PCSCF_DISCOVERY_DNS, PCSCF_DISCOVERY_DHCP, PCSCF_HOST, PCSCF_PORT, REALM, SIGCOMP, THREE_3G, TRANSPORT, WIFI, LOCAL_IP, LOCAL_PORT,

            /* === QOS/QOE === */
            PRECOND_STRENGTH, PRECOND_TYPE, BANDWIDTH, PREF_VIDEO_SIZE, SESSION_TIMERS_REFRESHER, SESSION_TIMERS_TIMEOUT, SIP_SESSIONS_TIMEOUT, SESSION_TIMERS,

            /* === RCS (GSMA Rich Communication Suite) === */
            AVATAR_PATH, BINARY_SMS, CONF_FACT, FREE_TEXT, HACK_SMS, HOME_PAGE, HYPERAVAILABILITY_TIMEOUT, IMDN, ISCOMOPING, MSRP_FAILURE, MSRP_SUCCESS, MWI, OMAFDR, PARTIAL_PUB, PRESENCE_PUB, PRESENCE_SUB, RLS, SMSC, STATUS,

            /* === SECURITY === */
            TLS_CA_FILE, TLS_PRIV_KEY_FILE, TLS_PUB_KEY_FILE, TLS_SEC_AGREE, SRTP_MODE, IMSAKA_AMF, IMSAKA_OPID, IPSEC_SEC_AGREE, IPSEC_ALGO, IPSEC_EALGO, IPSEC_MODE, IPSEC_PROTO,

            /* === SESSIONS === */

            /* === MEDIA === */
            CODECS, PROFILE,

            /* === NATT === */
            HACK_AOR, HACK_AOR_TIMEOUT, USE_STUN, USE_ICE, STUN_DISCO, STUN_SERVER, STUN_PORT,

            /* === XCAP === */
            /* PASSWORD, */ ENABLED, XCAP_ROOT, USERNAME/*, TIMEOUT*/
        }

        const String SECURITY_SRTP_MODE_NONE = "None";
        const String SECURITY_SRTP_MODE_OPTIONAL = "Optional";
        const String SECURITY_SRTP_MODE_MANDATORY = "Mandatory";

        static public String SRtpModeToString(org.doubango.tinyWRAP.tmedia_srtp_mode_t mode)
        {
            switch (mode)
            {
                case org.doubango.tinyWRAP.tmedia_srtp_mode_t.tmedia_srtp_mode_mandatory:
                    return Configuration.SECURITY_SRTP_MODE_MANDATORY;
                case org.doubango.tinyWRAP.tmedia_srtp_mode_t.tmedia_srtp_mode_optional:
                    return Configuration.SECURITY_SRTP_MODE_OPTIONAL;
                case org.doubango.tinyWRAP.tmedia_srtp_mode_t.tmedia_srtp_mode_none:
                default:
                    return Configuration.SECURITY_SRTP_MODE_NONE;
            }
        }

        static public org.doubango.tinyWRAP.tmedia_srtp_mode_t SRtpModeFromString(String mode)
        {
            if (Configuration.SECURITY_SRTP_MODE_MANDATORY.Equals(mode))
            {
                return org.doubango.tinyWRAP.tmedia_srtp_mode_t.tmedia_srtp_mode_mandatory;
            }
            else if (Configuration.SECURITY_SRTP_MODE_OPTIONAL.Equals(mode))
            {
                return org.doubango.tinyWRAP.tmedia_srtp_mode_t.tmedia_srtp_mode_optional;
            }
            return org.doubango.tinyWRAP.tmedia_srtp_mode_t.tmedia_srtp_mode_none;
        }


        const String QOS_STRENGTH_NONE = "None";
        const String QOS_STRENGTH_MANDATORY = "Mandatory";
        const String QOS_STRENGTH_OPTIONAL = "Optional";
        const String QOS_STRENGTH_FAILURE = "Failure";
        const String QOS_STRENGTH_UNKNOWN = "Unknown";

        const String QOS_TYPE_NONE = "None";
        const String QOS_TYPE_SEGMENTED = "Segmented";
        const String QOS_TYPE_E2E = "End-to-End";

        const String QOS_BANDWIDTH_LOW = "Low";
        const String QOS_BANDWIDTH_MEDIUM = "Medium";
        const String QOS_BANDWIDTH_HIGH = "High";

        static public String QoSStrengthToString(org.doubango.tinyWRAP.tmedia_qos_strength_t strength)
        {
            switch (strength)
            {
                case org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_none:
                    return Configuration.QOS_STRENGTH_NONE;
                case org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_mandatory:
                    return Configuration.QOS_STRENGTH_MANDATORY;
                case org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_optional:
                    return Configuration.QOS_STRENGTH_OPTIONAL;
                case org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_failure:
                    return Configuration.QOS_STRENGTH_FAILURE;
                case org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_unknown:
                default:
                    return Configuration.QOS_STRENGTH_UNKNOWN;
            }
        }

        static public org.doubango.tinyWRAP.tmedia_qos_strength_t QoSStrengthFromString(String strength)
        {
            if (Configuration.QOS_STRENGTH_NONE.Equals(strength))
            {
                return org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_none;
            }
            else if (Configuration.QOS_STRENGTH_MANDATORY.Equals(strength))
            {
                return org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_mandatory;
            }
            else if (Configuration.QOS_STRENGTH_OPTIONAL.Equals(strength))
            {
                return org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_optional;
            }
            else if (Configuration.QOS_STRENGTH_FAILURE.Equals(strength))
            {
                return org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_failure;
            }
            else
            {
                return org.doubango.tinyWRAP.tmedia_qos_strength_t.tmedia_qos_strength_unknown;
            }
        }

        static public String QoSTypeToString(org.doubango.tinyWRAP.tmedia_qos_stype_t type)
        {
            switch (type)
            {
                case org.doubango.tinyWRAP.tmedia_qos_stype_t.tmedia_qos_stype_e2e:
                    return Configuration.QOS_TYPE_E2E;
                case org.doubango.tinyWRAP.tmedia_qos_stype_t.tmedia_qos_stype_none:
                default:
                    return Configuration.QOS_TYPE_NONE;
                case org.doubango.tinyWRAP.tmedia_qos_stype_t.tmedia_qos_stype_segmented:
                    return Configuration.QOS_TYPE_SEGMENTED;
            }
        }

        static public org.doubango.tinyWRAP.tmedia_qos_stype_t QoSTypeFromString(String type)
        {
            if (Configuration.QOS_TYPE_E2E.Equals(type))
            {
                return org.doubango.tinyWRAP.tmedia_qos_stype_t.tmedia_qos_stype_e2e;
            }
            else if (Configuration.QOS_TYPE_SEGMENTED.Equals(type))
            {
                return org.doubango.tinyWRAP.tmedia_qos_stype_t.tmedia_qos_stype_segmented;
            }
            else
            {
                return org.doubango.tinyWRAP.tmedia_qos_stype_t.tmedia_qos_stype_none;
            }
        }

        static public String QoSBandwidthToString(org.doubango.tinyWRAP.tmedia_bandwidth_level_t bl)
        {
            switch (bl)
            {
                case org.doubango.tinyWRAP.tmedia_bandwidth_level_t.tmedia_bl_hight:
                default:
                    return Configuration.QOS_BANDWIDTH_HIGH;
                case org.doubango.tinyWRAP.tmedia_bandwidth_level_t.tmedia_bl_low:
                    return Configuration.QOS_BANDWIDTH_LOW;
                case org.doubango.tinyWRAP.tmedia_bandwidth_level_t.tmedia_bl_medium:
                    return QOS_BANDWIDTH_MEDIUM;
            }
        }

        static public org.doubango.tinyWRAP.tmedia_bandwidth_level_t QoSBandwidthFromString(String bl)
        {
            if (Configuration.QOS_BANDWIDTH_LOW.Equals(bl))
            {
                return org.doubango.tinyWRAP.tmedia_bandwidth_level_t.tmedia_bl_low;
            }
            else if (Configuration.QOS_BANDWIDTH_MEDIUM.Equals(bl))
            {
                return org.doubango.tinyWRAP.tmedia_bandwidth_level_t.tmedia_bl_medium;
            }
            else
            {
                return org.doubango.tinyWRAP.tmedia_bandwidth_level_t.tmedia_bl_hight;
            }
        }
    }
}
