

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sun Feb 17 19:44:29 2013
 */
/* Compiler settings for C:\Users\mamadou\AppData\Local\Temp\doubango_rt.BackEnd.idl-f1f9326a:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=ARM 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "doubango_rt.BackEnd.h"

#define TYPE_FORMAT_STRING_SIZE   1363                              
#define PROC_FORMAT_STRING_SIZE   13837                             
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _doubango_rt2EBackEnd_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } doubango_rt2EBackEnd_MIDL_TYPE_FORMAT_STRING;

typedef struct _doubango_rt2EBackEnd_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } doubango_rt2EBackEnd_MIDL_PROC_FORMAT_STRING;

typedef struct _doubango_rt2EBackEnd_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } doubango_rt2EBackEnd_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const doubango_rt2EBackEnd_MIDL_TYPE_FORMAT_STRING doubango_rt2EBackEnd__MIDL_TypeFormatString;
extern const doubango_rt2EBackEnd_MIDL_PROC_FORMAT_STRING doubango_rt2EBackEnd__MIDL_ProcFormatString;
extern const doubango_rt2EBackEnd_MIDL_EXPR_FORMAT_STRING doubango_rt2EBackEnd__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_ARM32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const doubango_rt2EBackEnd_MIDL_PROC_FORMAT_STRING doubango_rt2EBackEnd__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Invoke */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 10 */	NdrFcShort( 0x20 ),	/* 32 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x6 ),	/* 6 */
/* 26 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 28 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 30 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 32 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter __param0 */

/* 34 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 36 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 38 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter __param1 */

/* 40 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 42 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 44 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter __param2 */

/* 46 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 48 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 50 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 52 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 54 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 56 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 58 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 60 */	NdrFcLong( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x6 ),	/* 6 */
/* 66 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x21 ),	/* 33 */
/* 72 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 74 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x1 ),	/* 1 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x4 ),	/* 4 */
/* 84 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 86 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 88 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 90 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 92 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 94 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 96 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 98 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 100 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 104 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 106 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure publish1 */


	/* Procedure send1 */


	/* Procedure send1 */


	/* Procedure addPayload */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x7 ),	/* 7 */
/* 122 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x21 ),	/* 33 */
/* 128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 130 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x3 ),	/* 3 */
/* 140 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 142 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */

/* 144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 146 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 148 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 152 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 154 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setActiveMedia */

/* 162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 170 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 174 */	NdrFcShort( 0x21 ),	/* 33 */
/* 176 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 178 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x3 ),	/* 3 */
/* 188 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 190 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter type */

/* 192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 194 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 196 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 200 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 202 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 206 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setResponseLine */

/* 210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x9 ),	/* 9 */
/* 218 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 220 */	NdrFcShort( 0x6 ),	/* 6 */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 226 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x4 ),	/* 4 */
/* 236 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 238 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 240 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter code */

/* 242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 244 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 246 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter phrase */

/* 248 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 250 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 252 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 254 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 256 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 258 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 262 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setMediaString */

/* 266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0xa ),	/* 10 */
/* 274 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 280 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 282 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x5 ),	/* 5 */
/* 292 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 294 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 296 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter type */

/* 298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 300 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 302 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 306 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 308 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 310 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 312 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 314 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 316 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 318 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 320 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 324 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setMediaInt */

/* 328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0xb ),	/* 11 */
/* 336 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 338 */	NdrFcShort( 0x10 ),	/* 16 */
/* 340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 342 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 344 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x5 ),	/* 5 */
/* 354 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 356 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 358 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter type */

/* 360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 362 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 364 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 366 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 368 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 370 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 374 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 380 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 382 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure registerAudioPluginFromFile */


	/* Procedure OnDebugInfo */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x6 ),	/* 6 */
/* 398 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x24 ),	/* 36 */
/* 404 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 406 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x3 ),	/* 3 */
/* 416 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 418 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter path */


	/* Parameter message */

/* 420 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 422 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 424 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 428 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 434 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDebugWarn */

/* 438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x7 ),	/* 7 */
/* 446 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x24 ),	/* 36 */
/* 452 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 454 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x3 ),	/* 3 */
/* 464 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 466 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter message */

/* 468 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 470 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 472 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 476 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDebugError */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 494 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x24 ),	/* 36 */
/* 500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 502 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x3 ),	/* 3 */
/* 512 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 514 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter message */

/* 516 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 518 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 520 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 524 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDebugFatal */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x9 ),	/* 9 */
/* 542 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x24 ),	/* 36 */
/* 548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 550 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x3 ),	/* 3 */
/* 560 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 562 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter message */

/* 564 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 566 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 568 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 572 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 578 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getMediaType */

/* 582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x6 ),	/* 6 */
/* 590 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x24 ),	/* 36 */
/* 596 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 598 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x2 ),	/* 2 */
/* 608 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 610 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 614 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 616 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 620 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPhrase */


	/* Procedure getScheme */


	/* Procedure get_Address */


	/* Procedure getName */

/* 624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x7 ),	/* 7 */
/* 632 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 638 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 640 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x2 ),	/* 2 */
/* 650 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 652 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 654 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 658 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RealmUri */


	/* Procedure getHost */


	/* Procedure getPhrase */


	/* Procedure getDescription */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 674 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 680 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 682 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 684 */	NdrFcShort( 0x1 ),	/* 1 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x2 ),	/* 2 */
/* 692 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 694 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 696 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 698 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 700 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 704 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getResponsePhrase */


	/* Procedure getNegFormat */

/* 708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x9 ),	/* 9 */
/* 716 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 724 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x2 ),	/* 2 */
/* 734 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 736 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 738 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 740 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 742 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAudioSamplingRate */

/* 750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0xa ),	/* 10 */
/* 758 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x24 ),	/* 36 */
/* 764 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 766 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x2 ),	/* 2 */
/* 776 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 778 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 782 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAudioChannels */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0xb ),	/* 11 */
/* 800 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x24 ),	/* 36 */
/* 806 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 808 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x2 ),	/* 2 */
/* 818 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 820 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAudioPTime */

/* 834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0xc ),	/* 12 */
/* 842 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x24 ),	/* 36 */
/* 848 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 850 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x2 ),	/* 2 */
/* 860 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 862 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 866 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 872 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sessionSetInt32 */

/* 876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x6 ),	/* 6 */
/* 884 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 886 */	NdrFcShort( 0x10 ),	/* 16 */
/* 888 */	NdrFcShort( 0x21 ),	/* 33 */
/* 890 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 892 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x5 ),	/* 5 */
/* 902 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 904 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 906 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 910 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 912 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 914 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 916 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 918 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 922 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 926 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 928 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 930 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 934 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sessionGetInt32 */

/* 938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x7 ),	/* 7 */
/* 946 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 950 */	NdrFcShort( 0x24 ),	/* 36 */
/* 952 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 954 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x4 ),	/* 4 */
/* 964 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 966 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 968 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter media */

/* 970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 972 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 974 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 976 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 978 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 980 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 982 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 984 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 990 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure consumerSetInt32 */

/* 994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1002 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1004 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1006 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1008 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1010 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1018 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1020 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 1022 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1024 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 1026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1028 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1030 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 1032 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1034 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1036 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 1038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1040 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1044 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1046 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1048 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure consumerSetInt64 */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1064 */	NdrFcShort( 0x20 ),	/* ARM Stack size/offset = 32 */
/* 1066 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1068 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1070 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1072 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1082 */	0x7,		/* 7 */
			0x80,		/* 128 */
/* 1084 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1086 */	0x9f,		/* 159 */
			0xfc,		/* 252 */
/* 1088 */	0xfc,		/* 252 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 1090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1092 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1094 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 1096 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1098 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1100 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 1102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1104 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1106 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1108 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1110 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1112 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1116 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 1118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure producerSetInt32 */

/* 1120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0xa ),	/* 10 */
/* 1128 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1130 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1132 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1134 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1136 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1146 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 1148 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1150 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 1152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1154 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1156 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 1158 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1160 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1162 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 1164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1166 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1170 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1172 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1174 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1178 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure producerSetInt64 */

/* 1182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0xb ),	/* 11 */
/* 1190 */	NdrFcShort( 0x20 ),	/* ARM Stack size/offset = 32 */
/* 1192 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1194 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1196 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1198 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1208 */	0x7,		/* 7 */
			0x80,		/* 128 */
/* 1210 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1212 */	0x9f,		/* 159 */
			0xfc,		/* 252 */
/* 1214 */	0xfc,		/* 252 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 1216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1218 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1220 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 1222 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1224 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1226 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 1228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1230 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1232 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1234 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1236 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1238 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1242 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 1244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure producerGetCodec */

/* 1246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0xc ),	/* 12 */
/* 1254 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1260 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1262 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1272 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1274 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter media */

/* 1276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1278 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1280 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1282 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1284 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1286 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 1288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1290 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSessionId */

/* 1294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0xd ),	/* 13 */
/* 1302 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1306 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1308 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1310 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1320 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1322 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter media */

/* 1324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1326 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1328 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1332 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1334 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1338 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetProfile */

/* 1342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1350 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1354 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1356 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1358 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1368 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1370 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter profile */

/* 1372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1374 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1376 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1380 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1382 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1386 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HoldState */


	/* Procedure defaultsGetProfile */

/* 1390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1398 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1406 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1416 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1418 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1422 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1424 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1428 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetPrefVideoSize */

/* 1432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1440 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1444 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1448 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1456 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1458 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1460 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pref_video_size */

/* 1462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1464 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1466 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1470 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1472 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1476 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetJbMargin */

/* 1480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0xa ),	/* 10 */
/* 1488 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1492 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1494 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1496 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1506 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1508 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter jb_margin_ms */

/* 1510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1512 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1516 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1518 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1520 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1524 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetJbMaxLateRate */

/* 1528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0xb ),	/* 11 */
/* 1536 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1540 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1544 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1554 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1556 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter jb_late_rate_percent */

/* 1558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1560 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1566 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1568 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1572 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setExpires */


	/* Procedure defaultsSetEchoTail */

/* 1576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0xc ),	/* 12 */
/* 1584 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1588 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1592 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1602 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1604 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter expires */


	/* Parameter echo_tail */

/* 1606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1608 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1614 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1616 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1620 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetEchoTail */

/* 1624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0xd ),	/* 13 */
/* 1632 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1638 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1640 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1650 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1652 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1656 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1662 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetEchoSkew */

/* 1666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0xe ),	/* 14 */
/* 1674 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1678 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1680 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1682 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1692 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1694 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter echo_skew */

/* 1696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1698 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1702 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1704 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1706 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1710 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSilentHangup */


	/* Procedure defaultsSetEchoSuppEnabled */

/* 1714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0xf ),	/* 15 */
/* 1722 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1724 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1726 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1728 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1730 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1740 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1742 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter silent */


	/* Parameter echo_supp_enabled */

/* 1744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1746 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1748 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1750 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1752 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1754 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1758 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetEchoSuppEnabled */

/* 1762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1768 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1770 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1776 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1778 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1786 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1788 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1790 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1792 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1794 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1796 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1800 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetAgcEnabled */

/* 1804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1812 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1814 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1816 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1820 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1828 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1830 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1832 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter agc_enabled */

/* 1834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1836 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1838 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1840 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1842 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1844 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1848 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetAgcEnabled */

/* 1852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1860 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1864 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1866 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1868 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1878 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1880 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1882 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1884 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1886 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1890 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetAgcLevel */

/* 1894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1900 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1902 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1906 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1908 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1910 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1918 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1920 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1922 */	0x84,		/* 132 */
			0x81,		/* 129 */

	/* Parameter agc_level */

/* 1924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1926 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1928 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1932 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1934 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1938 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetAgcLevel */

/* 1942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1948 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1950 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1954 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1956 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1958 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1968 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1970 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1972 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1974 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1976 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 1978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1980 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetVadEnabled */

/* 1984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1990 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1992 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1994 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1996 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2000 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2008 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2010 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2012 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter vad_enabled */

/* 2014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2016 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2018 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2020 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2022 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2024 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2028 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnRegister */


	/* Procedure defaultsGetGetVadEnabled */

/* 2032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2040 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2044 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2046 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2048 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2058 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2060 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2064 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2066 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2070 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetNoiseSuppEnabled */

/* 2074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2082 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2084 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2086 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2090 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2100 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2102 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter noise_supp_enabled */

/* 2104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2106 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2108 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2112 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2114 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2118 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetNoiseSuppEnabled */

/* 2122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2128 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2130 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2134 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2136 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2138 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2148 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2150 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2152 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2154 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2156 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2160 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetNoiseSuppLevel */

/* 2164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2170 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2172 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2176 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2180 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2190 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2192 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter noise_supp_level */

/* 2194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2196 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2200 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2202 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2204 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2208 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetNoiseSuppLevel */

/* 2212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2220 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2224 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2226 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2228 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2236 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2238 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2240 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2244 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2250 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSet100relEnabled */

/* 2254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x1b ),	/* 27 */
/* 2262 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2264 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2266 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2268 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2270 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2280 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2282 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter _100rel_enabled */

/* 2284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2286 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2288 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2290 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2292 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2294 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2298 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGet100relEnabled */

/* 2302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2308 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2310 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2318 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2326 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2328 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2330 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2334 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2336 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2340 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetScreenSize */

/* 2344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2350 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2352 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2354 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2356 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2360 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2370 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2372 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2374 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter sx */

/* 2376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2378 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sy */

/* 2382 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2384 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2388 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2390 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2392 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2396 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetAudioGain */

/* 2400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2408 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2410 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2412 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2414 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2416 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2426 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2428 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2430 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter producer_gain */

/* 2432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2434 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter consumer_gain */

/* 2438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2440 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2446 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2448 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2452 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtpPortRange */

/* 2456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x1f ),	/* 31 */
/* 2464 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2466 */	NdrFcShort( 0xc ),	/* 12 */
/* 2468 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2472 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2480 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2482 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2484 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2486 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter range_start */

/* 2488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2490 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2492 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter range_stop */

/* 2494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2496 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2498 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2500 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2502 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2504 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2508 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtpSymetricEnabled */

/* 2512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2520 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2522 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2524 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2526 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2528 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2536 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2538 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2540 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 2542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2544 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2546 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2550 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2552 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2556 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetMediaType */

/* 2560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2566 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2568 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2572 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2576 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2584 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2586 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2588 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter media_type */

/* 2590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2592 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2594 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2596 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2598 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2600 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2604 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetVolume */

/* 2608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2616 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2620 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2622 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2624 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2632 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2634 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2636 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter volume */

/* 2638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2640 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2644 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2646 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2648 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2652 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetVolume */

/* 2656 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2664 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2668 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2670 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2672 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2682 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2684 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2686 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2688 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2694 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetInviteSessionTimers */

/* 2698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2704 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2706 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2710 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2712 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2714 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2724 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2726 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2728 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter timeout */

/* 2730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2732 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refresher */

/* 2736 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2738 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2740 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2742 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2744 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2746 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2750 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetSRtpMode */

/* 2754 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2760 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2762 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2766 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2768 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2770 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2780 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2782 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter mode */

/* 2784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2786 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2788 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2790 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2792 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2794 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2798 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetSRtpMode */

/* 2802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2810 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2816 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2818 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2828 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2830 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2832 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2834 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2836 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2840 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetSRtpType */

/* 2844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2850 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2852 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2856 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2858 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2860 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2868 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2870 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2872 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter srtp_type */

/* 2874 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2876 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2878 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2880 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2882 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2884 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2888 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetSRtpType */

/* 2892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2900 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2904 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2906 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2908 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2918 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2920 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2922 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2924 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2926 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2930 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtcpEnabled */

/* 2934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2942 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2944 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2946 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2948 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2950 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2960 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2962 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 2964 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2966 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2968 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2970 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2972 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2974 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2978 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isValid */


	/* Procedure defaultsGetRtcpEnabled */

/* 2982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2988 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2990 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2996 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2998 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3006 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3008 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3010 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3012 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3014 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3016 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3020 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtcpMuxEnabled */

/* 3024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x2b ),	/* 43 */
/* 3032 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3034 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3036 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3038 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3040 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3050 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3052 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 3054 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3056 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3058 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3060 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3062 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3064 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3068 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetRtcpMuxEnabled */

/* 3072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3080 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3086 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3088 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3098 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3100 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3104 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3106 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3110 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetIceEnabled */

/* 3114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3120 */	NdrFcShort( 0x2d ),	/* 45 */
/* 3122 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3124 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3126 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3130 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3138 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3140 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3142 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter ice_enabled */

/* 3144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3146 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3148 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3152 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3154 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3158 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetByPassEncoding */

/* 3162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3170 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3172 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3174 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3176 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3178 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3188 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3190 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 3192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3194 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3196 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3200 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3202 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3206 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetByPassEncoding */

/* 3210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3218 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3222 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3224 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3226 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3236 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3238 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3240 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3242 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3244 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3248 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetByPassDecoding */

/* 3252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3260 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3262 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3264 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3266 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3268 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3276 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3278 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3280 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 3282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3284 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3286 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3290 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3292 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3296 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetByPassDecoding */

/* 3300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3308 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3312 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3314 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3316 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3326 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3328 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3332 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3334 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3338 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetVideoJbEnabled */

/* 3342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3350 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3352 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3354 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3356 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3358 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3368 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3370 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 3372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3374 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3376 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3380 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3382 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3386 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetVideoJbEnabled */

/* 3390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3398 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3400 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3402 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3406 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3416 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3418 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 3420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3422 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3424 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3428 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3430 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3434 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtpBuffSize */

/* 3438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3446 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3450 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3452 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3454 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3464 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3466 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter buffSize */

/* 3468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3470 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3476 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3478 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3482 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetRtpBuffSize */

/* 3486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3494 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3500 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3502 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3512 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3514 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3516 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3518 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3524 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetAvpfTail */

/* 3528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3534 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3536 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3538 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3540 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3544 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3554 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3556 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3558 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter tail_min */

/* 3560 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3562 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tail_max */

/* 3566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3568 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3572 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3574 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3576 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3580 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Start */

/* 3584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3590 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3592 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3596 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3598 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3600 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3608 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3610 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3612 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3614 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3616 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3618 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3622 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_End */

/* 3626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3632 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3634 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3638 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3640 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3642 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3650 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3652 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3654 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3658 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3660 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3664 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Total */

/* 3668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3676 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3680 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3684 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3692 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3694 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3696 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3698 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3700 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3702 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3706 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WithVideo */


	/* Procedure isResponse */


	/* Procedure subscribe */


	/* Procedure isValid_ */


	/* Procedure initialize */


	/* Procedure start */


	/* Procedure isRequest */

/* 3710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3716 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3718 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3722 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3724 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3726 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3734 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3736 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3738 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3740 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3742 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3744 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3748 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */

/* 3752 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3758 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3760 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3764 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3766 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3768 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3778 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3780 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3782 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3784 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3786 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3790 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AvailableAudioRoutes */


	/* Procedure getRequestType */

/* 3794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3800 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3802 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3806 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3808 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3810 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3818 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3820 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3822 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3824 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3826 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3828 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3832 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getByteRange */

/* 3836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3842 */	NdrFcShort( 0xa ),	/* 10 */
/* 3844 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3850 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3852 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3860 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3862 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3864 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3866 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3868 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3870 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Return value */

/* 3872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3874 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure isLastChunck */

/* 3878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3884 */	NdrFcShort( 0xb ),	/* 11 */
/* 3886 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3890 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3892 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3894 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3902 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3904 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3906 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3910 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3912 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3916 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isFirstChunck */

/* 3920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3926 */	NdrFcShort( 0xc ),	/* 12 */
/* 3928 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3932 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3936 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3944 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3946 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3948 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3950 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3952 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3954 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3958 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject1 */


	/* Procedure isSuccessReport */

/* 3962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0xd ),	/* 13 */
/* 3970 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3974 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3976 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3978 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3986 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3988 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3990 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3994 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3996 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4000 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderValue */

/* 4004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0xe ),	/* 14 */
/* 4012 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4018 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4020 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4024 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4030 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4032 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 4034 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4036 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4038 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4040 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4042 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4044 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 4046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4048 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderParamValue */

/* 4052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4058 */	NdrFcShort( 0xf ),	/* 15 */
/* 4060 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4066 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4068 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4076 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4078 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4080 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4082 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 4084 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4086 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4088 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 4090 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4092 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4094 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4096 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4098 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4100 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 4102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4104 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContentLength */

/* 4108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4114 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4116 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4120 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4124 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4132 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4134 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4136 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4138 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4140 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4146 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContent */

/* 4150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4156 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4158 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4164 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4166 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4174 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4176 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4178 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter maxsize */

/* 4180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4182 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4186 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4188 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4190 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 4192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4194 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipSession */

/* 4198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4204 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4206 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4212 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4214 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4222 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4224 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4226 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4228 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4230 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4232 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Return value */

/* 4234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4236 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMessage */

/* 4240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4248 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4254 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4256 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4264 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4266 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4268 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4272 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4274 */	NdrFcShort( 0xba ),	/* Type Offset=186 */

	/* Return value */

/* 4276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4278 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnEvent */

/* 4282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4288 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4290 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4294 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4296 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4298 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4308 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4310 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pEvent */

/* 4312 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4314 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4316 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter __returnValue */

/* 4318 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4320 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4326 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */


	/* Procedure get_Port */

/* 4330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4336 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4338 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4342 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4344 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4346 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4354 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4356 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4358 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4362 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4364 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4368 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDebugCallback */

/* 4372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4378 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4380 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4384 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4386 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4388 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4396 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4398 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4400 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pCallback */

/* 4402 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4404 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4406 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter __returnValue */

/* 4408 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4410 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4412 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4416 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp3 */


	/* Procedure setDisplayName */

/* 4420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4428 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4432 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4434 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4436 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4444 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4446 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4448 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter remoteUriString */


	/* Parameter display_name */

/* 4450 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4452 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4454 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4458 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4460 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4464 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */


	/* Procedure setRealm */

/* 4468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4474 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4476 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4480 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4482 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4484 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4492 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4494 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4496 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */


	/* Parameter realm_uri */

/* 4498 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4500 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4502 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4506 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4508 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4512 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIMPI */

/* 4516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4522 */	NdrFcShort( 0xa ),	/* 10 */
/* 4524 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4528 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4530 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4532 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4540 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4542 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4544 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter impi */

/* 4546 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4548 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4550 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4552 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4554 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4556 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4560 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeCaps */


	/* Procedure setIMPU */

/* 4564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4570 */	NdrFcShort( 0xb ),	/* 11 */
/* 4572 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4578 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4580 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4584 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4588 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4590 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4592 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */


	/* Parameter impu_uri */

/* 4594 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4596 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4598 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4602 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4604 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4608 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage1 */


	/* Procedure setPassword */

/* 4612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0xc ),	/* 12 */
/* 4620 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4624 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4626 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4628 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4636 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4638 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4640 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter payload */


	/* Parameter password */

/* 4642 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4644 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4646 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4650 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4652 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4656 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAMF */

/* 4660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0xd ),	/* 13 */
/* 4668 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4672 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4674 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4676 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4680 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4684 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4686 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4688 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter amf */

/* 4690 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4692 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4694 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4698 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4700 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4704 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setOperatorId */

/* 4708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4714 */	NdrFcShort( 0xe ),	/* 14 */
/* 4716 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4720 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4722 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4724 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4732 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4734 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4736 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter opid */

/* 4738 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4740 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4742 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4744 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4746 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4748 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4752 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setProxyCSCF */

/* 4756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4762 */	NdrFcShort( 0xf ),	/* 15 */
/* 4764 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 4766 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4768 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4772 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4780 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4782 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 4784 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4786 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 4788 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter fqdn */

/* 4790 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4792 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4794 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 4796 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4798 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4800 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 4802 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4804 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4806 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ipversion */

/* 4808 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4810 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4812 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4814 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4816 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4818 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4822 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 4824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP2 */

/* 4826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4832 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4834 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4838 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4840 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4842 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4850 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4852 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4854 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4856 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter ip */

/* 4858 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4860 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4862 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter transport */

/* 4864 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4866 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4868 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4870 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4872 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4874 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4878 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP1 */

/* 4882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4890 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4894 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4896 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4898 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4902 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4906 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4908 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4910 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter ip */

/* 4912 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4914 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4916 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4918 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4920 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4922 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4926 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort2 */

/* 4930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4936 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4938 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4940 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4942 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4944 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4946 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4950 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4954 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4956 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4958 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4960 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter port */

/* 4962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4964 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4966 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 4968 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4970 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4972 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4976 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4978 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4982 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort1 */

/* 4986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4992 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4994 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4996 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4998 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5000 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5002 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5012 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5014 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter port */

/* 5016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5018 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5020 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5022 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5024 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5026 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5030 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stop */


	/* Procedure setEarlyIMS */

/* 5034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5040 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5042 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5044 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5046 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5048 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5050 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5060 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5062 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter bEnteringBackground */


	/* Parameter enabled */

/* 5064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5066 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5068 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5070 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5072 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5074 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5078 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 5082 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5088 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5090 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5094 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5096 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5098 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5106 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5108 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5110 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5112 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 5114 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5116 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5118 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 5120 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5122 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5124 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5128 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5130 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5134 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */

/* 5138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5144 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5146 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5150 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5152 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5154 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5162 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5164 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5166 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 5168 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5170 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5172 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5174 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5176 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5178 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5182 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addDnsServer */

/* 5186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5192 */	NdrFcShort( 0x17 ),	/* 23 */
/* 5194 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5198 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5202 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5210 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5212 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5214 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter ip */

/* 5216 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5218 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5220 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5224 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5226 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5230 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDnsDiscovery */

/* 5234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5240 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5242 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5244 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5246 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5250 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5258 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5260 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5262 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 5264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5266 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5268 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5270 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5272 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5274 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5278 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAoR */

/* 5282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5288 */	NdrFcShort( 0x19 ),	/* 25 */
/* 5290 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5294 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5296 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5298 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5306 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5308 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5310 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5312 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter ip */

/* 5314 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5316 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5318 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 5320 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5322 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5328 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5330 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5334 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSigCompParams */

/* 5338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5344 */	NdrFcShort( 0x1a ),	/* 26 */
/* 5346 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 5348 */	NdrFcShort( 0x1d ),	/* 29 */
/* 5350 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5352 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 5354 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5362 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5364 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 5366 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5368 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 5370 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter dms */

/* 5372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5374 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sms */

/* 5378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5380 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cpb */

/* 5384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5386 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter enablePresDict */

/* 5390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5392 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5394 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5398 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5400 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5404 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 5408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5414 */	NdrFcShort( 0x1b ),	/* 27 */
/* 5416 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5420 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5422 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5424 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5432 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5434 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5436 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter compId */

/* 5438 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5440 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5442 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5446 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5448 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5452 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeSigCompCompartment */

/* 5456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5462 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5464 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5468 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5470 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5472 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5480 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5482 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5484 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter compId */

/* 5486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5488 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5490 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5494 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5496 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5500 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNServer */

/* 5504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5510 */	NdrFcShort( 0x1d ),	/* 29 */
/* 5512 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5514 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5516 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5518 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5520 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5528 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5530 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5532 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5534 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter ip */

/* 5536 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5538 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5540 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 5542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5544 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5546 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5550 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5552 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5556 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNCred */

/* 5560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5566 */	NdrFcShort( 0x1e ),	/* 30 */
/* 5568 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5572 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5574 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5576 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5580 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5584 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5586 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5588 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5590 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter login */

/* 5592 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5594 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5596 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter password */

/* 5598 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5600 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5602 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5606 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5608 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5612 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setTLSSecAgree */

/* 5616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0x1f ),	/* 31 */
/* 5624 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5626 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5628 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5630 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5632 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5640 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5642 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5644 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 5646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5648 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5650 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5654 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5656 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5660 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates2 */

/* 5664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5670 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5672 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 5674 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5676 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5678 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5680 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5684 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5688 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5690 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 5692 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5694 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 5696 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter privKey */

/* 5698 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5700 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5702 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 5704 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5706 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5708 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 5710 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5712 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5714 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter verify */

/* 5716 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5718 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5720 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5722 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5724 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5726 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5730 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates1 */

/* 5734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5740 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5742 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5746 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5748 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5750 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5754 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5758 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5760 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 5762 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5764 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter privKey */

/* 5766 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5768 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5770 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 5772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5774 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5776 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 5778 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5780 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5782 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5784 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5786 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5788 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5792 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecSecAgree */

/* 5796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5802 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5804 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5806 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5808 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5812 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5820 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5822 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5824 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 5826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5828 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5830 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5832 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5834 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5836 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5840 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecParameters */

/* 5844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5850 */	NdrFcShort( 0x23 ),	/* 35 */
/* 5852 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 5854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5856 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5858 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5860 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5864 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5868 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5870 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 5872 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5874 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 5876 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter algo */

/* 5878 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5880 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5882 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ealgo */

/* 5884 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5886 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5888 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter mode */

/* 5890 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5892 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5894 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter proto */

/* 5896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5898 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5900 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5902 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5904 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5906 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5910 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsENUM */

/* 5914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5920 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5922 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5928 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5930 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5938 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5940 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 5942 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5944 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter service */

/* 5946 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5948 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5950 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter e164num */

/* 5952 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5954 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5956 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter domain */

/* 5958 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5960 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5962 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5964 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5966 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5968 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5972 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsNaptrSrv */

/* 5976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5982 */	NdrFcShort( 0x25 ),	/* 37 */
/* 5984 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5990 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5992 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5996 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6000 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6002 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 6004 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6006 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter domain */

/* 6008 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6010 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6012 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter service */

/* 6014 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6016 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6018 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6020 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6022 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6024 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 6026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6028 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsSrv */

/* 6032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6038 */	NdrFcShort( 0x26 ),	/* 38 */
/* 6040 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6046 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6048 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6056 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6058 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6060 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter service */

/* 6062 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6064 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6066 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6068 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6070 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6072 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 6074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6076 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalIP */

/* 6080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6086 */	NdrFcShort( 0x27 ),	/* 39 */
/* 6088 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6094 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6096 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6098 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6104 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6106 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6108 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter protocol */

/* 6110 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6112 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6114 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6116 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6118 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6120 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 6122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6124 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalPort */

/* 6128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6134 */	NdrFcShort( 0x28 ),	/* 40 */
/* 6136 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6140 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6142 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6144 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6152 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6154 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6156 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter protocol */

/* 6158 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6160 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6162 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6166 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6168 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6172 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPreferredIdentity */

/* 6176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6182 */	NdrFcShort( 0x29 ),	/* 41 */
/* 6184 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6190 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6192 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6200 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6202 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6204 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6206 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6208 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6210 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 6212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6214 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stop */

/* 6218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6224 */	NdrFcShort( 0x2b ),	/* 43 */
/* 6226 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6230 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6232 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6234 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6242 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6244 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6246 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6248 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6250 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6252 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6256 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unSubscribe */


	/* Procedure register_1 */


	/* Procedure send1 */


	/* Procedure haveOwnership */


	/* Procedure deInitialize */

/* 6260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6266 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6268 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6272 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6276 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6284 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6286 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6288 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6290 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6292 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6294 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6298 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecs */

/* 6302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6310 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6318 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6326 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6328 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6330 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter codecs */

/* 6332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6334 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6336 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 6338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6340 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecPriority */

/* 6344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6350 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6352 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 6354 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6356 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6360 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6368 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6370 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 6372 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6374 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter codec_id */

/* 6376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6378 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6380 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter priority */

/* 6382 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6384 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6388 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6390 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6392 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6396 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isCodecSupported */

/* 6400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6406 */	NdrFcShort( 0xa ),	/* 10 */
/* 6408 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6412 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6414 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6416 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6424 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6426 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6428 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter codec_id */

/* 6430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6432 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6434 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6438 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6440 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6444 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPort */

/* 6448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6454 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6456 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6460 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6464 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6472 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6474 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6476 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6478 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6480 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6482 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6486 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpiString */


	/* Procedure getUserName */

/* 6490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6496 */	NdrFcShort( 0xa ),	/* 10 */
/* 6498 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6504 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6506 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6514 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6516 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6518 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6520 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6522 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6524 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 6526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6528 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPassword */

/* 6532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6538 */	NdrFcShort( 0xb ),	/* 11 */
/* 6540 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6546 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6548 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6550 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6556 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6558 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6560 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6562 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6564 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6566 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 6568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6570 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpuUri */


	/* Procedure getDisplayName */

/* 6574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6580 */	NdrFcShort( 0xc ),	/* 12 */
/* 6582 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6588 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6590 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6598 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6600 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6602 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6604 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6606 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6608 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 6610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6612 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getParamValue */

/* 6616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6622 */	NdrFcShort( 0xd ),	/* 13 */
/* 6624 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6630 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6632 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6634 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6640 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6642 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6644 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 6646 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6648 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6650 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6652 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6654 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6656 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 6658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6660 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDisplayName */

/* 6664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6670 */	NdrFcShort( 0xe ),	/* 14 */
/* 6672 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6678 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6680 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6684 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6688 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6690 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6692 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter displayName */

/* 6694 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6696 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6698 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 6700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6702 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance2 */

/* 6706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6712 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6714 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 6716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6720 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6722 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6730 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6732 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 6734 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6736 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter uriString */

/* 6738 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6740 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6742 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter displayName */

/* 6744 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6746 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6748 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6750 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6752 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6754 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 6756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6758 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6768 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6770 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6776 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6778 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6786 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6788 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6790 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter uriString */

/* 6792 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6794 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6796 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6798 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6800 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6802 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 6804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6806 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isValid */

/* 6810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6816 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6818 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6822 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6824 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6826 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6834 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6836 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6838 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter uri */

/* 6840 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6842 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6844 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6848 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6850 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6854 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ondata */


	/* Procedure ondata */

/* 6858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6864 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6866 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6870 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6872 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6874 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6882 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6884 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6886 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pData */


	/* Parameter pData */

/* 6888 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6890 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6892 */	NdrFcShort( 0x120 ),	/* Type Offset=288 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6896 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6902 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6912 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6914 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6920 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6922 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6930 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6932 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6934 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pI */

/* 6936 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6938 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6940 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter __returnValue */

/* 6942 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6944 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6946 */	NdrFcShort( 0x144 ),	/* Type Offset=324 */

	/* Return value */

/* 6948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6950 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentProcessId */


	/* Procedure getId */

/* 6954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6960 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6962 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6966 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6970 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6978 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6980 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6982 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6984 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6986 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6992 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 6996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7004 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7008 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7010 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7012 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7020 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7022 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7024 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7026 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 7028 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7030 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7032 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 7034 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7036 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7038 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7040 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7042 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7044 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7048 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addCaps */

/* 7052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7058 */	NdrFcShort( 0xa ),	/* 10 */
/* 7060 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7064 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7066 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7068 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7076 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7078 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7080 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7082 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 7084 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7086 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7088 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 7090 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7092 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7094 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7096 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7098 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7100 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7104 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setFromUri */

/* 7108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7114 */	NdrFcShort( 0xd ),	/* 13 */
/* 7116 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7120 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7122 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7124 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7132 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7134 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7136 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter fromUri */

/* 7138 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7140 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7142 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter __returnValue */

/* 7144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7146 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7148 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7152 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setToUri */

/* 7156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7162 */	NdrFcShort( 0xe ),	/* 14 */
/* 7164 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7168 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7170 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7172 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7180 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7182 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7184 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter toUri */

/* 7186 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7188 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7190 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter __returnValue */

/* 7192 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7194 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7196 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7200 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 7204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7210 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7212 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7216 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7220 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7228 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7230 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7232 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter compId */

/* 7234 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7236 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7238 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7240 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7242 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7244 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7248 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold1 */


	/* Procedure removeSigCompCompartment */

/* 7252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7258 */	NdrFcShort( 0x11 ),	/* 17 */
/* 7260 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7264 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7266 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7268 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7276 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7278 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 7280 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7282 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7284 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7286 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 7288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7290 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure register_2 */


	/* Procedure send2 */


	/* Procedure accept */

/* 7294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7300 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7302 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7306 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7308 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7310 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7318 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7320 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7322 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 7324 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7326 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7328 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7332 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7334 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 7336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7338 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hangup */

/* 7342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7348 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7350 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7354 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7356 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7358 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7366 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7368 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7370 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 7372 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7374 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7376 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7380 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7382 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7386 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister2 */


	/* Procedure unPublish2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure reject */

/* 7390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7398 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7402 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7404 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7406 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7414 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7416 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7418 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 7420 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7422 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7424 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7428 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7430 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7434 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendInfo */

/* 7438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7444 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7446 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 7448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7450 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7452 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7454 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7462 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7464 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 7466 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7468 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter payload */

/* 7470 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7472 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7474 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter len */

/* 7476 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7478 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter config */

/* 7482 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7484 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7486 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7488 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7490 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7492 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7496 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMediaMgr */

/* 7500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7506 */	NdrFcShort( 0xa ),	/* 10 */
/* 7508 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7514 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7516 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7524 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7526 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 7528 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7530 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7532 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7534 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Return value */

/* 7536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7538 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7542 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7548 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7550 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7556 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7558 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7566 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7568 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7570 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7572 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7574 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7576 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 7578 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7580 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7582 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Return value */

/* 7584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7586 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7596 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7598 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7604 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7606 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7614 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7616 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7618 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7620 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7622 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7624 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 7626 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7628 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7630 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 7632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7634 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call4 */

/* 7638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7644 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7646 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 7648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7650 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7652 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7654 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7658 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7662 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7664 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 7666 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7668 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter remoteUriString */

/* 7670 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7672 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7674 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 7676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7678 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7680 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 7682 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7684 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7686 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7688 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7690 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7692 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7696 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call3 */

/* 7700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7706 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7708 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7712 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7714 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7716 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7724 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7726 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7728 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7730 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUriString */

/* 7732 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7734 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7736 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 7738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7740 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7742 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7744 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7746 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7748 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7752 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call2 */

/* 7756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7764 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 7766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7768 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7772 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7780 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7782 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 7784 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7786 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter remoteUri */

/* 7788 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7790 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7792 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter media */

/* 7794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7796 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7798 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 7800 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7802 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7804 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7806 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7808 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7810 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7814 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call1 */

/* 7818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7824 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7826 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7830 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7834 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7842 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7844 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7846 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7848 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUri */

/* 7850 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7852 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7854 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter media */

/* 7856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7858 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7860 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7862 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7864 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7866 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7870 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSessionTimer */

/* 7874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7880 */	NdrFcShort( 0xa ),	/* 10 */
/* 7882 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7886 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7888 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7890 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7894 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7898 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7900 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7902 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7904 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter timeout */

/* 7906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7908 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refresher */

/* 7912 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7914 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7916 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7918 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7920 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7922 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7926 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set100rel */

/* 7930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7936 */	NdrFcShort( 0xb ),	/* 11 */
/* 7938 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7940 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7942 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7944 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7946 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7954 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7956 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7958 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 7960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7962 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7964 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7966 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7968 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7970 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7974 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcp */

/* 7978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7984 */	NdrFcShort( 0xc ),	/* 12 */
/* 7986 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7988 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7990 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7994 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8002 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8004 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8006 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 8008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8010 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8012 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8014 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8016 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8018 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8022 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcpMux */

/* 8026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8032 */	NdrFcShort( 0xd ),	/* 13 */
/* 8034 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8036 */	NdrFcShort( 0x5 ),	/* 5 */
/* 8038 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8040 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8042 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8050 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8052 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8054 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 8056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8058 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8060 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8064 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8066 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8070 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setICE */

/* 8074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8080 */	NdrFcShort( 0xe ),	/* 14 */
/* 8082 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8084 */	NdrFcShort( 0x5 ),	/* 5 */
/* 8086 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8090 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8098 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8100 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8102 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 8104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8106 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8108 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8112 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8114 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8118 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setQoS */

/* 8122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8128 */	NdrFcShort( 0xf ),	/* 15 */
/* 8130 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 8132 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8134 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8136 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 8138 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8148 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 8150 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 8152 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter type */

/* 8154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8156 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8158 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strength */

/* 8160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8162 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8164 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8166 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8168 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8170 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8174 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold2 */

/* 8178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8184 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8186 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8190 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8192 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8194 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8202 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8204 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8206 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 8208 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8210 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8212 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8216 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8218 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8222 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure resume2 */

/* 8226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8232 */	NdrFcShort( 0x12 ),	/* 18 */
/* 8234 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8238 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8242 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8250 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8252 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8254 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 8256 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8258 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8260 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8262 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8264 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8266 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8270 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */


	/* Procedure resume1 */

/* 8274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8280 */	NdrFcShort( 0x13 ),	/* 19 */
/* 8282 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8286 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8288 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8290 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8298 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8300 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8302 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8306 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8308 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 8310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8312 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer2 */

/* 8316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8322 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8324 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 8326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8328 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8330 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8332 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8340 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8342 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 8344 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 8346 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter referToUriString */

/* 8348 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8350 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8352 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 8354 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8356 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8358 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8362 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8364 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8368 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer1 */

/* 8372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8378 */	NdrFcShort( 0x15 ),	/* 21 */
/* 8380 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8384 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8386 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8388 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8396 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8398 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8400 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter referToUriString */

/* 8402 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8404 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8406 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 8408 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8410 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8412 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8416 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer2 */

/* 8420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8426 */	NdrFcShort( 0x16 ),	/* 22 */
/* 8428 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8432 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8434 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8436 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8444 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8446 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8448 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 8450 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8452 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8454 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8458 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8460 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8464 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer1 */

/* 8468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8474 */	NdrFcShort( 0x17 ),	/* 23 */
/* 8476 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8480 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8482 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8484 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8492 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8494 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8496 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8500 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8502 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8506 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer2 */

/* 8510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8516 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8518 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8522 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8524 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8526 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8534 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8536 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8538 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 8540 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8542 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8544 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8548 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8550 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8554 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer1 */

/* 8558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8564 */	NdrFcShort( 0x19 ),	/* 25 */
/* 8566 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8570 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8572 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8574 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8582 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8584 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8586 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8590 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8592 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8596 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendDTMF */

/* 8600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8606 */	NdrFcShort( 0x1a ),	/* 26 */
/* 8608 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8612 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8614 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8616 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8624 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8626 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8628 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter number */

/* 8630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8632 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8638 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8640 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8644 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSessionTransferId */

/* 8648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8654 */	NdrFcShort( 0x1b ),	/* 27 */
/* 8656 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8660 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8664 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8672 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8674 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8676 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8680 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8686 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data2 */

/* 8690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8696 */	NdrFcShort( 0x1c ),	/* 28 */
/* 8698 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 8700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8702 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8704 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8706 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8714 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8716 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 8718 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 8720 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter data_type */

/* 8722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8724 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8726 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter data */

/* 8728 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8730 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8732 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 8734 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8736 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8738 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8742 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data1 */

/* 8746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8752 */	NdrFcShort( 0x1d ),	/* 29 */
/* 8754 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8758 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8760 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8762 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8770 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8772 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8774 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter data_type */

/* 8776 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8778 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8780 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8782 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8784 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8786 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8790 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setT140Callback */

/* 8794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8800 */	NdrFcShort( 0x1e ),	/* 30 */
/* 8802 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8806 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8808 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8810 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8818 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8820 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8822 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pT140Callback */

/* 8824 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8826 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8828 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */

	/* Parameter __returnValue */

/* 8830 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8832 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8834 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8838 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8848 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8850 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8856 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8858 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8866 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8868 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8870 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 8872 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8874 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8876 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8878 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8880 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8882 */	NdrFcShort( 0x1ae ),	/* Type Offset=430 */

	/* Return value */

/* 8884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8886 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCallback */

/* 8890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8896 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8898 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8902 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8904 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8906 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8914 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8916 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8918 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pCallback */

/* 8920 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8922 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8924 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Parameter __returnValue */

/* 8926 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8928 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8930 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8934 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp4 */

/* 8938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8944 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8946 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 8948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8950 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8952 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8954 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8962 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8964 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 8966 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 8968 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUriString */

/* 8970 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8972 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8974 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 8976 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8978 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8980 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 8982 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8984 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8986 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8990 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp2 */

/* 8994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9000 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9002 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9006 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9008 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9010 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9018 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9020 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9022 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9024 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUri */

/* 9026 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9028 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9030 */	NdrFcShort( 0x1e8 ),	/* Type Offset=488 */

	/* Parameter config */

/* 9032 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9034 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9036 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 9038 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9040 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9042 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9046 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp1 */

/* 9050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9056 */	NdrFcShort( 0xa ),	/* 10 */
/* 9058 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9062 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9064 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9066 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9074 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9076 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9078 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter remoteUri */

/* 9080 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9082 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9084 */	NdrFcShort( 0x1e8 ),	/* Type Offset=488 */

	/* Parameter __returnValue */

/* 9086 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9088 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9090 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9094 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage2 */

/* 9098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9104 */	NdrFcShort( 0xb ),	/* 11 */
/* 9106 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9110 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9112 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9114 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9122 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9124 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9126 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9128 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter payload */

/* 9130 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9132 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9134 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 9136 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9138 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9140 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 9142 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9144 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9146 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9150 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9160 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9162 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9168 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9170 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9178 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9180 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9182 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9184 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter pStack */

/* 9186 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9188 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9190 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Parameter pCallback */

/* 9192 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9194 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9196 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Parameter __returnValue */

/* 9198 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9200 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9202 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Return value */

/* 9204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9206 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure publish2 */


	/* Procedure send2 */


	/* Procedure send2 */

/* 9210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9216 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9218 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9222 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9224 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9226 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9234 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9236 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9238 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9240 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */

/* 9242 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9244 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9246 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 9248 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9250 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9252 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 9254 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9256 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9258 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 9260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9262 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister1 */


	/* Procedure unPublish1 */


	/* Procedure accept1 */


	/* Procedure accept1 */


	/* Procedure accept1 */

/* 9266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9272 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9274 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9278 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9280 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9282 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9290 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9292 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9294 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 9296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9298 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9300 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 9302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9304 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept2 */


	/* Procedure reject2 */


	/* Procedure reject2 */


	/* Procedure reject2 */

/* 9308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9314 */	NdrFcShort( 0xa ),	/* 10 */
/* 9316 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9320 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9322 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9324 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9332 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9334 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9336 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 9338 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9340 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9342 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 9344 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9346 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9348 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 9350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9352 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9362 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9364 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9370 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9372 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9380 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9382 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9384 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9386 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9388 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9390 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9392 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9394 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9396 */	NdrFcShort( 0x20c ),	/* Type Offset=524 */

	/* Return value */

/* 9398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9400 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9410 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9412 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9418 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9420 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9428 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9430 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9432 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9434 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9436 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9438 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9440 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9442 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9444 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Return value */

/* 9446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9448 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9458 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9460 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9466 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9468 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9476 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9478 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9480 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9482 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9484 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9486 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9488 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9490 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9492 */	NdrFcShort( 0x238 ),	/* Type Offset=568 */

	/* Return value */

/* 9494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9496 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9506 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9508 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9514 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9516 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9524 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9526 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9528 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9530 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9532 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9534 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9536 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9538 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9540 */	NdrFcShort( 0x24e ),	/* Type Offset=590 */

	/* Return value */

/* 9542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9544 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject2 */

/* 9548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9554 */	NdrFcShort( 0xc ),	/* 12 */
/* 9556 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9560 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9564 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9572 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9574 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9576 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 9578 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9580 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9582 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 9584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9586 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9588 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9592 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9602 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9604 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9610 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9612 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9620 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9622 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9624 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9626 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9628 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9630 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9632 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9634 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9636 */	NdrFcShort( 0x264 ),	/* Type Offset=612 */

	/* Return value */

/* 9638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9640 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9650 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9652 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9658 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9660 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9668 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9670 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9672 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9674 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9676 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9678 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9680 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9682 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9684 */	NdrFcShort( 0x27a ),	/* Type Offset=634 */

	/* Return value */

/* 9686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9688 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDialogEvent */

/* 9692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9698 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9700 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9704 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9706 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9708 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9716 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9718 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9720 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9722 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9724 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9726 */	NdrFcShort( 0x290 ),	/* Type Offset=656 */

	/* Parameter __returnValue */

/* 9728 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9730 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9736 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackEvent */

/* 9740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9746 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9748 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9752 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9754 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9756 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9764 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9766 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9768 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9770 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9772 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9774 */	NdrFcShort( 0x2a2 ),	/* Type Offset=674 */

	/* Parameter __returnValue */

/* 9776 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9778 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9784 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInviteEvent */

/* 9788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9796 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9802 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9804 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9812 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9814 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9816 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9818 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9820 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9822 */	NdrFcShort( 0x2b4 ),	/* Type Offset=692 */

	/* Parameter __returnValue */

/* 9824 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9826 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9832 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnMessagingEvent */

/* 9836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9842 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9844 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9848 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9850 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9852 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9860 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9862 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9864 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9866 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9868 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9870 */	NdrFcShort( 0x2c6 ),	/* Type Offset=710 */

	/* Parameter __returnValue */

/* 9872 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9874 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9880 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInfoEvent */

/* 9884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9890 */	NdrFcShort( 0xa ),	/* 10 */
/* 9892 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9896 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9898 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9900 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9908 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9910 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9912 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9914 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9916 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9918 */	NdrFcShort( 0x2d8 ),	/* Type Offset=728 */

	/* Parameter __returnValue */

/* 9920 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9922 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9928 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnOptionsEvent */

/* 9932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9938 */	NdrFcShort( 0xb ),	/* 11 */
/* 9940 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9944 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9946 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9948 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9956 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9958 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9960 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9962 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9964 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9966 */	NdrFcShort( 0x2ea ),	/* Type Offset=746 */

	/* Parameter __returnValue */

/* 9968 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9970 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9976 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPublicationEvent */

/* 9980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9986 */	NdrFcShort( 0xc ),	/* 12 */
/* 9988 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9992 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9994 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9996 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10004 */	NdrFcShort( 0x3 ),	/* 3 */
/* 10006 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 10008 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 10010 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10012 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10014 */	NdrFcShort( 0x2fc ),	/* Type Offset=764 */

	/* Parameter __returnValue */

/* 10016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10018 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10024 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnRegistrationEvent */

/* 10028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10034 */	NdrFcShort( 0xd ),	/* 13 */
/* 10036 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 10038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10040 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10042 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10044 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10052 */	NdrFcShort( 0x3 ),	/* 3 */
/* 10054 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 10056 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 10058 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10060 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10062 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter __returnValue */

/* 10064 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10066 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10072 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnSubscriptionEvent */

/* 10076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10082 */	NdrFcShort( 0xe ),	/* 14 */
/* 10084 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 10086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10088 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10090 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10092 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10100 */	NdrFcShort( 0x3 ),	/* 3 */
/* 10102 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 10104 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 10106 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10108 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10110 */	NdrFcShort( 0x320 ),	/* Type Offset=800 */

	/* Parameter __returnValue */

/* 10112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10114 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10120 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getBaseSession */

/* 10124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10132 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10138 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10140 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10148 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10150 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10152 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10154 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10156 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10158 */	NdrFcShort( 0x332 ),	/* Type Offset=818 */

	/* Return value */

/* 10160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10162 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipMessage */

/* 10166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10172 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10174 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10180 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10182 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10190 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10192 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10194 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10196 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10198 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10200 */	NdrFcShort( 0x348 ),	/* Type Offset=840 */

	/* Return value */

/* 10202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10204 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RegistrationState */


	/* Procedure get_State */


	/* Procedure getRequestType */


	/* Procedure getMediaType */

/* 10208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10214 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10216 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10220 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10224 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10232 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10234 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10236 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 10238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10240 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10242 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 10244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10246 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10258 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10264 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10266 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10274 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10276 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10278 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10280 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10282 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10284 */	NdrFcShort( 0x35e ),	/* Type Offset=862 */

	/* Return value */

/* 10286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10288 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeCallSessionOwnership */

/* 10292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10298 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10300 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10306 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10308 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10316 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10318 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10320 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10322 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10324 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10326 */	NdrFcShort( 0x374 ),	/* Type Offset=884 */

	/* Return value */

/* 10328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10330 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeMsrpSessionOwnership */

/* 10334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10340 */	NdrFcShort( 0xa ),	/* 10 */
/* 10342 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10348 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10350 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10358 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10360 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10362 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10364 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10366 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10368 */	NdrFcShort( 0x38a ),	/* Type Offset=906 */

	/* Return value */

/* 10370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10372 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10382 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10384 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10390 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10392 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10400 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10402 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10404 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10406 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10408 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10410 */	NdrFcShort( 0x3a0 ),	/* Type Offset=928 */

	/* Return value */

/* 10412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10414 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10426 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10432 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10434 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10442 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10444 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10446 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10448 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10450 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10452 */	NdrFcShort( 0x3a0 ),	/* Type Offset=928 */

	/* Return value */

/* 10454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10456 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10466 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10468 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10474 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10476 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10484 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10486 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10488 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10490 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10492 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10494 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 10496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10498 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10510 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10516 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10518 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10526 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10528 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10530 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10532 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10534 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10536 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 10538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10540 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10550 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10552 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10558 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10560 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10568 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10570 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10572 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10574 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10576 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10578 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 10580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10582 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10594 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10600 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10602 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10610 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10612 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10614 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10616 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10618 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10620 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 10622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10624 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10634 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10636 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10642 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10644 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10652 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10654 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10656 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10658 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10660 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10662 */	NdrFcShort( 0x3e2 ),	/* Type Offset=994 */

	/* Return value */

/* 10664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10666 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10678 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10684 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10686 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10694 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10696 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10698 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10700 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10702 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10704 */	NdrFcShort( 0x3e2 ),	/* Type Offset=994 */

	/* Return value */

/* 10706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10708 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10718 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10720 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10726 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10728 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10736 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10738 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10740 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10742 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10744 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10746 */	NdrFcShort( 0x3f8 ),	/* Type Offset=1016 */

	/* Return value */

/* 10748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10750 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10754 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10762 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10768 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10770 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10778 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10780 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10782 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10784 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10786 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10788 */	NdrFcShort( 0x3f8 ),	/* Type Offset=1016 */

	/* Return value */

/* 10790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10792 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10802 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10804 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10810 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10812 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10820 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10822 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10824 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10826 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10828 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10830 */	NdrFcShort( 0x40e ),	/* Type Offset=1038 */

	/* Return value */

/* 10832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10834 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10846 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10852 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10854 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10862 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10864 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10866 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10868 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10870 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10872 */	NdrFcShort( 0x40e ),	/* Type Offset=1038 */

	/* Return value */

/* 10874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10876 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue2 */

/* 10880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10886 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10888 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 10890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10894 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10896 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 10898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10900 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10904 */	NdrFcShort( 0x5 ),	/* 5 */
/* 10906 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 10908 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 10910 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 10912 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10914 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10916 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 10918 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10920 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10922 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 10924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10926 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10930 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10932 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 10934 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10938 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 10940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue1 */

/* 10942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10948 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10950 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 10952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10956 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10958 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 10960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10966 */	NdrFcShort( 0x4 ),	/* 4 */
/* 10968 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 10970 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 10972 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter media */

/* 10974 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10976 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10978 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 10980 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10982 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10984 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 10986 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10988 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10990 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10994 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 10996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderAValue */

/* 10998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11006 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 11008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11012 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11014 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11022 */	NdrFcShort( 0x4 ),	/* 4 */
/* 11024 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 11026 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 11028 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter media */

/* 11030 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11032 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11034 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter attributeName */

/* 11036 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11038 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11040 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 11042 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11044 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11046 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11050 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getResponseCode */

/* 11054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11062 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11066 */	NdrFcShort( 0x22 ),	/* 34 */
/* 11068 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11070 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11078 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11080 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11082 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11086 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11088 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11092 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue2 */

/* 11096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11102 */	NdrFcShort( 0xa ),	/* 10 */
/* 11104 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 11106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11110 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11112 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11116 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11120 */	NdrFcShort( 0x4 ),	/* 4 */
/* 11122 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 11124 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 11126 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 11128 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11130 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11132 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 11134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11136 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11140 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11142 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11144 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11148 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue1 */

/* 11152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11158 */	NdrFcShort( 0xb ),	/* 11 */
/* 11160 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11166 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11168 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11176 */	NdrFcShort( 0x3 ),	/* 3 */
/* 11178 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 11180 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 11182 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11184 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11186 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 11188 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11190 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11192 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11196 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue2 */

/* 11200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11206 */	NdrFcShort( 0xc ),	/* 12 */
/* 11208 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 11210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11214 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11216 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11224 */	NdrFcShort( 0x5 ),	/* 5 */
/* 11226 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 11228 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 11230 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter name */

/* 11232 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11234 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11236 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 11238 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11240 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11242 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 11244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11246 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11250 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11252 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11254 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11258 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 11260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue1 */

/* 11262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11268 */	NdrFcShort( 0xd ),	/* 13 */
/* 11270 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 11272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11276 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11278 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11286 */	NdrFcShort( 0x4 ),	/* 4 */
/* 11288 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 11290 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 11292 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 11294 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11296 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11298 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 11300 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11302 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11304 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 11306 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11308 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11310 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11314 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContentLength */

/* 11318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11324 */	NdrFcShort( 0xe ),	/* 14 */
/* 11326 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11330 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11332 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11334 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11342 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11344 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11346 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11350 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11356 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContent */

/* 11360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11366 */	NdrFcShort( 0xf ),	/* 15 */
/* 11368 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11374 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11376 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11384 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11386 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11388 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11390 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11392 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11394 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11398 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpMessage */

/* 11402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11408 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11410 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11416 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11418 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11426 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11428 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11430 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11432 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11434 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11436 */	NdrFcShort( 0x424 ),	/* Type Offset=1060 */

	/* Return value */

/* 11438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11440 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */

/* 11444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11450 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11452 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11458 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 11460 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11470 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 11472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11474 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoPeriodicKeepAlive */


	/* Procedure Stop */

/* 11478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11484 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11486 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11492 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 11494 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11502 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11504 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */


	/* Return value */

/* 11506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11508 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackStateChanged */


	/* Procedure OnDebugMessage */

/* 11512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11518 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11520 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11526 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11528 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11536 */	NdrFcShort( 0x3 ),	/* 3 */
/* 11538 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 11540 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter newState */


	/* Parameter level */

/* 11542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11544 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11546 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter message */

/* 11548 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11550 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11552 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 11554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11556 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAudioRoutingChanged */

/* 11560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11566 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11568 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11576 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11584 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11586 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11588 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newRoute */

/* 11590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11592 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11594 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11598 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAVCallStateChanged */


	/* Procedure OnRegistrationStateChanged */

/* 11602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11608 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11610 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 11612 */	NdrFcShort( 0xe ),	/* 14 */
/* 11614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11616 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11618 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11626 */	NdrFcShort( 0x4 ),	/* 4 */
/* 11628 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 11630 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 11632 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter newState */


	/* Parameter newState */

/* 11634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11636 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11638 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter sipCode */


	/* Parameter sipCode */

/* 11640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11642 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11644 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter description */

/* 11646 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11648 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11650 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 11652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11654 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnHoldStateChanged */

/* 11658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11664 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11666 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11672 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11674 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11682 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11684 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11686 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newState */

/* 11688 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11690 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11692 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11696 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DisplayName */

/* 11700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11706 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11708 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11714 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11716 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11718 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11724 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11726 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11728 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11730 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11732 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11734 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11738 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DisplayName */

/* 11742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11748 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11750 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11756 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11758 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11766 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11768 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11770 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11774 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11776 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 11778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11780 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RealmUri */

/* 11784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11790 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11792 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11798 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11800 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11808 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11810 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11812 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11814 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11816 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11818 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 11820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11822 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpiString */

/* 11826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11832 */	NdrFcShort( 0xb ),	/* 11 */
/* 11834 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11840 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11842 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11850 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11852 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11854 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11856 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11858 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11860 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 11862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11864 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpuUri */

/* 11868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11874 */	NdrFcShort( 0xd ),	/* 13 */
/* 11876 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11882 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11884 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11892 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11894 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11896 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11898 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11900 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11902 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 11904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11906 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Password */

/* 11910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11916 */	NdrFcShort( 0xe ),	/* 14 */
/* 11918 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11924 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11926 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11934 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11936 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11938 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11940 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11942 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11944 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11948 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Password */

/* 11952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11958 */	NdrFcShort( 0xf ),	/* 15 */
/* 11960 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11966 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11968 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11972 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11976 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11978 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11980 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11982 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11984 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11986 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 11988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11990 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyHost */

/* 11994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12000 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12002 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12008 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12010 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12018 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12020 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12022 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12024 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12026 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12028 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 12030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12032 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyHost */

/* 12036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12042 */	NdrFcShort( 0x11 ),	/* 17 */
/* 12044 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12050 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12052 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12060 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12062 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12064 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12066 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12068 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12070 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 12072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12074 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyPort */

/* 12078 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12084 */	NdrFcShort( 0x12 ),	/* 18 */
/* 12086 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12090 */	NdrFcShort( 0x22 ),	/* 34 */
/* 12092 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12094 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12102 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12104 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12106 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12108 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12110 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12112 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12116 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyPort */

/* 12120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12126 */	NdrFcShort( 0x13 ),	/* 19 */
/* 12128 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12130 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12134 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12136 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12144 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12146 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12148 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12152 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12154 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12158 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EarlyIMS */

/* 12162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12168 */	NdrFcShort( 0x14 ),	/* 20 */
/* 12170 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12174 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12176 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12178 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12186 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12188 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12190 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12192 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12194 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12196 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12200 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EarlyIMS */

/* 12204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12210 */	NdrFcShort( 0x15 ),	/* 21 */
/* 12212 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12214 */	NdrFcShort( 0x5 ),	/* 5 */
/* 12216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12218 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12220 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12228 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12230 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12232 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12236 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12238 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12242 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Transport */

/* 12246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12252 */	NdrFcShort( 0x16 ),	/* 22 */
/* 12254 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12258 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12260 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12262 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12270 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12272 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12274 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12276 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12278 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12280 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12284 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Transport */

/* 12288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12294 */	NdrFcShort( 0x17 ),	/* 23 */
/* 12296 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12302 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12304 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12312 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12314 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12316 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12320 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12322 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12326 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IPVersion */

/* 12330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12336 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12338 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12342 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12344 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12346 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12354 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12356 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12358 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12362 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12364 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12368 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IPVersion */

/* 12372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12378 */	NdrFcShort( 0x19 ),	/* 25 */
/* 12380 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12386 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12388 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12396 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12398 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12400 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12404 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12406 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12410 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PushNotificationUri */

/* 12414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12420 */	NdrFcShort( 0x1a ),	/* 26 */
/* 12422 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12428 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12430 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12438 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12440 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12442 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12444 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12446 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12448 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 12450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12452 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PushNotificationUri */

/* 12456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12462 */	NdrFcShort( 0x1b ),	/* 27 */
/* 12464 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12470 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12472 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12480 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12482 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12484 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12488 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12490 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 12492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12494 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UserAgent */

/* 12498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12504 */	NdrFcShort( 0x1c ),	/* 28 */
/* 12506 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12512 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12514 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12516 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12522 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12524 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12526 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12528 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12530 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12532 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 12534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12536 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_UserAgent */

/* 12540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12546 */	NdrFcShort( 0x1d ),	/* 29 */
/* 12548 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12554 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12556 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12564 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12566 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12568 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12570 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12572 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12574 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 12576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12578 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UriRemote */

/* 12582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12588 */	NdrFcShort( 0x9 ),	/* 9 */
/* 12590 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12596 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12598 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12606 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12608 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12610 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12612 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12614 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12616 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Return value */

/* 12618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12620 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Accept */

/* 12624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12630 */	NdrFcShort( 0xa ),	/* 10 */
/* 12632 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12636 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12638 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12640 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12648 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12650 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12652 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 12654 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12656 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12658 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 12660 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12662 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12664 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12668 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HangUp */

/* 12672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12678 */	NdrFcShort( 0xb ),	/* 11 */
/* 12680 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12684 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12686 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12688 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12696 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12698 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12700 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 12702 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12704 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12706 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 12708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12710 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12712 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12716 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Hold */

/* 12720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12726 */	NdrFcShort( 0xc ),	/* 12 */
/* 12728 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12732 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12734 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12736 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12744 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12746 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12748 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 12750 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12752 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12754 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 12756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12758 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12760 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12764 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */

/* 12768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12774 */	NdrFcShort( 0xd ),	/* 13 */
/* 12776 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12780 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12782 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12784 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12792 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12794 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12796 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 12798 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12800 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12802 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 12804 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12806 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12808 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12812 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipConfig */

/* 12816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12822 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12824 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12830 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12832 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12840 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12842 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12844 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12846 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12848 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12850 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Return value */

/* 12852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12854 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipActiveAVCall */

/* 12858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12866 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12872 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12874 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12882 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12884 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12886 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12888 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12890 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12892 */	NdrFcShort( 0x454 ),	/* Type Offset=1108 */

	/* Return value */

/* 12894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12896 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AudioRoute */

/* 12900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12906 */	NdrFcShort( 0xa ),	/* 10 */
/* 12908 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12912 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12916 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12924 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12926 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12928 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12932 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12934 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12938 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AudioRoute */

/* 12942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12948 */	NdrFcShort( 0xb ),	/* 11 */
/* 12950 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12956 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12958 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12966 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12968 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12970 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newRoute */

/* 12972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12974 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12976 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12980 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CameraLocation */

/* 12984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12990 */	NdrFcShort( 0xc ),	/* 12 */
/* 12992 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12996 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13000 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13008 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13010 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13012 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13014 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13016 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13018 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 13020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13022 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CameraLocation */

/* 13026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13032 */	NdrFcShort( 0xd ),	/* 13 */
/* 13034 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13040 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13042 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13050 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13052 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13054 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newLocation */

/* 13056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13058 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13060 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 13062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13064 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDebugMessageListener */

/* 13068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13074 */	NdrFcShort( 0xe ),	/* 14 */
/* 13076 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13082 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13084 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13092 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13094 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13096 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 13098 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13100 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13102 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 13104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13106 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAudioStateChangedListener */

/* 13110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13116 */	NdrFcShort( 0xf ),	/* 15 */
/* 13118 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13126 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13134 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13136 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13138 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 13140 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13142 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13144 */	NdrFcShort( 0x47c ),	/* Type Offset=1148 */

	/* Return value */

/* 13146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13148 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipRegistrationStateChangedListener */

/* 13152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13158 */	NdrFcShort( 0x10 ),	/* 16 */
/* 13160 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13166 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13168 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13176 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13178 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13180 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 13182 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13184 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13186 */	NdrFcShort( 0x48e ),	/* Type Offset=1166 */

	/* Return value */

/* 13188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13190 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipStackStateChangedListener */

/* 13194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13200 */	NdrFcShort( 0x11 ),	/* 17 */
/* 13202 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13208 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13210 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13218 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13220 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13222 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 13224 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13226 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13228 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Return value */

/* 13230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13232 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipAVCallStateChangedListener */

/* 13236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13242 */	NdrFcShort( 0x12 ),	/* 18 */
/* 13244 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13250 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13252 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13260 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13262 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13264 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 13266 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13268 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13270 */	NdrFcShort( 0x4b2 ),	/* Type Offset=1202 */

	/* Return value */

/* 13272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13274 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Register */

/* 13278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13284 */	NdrFcShort( 0x15 ),	/* 21 */
/* 13286 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13290 */	NdrFcShort( 0x21 ),	/* 33 */
/* 13292 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13294 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13302 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13304 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13306 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13308 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13310 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13312 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 13314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13316 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudio */

/* 13320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13326 */	NdrFcShort( 0x17 ),	/* 23 */
/* 13328 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 13330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13334 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 13336 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13344 */	NdrFcShort( 0x4 ),	/* 4 */
/* 13346 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 13348 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 13350 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter pTo */

/* 13352 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13354 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13356 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter pConfig */

/* 13358 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13360 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13362 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 13364 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13366 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13368 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 13370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13372 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudioVideo */

/* 13376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13382 */	NdrFcShort( 0x18 ),	/* 24 */
/* 13384 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 13386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13390 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 13392 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13400 */	NdrFcShort( 0x4 ),	/* 4 */
/* 13402 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 13404 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 13406 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter pTo */

/* 13408 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13410 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13412 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter pConfig */

/* 13414 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13416 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13418 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 13420 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13422 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13424 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 13426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13428 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartServer */

/* 13432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13438 */	NdrFcShort( 0x6 ),	/* 6 */
/* 13440 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13446 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 13448 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 13450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13456 */	NdrFcShort( 0x3 ),	/* 3 */
/* 13458 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 13460 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter __outOfProcServerClassNamesSize */

/* 13462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13464 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outOfProcServerClassNames */

/* 13468 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 13470 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13472 */	NdrFcShort( 0x4de ),	/* Type Offset=1246 */

	/* Return value */

/* 13474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13476 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VideoRenderer */

/* 13480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13488 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13494 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13496 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13504 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13506 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13508 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13510 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13512 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13514 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 13516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13518 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_VideoRenderer */

/* 13522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13528 */	NdrFcShort( 0x9 ),	/* 9 */
/* 13530 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13536 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13538 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13546 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13548 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13550 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 13552 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13554 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13556 */	NdrFcShort( 0x4f8 ),	/* Type Offset=1272 */

	/* Return value */

/* 13558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13560 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipService */

/* 13564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13570 */	NdrFcShort( 0xa ),	/* 10 */
/* 13572 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13578 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13580 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13588 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13590 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13592 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13594 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13596 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13598 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Return value */

/* 13600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13602 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_VideoFrameReceived */

/* 13606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13612 */	NdrFcShort( 0xb ),	/* 11 */
/* 13614 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13618 */	NdrFcShort( 0x34 ),	/* 52 */
/* 13620 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 13622 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13630 */	NdrFcShort( 0x3 ),	/* 3 */
/* 13632 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 13634 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter __param0 */

/* 13636 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13638 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13640 */	NdrFcShort( 0x520 ),	/* Type Offset=1312 */

	/* Parameter __returnValue */

/* 13642 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 13644 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13646 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Return value */

/* 13648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13650 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_VideoFrameReceived */

/* 13654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13660 */	NdrFcShort( 0xc ),	/* 12 */
/* 13662 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 13664 */	NdrFcShort( 0x18 ),	/* 24 */
/* 13666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13668 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13670 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13678 */	NdrFcShort( 0x4 ),	/* 4 */
/* 13680 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 13682 */	0x9f,		/* 159 */
			0x82,		/* 130 */
/* 13684 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter __param0 */

/* 13686 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 13688 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13690 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Return value */

/* 13692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13694 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUiDisconnectedEventName */

/* 13698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13704 */	NdrFcShort( 0x7 ),	/* 7 */
/* 13706 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13712 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 13714 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 13716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13722 */	NdrFcShort( 0x3 ),	/* 3 */
/* 13724 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 13726 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter backgroundProcessId */

/* 13728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13730 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13734 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13736 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13738 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 13740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13742 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBackgroundProcessReadyEventName */

/* 13746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13754 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13760 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 13762 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 13764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13770 */	NdrFcShort( 0x3 ),	/* 3 */
/* 13772 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 13774 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter backgroundProcessId */

/* 13776 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13778 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13782 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13784 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13786 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 13788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13790 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Instance */

/* 13794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13800 */	NdrFcShort( 0x9 ),	/* 9 */
/* 13802 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13808 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13810 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13818 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13820 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13822 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13824 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13826 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13828 */	NdrFcShort( 0x53c ),	/* Type Offset=1340 */

	/* Return value */

/* 13830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13832 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const doubango_rt2EBackEnd_MIDL_TYPE_FORMAT_STRING doubango_rt2EBackEnd__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0x905a0fe0 ),	/* -1873145888 */
/*  8 */	NdrFcShort( 0xbc53 ),	/* -17325 */
/* 10 */	NdrFcShort( 0x11df ),	/* 4575 */
/* 12 */	0x8c,		/* 140 */
			0x49,		/* 73 */
/* 14 */	0x0,		/* 0 */
			0x1e,		/* 30 */
/* 16 */	0x4f,		/* 79 */
			0xc6,		/* 198 */
/* 18 */	0x86,		/* 134 */
			0xda,		/* 218 */
/* 20 */	
			0x12, 0x0,	/* FC_UP */
/* 22 */	NdrFcShort( 0xe ),	/* Offset= 14 (36) */
/* 24 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 26 */	NdrFcShort( 0x2 ),	/* 2 */
/* 28 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 30 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 32 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 34 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 36 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (24) */
/* 42 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 44 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 46 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xffde ),	/* Offset= -34 (20) */
/* 56 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 58 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 60 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 62 */	NdrFcShort( 0x2 ),	/* Offset= 2 (64) */
/* 64 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 66 */	NdrFcLong( 0x1ba29f65 ),	/* 463642469 */
/* 70 */	NdrFcShort( 0x9abb ),	/* -25925 */
/* 72 */	NdrFcShort( 0x3024 ),	/* 12324 */
/* 74 */	0x82,		/* 130 */
			0x21,		/* 33 */
/* 76 */	0xa9,		/* 169 */
			0x8c,		/* 140 */
/* 78 */	0xdb,		/* 219 */
			0x0,		/* 0 */
/* 80 */	0x88,		/* 136 */
			0x87,		/* 135 */
/* 82 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 84 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 88 */	0xe,		/* FC_ENUM32 */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 92 */	NdrFcShort( 0x6 ),	/* Offset= 6 (98) */
/* 94 */	
			0x13, 0x0,	/* FC_OP */
/* 96 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (36) */
/* 98 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x4 ),	/* 4 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (94) */
/* 108 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (112) */
/* 112 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 114 */	NdrFcLong( 0x8dd1cd82 ),	/* -1915630206 */
/* 118 */	NdrFcShort( 0xf943 ),	/* -1725 */
/* 120 */	NdrFcShort( 0x3715 ),	/* 14101 */
/* 122 */	0xb5,		/* 181 */
			0x10,		/* 16 */
/* 124 */	0xf8,		/* 248 */
			0xd9,		/* 217 */
/* 126 */	0xf2,		/* 242 */
			0x10,		/* 16 */
/* 128 */	0xd7,		/* 215 */
			0x5d,		/* 93 */
/* 130 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 132 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 134 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 136 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 140 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 142 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 144 */	NdrFcShort( 0x2 ),	/* Offset= 2 (146) */
/* 146 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 148 */	NdrFcLong( 0x72089dc3 ),	/* 1913167299 */
/* 152 */	NdrFcShort( 0x5600 ),	/* 22016 */
/* 154 */	NdrFcShort( 0x3f9e ),	/* 16286 */
/* 156 */	0x89,		/* 137 */
			0xa9,		/* 169 */
/* 158 */	0x35,		/* 53 */
			0xd5,		/* 213 */
/* 160 */	0xe,		/* 14 */
			0x35,		/* 53 */
/* 162 */	0x3,		/* 3 */
			0x48,		/* 72 */
/* 164 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (168) */
/* 168 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 170 */	NdrFcLong( 0x746afeab ),	/* 1953169067 */
/* 174 */	NdrFcShort( 0x72 ),	/* 114 */
/* 176 */	NdrFcShort( 0x38fe ),	/* 14590 */
/* 178 */	0xb1,		/* 177 */
			0xa7,		/* 167 */
/* 180 */	0x21,		/* 33 */
			0x77,		/* 119 */
/* 182 */	0xb,		/* 11 */
			0xe6,		/* 230 */
/* 184 */	0x4a,		/* 74 */
			0x4a,		/* 74 */
/* 186 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 188 */	NdrFcShort( 0x2 ),	/* Offset= 2 (190) */
/* 190 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 192 */	NdrFcLong( 0xb92764bb ),	/* -1188600645 */
/* 196 */	NdrFcShort( 0xf11d ),	/* -3811 */
/* 198 */	NdrFcShort( 0x3bd1 ),	/* 15313 */
/* 200 */	0x8d,		/* 141 */
			0xea,		/* 234 */
/* 202 */	0xb1,		/* 177 */
			0x33,		/* 51 */
/* 204 */	0xce,		/* 206 */
			0x9b,		/* 155 */
/* 206 */	0xf5,		/* 245 */
			0xf7,		/* 247 */
/* 208 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 210 */	NdrFcLong( 0xe4effef8 ),	/* -454033672 */
/* 214 */	NdrFcShort( 0x5c8d ),	/* 23693 */
/* 216 */	NdrFcShort( 0x389a ),	/* 14490 */
/* 218 */	0xbe,		/* 190 */
			0xa7,		/* 167 */
/* 220 */	0x7e,		/* 126 */
			0x14,		/* 20 */
/* 222 */	0xe2,		/* 226 */
			0xa0,		/* 160 */
/* 224 */	0xaa,		/* 170 */
			0x95,		/* 149 */
/* 226 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 228 */	NdrFcLong( 0xea0b2968 ),	/* -368367256 */
/* 232 */	NdrFcShort( 0x7ad4 ),	/* 31444 */
/* 234 */	NdrFcShort( 0x3d5c ),	/* 15708 */
/* 236 */	0xaa,		/* 170 */
			0xd3,		/* 211 */
/* 238 */	0x2a,		/* 42 */
			0xef,		/* 239 */
/* 240 */	0xb3,		/* 179 */
			0xac,		/* 172 */
/* 242 */	0xd2,		/* 210 */
			0xe7,		/* 231 */
/* 244 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 246 */	NdrFcShort( 0x2 ),	/* Offset= 2 (248) */
/* 248 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 250 */	NdrFcLong( 0x944bb133 ),	/* -1806978765 */
/* 254 */	NdrFcShort( 0x86e3 ),	/* -31005 */
/* 256 */	NdrFcShort( 0x3fb3 ),	/* 16307 */
/* 258 */	0xbc,		/* 188 */
			0xf5,		/* 245 */
/* 260 */	0xfd,		/* 253 */
			0x12,		/* 18 */
/* 262 */	0xb6,		/* 182 */
			0x6e,		/* 110 */
/* 264 */	0x3b,		/* 59 */
			0xa6,		/* 166 */
/* 266 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 268 */	NdrFcShort( 0x2 ),	/* Offset= 2 (270) */
/* 270 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 272 */	NdrFcLong( 0x357645ec ),	/* 896943596 */
/* 276 */	NdrFcShort( 0x98bf ),	/* -26433 */
/* 278 */	NdrFcShort( 0x3baf ),	/* 15279 */
/* 280 */	0x8b,		/* 139 */
			0x97,		/* 151 */
/* 282 */	0x33,		/* 51 */
			0x38,		/* 56 */
/* 284 */	0x78,		/* 120 */
			0x33,		/* 51 */
/* 286 */	0x97,		/* 151 */
			0xcb,		/* 203 */
/* 288 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 290 */	NdrFcLong( 0x19f9a6f1 ),	/* 435791601 */
/* 294 */	NdrFcShort( 0xe76c ),	/* -6292 */
/* 296 */	NdrFcShort( 0x321c ),	/* 12828 */
/* 298 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 300 */	0x78,		/* 120 */
			0xdb,		/* 219 */
/* 302 */	0xa8,		/* 168 */
			0xe,		/* 14 */
/* 304 */	0xc2,		/* 194 */
			0x30,		/* 48 */
/* 306 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 308 */	NdrFcLong( 0xfbc56ee2 ),	/* -70947102 */
/* 312 */	NdrFcShort( 0x7375 ),	/* 29557 */
/* 314 */	NdrFcShort( 0x3f53 ),	/* 16211 */
/* 316 */	0x91,		/* 145 */
			0xd3,		/* 211 */
/* 318 */	0x85,		/* 133 */
			0x30,		/* 48 */
/* 320 */	0x79,		/* 121 */
			0x19,		/* 25 */
/* 322 */	0x31,		/* 49 */
			0x84,		/* 132 */
/* 324 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 326 */	NdrFcShort( 0x2 ),	/* Offset= 2 (328) */
/* 328 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 330 */	NdrFcLong( 0x540329e3 ),	/* 1409493475 */
/* 334 */	NdrFcShort( 0x8dd6 ),	/* -29226 */
/* 336 */	NdrFcShort( 0x391c ),	/* 14620 */
/* 338 */	0x9e,		/* 158 */
			0xbd,		/* 189 */
/* 340 */	0x4d,		/* 77 */
			0x73,		/* 115 */
/* 342 */	0x8e,		/* 142 */
			0x1c,		/* 28 */
/* 344 */	0x4,		/* 4 */
			0xf0,		/* 240 */
/* 346 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 348 */	NdrFcShort( 0x2 ),	/* Offset= 2 (350) */
/* 350 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 352 */	NdrFcLong( 0x40d7757 ),	/* 67991383 */
/* 356 */	NdrFcShort( 0x114c ),	/* 4428 */
/* 358 */	NdrFcShort( 0x3581 ),	/* 13697 */
/* 360 */	0x8e,		/* 142 */
			0xf9,		/* 249 */
/* 362 */	0xd6,		/* 214 */
			0x40,		/* 64 */
/* 364 */	0x25,		/* 37 */
			0x6c,		/* 108 */
/* 366 */	0xc,		/* 12 */
			0x14,		/* 20 */
/* 368 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 370 */	NdrFcLong( 0x31ac4c99 ),	/* 833375385 */
/* 374 */	NdrFcShort( 0x4fe9 ),	/* 20457 */
/* 376 */	NdrFcShort( 0x3cce ),	/* 15566 */
/* 378 */	0x89,		/* 137 */
			0xb5,		/* 181 */
/* 380 */	0xc,		/* 12 */
			0x27,		/* 39 */
/* 382 */	0x50,		/* 80 */
			0xcc,		/* 204 */
/* 384 */	0xee,		/* 238 */
			0xa7,		/* 167 */
/* 386 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 388 */	NdrFcShort( 0x2 ),	/* Offset= 2 (390) */
/* 390 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 392 */	NdrFcLong( 0x6acf024c ),	/* 1791951436 */
/* 396 */	NdrFcShort( 0x5fa2 ),	/* 24482 */
/* 398 */	NdrFcShort( 0x3607 ),	/* 13831 */
/* 400 */	0x92,		/* 146 */
			0xb2,		/* 178 */
/* 402 */	0x67,		/* 103 */
			0x74,		/* 116 */
/* 404 */	0x5,		/* 5 */
			0xc7,		/* 199 */
/* 406 */	0x55,		/* 85 */
			0x19,		/* 25 */
/* 408 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 410 */	NdrFcShort( 0x2 ),	/* Offset= 2 (412) */
/* 412 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 414 */	NdrFcLong( 0x266a5021 ),	/* 644501537 */
/* 418 */	NdrFcShort( 0xf4d7 ),	/* -2857 */
/* 420 */	NdrFcShort( 0x3457 ),	/* 13399 */
/* 422 */	0x8c,		/* 140 */
			0x28,		/* 40 */
/* 424 */	0x0,		/* 0 */
			0xc7,		/* 199 */
/* 426 */	0xa3,		/* 163 */
			0x86,		/* 134 */
/* 428 */	0xab,		/* 171 */
			0xde,		/* 222 */
/* 430 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 432 */	NdrFcShort( 0x2 ),	/* Offset= 2 (434) */
/* 434 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 436 */	NdrFcLong( 0x7d605cc9 ),	/* 2103467209 */
/* 440 */	NdrFcShort( 0x6ff4 ),	/* 28660 */
/* 442 */	NdrFcShort( 0x3d58 ),	/* 15704 */
/* 444 */	0x99,		/* 153 */
			0x76,		/* 118 */
/* 446 */	0xf2,		/* 242 */
			0x3c,		/* 60 */
/* 448 */	0x30,		/* 48 */
			0xd4,		/* 212 */
/* 450 */	0xae,		/* 174 */
			0xd5,		/* 213 */
/* 452 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 454 */	NdrFcLong( 0xbd3cc691 ),	/* -1120090479 */
/* 458 */	NdrFcShort( 0xdaaf ),	/* -9553 */
/* 460 */	NdrFcShort( 0x35dd ),	/* 13789 */
/* 462 */	0x9c,		/* 156 */
			0xda,		/* 218 */
/* 464 */	0x24,		/* 36 */
			0x2b,		/* 43 */
/* 466 */	0x70,		/* 112 */
			0xbd,		/* 189 */
/* 468 */	0xf5,		/* 245 */
			0xdc,		/* 220 */
/* 470 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 472 */	NdrFcLong( 0x1ba29f65 ),	/* 463642469 */
/* 476 */	NdrFcShort( 0x9abb ),	/* -25925 */
/* 478 */	NdrFcShort( 0x3024 ),	/* 12324 */
/* 480 */	0x82,		/* 130 */
			0x21,		/* 33 */
/* 482 */	0xa9,		/* 169 */
			0x8c,		/* 140 */
/* 484 */	0xdb,		/* 219 */
			0x0,		/* 0 */
/* 486 */	0x88,		/* 136 */
			0x87,		/* 135 */
/* 488 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 490 */	NdrFcLong( 0x357645ec ),	/* 896943596 */
/* 494 */	NdrFcShort( 0x98bf ),	/* -26433 */
/* 496 */	NdrFcShort( 0x3baf ),	/* 15279 */
/* 498 */	0x8b,		/* 139 */
			0x97,		/* 151 */
/* 500 */	0x33,		/* 51 */
			0x38,		/* 56 */
/* 502 */	0x78,		/* 120 */
			0x33,		/* 51 */
/* 504 */	0x97,		/* 151 */
			0xcb,		/* 203 */
/* 506 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 508 */	NdrFcLong( 0x31ac4c99 ),	/* 833375385 */
/* 512 */	NdrFcShort( 0x4fe9 ),	/* 20457 */
/* 514 */	NdrFcShort( 0x3cce ),	/* 15566 */
/* 516 */	0x89,		/* 137 */
			0xb5,		/* 181 */
/* 518 */	0xc,		/* 12 */
			0x27,		/* 39 */
/* 520 */	0x50,		/* 80 */
			0xcc,		/* 204 */
/* 522 */	0xee,		/* 238 */
			0xa7,		/* 167 */
/* 524 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 526 */	NdrFcShort( 0x2 ),	/* Offset= 2 (528) */
/* 528 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 530 */	NdrFcLong( 0xaaca3593 ),	/* -1429588589 */
/* 534 */	NdrFcShort( 0xcefb ),	/* -12549 */
/* 536 */	NdrFcShort( 0x373e ),	/* 14142 */
/* 538 */	0xa2,		/* 162 */
			0x29,		/* 41 */
/* 540 */	0x85,		/* 133 */
			0x3c,		/* 60 */
/* 542 */	0x78,		/* 120 */
			0xad,		/* 173 */
/* 544 */	0x59,		/* 89 */
			0x21,		/* 33 */
/* 546 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 548 */	NdrFcShort( 0x2 ),	/* Offset= 2 (550) */
/* 550 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 552 */	NdrFcLong( 0x6a30534c ),	/* 1781551948 */
/* 556 */	NdrFcShort( 0x9226 ),	/* -28122 */
/* 558 */	NdrFcShort( 0x3450 ),	/* 13392 */
/* 560 */	0x86,		/* 134 */
			0x1f,		/* 31 */
/* 562 */	0x8d,		/* 141 */
			0x92,		/* 146 */
/* 564 */	0xe2,		/* 226 */
			0x41,		/* 65 */
/* 566 */	0xd6,		/* 214 */
			0x11,		/* 17 */
/* 568 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 570 */	NdrFcShort( 0x2 ),	/* Offset= 2 (572) */
/* 572 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 574 */	NdrFcLong( 0x7aa94f17 ),	/* 2057916183 */
/* 578 */	NdrFcShort( 0xfbeb ),	/* -1045 */
/* 580 */	NdrFcShort( 0x3fac ),	/* 16300 */
/* 582 */	0x92,		/* 146 */
			0xed,		/* 237 */
/* 584 */	0x89,		/* 137 */
			0x8f,		/* 143 */
/* 586 */	0xb9,		/* 185 */
			0xf4,		/* 244 */
/* 588 */	0xed,		/* 237 */
			0xc7,		/* 199 */
/* 590 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 592 */	NdrFcShort( 0x2 ),	/* Offset= 2 (594) */
/* 594 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 596 */	NdrFcLong( 0x8d8bfb47 ),	/* -1920206009 */
/* 600 */	NdrFcShort( 0xbe91 ),	/* -16751 */
/* 602 */	NdrFcShort( 0x3e55 ),	/* 15957 */
/* 604 */	0xad,		/* 173 */
			0x42,		/* 66 */
/* 606 */	0x51,		/* 81 */
			0xa6,		/* 166 */
/* 608 */	0xf8,		/* 248 */
			0xe0,		/* 224 */
/* 610 */	0x19,		/* 25 */
			0xa,		/* 10 */
/* 612 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (616) */
/* 616 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 618 */	NdrFcLong( 0xd34b80f8 ),	/* -750026504 */
/* 622 */	NdrFcShort( 0x410c ),	/* 16652 */
/* 624 */	NdrFcShort( 0x3a42 ),	/* 14914 */
/* 626 */	0xaa,		/* 170 */
			0x6,		/* 6 */
/* 628 */	0x29,		/* 41 */
			0x6e,		/* 110 */
/* 630 */	0xb6,		/* 182 */
			0xa8,		/* 168 */
/* 632 */	0xe2,		/* 226 */
			0xb1,		/* 177 */
/* 634 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 636 */	NdrFcShort( 0x2 ),	/* Offset= 2 (638) */
/* 638 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 640 */	NdrFcLong( 0xe3f89f64 ),	/* -470245532 */
/* 644 */	NdrFcShort( 0xb94a ),	/* -18102 */
/* 646 */	NdrFcShort( 0x368b ),	/* 13963 */
/* 648 */	0x90,		/* 144 */
			0x82,		/* 130 */
/* 650 */	0x93,		/* 147 */
			0xaf,		/* 175 */
/* 652 */	0x84,		/* 132 */
			0xf8,		/* 248 */
/* 654 */	0xbb,		/* 187 */
			0x1f,		/* 31 */
/* 656 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 658 */	NdrFcLong( 0x65780faa ),	/* 1702367146 */
/* 662 */	NdrFcShort( 0x8ebb ),	/* -28997 */
/* 664 */	NdrFcShort( 0x375d ),	/* 14173 */
/* 666 */	0xb0,		/* 176 */
			0x4c,		/* 76 */
/* 668 */	0x47,		/* 71 */
			0x55,		/* 85 */
/* 670 */	0x5d,		/* 93 */
			0xf,		/* 15 */
/* 672 */	0x28,		/* 40 */
			0x45,		/* 69 */
/* 674 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 676 */	NdrFcLong( 0x5fb380dd ),	/* 1605599453 */
/* 680 */	NdrFcShort( 0x95d ),	/* 2397 */
/* 682 */	NdrFcShort( 0x32d4 ),	/* 13012 */
/* 684 */	0xac,		/* 172 */
			0xe4,		/* 228 */
/* 686 */	0x79,		/* 121 */
			0x91,		/* 145 */
/* 688 */	0x51,		/* 81 */
			0x6f,		/* 111 */
/* 690 */	0xd8,		/* 216 */
			0xea,		/* 234 */
/* 692 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 694 */	NdrFcLong( 0x731a866b ),	/* 1931118187 */
/* 698 */	NdrFcShort( 0x4b61 ),	/* 19297 */
/* 700 */	NdrFcShort( 0x3a41 ),	/* 14913 */
/* 702 */	0x9f,		/* 159 */
			0x4b,		/* 75 */
/* 704 */	0xd,		/* 13 */
			0xa7,		/* 167 */
/* 706 */	0x32,		/* 50 */
			0x2f,		/* 47 */
/* 708 */	0x1a,		/* 26 */
			0xa7,		/* 167 */
/* 710 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 712 */	NdrFcLong( 0xd6d6adfb ),	/* -690573829 */
/* 716 */	NdrFcShort( 0x954a ),	/* -27318 */
/* 718 */	NdrFcShort( 0x36f7 ),	/* 14071 */
/* 720 */	0xb3,		/* 179 */
			0x6b,		/* 107 */
/* 722 */	0x51,		/* 81 */
			0xfd,		/* 253 */
/* 724 */	0x40,		/* 64 */
			0x91,		/* 145 */
/* 726 */	0xfe,		/* 254 */
			0xda,		/* 218 */
/* 728 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 730 */	NdrFcLong( 0x3e3607d8 ),	/* 1043728344 */
/* 734 */	NdrFcShort( 0x9ca6 ),	/* -25434 */
/* 736 */	NdrFcShort( 0x3cd2 ),	/* 15570 */
/* 738 */	0x9c,		/* 156 */
			0x82,		/* 130 */
/* 740 */	0x44,		/* 68 */
			0x78,		/* 120 */
/* 742 */	0x58,		/* 88 */
			0xc,		/* 12 */
/* 744 */	0x86,		/* 134 */
			0xd1,		/* 209 */
/* 746 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 748 */	NdrFcLong( 0x1126de2 ),	/* 17984994 */
/* 752 */	NdrFcShort( 0xdb09 ),	/* -9463 */
/* 754 */	NdrFcShort( 0x3456 ),	/* 13398 */
/* 756 */	0x93,		/* 147 */
			0xc8,		/* 200 */
/* 758 */	0x5,		/* 5 */
			0x17,		/* 23 */
/* 760 */	0xc3,		/* 195 */
			0xf9,		/* 249 */
/* 762 */	0x63,		/* 99 */
			0xd5,		/* 213 */
/* 764 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 766 */	NdrFcLong( 0xec75de12 ),	/* -327819758 */
/* 770 */	NdrFcShort( 0xc356 ),	/* -15530 */
/* 772 */	NdrFcShort( 0x33fd ),	/* 13309 */
/* 774 */	0xb8,		/* 184 */
			0xaf,		/* 175 */
/* 776 */	0xae,		/* 174 */
			0x4a,		/* 74 */
/* 778 */	0xb0,		/* 176 */
			0x54,		/* 84 */
/* 780 */	0x14,		/* 20 */
			0xa5,		/* 165 */
/* 782 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 784 */	NdrFcLong( 0x599ee12a ),	/* 1503584554 */
/* 788 */	NdrFcShort( 0x5485 ),	/* 21637 */
/* 790 */	NdrFcShort( 0x3d18 ),	/* 15640 */
/* 792 */	0x9a,		/* 154 */
			0xce,		/* 206 */
/* 794 */	0xf0,		/* 240 */
			0x88,		/* 136 */
/* 796 */	0x5d,		/* 93 */
			0x29,		/* 41 */
/* 798 */	0x45,		/* 69 */
			0x5e,		/* 94 */
/* 800 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 802 */	NdrFcLong( 0x9f4a8862 ),	/* -1622505374 */
/* 806 */	NdrFcShort( 0x8482 ),	/* -31614 */
/* 808 */	NdrFcShort( 0x3083 ),	/* 12419 */
/* 810 */	0xb2,		/* 178 */
			0x4c,		/* 76 */
/* 812 */	0x79,		/* 121 */
			0x67,		/* 103 */
/* 814 */	0x37,		/* 55 */
			0xfd,		/* 253 */
/* 816 */	0xf4,		/* 244 */
			0x2b,		/* 43 */
/* 818 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 820 */	NdrFcShort( 0x2 ),	/* Offset= 2 (822) */
/* 822 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 824 */	NdrFcLong( 0x9bfb53ad ),	/* -1678027859 */
/* 828 */	NdrFcShort( 0xbfc4 ),	/* -16444 */
/* 830 */	NdrFcShort( 0x3784 ),	/* 14212 */
/* 832 */	0x9e,		/* 158 */
			0x6d,		/* 109 */
/* 834 */	0x68,		/* 104 */
			0x39,		/* 57 */
/* 836 */	0xb5,		/* 181 */
			0xe8,		/* 232 */
/* 838 */	0x73,		/* 115 */
			0x20,		/* 32 */
/* 840 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 842 */	NdrFcShort( 0x2 ),	/* Offset= 2 (844) */
/* 844 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 846 */	NdrFcLong( 0xf68542f0 ),	/* -159038736 */
/* 850 */	NdrFcShort( 0xf6c6 ),	/* -2362 */
/* 852 */	NdrFcShort( 0x3de5 ),	/* 15845 */
/* 854 */	0x86,		/* 134 */
			0xfe,		/* 254 */
/* 856 */	0x31,		/* 49 */
			0xe2,		/* 226 */
/* 858 */	0xad,		/* 173 */
			0xd4,		/* 212 */
/* 860 */	0xe4,		/* 228 */
			0x1e,		/* 30 */
/* 862 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 864 */	NdrFcShort( 0x2 ),	/* Offset= 2 (866) */
/* 866 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 868 */	NdrFcLong( 0x266a5021 ),	/* 644501537 */
/* 872 */	NdrFcShort( 0xf4d7 ),	/* -2857 */
/* 874 */	NdrFcShort( 0x3457 ),	/* 13399 */
/* 876 */	0x8c,		/* 140 */
			0x28,		/* 40 */
/* 878 */	0x0,		/* 0 */
			0xc7,		/* 199 */
/* 880 */	0xa3,		/* 163 */
			0x86,		/* 134 */
/* 882 */	0xab,		/* 171 */
			0xde,		/* 222 */
/* 884 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 886 */	NdrFcShort( 0x2 ),	/* Offset= 2 (888) */
/* 888 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 890 */	NdrFcLong( 0x7d605cc9 ),	/* 2103467209 */
/* 894 */	NdrFcShort( 0x6ff4 ),	/* 28660 */
/* 896 */	NdrFcShort( 0x3d58 ),	/* 15704 */
/* 898 */	0x99,		/* 153 */
			0x76,		/* 118 */
/* 900 */	0xf2,		/* 242 */
			0x3c,		/* 60 */
/* 902 */	0x30,		/* 48 */
			0xd4,		/* 212 */
/* 904 */	0xae,		/* 174 */
			0xd5,		/* 213 */
/* 906 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 908 */	NdrFcShort( 0x2 ),	/* Offset= 2 (910) */
/* 910 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 912 */	NdrFcLong( 0x746afeab ),	/* 1953169067 */
/* 916 */	NdrFcShort( 0x72 ),	/* 114 */
/* 918 */	NdrFcShort( 0x38fe ),	/* 14590 */
/* 920 */	0xb1,		/* 177 */
			0xa7,		/* 167 */
/* 922 */	0x21,		/* 33 */
			0x77,		/* 119 */
/* 924 */	0xb,		/* 11 */
			0xe6,		/* 230 */
/* 926 */	0x4a,		/* 74 */
			0x4a,		/* 74 */
/* 928 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 930 */	NdrFcShort( 0x2 ),	/* Offset= 2 (932) */
/* 932 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 934 */	NdrFcLong( 0xaaca3593 ),	/* -1429588589 */
/* 938 */	NdrFcShort( 0xcefb ),	/* -12549 */
/* 940 */	NdrFcShort( 0x373e ),	/* 14142 */
/* 942 */	0xa2,		/* 162 */
			0x29,		/* 41 */
/* 944 */	0x85,		/* 133 */
			0x3c,		/* 60 */
/* 946 */	0x78,		/* 120 */
			0xad,		/* 173 */
/* 948 */	0x59,		/* 89 */
			0x21,		/* 33 */
/* 950 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 952 */	NdrFcShort( 0x2 ),	/* Offset= 2 (954) */
/* 954 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 956 */	NdrFcLong( 0x6a30534c ),	/* 1781551948 */
/* 960 */	NdrFcShort( 0x9226 ),	/* -28122 */
/* 962 */	NdrFcShort( 0x3450 ),	/* 13392 */
/* 964 */	0x86,		/* 134 */
			0x1f,		/* 31 */
/* 966 */	0x8d,		/* 141 */
			0x92,		/* 146 */
/* 968 */	0xe2,		/* 226 */
			0x41,		/* 65 */
/* 970 */	0xd6,		/* 214 */
			0x11,		/* 17 */
/* 972 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 974 */	NdrFcShort( 0x2 ),	/* Offset= 2 (976) */
/* 976 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 978 */	NdrFcLong( 0x7aa94f17 ),	/* 2057916183 */
/* 982 */	NdrFcShort( 0xfbeb ),	/* -1045 */
/* 984 */	NdrFcShort( 0x3fac ),	/* 16300 */
/* 986 */	0x92,		/* 146 */
			0xed,		/* 237 */
/* 988 */	0x89,		/* 137 */
			0x8f,		/* 143 */
/* 990 */	0xb9,		/* 185 */
			0xf4,		/* 244 */
/* 992 */	0xed,		/* 237 */
			0xc7,		/* 199 */
/* 994 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 996 */	NdrFcShort( 0x2 ),	/* Offset= 2 (998) */
/* 998 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1000 */	NdrFcLong( 0x8d8bfb47 ),	/* -1920206009 */
/* 1004 */	NdrFcShort( 0xbe91 ),	/* -16751 */
/* 1006 */	NdrFcShort( 0x3e55 ),	/* 15957 */
/* 1008 */	0xad,		/* 173 */
			0x42,		/* 66 */
/* 1010 */	0x51,		/* 81 */
			0xa6,		/* 166 */
/* 1012 */	0xf8,		/* 248 */
			0xe0,		/* 224 */
/* 1014 */	0x19,		/* 25 */
			0xa,		/* 10 */
/* 1016 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1018 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1020) */
/* 1020 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1022 */	NdrFcLong( 0xd34b80f8 ),	/* -750026504 */
/* 1026 */	NdrFcShort( 0x410c ),	/* 16652 */
/* 1028 */	NdrFcShort( 0x3a42 ),	/* 14914 */
/* 1030 */	0xaa,		/* 170 */
			0x6,		/* 6 */
/* 1032 */	0x29,		/* 41 */
			0x6e,		/* 110 */
/* 1034 */	0xb6,		/* 182 */
			0xa8,		/* 168 */
/* 1036 */	0xe2,		/* 226 */
			0xb1,		/* 177 */
/* 1038 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1040 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1042) */
/* 1042 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1044 */	NdrFcLong( 0xe3f89f64 ),	/* -470245532 */
/* 1048 */	NdrFcShort( 0xb94a ),	/* -18102 */
/* 1050 */	NdrFcShort( 0x368b ),	/* 13963 */
/* 1052 */	0x90,		/* 144 */
			0x82,		/* 130 */
/* 1054 */	0x93,		/* 147 */
			0xaf,		/* 175 */
/* 1056 */	0x84,		/* 132 */
			0xf8,		/* 248 */
/* 1058 */	0xbb,		/* 187 */
			0x1f,		/* 31 */
/* 1060 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1062 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1064) */
/* 1064 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1066 */	NdrFcLong( 0x6d43145f ),	/* 1833112671 */
/* 1070 */	NdrFcShort( 0xfc50 ),	/* -944 */
/* 1072 */	NdrFcShort( 0x3fd7 ),	/* 16343 */
/* 1074 */	0x9d,		/* 157 */
			0x1f,		/* 31 */
/* 1076 */	0xbc,		/* 188 */
			0x47,		/* 71 */
/* 1078 */	0x89,		/* 137 */
			0xaa,		/* 170 */
/* 1080 */	0x9c,		/* 156 */
			0xed,		/* 237 */
/* 1082 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1084 */	NdrFcShort( 0xfdac ),	/* Offset= -596 (488) */
/* 1086 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1088 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1090) */
/* 1090 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1092 */	NdrFcLong( 0x4868ddc4 ),	/* 1214832068 */
/* 1096 */	NdrFcShort( 0x3353 ),	/* 13139 */
/* 1098 */	NdrFcShort( 0x3344 ),	/* 13124 */
/* 1100 */	0x84,		/* 132 */
			0x2d,		/* 45 */
/* 1102 */	0xeb,		/* 235 */
			0x96,		/* 150 */
/* 1104 */	0xac,		/* 172 */
			0x83,		/* 131 */
/* 1106 */	0x71,		/* 113 */
			0xb9,		/* 185 */
/* 1108 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1112) */
/* 1112 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1114 */	NdrFcLong( 0x5fc37d6 ),	/* 100415446 */
/* 1118 */	NdrFcShort( 0xff7f ),	/* -129 */
/* 1120 */	NdrFcShort( 0x3d9f ),	/* 15775 */
/* 1122 */	0xa6,		/* 166 */
			0xfd,		/* 253 */
/* 1124 */	0x77,		/* 119 */
			0x5d,		/* 93 */
/* 1126 */	0xd1,		/* 209 */
			0x43,		/* 67 */
/* 1128 */	0x72,		/* 114 */
			0xad,		/* 173 */
/* 1130 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1132 */	NdrFcLong( 0x3f230803 ),	/* 1059260419 */
/* 1136 */	NdrFcShort( 0xd28d ),	/* -11635 */
/* 1138 */	NdrFcShort( 0x3153 ),	/* 12627 */
/* 1140 */	0xa0,		/* 160 */
			0x7c,		/* 124 */
/* 1142 */	0x7f,		/* 127 */
			0x9f,		/* 159 */
/* 1144 */	0xd9,		/* 217 */
			0xc9,		/* 201 */
/* 1146 */	0x1e,		/* 30 */
			0x43,		/* 67 */
/* 1148 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1150 */	NdrFcLong( 0x19bab5b7 ),	/* 431666615 */
/* 1154 */	NdrFcShort( 0xa2fc ),	/* -23812 */
/* 1156 */	NdrFcShort( 0x3714 ),	/* 14100 */
/* 1158 */	0x9a,		/* 154 */
			0x50,		/* 80 */
/* 1160 */	0x91,		/* 145 */
			0x33,		/* 51 */
/* 1162 */	0x51,		/* 81 */
			0x61,		/* 97 */
/* 1164 */	0x6b,		/* 107 */
			0xaa,		/* 170 */
/* 1166 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1168 */	NdrFcLong( 0xbeef9a82 ),	/* -1091593598 */
/* 1172 */	NdrFcShort( 0x3e32 ),	/* 15922 */
/* 1174 */	NdrFcShort( 0x3adb ),	/* 15067 */
/* 1176 */	0xa7,		/* 167 */
			0x50,		/* 80 */
/* 1178 */	0x9,		/* 9 */
			0xc0,		/* 192 */
/* 1180 */	0x20,		/* 32 */
			0xb2,		/* 178 */
/* 1182 */	0x51,		/* 81 */
			0x94,		/* 148 */
/* 1184 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1186 */	NdrFcLong( 0xeb16f8ec ),	/* -350816020 */
/* 1190 */	NdrFcShort( 0x3180 ),	/* 12672 */
/* 1192 */	NdrFcShort( 0x35c4 ),	/* 13764 */
/* 1194 */	0xa4,		/* 164 */
			0xd8,		/* 216 */
/* 1196 */	0xa9,		/* 169 */
			0xd7,		/* 215 */
/* 1198 */	0x34,		/* 52 */
			0x27,		/* 39 */
/* 1200 */	0xe4,		/* 228 */
			0xfa,		/* 250 */
/* 1202 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1204 */	NdrFcLong( 0x79981920 ),	/* 2040011040 */
/* 1208 */	NdrFcShort( 0x108e ),	/* 4238 */
/* 1210 */	NdrFcShort( 0x3eff ),	/* 16127 */
/* 1212 */	0xbf,		/* 191 */
			0xfb,		/* 251 */
/* 1214 */	0x14,		/* 20 */
			0x35,		/* 53 */
/* 1216 */	0x77,		/* 119 */
			0x7b,		/* 123 */
/* 1218 */	0x55,		/* 85 */
			0xa0,		/* 160 */
/* 1220 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1222 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1224) */
/* 1224 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1226 */	NdrFcLong( 0x5fc37d6 ),	/* 100415446 */
/* 1230 */	NdrFcShort( 0xff7f ),	/* -129 */
/* 1232 */	NdrFcShort( 0x3d9f ),	/* 15775 */
/* 1234 */	0xa6,		/* 166 */
			0xfd,		/* 253 */
/* 1236 */	0x77,		/* 119 */
			0x5d,		/* 93 */
/* 1238 */	0xd1,		/* 209 */
			0x43,		/* 67 */
/* 1240 */	0x72,		/* 114 */
			0xad,		/* 173 */
/* 1242 */	
			0x11, 0x0,	/* FC_RP */
/* 1244 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1246) */
/* 1246 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1252 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1254 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1256 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1260 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1262 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1264 */	NdrFcShort( 0xfb3e ),	/* Offset= -1218 (46) */
/* 1266 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1268 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1270 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1272) */
/* 1272 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1274 */	NdrFcLong( 0xf8f3ebee ),	/* -118232082 */
/* 1278 */	NdrFcShort( 0x94d ),	/* 2381 */
/* 1280 */	NdrFcShort( 0x38d5 ),	/* 14549 */
/* 1282 */	0x84,		/* 132 */
			0xa,		/* 10 */
/* 1284 */	0x25,		/* 37 */
			0x47,		/* 71 */
/* 1286 */	0x10,		/* 16 */
			0xae,		/* 174 */
/* 1288 */	0x90,		/* 144 */
			0x91,		/* 145 */
/* 1290 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1292 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1294) */
/* 1294 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1296 */	NdrFcLong( 0xcc5b3c10 ),	/* -866436080 */
/* 1300 */	NdrFcShort( 0x588d ),	/* 22669 */
/* 1302 */	NdrFcShort( 0x37c4 ),	/* 14276 */
/* 1304 */	0x81,		/* 129 */
			0x8a,		/* 138 */
/* 1306 */	0x97,		/* 151 */
			0xdd,		/* 221 */
/* 1308 */	0xa8,		/* 168 */
			0xc1,		/* 193 */
/* 1310 */	0xd5,		/* 213 */
			0xdc,		/* 220 */
/* 1312 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1314 */	NdrFcLong( 0x1fc46173 ),	/* 532963699 */
/* 1318 */	NdrFcShort( 0x3072 ),	/* 12402 */
/* 1320 */	NdrFcShort( 0x316e ),	/* 12654 */
/* 1322 */	0x8c,		/* 140 */
			0x9c,		/* 156 */
/* 1324 */	0xa,		/* 10 */
			0x6,		/* 6 */
/* 1326 */	0xf5,		/* 245 */
			0x38,		/* 56 */
/* 1328 */	0x2,		/* 2 */
			0x2c,		/* 44 */
/* 1330 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1332 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1334) */
/* 1334 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1338 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1340 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1342 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1344) */
/* 1344 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1346 */	NdrFcLong( 0x2f22cc8a ),	/* 790809738 */
/* 1350 */	NdrFcShort( 0x1fa9 ),	/* 8105 */
/* 1352 */	NdrFcShort( 0x3ef8 ),	/* 16120 */
/* 1354 */	0xbd,		/* 189 */
			0x69,		/* 105 */
/* 1356 */	0xa1,		/* 161 */
			0xb6,		/* 182 */
/* 1358 */	0x1a,		/* 26 */
			0x69,		/* 105 */
/* 1360 */	0x6f,		/* 111 */
			0x3c,		/* 60 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            HSTRING_UserSize
            ,HSTRING_UserMarshal
            ,HSTRING_UserUnmarshal
            ,HSTRING_UserFree
            }

        };



/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler, ver. 0.0,
   GUID={0x1FC46173,0x3072,0x316E,{0x8C,0x9C,0x0A,0x06,0xF5,0x38,0x02,0x2C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandlerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler::Invoke */
};

const CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandlerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IInspectable, ver. 0.0,
   GUID={0xAF86E2E0,0xB12D,0x4c6a,{0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals, ver. 0.0,
   GUID={0x1BA29F65,0x9ABB,0x3024,{0x82,0x21,0xA9,0x8C,0xDB,0x00,0x88,0x87}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    58,
    114,
    162,
    210,
    266,
    328
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::addHeader */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::addPayload */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::setActiveMedia */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::setResponseLine */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::setMediaString */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::setMediaInt */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ServerInfo,
    12,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback, ver. 0.0,
   GUID={0xEA0B2968,0x7AD4,0x3D5C,{0xAA,0xD3,0x2A,0xEF,0xB3,0xAC,0xD2,0xE7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    390,
    438,
    486,
    534
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallbackProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback::OnDebugInfo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback::OnDebugWarn */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback::OnDebugError */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback::OnDebugFatal */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallbackStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ServerInfo,
    10,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals, ver. 0.0,
   GUID={0xF8BB64E3,0x54A8,0x3060,{0x93,0x10,0x0D,0x73,0xB4,0xC5,0xD4,0x23}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals, ver. 0.0,
   GUID={0x8DD1CD82,0xF943,0x3715,{0xB5,0x10,0xF8,0xD9,0xF2,0x10,0xD7,0x5D}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    624,
    666,
    708,
    750,
    792,
    834
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getMediaType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getDescription */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getNegFormat */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getAudioSamplingRate */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getAudioChannels */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getAudioPTime */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ServerInfo,
    13,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals, ver. 0.0,
   GUID={0x040D7757,0x114C,0x3581,{0x8E,0xF9,0xD6,0x40,0x25,0x6C,0x0C,0x14}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    876,
    938,
    994,
    1056,
    1120,
    1182,
    1246,
    1294
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::sessionSetInt32 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::sessionGetInt32 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::consumerSetInt32 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::consumerSetInt64 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::producerSetInt32 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::producerSetInt64 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::producerGetCodec */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::getSessionId */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ServerInfo,
    14,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics, ver. 0.0,
   GUID={0x5E3981B2,0x9A97,0x38D1,{0xB0,0xD2,0x48,0xB2,0xFF,0xB7,0xB4,0x75}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    390,
    1342,
    1390,
    1432,
    1480,
    1528,
    1576,
    1624,
    1666,
    1714,
    1762,
    1804,
    1852,
    1894,
    1942,
    1984,
    2032,
    2074,
    2122,
    2164,
    2212,
    2254,
    2302,
    2344,
    2400,
    2456,
    2512,
    2560,
    2608,
    2656,
    2698,
    2754,
    2802,
    2844,
    2892,
    2934,
    2982,
    3024,
    3072,
    3114,
    3162,
    3210,
    3252,
    3300,
    3342,
    3390,
    3438,
    3486,
    3528
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(55) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::registerAudioPluginFromFile */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetProfile */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetProfile */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetPrefVideoSize */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetJbMargin */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetJbMaxLateRate */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetEchoTail */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetEchoTail */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetEchoSkew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetEchoSuppEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetEchoSuppEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetAgcEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetAgcEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetAgcLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetAgcLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetVadEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetGetVadEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetNoiseSuppEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetNoiseSuppEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetNoiseSuppLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetNoiseSuppLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSet100relEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGet100relEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetScreenSize */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetAudioGain */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetRtpPortRange */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetRtpSymetricEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetMediaType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetVolume */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetVolume */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetInviteSessionTimers */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetSRtpMode */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetSRtpMode */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetSRtpType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetSRtpType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetRtcpEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetRtcpEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetRtcpMuxEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetRtcpMuxEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetIceEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetByPassEncoding */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetByPassEncoding */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetByPassDecoding */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetByPassDecoding */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetVideoJbEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetVideoJbEnabled */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetRtpBuffSize */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsGetRtpBuffSize */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::defaultsSetAvpfTail */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ServerInfo,
    55,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals, ver. 0.0,
   GUID={0x72089DC3,0x5600,0x3F9E,{0x89,0xA9,0x35,0xD5,0x0E,0x35,0x03,0x48}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3584,
    3626,
    3668
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals::get_Start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals::get_End */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals::get_Total */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals, ver. 0.0,
   GUID={0xB92764BB,0xF11D,0x3BD1,{0x8D,0xEA,0xB1,0x33,0xCE,0x9B,0xF5,0xF7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3710,
    3752,
    666,
    3794,
    3836,
    3878,
    3920,
    3962,
    4004,
    4052,
    4108,
    4150
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::isRequest */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getCode */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getPhrase */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getRequestType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getByteRange */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::isLastChunck */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::isFirstChunck */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::isSuccessReport */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getMsrpHeaderValue */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getMsrpHeaderParamValue */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getMsrpContentLength */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getMsrpContent */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ServerInfo,
    18,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals, ver. 0.0,
   GUID={0xE4EFFEF8,0x5C8D,0x389A,{0xBE,0xA7,0x7E,0x14,0xE2,0xA0,0xAA,0x95}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    4198,
    4240
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals::getSipSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals::getMessage */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback, ver. 0.0,
   GUID={0xBD3CC691,0xDAAF,0x35DD,{0x9C,0xDA,0x24,0x2B,0x70,0xBD,0xF5,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4282
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallbackProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback::OnEvent */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallbackStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals, ver. 0.0,
   GUID={0x38A8B79D,0x5679,0x3AF4,{0xBD,0x1C,0xD2,0x7D,0xE0,0x49,0x4B,0x1D}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals, ver. 0.0,
   GUID={0x944BB133,0x86E3,0x3FB3,{0xBC,0xF5,0xFD,0x12,0xB6,0x6E,0x3B,0xA6}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4330,
    624
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals::get_Port */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals::get_Address */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ServerInfo,
    8,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals, ver. 0.0,
   GUID={0x31AC4C99,0x4FE9,0x3CCE,{0x89,0xB5,0x0C,0x27,0x50,0xCC,0xEE,0xA7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3710,
    4372,
    4420,
    4468,
    4516,
    4564,
    4612,
    4660,
    4708,
    4756,
    4826,
    4882,
    4930,
    4986,
    5034,
    5082,
    5138,
    5186,
    5234,
    5282,
    5338,
    5408,
    5456,
    5504,
    5560,
    5616,
    5664,
    5734,
    5796,
    5844,
    5914,
    5976,
    6032,
    6080,
    6128,
    6176,
    2982,
    6218
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(44) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setDebugCallback */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setDisplayName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setRealm */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setIMPI */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setIMPU */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setPassword */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setAMF */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setOperatorId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setProxyCSCF */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setLocalIP2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setLocalIP1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setLocalPort2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setLocalPort1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setEarlyIMS */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::addHeader */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::removeHeader */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::addDnsServer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setDnsDiscovery */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setAoR */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setSigCompParams */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::addSigCompCompartment */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::removeSigCompCompartment */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setSTUNServer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setSTUNCred */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setTLSSecAgree */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setSSLCertificates2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setSSLCertificates1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setIPSecSecAgree */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setIPSecParameters */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::dnsENUM */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::dnsNaptrSrv */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::dnsSrv */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::getLocalIP */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::getLocalPort */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::getPreferredIdentity */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::isValid */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::stop */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ServerInfo,
    44,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0014, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics, ver. 0.0,
   GUID={0x102E8833,0xDCF3,0x3111,{0x82,0x52,0x66,0xAE,0x5C,0x84,0x70,0x73}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3710,
    6260,
    6302,
    6344,
    6400
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics::initialize */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics::deInitialize */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics::setCodecs */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics::setCodecPriority */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics::isCodecSupported */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ServerInfo,
    11,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0015, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals, ver. 0.0,
   GUID={0x357645EC,0x98BF,0x3BAF,{0x8B,0x97,0x33,0x38,0x78,0x33,0x97,0xCB}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3710,
    624,
    666,
    6448,
    6490,
    6532,
    6574,
    6616,
    6664
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::isValid_ */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getScheme */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getHost */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getPort */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getUserName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getPassword */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getDisplayName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getParamValue */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::setDisplayName */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ServerInfo,
    15,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0016, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory, ver. 0.0,
   GUID={0x44A6D232,0xAE6A,0x398C,{0xAB,0x6A,0x78,0xD4,0xEE,0x5B,0x8B,0x5C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6706,
    6762
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory::CreateInstance2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ServerInfo,
    8,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0017, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics, ver. 0.0,
   GUID={0xF04BF842,0xDE0A,0x31B9,{0xB1,0xCB,0x42,0xCA,0xD4,0x04,0x06,0x66}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6810
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics::isValid */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0018, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals, ver. 0.0,
   GUID={0x19F9A6F1,0xE76C,0x321C,{0xBA,0x0A,0x78,0xDB,0xA8,0x0E,0xC2,0x30}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0019, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback, ver. 0.0,
   GUID={0xFBC56EE2,0x7375,0x3F53,{0x91,0xD3,0x85,0x30,0x79,0x19,0x31,0x84}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6858
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140CallbackProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback::ondata */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140CallbackStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0020, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals, ver. 0.0,
   GUID={0x540329E3,0x8DD6,0x391C,{0x9E,0xBD,0x4D,0x73,0x8E,0x1C,0x04,0xF0}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6858
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals::ondata */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0021, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory, ver. 0.0,
   GUID={0x1275BFA1,0x5793,0x318F,{0x97,0xCD,0xD3,0x4C,0xDF,0x95,0x37,0x75}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6906
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0022, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession, ver. 0.0,
   GUID={0x9BFB53AD,0xBFC4,0x3784,{0x9E,0x6D,0x68,0x39,0xB5,0xE8,0x73,0x20}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6954,
    6260,
    6996,
    4468,
    7052,
    4564,
    1576,
    7108,
    7156,
    1714,
    7204,
    7252
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSessionProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::getId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::haveOwnership */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::addHeader */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::removeHeader */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::addCaps */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::removeCaps */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::setExpires */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::setFromUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::setToUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::setSilentHangup */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::addSigCompCompartment */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::removeSigCompCompartment */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSessionStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ServerInfo,
    18,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0023, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession, ver. 0.0,
   GUID={0xA93DFA4F,0x7D83,0x32D0,{0xB8,0x66,0xCC,0x9F,0xC5,0x7D,0x72,0x25}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7294,
    7342,
    7390,
    7438,
    7500
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) ___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSessionProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession::accept */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession::hangup */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession::reject */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession::sendInfo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession::getMediaMgr */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSessionStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ServerInfo,
    11,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0024, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x6ACF024C,0x5FA2,0x3607,{0x92,0xB2,0x67,0x74,0x05,0xC7,0x55,0x19}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0025, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory, ver. 0.0,
   GUID={0x6EEC00B8,0x8AFD,0x3C0D,{0x9E,0xE6,0xBB,0x0B,0xD3,0xFE,0x76,0x1A}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7542
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0026, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x266A5021,0xF4D7,0x3457,{0x8C,0x28,0x00,0xC7,0xA3,0x86,0xAB,0xDE}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0027, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory, ver. 0.0,
   GUID={0x8102D159,0x281E,0x397D,{0xB6,0xDD,0xAB,0x94,0x05,0x98,0x20,0xA7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7590
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0028, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x7D605CC9,0x6FF4,0x3D58,{0x99,0x76,0xF2,0x3C,0x30,0xD4,0xAE,0xD5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7638,
    7700,
    7756,
    7818,
    7874,
    7930,
    7978,
    8026,
    8074,
    8122,
    8178,
    7252,
    8226,
    8274,
    8316,
    8372,
    8420,
    8468,
    8510,
    8558,
    8600,
    8648,
    8690,
    8746,
    8794
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(31) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::call4 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::call3 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::call2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::call1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setSessionTimer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::set100rel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setRtcp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setRtcpMux */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setICE */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setQoS */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::hold2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::hold1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::resume2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::resume1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::transfer2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::transfer1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::acceptTransfer2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::acceptTransfer1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::rejectTransfer2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::rejectTransfer1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::sendDTMF */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::getSessionTransferId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::sendT140Data2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::sendT140Data1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setT140Callback */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ServerInfo,
    31,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0029, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory, ver. 0.0,
   GUID={0x9B651B7D,0x7BFE,0x3918,{0xBD,0xFE,0x52,0xB7,0x2F,0x9B,0x0F,0x30}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    8842
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0030, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x746AFEAB,0x0072,0x38FE,{0xB1,0xA7,0x21,0x77,0x0B,0xE6,0x4A,0x4A}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    8890,
    8938,
    4420,
    8994,
    9050,
    9098,
    4612
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::setCallback */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::callMsrp4 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::callMsrp3 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::callMsrp2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::callMsrp1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::sendMessage2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::sendMessage1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ServerInfo,
    13,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0031, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory, ver. 0.0,
   GUID={0x840E557A,0xA75D,0x35A5,{0x9E,0x1E,0x9A,0xFE,0x1F,0xA8,0x0A,0x9D}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9154
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0032, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals, ver. 0.0,
   GUID={0xAACA3593,0xCEFB,0x373E,{0xA2,0x29,0x85,0x3C,0x78,0xAD,0x59,0x21}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9210,
    114,
    7390,
    9266,
    9308,
    3878
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::send2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::send1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::accept2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::accept1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::reject2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::reject1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ServerInfo,
    12,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0033, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory, ver. 0.0,
   GUID={0x489F9906,0xCC60,0x3868,{0xA5,0x5A,0xE9,0x3A,0x74,0x55,0xB5,0x14}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9356
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0034, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x6A30534C,0x9226,0x3450,{0x86,0x1F,0x8D,0x92,0xE2,0x41,0xD6,0x11}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9210,
    114,
    7390,
    9266,
    9308,
    3878
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::send2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::send1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::accept2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::accept1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::reject2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::reject1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ServerInfo,
    12,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0035, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory, ver. 0.0,
   GUID={0x548CF937,0x8336,0x3950,{0xAA,0x5C,0xF8,0xCA,0x1D,0x9B,0x4A,0x67}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9404
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0036, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x7AA94F17,0xFBEB,0x3FAC,{0x92,0xED,0x89,0x8F,0xB9,0xF4,0xED,0xC7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7294,
    6260,
    7390,
    9266,
    9308,
    3878
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::send2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::send1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::accept2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::accept1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::reject2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::reject1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ServerInfo,
    12,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0037, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory, ver. 0.0,
   GUID={0x1FB0FA30,0xB04C,0x3AFC,{0x87,0xEF,0xB3,0x26,0x4A,0xE0,0xB4,0x3C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9452
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0038, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x8D8BFB47,0xBE91,0x3E55,{0xAD,0x42,0x51,0xA6,0xF8,0xE0,0x19,0x0A}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9210,
    114,
    7390,
    9266
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals::publish2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals::publish1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals::unPublish2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals::unPublish1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ServerInfo,
    10,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0039, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory, ver. 0.0,
   GUID={0xDE777EC1,0x607A,0x3E44,{0x91,0x0E,0x93,0x27,0x93,0xDF,0x12,0x8E}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9500
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0040, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals, ver. 0.0,
   GUID={0xD34B80F8,0x410C,0x3A42,{0xAA,0x06,0x29,0x6E,0xB6,0xA8,0xE2,0xB1}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7294,
    6260,
    7390,
    9266,
    9308,
    3878,
    9548,
    3962
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::register_2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::register_1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::unRegister2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::unRegister1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::accept2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::accept1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::reject2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::reject1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ServerInfo,
    14,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0041, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory, ver. 0.0,
   GUID={0xAC3D979B,0x2D68,0x3AD7,{0x8D,0x53,0x7C,0x1D,0x74,0x44,0xF7,0xBC}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9596
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0042, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals, ver. 0.0,
   GUID={0xE3F89F64,0xB94A,0x368B,{0x90,0x82,0x93,0xAF,0x84,0xF8,0xBB,0x1F}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3710,
    6260
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals::subscribe */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals::unSubscribe */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ServerInfo,
    8,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0043, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory, ver. 0.0,
   GUID={0x71094813,0xDA89,0x30CF,{0xBD,0x63,0xA7,0x0F,0xDF,0x4A,0x85,0xFA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9644
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0044, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback, ver. 0.0,
   GUID={0xB210DD33,0xA6A6,0x34A8,{0xA9,0x6A,0xEF,0xAC,0x9D,0x0B,0x8D,0xBA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9692,
    9740,
    9788,
    9836,
    9884,
    9932,
    9980,
    10028,
    10076
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallbackProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnDialogEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnStackEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnInviteEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnMessagingEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnInfoEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnOptionsEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnPublicationEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnRegistrationEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnSubscriptionEvent */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallbackStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ServerInfo,
    15,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0045, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals, ver. 0.0,
   GUID={0xF6F4FF9E,0x06BC,0x3929,{0xBA,0xEA,0x6F,0x7F,0xA4,0x40,0x13,0xFE}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0046, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent, ver. 0.0,
   GUID={0x6FDB3F81,0x9CB1,0x34F1,{0x9A,0xD6,0x78,0x78,0x0B,0xC5,0x8E,0x43}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4330,
    624,
    10124,
    10166
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEventProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent::getCode */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent::getPhrase */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent::getBaseSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent::getSipMessage */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEventStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ServerInfo,
    10,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0047, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals, ver. 0.0,
   GUID={0x65780FAA,0x8EBB,0x375D,{0xB0,0x4C,0x47,0x55,0x5D,0x0F,0x28,0x45}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0048, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals, ver. 0.0,
   GUID={0x5FB380DD,0x095D,0x32D4,{0xAC,0xE4,0x79,0x91,0x51,0x6F,0xD8,0xEA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0049, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals, ver. 0.0,
   GUID={0x731A866B,0x4B61,0x3A41,{0x9F,0x4B,0x0D,0xA7,0x32,0x2F,0x1A,0xA7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    10208,
    10250,
    10292,
    10334
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals::getMediaType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals::takeCallSessionOwnership */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals::takeMsrpSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ServerInfo,
    11,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0050, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals, ver. 0.0,
   GUID={0xD6D6ADFB,0x954A,0x36F7,{0xB3,0x6B,0x51,0xFD,0x40,0x91,0xFE,0xDA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    10376,
    10418
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0051, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals, ver. 0.0,
   GUID={0x3E3607D8,0x9CA6,0x3CD2,{0x9C,0x82,0x44,0x78,0x58,0x0C,0x86,0xD1}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    10460,
    10502
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0052, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals, ver. 0.0,
   GUID={0x01126DE2,0xDB09,0x3456,{0x93,0xC8,0x05,0x17,0xC3,0xF9,0x63,0xD5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    10544,
    10586
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0053, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals, ver. 0.0,
   GUID={0xEC75DE12,0xC356,0x33FD,{0xB8,0xAF,0xAE,0x4A,0xB0,0x54,0x14,0xA5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    10628,
    10670
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0054, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals, ver. 0.0,
   GUID={0x599EE12A,0x5485,0x3D18,{0x9A,0xCE,0xF0,0x88,0x5D,0x29,0x45,0x5E}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    10712,
    10754
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0055, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals, ver. 0.0,
   GUID={0x9F4A8862,0x8482,0x3083,{0xB2,0x4C,0x79,0x67,0x37,0xFD,0xF4,0x2B}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    10796,
    10838
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0056, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals, ver. 0.0,
   GUID={0x6D43145F,0xFC50,0x3FD7,{0x9D,0x1F,0xBC,0x47,0x89,0xAA,0x9C,0xED}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    10880,
    10942,
    10998
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals::getSdpHeaderValue2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals::getSdpHeaderValue1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals::getSdpHeaderAValue */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0057, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals, ver. 0.0,
   GUID={0xF68542F0,0xF6C6,0x3DE5,{0x86,0xFE,0x31,0xE2,0xAD,0xD4,0xE4,0x1E}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3710,
    10208,
    11054,
    708,
    11096,
    11152,
    11200,
    11262,
    11318,
    11360,
    11402
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::isResponse */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getRequestType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getResponseCode */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getResponsePhrase */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipHeaderValue2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipHeaderValue1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipHeaderParamValue2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipHeaderParamValue1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipContentLength */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipContent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSdpMessage */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ServerInfo,
    17,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0058, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer, ver. 0.0,
   GUID={0xF8F3EBEE,0x094D,0x38D5,{0x84,0x0A,0x25,0x47,0x10,0xAE,0x90,0x91}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11444,
    11478
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRendererProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer::Start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer::Stop */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRendererStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ServerInfo,
    8,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0059, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener, ver. 0.0,
   GUID={0x3F230803,0xD28D,0x3153,{0xA0,0x7C,0x7F,0x9F,0xD9,0xC9,0x1E,0x43}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11512
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListenerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener::OnDebugMessage */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListenerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0060, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener, ver. 0.0,
   GUID={0x19BAB5B7,0xA2FC,0x3714,{0x9A,0x50,0x91,0x33,0x51,0x61,0x6B,0xAA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11560
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListenerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener::OnAudioRoutingChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListenerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0061, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener, ver. 0.0,
   GUID={0xBEEF9A82,0x3E32,0x3ADB,{0xA7,0x50,0x09,0xC0,0x20,0xB2,0x51,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11602
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListenerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener::OnRegistrationStateChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListenerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0062, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener, ver. 0.0,
   GUID={0x79981920,0x108E,0x3EFF,{0xBF,0xFB,0x14,0x35,0x77,0x7B,0x55,0xA0}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11602,
    11658
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListenerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener::OnAVCallStateChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener::OnHoldStateChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListenerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ServerInfo,
    8,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0063, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener, ver. 0.0,
   GUID={0xEB16F8EC,0x3180,0x35C4,{0xA4,0xD8,0xA9,0xD7,0x34,0x27,0xE4,0xFA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11512
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListenerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener::OnStackStateChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListenerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0064, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals, ver. 0.0,
   GUID={0x4868DDC4,0x3353,0x3344,{0x84,0x2D,0xEB,0x96,0xAC,0x83,0x71,0xB9}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11700,
    11742,
    666,
    11784,
    6490,
    11826,
    6574,
    11868,
    11910,
    11952,
    11994,
    12036,
    12078,
    12120,
    12162,
    12204,
    12246,
    12288,
    12330,
    12372,
    12414,
    12456,
    12498,
    12540
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(30) ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_DisplayName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_DisplayName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_RealmUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_RealmUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_ImpiString */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_ImpiString */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_ImpuUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_ImpuUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_Password */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_Password */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_ProxyHost */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_ProxyHost */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_ProxyPort */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_ProxyPort */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_EarlyIMS */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_EarlyIMS */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_Transport */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_Transport */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_IPVersion */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_IPVersion */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_PushNotificationUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_PushNotificationUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_UserAgent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_UserAgent */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ServerInfo,
    30,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0065, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals, ver. 0.0,
   GUID={0x05FC37D6,0xFF7F,0x3D9F,{0xA6,0xFD,0x77,0x5D,0xD1,0x43,0x72,0xAD}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3710,
    10208,
    1390,
    12582,
    12624,
    12672,
    12720,
    12768
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::get_WithVideo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::get_State */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::get_HoldState */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::get_UriRemote */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::Accept */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::HangUp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::Hold */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::Resume */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ServerInfo,
    14,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0066, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals, ver. 0.0,
   GUID={0xCC5B3C10,0x588D,0x37C4,{0x81,0x8A,0x97,0xDD,0xA8,0xC1,0xD5,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    12816,
    10208,
    12858,
    3794,
    12900,
    12942,
    12984,
    13026,
    13068,
    13110,
    13152,
    13194,
    13236,
    8274,
    5034,
    13278,
    2032,
    13320,
    13376
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_SipConfig */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_RegistrationState */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_SipActiveAVCall */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_AvailableAudioRoutes */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_AudioRoute */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::put_AudioRoute */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_CameraLocation */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::put_CameraLocation */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::SetDebugMessageListener */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::SetAudioStateChangedListener */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::SetSipRegistrationStateChangedListener */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::SetSipStackStateChangedListener */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::SetSipAVCallStateChangedListener */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::Start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::Stop */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::Register */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::UnRegister */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::MakeCallAudio */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::MakeCallAudioVideo */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ServerInfo,
    25,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0067, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals, ver. 0.0,
   GUID={0x2F22CC8A,0x1FA9,0x3EF8,{0xBD,0x69,0xA1,0xB6,0x1A,0x69,0x6F,0x3C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    13432,
    11478,
    13480,
    13522,
    13564,
    13606,
    13654
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::StartServer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::DoPeriodicKeepAlive */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::get_VideoRenderer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::put_VideoRenderer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::get_SipService */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::add_VideoFrameReceived */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::remove_VideoFrameReceived */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ServerInfo,
    13,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0068, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals, ver. 0.0,
   GUID={0xFD21E8E5,0x0146,0x348B,{0x97,0x9D,0x92,0x37,0x19,0x7A,0x9A,0x9B}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0069, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics, ver. 0.0,
   GUID={0xD397D79C,0x41C8,0x3E86,{0xB7,0x94,0xA2,0x0E,0xA8,0xD5,0x45,0xF5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6954,
    13698,
    13746,
    13794
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics::GetCurrentProcessId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics::GetUiDisconnectedEventName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics::GetBackgroundProcessReadyEventName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics::get_Instance */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ServerInfo,
    10,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0070, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    doubango_rt2EBackEnd__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x8000253, /* MIDL Version 8.0.595 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _doubango_rt2EBackEnd_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStaticsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStaticsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSessionProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandlerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEventProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStaticsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSessionProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStaticsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140CallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRendererProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtualsProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _doubango_rt2EBackEnd_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStaticsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStaticsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSessionStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandlerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEventStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStaticsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSessionStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStaticsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140CallbackStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRendererStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtualsStubVtbl,
    0
};

PCInterfaceName const _doubango_rt2EBackEnd_InterfaceNamesList[] = 
{
    "__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent",
    "__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics",
    "__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener",
    "__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals",
    0
};

const IID *  const _doubango_rt2EBackEnd_BaseIIDList[] = 
{
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    0,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    0
};


#define _doubango_rt2EBackEnd_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _doubango_rt2EBackEnd, pIID, n)

int __stdcall _doubango_rt2EBackEnd_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _doubango_rt2EBackEnd, 70, 64 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _doubango_rt2EBackEnd, 70, *pIndex )
    
}

const ExtendedProxyFileInfo doubango_rt2EBackEnd_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _doubango_rt2EBackEnd_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _doubango_rt2EBackEnd_StubVtblList,
    (const PCInterfaceName * ) & _doubango_rt2EBackEnd_InterfaceNamesList,
    (const IID ** ) & _doubango_rt2EBackEnd_BaseIIDList,
    & _doubango_rt2EBackEnd_IID_Lookup, 
    70,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* if defined(_ARM_) */

