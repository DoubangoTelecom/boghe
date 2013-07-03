

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Tue Jul 02 10:55:45 2013
 */
/* Compiler settings for C:\Users\mamadou\AppData\Local\Temp\doubango_rt.BackEnd.idl-cff55f4b:
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
#define PROC_FORMAT_STRING_SIZE   13879                             
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


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ProxyInfo;


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

	/* Procedure SendDTMF */


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

	/* Parameter dtmfCode */


	/* Parameter echo_skew */

/* 1696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1698 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1702 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1704 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1706 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


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
/* 3398 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3402 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3406 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3416 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3418 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3422 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3424 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3428 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtpBuffSize */

/* 3432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3440 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3444 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3446 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3448 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3458 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3460 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter buffSize */

/* 3462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3464 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3470 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3472 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3476 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetRtpBuffSize */

/* 3480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3488 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3494 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3496 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3506 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3508 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3512 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3518 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetAvpfTail */

/* 3522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3530 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3532 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3534 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3536 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3538 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3548 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3550 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3552 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter tail_min */

/* 3554 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3556 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tail_max */

/* 3560 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3562 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3566 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3568 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3570 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3574 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Start */

/* 3578 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3584 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3586 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3590 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3592 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3594 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3604 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3606 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3608 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3610 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3612 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3616 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_End */

/* 3620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3628 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3632 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3634 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3636 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3644 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3646 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3648 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3650 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3652 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3654 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3658 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Total */

/* 3662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3670 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3676 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3678 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3686 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3688 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3690 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3692 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3694 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3696 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3700 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WithVideo */


	/* Procedure isResponse */


	/* Procedure subscribe */


	/* Procedure isValid_ */


	/* Procedure initialize */


	/* Procedure start */


	/* Procedure isRequest */

/* 3704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3710 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3712 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3716 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3718 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3720 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3728 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3730 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3732 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3734 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3736 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3738 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3742 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */

/* 3746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3754 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3758 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3760 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3762 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3772 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3774 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3776 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3778 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3780 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3784 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AvailableAudioRoutes */


	/* Procedure getRequestType */

/* 3788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3794 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3796 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3804 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3812 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3814 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3816 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3820 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3822 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3826 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getByteRange */

/* 3830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0xa ),	/* 10 */
/* 3838 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3844 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3846 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3854 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3856 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3858 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3860 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3862 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3864 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Return value */

/* 3866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3868 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure isLastChunck */

/* 3872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3878 */	NdrFcShort( 0xb ),	/* 11 */
/* 3880 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3884 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3886 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3888 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3896 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3898 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3900 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3902 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3904 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3906 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3910 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isFirstChunck */

/* 3914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0xc ),	/* 12 */
/* 3922 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3926 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3928 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3930 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3938 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3940 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3942 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3946 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3948 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3952 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject1 */


	/* Procedure isSuccessReport */

/* 3956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3962 */	NdrFcShort( 0xd ),	/* 13 */
/* 3964 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3972 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3980 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3982 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3984 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3986 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3988 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3990 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3994 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderValue */

/* 3998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4004 */	NdrFcShort( 0xe ),	/* 14 */
/* 4006 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4012 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4014 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4022 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4024 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4026 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 4028 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4030 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4032 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4034 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4036 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4038 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 4040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4042 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderParamValue */

/* 4046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4052 */	NdrFcShort( 0xf ),	/* 15 */
/* 4054 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4060 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4062 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4064 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4070 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4072 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4074 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4076 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 4078 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4080 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4082 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 4084 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4086 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4088 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4090 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4092 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4094 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 4096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4098 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContentLength */

/* 4102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4108 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4110 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4114 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4118 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4126 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4128 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4130 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4132 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4134 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4140 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContent */

/* 4144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4150 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4152 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4158 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4160 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4168 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4170 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4172 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter maxsize */

/* 4174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4176 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4180 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4182 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4184 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 4186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4188 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipSession */

/* 4192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4198 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4200 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4206 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4208 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4216 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4218 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4220 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4222 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4224 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4226 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Return value */

/* 4228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4230 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMessage */

/* 4234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4242 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4248 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4250 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4258 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4260 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4262 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4264 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4266 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4268 */	NdrFcShort( 0xba ),	/* Type Offset=186 */

	/* Return value */

/* 4270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4272 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnEvent */

/* 4276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4282 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4284 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4288 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4290 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4292 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4300 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4302 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4304 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pEvent */

/* 4306 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4308 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4310 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter __returnValue */

/* 4312 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4314 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4320 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */


	/* Procedure get_Port */

/* 4324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4330 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4332 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4336 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4340 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4348 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4350 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4352 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4356 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4358 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4362 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDebugCallback */

/* 4366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4372 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4374 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4378 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4380 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4382 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4390 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4392 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4394 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pCallback */

/* 4396 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4398 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4400 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter __returnValue */

/* 4402 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4404 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4406 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4410 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp3 */


	/* Procedure setDisplayName */

/* 4414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4422 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4428 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4430 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4438 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4440 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4442 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter remoteUriString */


	/* Parameter display_name */

/* 4444 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4446 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4448 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4452 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4454 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4458 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */


	/* Procedure setRealm */

/* 4462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4468 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4470 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4474 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4476 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4478 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4486 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4488 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4490 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */


	/* Parameter realm_uri */

/* 4492 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4494 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4496 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4500 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4502 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4506 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIMPI */

/* 4510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4516 */	NdrFcShort( 0xa ),	/* 10 */
/* 4518 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4522 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4524 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4526 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4534 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4536 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4538 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter impi */

/* 4540 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4542 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4544 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4548 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4550 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4554 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeCaps */


	/* Procedure setIMPU */

/* 4558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4564 */	NdrFcShort( 0xb ),	/* 11 */
/* 4566 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4570 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4572 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4574 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4584 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4586 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */


	/* Parameter impu_uri */

/* 4588 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4590 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4592 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4594 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4596 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4598 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4602 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage1 */


	/* Procedure setPassword */

/* 4606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4612 */	NdrFcShort( 0xc ),	/* 12 */
/* 4614 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4620 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4622 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4630 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4632 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4634 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter payload */


	/* Parameter password */

/* 4636 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4638 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4640 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4642 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4644 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4646 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4650 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAMF */

/* 4654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4660 */	NdrFcShort( 0xd ),	/* 13 */
/* 4662 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4668 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4670 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4678 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4680 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4682 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter amf */

/* 4684 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4686 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4688 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4690 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4692 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4694 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4698 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setOperatorId */

/* 4702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4708 */	NdrFcShort( 0xe ),	/* 14 */
/* 4710 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4714 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4716 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4718 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4726 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4728 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4730 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter opid */

/* 4732 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4734 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4736 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4738 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4740 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4742 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4746 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setProxyCSCF */

/* 4750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4756 */	NdrFcShort( 0xf ),	/* 15 */
/* 4758 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 4760 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4762 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4764 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4766 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4774 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4776 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 4778 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4780 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 4782 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter fqdn */

/* 4784 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4786 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4788 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 4790 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4792 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4794 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 4796 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4798 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4800 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ipversion */

/* 4802 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4804 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4806 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4808 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4810 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4812 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4816 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 4818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP2 */

/* 4820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4826 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4828 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4832 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4836 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4844 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4846 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4848 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4850 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter ip */

/* 4852 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4854 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4856 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter transport */

/* 4858 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4860 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4862 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4866 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4868 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4872 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP1 */

/* 4876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4882 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4884 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4890 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4892 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4900 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4902 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4904 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter ip */

/* 4906 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4908 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4910 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4914 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4916 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4920 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort2 */

/* 4924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4930 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4932 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4934 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4936 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4938 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4940 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4948 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4950 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4952 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4954 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter port */

/* 4956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4958 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4960 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 4962 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4964 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4966 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4968 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4970 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4972 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4976 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort1 */

/* 4980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4986 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4988 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4990 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4992 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4994 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4996 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5004 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5006 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5008 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter port */

/* 5010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5012 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5014 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5018 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5020 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5024 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stop */


	/* Procedure setEarlyIMS */

/* 5028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5034 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5036 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5038 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5040 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5044 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5052 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5054 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5056 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter bEnteringBackground */


	/* Parameter enabled */

/* 5058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5060 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5062 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5064 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5066 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5068 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5072 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 5076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5082 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5084 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5088 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5090 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5092 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5096 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5100 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5102 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5104 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5106 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 5108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5110 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5112 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 5114 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5116 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5118 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5120 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5122 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5124 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5128 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */

/* 5132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5138 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5140 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5144 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5146 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5148 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5156 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5158 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5160 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 5162 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5164 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5166 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5168 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5170 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5172 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5176 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addDnsServer */

/* 5180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x17 ),	/* 23 */
/* 5188 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5192 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5194 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5196 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5204 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5206 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5208 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter ip */

/* 5210 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5212 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5214 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5218 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5220 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5224 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDnsDiscovery */

/* 5228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5234 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5236 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5238 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5240 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5244 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5252 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5254 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5256 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 5258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5260 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5262 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5266 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5268 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5272 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAoR */

/* 5276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5282 */	NdrFcShort( 0x19 ),	/* 25 */
/* 5284 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5288 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5290 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5292 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5296 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5302 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5304 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5306 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter ip */

/* 5308 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5310 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5312 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 5314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5316 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5320 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5322 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5324 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5328 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSigCompParams */

/* 5332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5338 */	NdrFcShort( 0x1a ),	/* 26 */
/* 5340 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 5342 */	NdrFcShort( 0x1d ),	/* 29 */
/* 5344 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5346 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 5348 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5356 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5358 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 5360 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5362 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 5364 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter dms */

/* 5366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5368 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sms */

/* 5372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5374 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cpb */

/* 5378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5380 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter enablePresDict */

/* 5384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5386 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5388 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5390 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5392 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5394 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5398 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 5402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5408 */	NdrFcShort( 0x1b ),	/* 27 */
/* 5410 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5414 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5416 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5418 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5426 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5428 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5430 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter compId */

/* 5432 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5434 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5436 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5440 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5442 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5446 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeSigCompCompartment */

/* 5450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5456 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5458 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5462 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5464 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5466 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5474 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5476 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5478 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter compId */

/* 5480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5482 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5484 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5488 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5490 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5494 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNServer */

/* 5498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5504 */	NdrFcShort( 0x1d ),	/* 29 */
/* 5506 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5508 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5510 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5512 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5514 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5522 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5524 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5526 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5528 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter ip */

/* 5530 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5532 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5534 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 5536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5538 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5540 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5542 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5544 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5546 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5550 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNCred */

/* 5554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5560 */	NdrFcShort( 0x1e ),	/* 30 */
/* 5562 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5566 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5568 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5570 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5578 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5580 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5582 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5584 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter login */

/* 5586 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5588 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5590 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter password */

/* 5592 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5594 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5596 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5598 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5600 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5602 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5606 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setTLSSecAgree */

/* 5610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5616 */	NdrFcShort( 0x1f ),	/* 31 */
/* 5618 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5620 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5622 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5624 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5626 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5634 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5636 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5638 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 5640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5642 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5644 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5646 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5648 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5650 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5654 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates2 */

/* 5658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5664 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5666 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 5668 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5670 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5672 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5674 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5682 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5684 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 5686 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5688 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 5690 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter privKey */

/* 5692 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5694 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5696 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 5698 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5700 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5702 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 5704 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5706 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5708 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter verify */

/* 5710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5712 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5714 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5716 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5718 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5720 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5724 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates1 */

/* 5728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5734 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5736 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5740 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5742 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5744 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5752 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5754 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 5756 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5758 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter privKey */

/* 5760 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5762 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5764 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 5766 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5768 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5770 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 5772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5774 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5776 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5778 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5780 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5782 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5786 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecSecAgree */

/* 5790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5796 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5798 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5800 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5802 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5804 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5806 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5814 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5816 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5818 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 5820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5822 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5824 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5826 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5828 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5830 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5834 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecParameters */

/* 5838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5844 */	NdrFcShort( 0x23 ),	/* 35 */
/* 5846 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 5848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5850 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5852 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5854 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5862 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5864 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 5866 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5868 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 5870 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter algo */

/* 5872 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5874 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5876 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ealgo */

/* 5878 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5880 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5882 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter mode */

/* 5884 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5886 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5888 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter proto */

/* 5890 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5892 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5894 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5898 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5900 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5904 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsENUM */

/* 5908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5914 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5916 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5922 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5924 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5928 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5932 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5934 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 5936 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5938 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter service */

/* 5940 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5942 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5944 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter e164num */

/* 5946 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5948 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5950 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter domain */

/* 5952 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5954 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5956 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5958 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5960 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5962 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5966 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsNaptrSrv */

/* 5970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5976 */	NdrFcShort( 0x25 ),	/* 37 */
/* 5978 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5984 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5986 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5996 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5998 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6000 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter domain */

/* 6002 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6004 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6006 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter service */

/* 6008 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6010 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6012 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6014 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6016 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6018 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 6020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6022 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsSrv */

/* 6026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6032 */	NdrFcShort( 0x26 ),	/* 38 */
/* 6034 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6040 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6042 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6050 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6052 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6054 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter service */

/* 6056 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6058 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6060 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6062 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6064 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6066 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 6068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6070 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalIP */

/* 6074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6080 */	NdrFcShort( 0x27 ),	/* 39 */
/* 6082 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6088 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6090 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6098 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6100 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6102 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter protocol */

/* 6104 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6106 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6108 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6110 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6112 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6114 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 6116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6118 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalPort */

/* 6122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6128 */	NdrFcShort( 0x28 ),	/* 40 */
/* 6130 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6134 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6136 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6138 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6146 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6148 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6150 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter protocol */

/* 6152 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6154 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6156 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6160 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6162 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6166 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPreferredIdentity */

/* 6170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6176 */	NdrFcShort( 0x29 ),	/* 41 */
/* 6178 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6184 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6186 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6188 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6194 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6196 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6198 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6200 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6202 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6204 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 6206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6208 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stop */

/* 6212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6218 */	NdrFcShort( 0x2b ),	/* 43 */
/* 6220 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6224 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6226 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6228 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6236 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6238 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6240 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6244 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6246 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6250 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unSubscribe */


	/* Procedure register_1 */


	/* Procedure send1 */


	/* Procedure haveOwnership */


	/* Procedure deInitialize */

/* 6254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6260 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6262 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6266 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6268 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6270 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6278 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6280 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6282 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6284 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6286 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6288 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6292 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecs */

/* 6296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6304 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6310 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6312 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6320 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6322 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6324 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter codecs */

/* 6326 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6328 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6330 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 6332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6334 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecPriority */

/* 6338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6344 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6346 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 6348 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6350 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6352 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6354 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6362 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6364 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 6366 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6368 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter codec_id */

/* 6370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6372 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6374 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter priority */

/* 6376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6378 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6382 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6384 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6386 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6390 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isCodecSupported */

/* 6394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6400 */	NdrFcShort( 0xa ),	/* 10 */
/* 6402 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6406 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6408 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6410 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6418 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6420 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6422 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter codec_id */

/* 6424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6426 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6428 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6430 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6432 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6434 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6438 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPort */

/* 6442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6448 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6450 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6454 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6458 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6466 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6468 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6470 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6474 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6476 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 6478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6480 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpiString */


	/* Procedure getUserName */

/* 6484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6490 */	NdrFcShort( 0xa ),	/* 10 */
/* 6492 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6498 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6500 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6502 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6508 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6510 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6512 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6514 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6516 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6518 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 6520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6522 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPassword */

/* 6526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6532 */	NdrFcShort( 0xb ),	/* 11 */
/* 6534 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6540 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6542 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6544 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6550 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6552 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6554 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6556 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6558 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6560 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 6562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6564 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpuUri */


	/* Procedure getDisplayName */

/* 6568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6574 */	NdrFcShort( 0xc ),	/* 12 */
/* 6576 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6582 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6584 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6592 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6594 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6596 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6598 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6600 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6602 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 6604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6606 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getParamValue */

/* 6610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6616 */	NdrFcShort( 0xd ),	/* 13 */
/* 6618 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6624 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6626 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6630 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6634 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6636 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6638 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 6640 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6642 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6644 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6646 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6648 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6650 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 6652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6654 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDisplayName */

/* 6658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6664 */	NdrFcShort( 0xe ),	/* 14 */
/* 6666 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6672 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6674 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6682 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6684 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6686 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter displayName */

/* 6688 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6690 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6692 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 6694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6696 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance2 */

/* 6700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6706 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6708 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 6710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6714 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6716 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6724 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6726 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 6728 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6730 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter uriString */

/* 6732 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6734 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6736 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter displayName */

/* 6738 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6740 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6742 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6744 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6746 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6748 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 6750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6752 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6762 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6764 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6770 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6772 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6780 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6782 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6784 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter uriString */

/* 6786 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6788 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6790 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6792 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6794 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6796 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 6798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6800 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isValid */

/* 6804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6810 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6812 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6816 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6818 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6820 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6828 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6830 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6832 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter uri */

/* 6834 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6836 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6838 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6840 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6842 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6844 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6848 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ondata */


	/* Procedure ondata */

/* 6852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6858 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6860 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6864 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6866 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6868 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6876 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6878 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6880 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pData */


	/* Parameter pData */

/* 6882 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6884 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6886 */	NdrFcShort( 0x120 ),	/* Type Offset=288 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6888 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6890 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6896 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6906 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6908 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6914 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6916 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6924 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6926 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6928 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pI */

/* 6930 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6932 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6934 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter __returnValue */

/* 6936 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6938 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6940 */	NdrFcShort( 0x144 ),	/* Type Offset=324 */

	/* Return value */

/* 6942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6944 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentProcessId */


	/* Procedure getId */

/* 6948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6954 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6956 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6960 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6964 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6972 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6974 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6976 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6978 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6980 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6986 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 6990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6998 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7002 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7004 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7006 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7014 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7016 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7018 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7020 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 7022 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7024 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7026 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 7028 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7030 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7032 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7034 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7036 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7038 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7042 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addCaps */

/* 7046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7052 */	NdrFcShort( 0xa ),	/* 10 */
/* 7054 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7058 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7060 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7062 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7070 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7072 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7074 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7076 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 7078 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7080 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7082 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 7084 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7086 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7088 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7090 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7092 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7094 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7098 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setFromUri */

/* 7102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7108 */	NdrFcShort( 0xd ),	/* 13 */
/* 7110 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7114 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7116 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7118 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7126 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7128 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7130 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter fromUri */

/* 7132 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7134 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7136 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter __returnValue */

/* 7138 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7140 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7142 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7146 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setToUri */

/* 7150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7156 */	NdrFcShort( 0xe ),	/* 14 */
/* 7158 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7162 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7164 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7166 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7174 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7176 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7178 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter toUri */

/* 7180 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7182 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7184 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter __returnValue */

/* 7186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7188 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7190 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7194 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 7198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7206 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7210 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7212 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7214 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7222 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7224 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7226 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter compId */

/* 7228 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7230 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7232 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7234 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7236 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7238 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7242 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold1 */


	/* Procedure removeSigCompCompartment */

/* 7246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7252 */	NdrFcShort( 0x11 ),	/* 17 */
/* 7254 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7258 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7260 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7262 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7270 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7272 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 7274 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7276 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7278 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7280 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 7282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7284 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure register_2 */


	/* Procedure send2 */


	/* Procedure accept */

/* 7288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7294 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7296 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7300 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7302 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7304 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7312 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7314 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7316 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 7318 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7320 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7322 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7324 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7326 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7328 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 7330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7332 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hangup */

/* 7336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7342 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7344 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7348 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7352 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7360 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7362 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7364 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 7366 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7368 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7370 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7372 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7374 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7376 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7380 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister2 */


	/* Procedure unPublish2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure reject */

/* 7384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7392 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7396 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7398 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7400 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7408 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7410 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7412 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 7414 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7416 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7418 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7422 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7424 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7428 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendInfo */

/* 7432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7438 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7440 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 7442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7444 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7446 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7448 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7456 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7458 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 7460 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7462 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter payload */

/* 7464 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7466 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7468 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter len */

/* 7470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7472 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter config */

/* 7476 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7478 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7480 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7482 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7484 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7486 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7490 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMediaMgr */

/* 7494 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7500 */	NdrFcShort( 0xa ),	/* 10 */
/* 7502 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7508 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7510 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7518 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7520 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 7522 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7524 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7526 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7528 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Return value */

/* 7530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7532 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7542 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7544 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7550 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7552 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7560 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7562 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7564 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7566 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7568 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7570 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 7572 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7574 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7576 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Return value */

/* 7578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7580 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7590 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7592 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7598 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7600 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7608 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7610 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7612 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7614 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7616 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7618 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 7620 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7622 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7624 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 7626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7628 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call4 */

/* 7632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7638 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7640 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 7642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7644 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7646 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7648 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7652 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7656 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7658 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 7660 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7662 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter remoteUriString */

/* 7664 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7666 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7668 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 7670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7672 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7674 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 7676 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7678 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7680 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7684 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7686 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7690 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call3 */

/* 7694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7700 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7702 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7706 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7708 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7710 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7718 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7720 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7722 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7724 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUriString */

/* 7726 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7728 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7730 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 7732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7734 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7736 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7738 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7740 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7742 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7746 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call2 */

/* 7750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7758 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 7760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7762 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7764 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7766 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7774 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7776 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 7778 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7780 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter remoteUri */

/* 7782 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7784 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7786 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter media */

/* 7788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7790 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7792 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 7794 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7796 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7798 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7800 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7802 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7804 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7808 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call1 */

/* 7812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7818 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7820 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7824 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7826 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7828 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7836 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7838 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7840 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7842 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUri */

/* 7844 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7846 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7848 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter media */

/* 7850 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7852 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7854 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7856 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7858 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7860 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7864 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSessionTimer */

/* 7868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7874 */	NdrFcShort( 0xa ),	/* 10 */
/* 7876 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7880 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7882 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7884 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7892 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7894 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7896 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7898 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter timeout */

/* 7900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7902 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refresher */

/* 7906 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7908 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7910 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7914 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7916 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7920 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set100rel */

/* 7924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7930 */	NdrFcShort( 0xb ),	/* 11 */
/* 7932 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7934 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7936 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7938 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7940 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7948 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7950 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7952 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 7954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7956 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7958 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7962 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7964 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7968 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcp */

/* 7972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7978 */	NdrFcShort( 0xc ),	/* 12 */
/* 7980 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7982 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7984 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7988 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7996 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7998 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8000 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 8002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8004 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8006 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8010 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8012 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8016 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcpMux */

/* 8020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8026 */	NdrFcShort( 0xd ),	/* 13 */
/* 8028 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8030 */	NdrFcShort( 0x5 ),	/* 5 */
/* 8032 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8034 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8036 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8044 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8046 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8048 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 8050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8052 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8054 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8058 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8060 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8064 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setICE */

/* 8068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8074 */	NdrFcShort( 0xe ),	/* 14 */
/* 8076 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8078 */	NdrFcShort( 0x5 ),	/* 5 */
/* 8080 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8082 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8084 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8092 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8094 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8096 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 8098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8100 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8102 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8106 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8108 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8112 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setQoS */

/* 8116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8122 */	NdrFcShort( 0xf ),	/* 15 */
/* 8124 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 8126 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8128 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8130 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 8132 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8140 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8142 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 8144 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 8146 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter type */

/* 8148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8150 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8152 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strength */

/* 8154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8156 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8158 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8160 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8162 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8164 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8168 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold2 */

/* 8172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8178 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8180 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8184 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8186 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8188 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8196 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8198 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8200 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 8202 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8204 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8206 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8210 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8212 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8216 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure resume2 */

/* 8220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8226 */	NdrFcShort( 0x12 ),	/* 18 */
/* 8228 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8232 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8234 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8236 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8244 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8246 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8248 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 8250 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8252 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8254 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8256 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8258 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8260 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8264 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */


	/* Procedure resume1 */

/* 8268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8274 */	NdrFcShort( 0x13 ),	/* 19 */
/* 8276 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8280 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8282 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8284 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8292 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8294 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8296 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8300 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8302 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 8304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8306 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer2 */

/* 8310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8316 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8318 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 8320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8322 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8324 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8326 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8334 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8336 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 8338 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 8340 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter referToUriString */

/* 8342 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8344 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8346 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 8348 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8350 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8352 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8356 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8358 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8362 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer1 */

/* 8366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8372 */	NdrFcShort( 0x15 ),	/* 21 */
/* 8374 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8378 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8380 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8382 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8390 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8392 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8394 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter referToUriString */

/* 8396 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8398 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8400 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 8402 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8404 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8406 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8410 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer2 */

/* 8414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8420 */	NdrFcShort( 0x16 ),	/* 22 */
/* 8422 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8426 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8428 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8430 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8438 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8440 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8442 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 8444 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8446 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8448 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8452 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8454 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8458 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer1 */

/* 8462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8468 */	NdrFcShort( 0x17 ),	/* 23 */
/* 8470 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8474 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8476 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8478 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8486 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8488 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8490 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8494 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8496 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8500 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer2 */

/* 8504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8510 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8512 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8516 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8518 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8520 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8528 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8530 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8532 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 8534 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8536 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8538 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8540 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8542 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8544 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8548 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer1 */

/* 8552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8558 */	NdrFcShort( 0x19 ),	/* 25 */
/* 8560 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8564 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8566 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8568 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8576 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8578 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8580 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8584 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8586 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8590 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendDTMF */

/* 8594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8600 */	NdrFcShort( 0x1a ),	/* 26 */
/* 8602 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8606 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8608 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8610 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8618 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8620 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8622 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter number */

/* 8624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8626 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8630 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8632 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8634 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8638 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSessionTransferId */

/* 8642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8648 */	NdrFcShort( 0x1b ),	/* 27 */
/* 8650 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8654 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8656 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8658 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8666 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8668 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8670 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8672 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8674 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8680 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data2 */

/* 8684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8690 */	NdrFcShort( 0x1c ),	/* 28 */
/* 8692 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 8694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8696 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8698 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8700 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8708 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8710 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 8712 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 8714 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter data_type */

/* 8716 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8718 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8720 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter data */

/* 8722 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8724 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8726 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 8728 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8730 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8732 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8736 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data1 */

/* 8740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8746 */	NdrFcShort( 0x1d ),	/* 29 */
/* 8748 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8752 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8756 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8764 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8766 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8768 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter data_type */

/* 8770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8772 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8774 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8776 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8778 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8780 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8784 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setT140Callback */

/* 8788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8794 */	NdrFcShort( 0x1e ),	/* 30 */
/* 8796 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8800 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8802 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8804 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8812 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8814 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8816 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pT140Callback */

/* 8818 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8820 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8822 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */

	/* Parameter __returnValue */

/* 8824 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8826 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8828 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8832 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8842 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8844 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8850 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8852 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8860 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8862 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8864 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 8866 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8868 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8870 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8872 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8874 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8876 */	NdrFcShort( 0x1ae ),	/* Type Offset=430 */

	/* Return value */

/* 8878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8880 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCallback */

/* 8884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8890 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8892 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8896 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8898 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8900 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8908 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8910 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8912 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pCallback */

/* 8914 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8916 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8918 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Parameter __returnValue */

/* 8920 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8922 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8924 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8928 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp4 */

/* 8932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8938 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8940 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 8942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8944 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8946 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8948 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8956 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8958 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 8960 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 8962 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUriString */

/* 8964 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8966 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8968 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 8970 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8972 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8974 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 8976 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8978 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8980 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8984 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp2 */

/* 8988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8994 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8996 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 8998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9000 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9002 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9004 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9012 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9014 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9016 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9018 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUri */

/* 9020 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9022 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9024 */	NdrFcShort( 0x1e8 ),	/* Type Offset=488 */

	/* Parameter config */

/* 9026 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9028 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9030 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 9032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9034 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9036 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9040 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp1 */

/* 9044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9050 */	NdrFcShort( 0xa ),	/* 10 */
/* 9052 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9056 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9058 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9060 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9068 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9070 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9072 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter remoteUri */

/* 9074 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9076 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9078 */	NdrFcShort( 0x1e8 ),	/* Type Offset=488 */

	/* Parameter __returnValue */

/* 9080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9082 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9084 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9088 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage2 */

/* 9092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9098 */	NdrFcShort( 0xb ),	/* 11 */
/* 9100 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9104 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9106 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9108 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9118 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9120 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9122 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter payload */

/* 9124 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9126 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9128 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 9130 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9132 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9134 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 9136 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9138 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9140 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9144 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9154 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9156 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9162 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9164 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9172 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9174 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9176 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9178 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter pStack */

/* 9180 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9182 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9184 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Parameter pCallback */

/* 9186 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9188 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9190 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Parameter __returnValue */

/* 9192 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9194 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9196 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Return value */

/* 9198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9200 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure publish2 */


	/* Procedure send2 */


	/* Procedure send2 */

/* 9204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9210 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9212 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9216 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9220 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9228 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9230 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9232 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9234 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */

/* 9236 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9238 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9240 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 9242 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9244 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9246 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 9248 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9250 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9252 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 9254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9256 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister1 */


	/* Procedure unPublish1 */


	/* Procedure accept1 */


	/* Procedure accept1 */


	/* Procedure accept1 */

/* 9260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9266 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9268 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9272 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9276 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9284 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9286 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9288 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 9290 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9292 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9294 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 9296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9298 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept2 */


	/* Procedure reject2 */


	/* Procedure reject2 */


	/* Procedure reject2 */

/* 9302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9308 */	NdrFcShort( 0xa ),	/* 10 */
/* 9310 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9314 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9316 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9318 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9326 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9328 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9330 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 9332 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9334 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9336 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 9338 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9340 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9342 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 9344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9346 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9356 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9358 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9364 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9366 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9374 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9376 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9378 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9380 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9382 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9384 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9386 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9388 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9390 */	NdrFcShort( 0x20c ),	/* Type Offset=524 */

	/* Return value */

/* 9392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9394 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9404 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9406 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9412 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9414 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9422 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9424 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9426 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9428 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9430 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9432 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9434 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9436 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9438 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Return value */

/* 9440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9442 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9452 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9454 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9460 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9462 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9470 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9472 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9474 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9476 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9478 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9480 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9482 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9484 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9486 */	NdrFcShort( 0x238 ),	/* Type Offset=568 */

	/* Return value */

/* 9488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9490 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9494 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9500 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9502 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9508 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9510 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9518 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9520 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9522 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9524 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9526 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9528 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9530 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9532 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9534 */	NdrFcShort( 0x24e ),	/* Type Offset=590 */

	/* Return value */

/* 9536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9538 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject2 */

/* 9542 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9548 */	NdrFcShort( 0xc ),	/* 12 */
/* 9550 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9554 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9556 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9558 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9566 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9568 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9570 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 9572 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9574 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9576 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 9578 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9580 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9582 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9586 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9596 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9598 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9604 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9606 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9614 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9616 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9618 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9620 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9622 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9624 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9626 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9628 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9630 */	NdrFcShort( 0x264 ),	/* Type Offset=612 */

	/* Return value */

/* 9632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9634 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 9638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9644 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9646 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9652 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9654 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9662 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9664 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9666 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 9668 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9670 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9672 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 9674 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9676 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9678 */	NdrFcShort( 0x27a ),	/* Type Offset=634 */

	/* Return value */

/* 9680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9682 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDialogEvent */

/* 9686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9692 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9694 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9698 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9700 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9702 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9710 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9712 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9714 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9716 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9718 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9720 */	NdrFcShort( 0x290 ),	/* Type Offset=656 */

	/* Parameter __returnValue */

/* 9722 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9724 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9730 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackEvent */

/* 9734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9740 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9742 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9746 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9748 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9750 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9758 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9760 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9762 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9764 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9766 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9768 */	NdrFcShort( 0x2a2 ),	/* Type Offset=674 */

	/* Parameter __returnValue */

/* 9770 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9772 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9778 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInviteEvent */

/* 9782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9790 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9794 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9796 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9798 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9806 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9808 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9810 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9812 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9814 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9816 */	NdrFcShort( 0x2b4 ),	/* Type Offset=692 */

	/* Parameter __returnValue */

/* 9818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9820 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9826 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnMessagingEvent */

/* 9830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9836 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9838 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9842 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9844 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9846 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9854 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9856 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9858 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9860 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9862 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9864 */	NdrFcShort( 0x2c6 ),	/* Type Offset=710 */

	/* Parameter __returnValue */

/* 9866 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9868 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9874 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInfoEvent */

/* 9878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9884 */	NdrFcShort( 0xa ),	/* 10 */
/* 9886 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9890 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9892 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9894 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9902 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9904 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9906 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9908 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9910 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9912 */	NdrFcShort( 0x2d8 ),	/* Type Offset=728 */

	/* Parameter __returnValue */

/* 9914 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9916 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9922 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnOptionsEvent */

/* 9926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9932 */	NdrFcShort( 0xb ),	/* 11 */
/* 9934 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9938 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9940 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9942 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9950 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9952 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9954 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 9956 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9958 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9960 */	NdrFcShort( 0x2ea ),	/* Type Offset=746 */

	/* Parameter __returnValue */

/* 9962 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9964 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9970 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPublicationEvent */

/* 9974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9980 */	NdrFcShort( 0xc ),	/* 12 */
/* 9982 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9986 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9988 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9990 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9998 */	NdrFcShort( 0x3 ),	/* 3 */
/* 10000 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 10002 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 10004 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10006 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10008 */	NdrFcShort( 0x2fc ),	/* Type Offset=764 */

	/* Parameter __returnValue */

/* 10010 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10012 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10018 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnRegistrationEvent */

/* 10022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10028 */	NdrFcShort( 0xd ),	/* 13 */
/* 10030 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 10032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10034 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10036 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10038 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10046 */	NdrFcShort( 0x3 ),	/* 3 */
/* 10048 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 10050 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 10052 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10054 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10056 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter __returnValue */

/* 10058 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10060 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10066 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnSubscriptionEvent */

/* 10070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10076 */	NdrFcShort( 0xe ),	/* 14 */
/* 10078 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 10080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10082 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10084 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10086 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10094 */	NdrFcShort( 0x3 ),	/* 3 */
/* 10096 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 10098 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 10100 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10102 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10104 */	NdrFcShort( 0x320 ),	/* Type Offset=800 */

	/* Parameter __returnValue */

/* 10106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10108 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10114 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getBaseSession */

/* 10118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10126 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10134 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10142 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10144 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10146 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10148 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10150 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10152 */	NdrFcShort( 0x332 ),	/* Type Offset=818 */

	/* Return value */

/* 10154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10156 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipMessage */

/* 10160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10166 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10168 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10174 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10176 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10184 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10186 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10188 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10190 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10192 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10194 */	NdrFcShort( 0x348 ),	/* Type Offset=840 */

	/* Return value */

/* 10196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10198 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RegistrationState */


	/* Procedure get_State */


	/* Procedure getRequestType */


	/* Procedure getMediaType */

/* 10202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10208 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10210 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10214 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10216 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10218 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10226 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10228 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10230 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 10232 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10234 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10236 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 10238 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10240 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10244 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10252 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10258 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10260 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10268 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10270 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10272 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10274 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10276 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10278 */	NdrFcShort( 0x35e ),	/* Type Offset=862 */

	/* Return value */

/* 10280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10282 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeCallSessionOwnership */

/* 10286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10292 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10294 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10300 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10302 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10310 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10312 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10314 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10316 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10318 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10320 */	NdrFcShort( 0x374 ),	/* Type Offset=884 */

	/* Return value */

/* 10322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10324 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeMsrpSessionOwnership */

/* 10328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10334 */	NdrFcShort( 0xa ),	/* 10 */
/* 10336 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10342 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10344 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10352 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10354 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10356 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10358 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10360 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10362 */	NdrFcShort( 0x38a ),	/* Type Offset=906 */

	/* Return value */

/* 10364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10366 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10376 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10378 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10384 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10386 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10394 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10396 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10398 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10400 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10402 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10404 */	NdrFcShort( 0x3a0 ),	/* Type Offset=928 */

	/* Return value */

/* 10406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10408 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10420 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10426 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10428 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10436 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10438 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10440 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10442 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10444 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10446 */	NdrFcShort( 0x3a0 ),	/* Type Offset=928 */

	/* Return value */

/* 10448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10450 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10460 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10462 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10468 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10470 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10478 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10480 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10482 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10484 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10486 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10488 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 10490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10492 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10504 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10510 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10512 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10520 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10522 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10524 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10526 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10528 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10530 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 10532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10534 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10544 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10546 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10552 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10554 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10562 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10564 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10566 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10568 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10570 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10572 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 10574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10576 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10588 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10594 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10596 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10604 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10606 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10608 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10610 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10612 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10614 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 10616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10618 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10622 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10628 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10630 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10636 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10638 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10646 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10648 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10650 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10652 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10654 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10656 */	NdrFcShort( 0x3e2 ),	/* Type Offset=994 */

	/* Return value */

/* 10658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10660 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10672 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10678 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10680 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10688 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10690 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10692 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10694 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10696 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10698 */	NdrFcShort( 0x3e2 ),	/* Type Offset=994 */

	/* Return value */

/* 10700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10702 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10712 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10714 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10720 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10722 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10730 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10732 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10734 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10736 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10738 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10740 */	NdrFcShort( 0x3f8 ),	/* Type Offset=1016 */

	/* Return value */

/* 10742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10744 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10756 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10762 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10764 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10772 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10774 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10776 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10778 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10780 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10782 */	NdrFcShort( 0x3f8 ),	/* Type Offset=1016 */

	/* Return value */

/* 10784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10786 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 10790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10796 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10798 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10804 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10806 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10814 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10816 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10818 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10820 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10822 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10824 */	NdrFcShort( 0x40e ),	/* Type Offset=1038 */

	/* Return value */

/* 10826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10828 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 10832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10840 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10846 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10848 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10856 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10858 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10860 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10862 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10864 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10866 */	NdrFcShort( 0x40e ),	/* Type Offset=1038 */

	/* Return value */

/* 10868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10870 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue2 */

/* 10874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10880 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10882 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 10884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10888 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10890 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 10892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10894 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10898 */	NdrFcShort( 0x5 ),	/* 5 */
/* 10900 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 10902 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 10904 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 10906 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10908 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10910 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 10912 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10914 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10916 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 10918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10920 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10924 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10926 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 10928 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10932 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 10934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue1 */

/* 10936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10942 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10944 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 10946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10950 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10952 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 10954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10956 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10960 */	NdrFcShort( 0x4 ),	/* 4 */
/* 10962 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 10964 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 10966 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter media */

/* 10968 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10970 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10972 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 10974 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10976 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10978 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 10980 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10982 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10984 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10988 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 10990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderAValue */

/* 10992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11000 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 11002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11006 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11008 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11016 */	NdrFcShort( 0x4 ),	/* 4 */
/* 11018 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 11020 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 11022 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter media */

/* 11024 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11026 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11028 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter attributeName */

/* 11030 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11032 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11034 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 11036 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11038 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11040 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11044 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getResponseCode */

/* 11048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11056 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11060 */	NdrFcShort( 0x22 ),	/* 34 */
/* 11062 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11064 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11072 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11074 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11076 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11080 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11082 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11086 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue2 */

/* 11090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11096 */	NdrFcShort( 0xa ),	/* 10 */
/* 11098 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 11100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11104 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11106 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11108 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 11116 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 11118 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 11120 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 11122 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11124 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11126 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 11128 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11130 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11134 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11136 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11138 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11142 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue1 */

/* 11146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11152 */	NdrFcShort( 0xb ),	/* 11 */
/* 11154 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11160 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11162 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11170 */	NdrFcShort( 0x3 ),	/* 3 */
/* 11172 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 11174 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 11176 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11178 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11180 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 11182 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11184 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11186 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11190 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue2 */

/* 11194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11200 */	NdrFcShort( 0xc ),	/* 12 */
/* 11202 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 11204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11208 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11210 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11218 */	NdrFcShort( 0x5 ),	/* 5 */
/* 11220 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 11222 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 11224 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter name */

/* 11226 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11228 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11230 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 11232 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11234 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11236 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 11238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11240 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11244 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11246 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11248 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11252 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 11254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue1 */

/* 11256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11262 */	NdrFcShort( 0xd ),	/* 13 */
/* 11264 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 11266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11270 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11272 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 11274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11280 */	NdrFcShort( 0x4 ),	/* 4 */
/* 11282 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 11284 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 11286 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 11288 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11290 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11292 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 11294 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11296 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11298 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 11300 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11302 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11304 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11308 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContentLength */

/* 11312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11318 */	NdrFcShort( 0xe ),	/* 14 */
/* 11320 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11328 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11336 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11338 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11340 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11344 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11350 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContent */

/* 11354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11360 */	NdrFcShort( 0xf ),	/* 15 */
/* 11362 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11370 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11378 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11380 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11382 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11384 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11386 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11388 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11392 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpMessage */

/* 11396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11402 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11404 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11410 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11412 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11420 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11422 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11424 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11426 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11428 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11430 */	NdrFcShort( 0x424 ),	/* Type Offset=1060 */

	/* Return value */

/* 11432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11434 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */

/* 11438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11444 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11446 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11452 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 11454 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11464 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 11466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11468 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoPeriodicKeepAlive */


	/* Procedure Stop */

/* 11472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11478 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11480 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11486 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 11488 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11496 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11498 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */


	/* Return value */

/* 11500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11502 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackStateChanged */


	/* Procedure OnDebugMessage */

/* 11506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11512 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11514 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11520 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11522 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11530 */	NdrFcShort( 0x3 ),	/* 3 */
/* 11532 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 11534 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter newState */


	/* Parameter level */

/* 11536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11538 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11540 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter message */

/* 11542 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11544 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11546 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 11548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11550 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAudioRoutingChanged */

/* 11554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11560 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11562 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11570 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11578 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11580 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11582 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newRoute */

/* 11584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11586 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11588 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11592 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAVCallStateChanged */


	/* Procedure OnRegistrationStateChanged */

/* 11596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11602 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11604 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 11606 */	NdrFcShort( 0xe ),	/* 14 */
/* 11608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11610 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11612 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11620 */	NdrFcShort( 0x4 ),	/* 4 */
/* 11622 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 11624 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 11626 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter newState */


	/* Parameter newState */

/* 11628 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11630 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11632 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter sipCode */


	/* Parameter sipCode */

/* 11634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11636 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11638 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter description */

/* 11640 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11642 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11644 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 11646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11648 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnHoldStateChanged */

/* 11652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11658 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11660 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11666 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11668 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11676 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11678 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11680 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newState */

/* 11682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11684 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11686 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11690 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DisplayName */

/* 11694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11700 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11702 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11708 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11710 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11718 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11720 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11722 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11724 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11726 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11728 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11732 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DisplayName */

/* 11736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11742 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11744 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11752 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11760 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11762 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11764 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11766 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11768 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11770 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 11772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11774 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RealmUri */

/* 11778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11784 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11786 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11792 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11794 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11802 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11804 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11806 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11808 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11810 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11812 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 11814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11816 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpiString */

/* 11820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11826 */	NdrFcShort( 0xb ),	/* 11 */
/* 11828 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11836 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11844 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11846 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11848 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11850 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11852 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11854 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 11856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11858 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpuUri */

/* 11862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11868 */	NdrFcShort( 0xd ),	/* 13 */
/* 11870 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11876 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11878 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11882 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11886 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11888 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11890 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11892 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11894 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11896 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 11898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11900 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Password */

/* 11904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11910 */	NdrFcShort( 0xe ),	/* 14 */
/* 11912 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11918 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11920 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11928 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11930 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11932 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11934 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11936 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11938 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11942 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Password */

/* 11946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11952 */	NdrFcShort( 0xf ),	/* 15 */
/* 11954 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11960 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11962 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11970 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11972 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11974 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11976 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11978 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11980 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 11982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11984 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyHost */

/* 11988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11994 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11996 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12002 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12004 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12012 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12014 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12016 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12018 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12020 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12022 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 12024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12026 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyHost */

/* 12030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12036 */	NdrFcShort( 0x11 ),	/* 17 */
/* 12038 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12044 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12046 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12050 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12054 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12056 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12058 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12060 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12062 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12064 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 12066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12068 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyPort */

/* 12072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12078 */	NdrFcShort( 0x12 ),	/* 18 */
/* 12080 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12084 */	NdrFcShort( 0x22 ),	/* 34 */
/* 12086 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12088 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12096 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12098 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12100 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12104 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12106 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12110 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyPort */

/* 12114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12120 */	NdrFcShort( 0x13 ),	/* 19 */
/* 12122 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12124 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12130 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12138 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12140 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12142 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12146 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12148 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12152 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EarlyIMS */

/* 12156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12162 */	NdrFcShort( 0x14 ),	/* 20 */
/* 12164 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12168 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12172 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12180 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12182 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12184 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12188 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12190 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12194 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EarlyIMS */

/* 12198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12204 */	NdrFcShort( 0x15 ),	/* 21 */
/* 12206 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12208 */	NdrFcShort( 0x5 ),	/* 5 */
/* 12210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12212 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12214 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12222 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12224 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12226 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12230 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12232 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12236 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Transport */

/* 12240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12246 */	NdrFcShort( 0x16 ),	/* 22 */
/* 12248 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12252 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12254 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12256 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12264 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12266 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12268 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12270 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12272 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12274 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12278 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Transport */

/* 12282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12288 */	NdrFcShort( 0x17 ),	/* 23 */
/* 12290 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12296 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12298 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12306 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12308 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12310 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12314 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12316 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12320 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IPVersion */

/* 12324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12330 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12332 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12336 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12340 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12348 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12350 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12352 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12356 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12358 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12362 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IPVersion */

/* 12366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12372 */	NdrFcShort( 0x19 ),	/* 25 */
/* 12374 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12380 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12382 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12390 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12392 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12394 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12396 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12398 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12400 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12404 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PushNotificationUri */

/* 12408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12414 */	NdrFcShort( 0x1a ),	/* 26 */
/* 12416 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12422 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12424 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12432 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12434 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12436 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12438 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12440 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12442 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 12444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12446 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PushNotificationUri */

/* 12450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12456 */	NdrFcShort( 0x1b ),	/* 27 */
/* 12458 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12464 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12466 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12474 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12476 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12478 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12482 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12484 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 12486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12488 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UserAgent */

/* 12492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12498 */	NdrFcShort( 0x1c ),	/* 28 */
/* 12500 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12506 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12508 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12516 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12518 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12520 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12522 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12524 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12526 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 12528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12530 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_UserAgent */

/* 12534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12540 */	NdrFcShort( 0x1d ),	/* 29 */
/* 12542 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12550 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12558 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12560 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12562 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12564 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12566 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12568 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 12570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12572 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UriRemote */

/* 12576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12582 */	NdrFcShort( 0x9 ),	/* 9 */
/* 12584 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12590 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12592 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12600 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12602 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12604 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12606 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12608 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12610 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Return value */

/* 12612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12614 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Accept */

/* 12618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12624 */	NdrFcShort( 0xa ),	/* 10 */
/* 12626 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12630 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12632 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12634 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12642 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12644 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12646 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 12648 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12650 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12652 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 12654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12656 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12658 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12662 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HangUp */

/* 12666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12672 */	NdrFcShort( 0xb ),	/* 11 */
/* 12674 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12678 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12680 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12682 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12690 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12692 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12694 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 12696 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12698 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12700 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 12702 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12704 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12706 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12710 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Hold */

/* 12714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12720 */	NdrFcShort( 0xc ),	/* 12 */
/* 12722 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12726 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12728 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12730 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12738 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12740 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12742 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 12744 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12746 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12748 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 12750 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12752 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12754 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12758 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */

/* 12762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12768 */	NdrFcShort( 0xd ),	/* 13 */
/* 12770 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12774 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12776 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12778 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12786 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12788 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12790 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 12792 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12794 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12796 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 12798 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12800 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12802 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12806 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipConfig */

/* 12810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12816 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12818 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12824 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12826 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12834 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12836 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12838 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12840 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12842 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12844 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Return value */

/* 12846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12848 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipActiveAVCall */

/* 12852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12860 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12866 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12868 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12876 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12878 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12880 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12882 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12884 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12886 */	NdrFcShort( 0x454 ),	/* Type Offset=1108 */

	/* Return value */

/* 12888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12890 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AudioRoute */

/* 12894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12900 */	NdrFcShort( 0xa ),	/* 10 */
/* 12902 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12906 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12908 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12910 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12918 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12920 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12922 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12926 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12928 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12932 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AudioRoute */

/* 12936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12942 */	NdrFcShort( 0xb ),	/* 11 */
/* 12944 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12950 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12952 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12960 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12962 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12964 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newRoute */

/* 12966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12968 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12970 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12974 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CameraLocation */

/* 12978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12984 */	NdrFcShort( 0xc ),	/* 12 */
/* 12986 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12990 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12994 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13002 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13004 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13006 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13010 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13012 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 13014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13016 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CameraLocation */

/* 13020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13026 */	NdrFcShort( 0xd ),	/* 13 */
/* 13028 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13034 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13036 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13044 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13046 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13048 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newLocation */

/* 13050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13052 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13054 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 13056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13058 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDebugMessageListener */

/* 13062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13068 */	NdrFcShort( 0xe ),	/* 14 */
/* 13070 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13076 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13078 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13086 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13088 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13090 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 13092 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13094 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13096 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 13098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13100 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAudioStateChangedListener */

/* 13104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13110 */	NdrFcShort( 0xf ),	/* 15 */
/* 13112 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13118 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13120 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13128 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13130 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13132 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 13134 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13136 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13138 */	NdrFcShort( 0x47c ),	/* Type Offset=1148 */

	/* Return value */

/* 13140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13142 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipRegistrationStateChangedListener */

/* 13146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13152 */	NdrFcShort( 0x10 ),	/* 16 */
/* 13154 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13160 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13162 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13170 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13172 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13174 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 13176 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13178 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13180 */	NdrFcShort( 0x48e ),	/* Type Offset=1166 */

	/* Return value */

/* 13182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13184 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipStackStateChangedListener */

/* 13188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13194 */	NdrFcShort( 0x11 ),	/* 17 */
/* 13196 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13202 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13204 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13212 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13214 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13216 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 13218 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13220 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13222 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Return value */

/* 13224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13226 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipAVCallStateChangedListener */

/* 13230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13236 */	NdrFcShort( 0x12 ),	/* 18 */
/* 13238 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13244 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 13246 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13254 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13256 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13258 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 13260 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13262 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13264 */	NdrFcShort( 0x4b2 ),	/* Type Offset=1202 */

	/* Return value */

/* 13266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13268 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Register */

/* 13272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13278 */	NdrFcShort( 0x15 ),	/* 21 */
/* 13280 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13284 */	NdrFcShort( 0x21 ),	/* 33 */
/* 13286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13288 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13296 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13298 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13300 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13302 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13304 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13306 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 13308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13310 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudio */

/* 13314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13320 */	NdrFcShort( 0x17 ),	/* 23 */
/* 13322 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 13324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13328 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 13330 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13338 */	NdrFcShort( 0x4 ),	/* 4 */
/* 13340 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 13342 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 13344 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter pTo */

/* 13346 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13348 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13350 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter pConfig */

/* 13352 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13354 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13356 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 13358 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13360 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13362 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 13364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13366 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudioVideo */

/* 13370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13376 */	NdrFcShort( 0x18 ),	/* 24 */
/* 13378 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 13380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13384 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 13386 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13394 */	NdrFcShort( 0x4 ),	/* 4 */
/* 13396 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 13398 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 13400 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter pTo */

/* 13402 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13404 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13406 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter pConfig */

/* 13408 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13410 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13412 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 13414 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13416 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13418 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 13420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13422 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCodecs */

/* 13426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13432 */	NdrFcShort( 0x6 ),	/* 6 */
/* 13434 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13438 */	NdrFcShort( 0x21 ),	/* 33 */
/* 13440 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 13442 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13450 */	NdrFcShort( 0x3 ),	/* 3 */
/* 13452 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 13454 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter codecs */

/* 13456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13458 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13460 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13462 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 13464 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13466 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 13468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13470 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartServer */

/* 13474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13480 */	NdrFcShort( 0x6 ),	/* 6 */
/* 13482 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13488 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 13490 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 13492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13498 */	NdrFcShort( 0x3 ),	/* 3 */
/* 13500 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 13502 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter __outOfProcServerClassNamesSize */

/* 13504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13506 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outOfProcServerClassNames */

/* 13510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 13512 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13514 */	NdrFcShort( 0x4de ),	/* Type Offset=1246 */

	/* Return value */

/* 13516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13518 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VideoRenderer */

/* 13522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13530 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13536 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
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

	/* Parameter __returnValue */

/* 13552 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13554 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13556 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 13558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13560 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_VideoRenderer */

/* 13564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13570 */	NdrFcShort( 0x9 ),	/* 9 */
/* 13572 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13578 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
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

	/* Parameter value */

/* 13594 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13596 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13598 */	NdrFcShort( 0x4f8 ),	/* Type Offset=1272 */

	/* Return value */

/* 13600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13602 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipService */

/* 13606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13612 */	NdrFcShort( 0xa ),	/* 10 */
/* 13614 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13620 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13622 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13630 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13632 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13634 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13636 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13638 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13640 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Return value */

/* 13642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13644 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_VideoFrameReceived */

/* 13648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13654 */	NdrFcShort( 0xb ),	/* 11 */
/* 13656 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13660 */	NdrFcShort( 0x34 ),	/* 52 */
/* 13662 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 13664 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13672 */	NdrFcShort( 0x3 ),	/* 3 */
/* 13674 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 13676 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter __param0 */

/* 13678 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 13680 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13682 */	NdrFcShort( 0x520 ),	/* Type Offset=1312 */

	/* Parameter __returnValue */

/* 13684 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 13686 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13688 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Return value */

/* 13690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13692 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_VideoFrameReceived */

/* 13696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13702 */	NdrFcShort( 0xc ),	/* 12 */
/* 13704 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 13706 */	NdrFcShort( 0x18 ),	/* 24 */
/* 13708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13710 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 13712 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13720 */	NdrFcShort( 0x4 ),	/* 4 */
/* 13722 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 13724 */	0x9f,		/* 159 */
			0x82,		/* 130 */
/* 13726 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter __param0 */

/* 13728 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 13730 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13732 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Return value */

/* 13734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13736 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUiDisconnectedEventName */

/* 13740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13746 */	NdrFcShort( 0x7 ),	/* 7 */
/* 13748 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13754 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 13756 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 13758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13764 */	NdrFcShort( 0x3 ),	/* 3 */
/* 13766 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 13768 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter backgroundProcessId */

/* 13770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13772 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13776 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13778 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13780 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 13782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13784 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBackgroundProcessReadyEventName */

/* 13788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13796 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 13798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13802 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 13804 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 13806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 13808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13812 */	NdrFcShort( 0x3 ),	/* 3 */
/* 13814 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 13816 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter backgroundProcessId */

/* 13818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 13820 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13824 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 13826 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13828 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 13830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13832 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Instance */

/* 13836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 13838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 13842 */	NdrFcShort( 0x9 ),	/* 9 */
/* 13844 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 13846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 13850 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 13852 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 13854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 13860 */	NdrFcShort( 0x2 ),	/* 2 */
/* 13862 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 13864 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 13866 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 13868 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 13870 */	NdrFcShort( 0x53c ),	/* Type Offset=1340 */

	/* Return value */

/* 13872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 13874 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 13876 */	0x8,		/* FC_LONG */
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
    3432,
    3480,
    3522
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
    3578,
    3620,
    3662
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
    3704,
    3746,
    666,
    3788,
    3830,
    3872,
    3914,
    3956,
    3998,
    4046,
    4102,
    4144
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
    4192,
    4234
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
    4276
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
    4324,
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
    3704,
    4366,
    4414,
    4462,
    4510,
    4558,
    4606,
    4654,
    4702,
    4750,
    4820,
    4876,
    4924,
    4980,
    5028,
    5076,
    5132,
    5180,
    5228,
    5276,
    5332,
    5402,
    5450,
    5498,
    5554,
    5610,
    5658,
    5728,
    5790,
    5838,
    5908,
    5970,
    6026,
    6074,
    6122,
    6170,
    2982,
    6212
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
    3704,
    6254,
    6296,
    6338,
    6394
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
    3704,
    624,
    666,
    6442,
    6484,
    6526,
    6568,
    6610,
    6658
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
    6700,
    6756
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
    6804
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
    6852
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
    6852
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
    6900
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
    6948,
    6254,
    6990,
    4462,
    7046,
    4558,
    1576,
    7102,
    7150,
    1714,
    7198,
    7246
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
    7288,
    7336,
    7384,
    7432,
    7494
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
    7536
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
    7584
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
    7632,
    7694,
    7750,
    7812,
    7868,
    7924,
    7972,
    8020,
    8068,
    8116,
    8172,
    7246,
    8220,
    8268,
    8310,
    8366,
    8414,
    8462,
    8504,
    8552,
    8594,
    8642,
    8684,
    8740,
    8788
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
    8836
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
    8884,
    8932,
    4414,
    8988,
    9044,
    9092,
    4606
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
    9148
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
    9204,
    114,
    7384,
    9260,
    9302,
    3872
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
    9350
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
    9204,
    114,
    7384,
    9260,
    9302,
    3872
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
    9398
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
    7288,
    6254,
    7384,
    9260,
    9302,
    3872
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
    9446
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
    9204,
    114,
    7384,
    9260
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
    9494
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
    7288,
    6254,
    7384,
    9260,
    9302,
    3872,
    9542,
    3956
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
    9590
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
    3704,
    6254
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
    9638
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
    9686,
    9734,
    9782,
    9830,
    9878,
    9926,
    9974,
    10022,
    10070
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
    4324,
    624,
    10118,
    10160
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
    10202,
    10244,
    10286,
    10328
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
    10370,
    10412
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
    10454,
    10496
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
    10538,
    10580
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
    10622,
    10664
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
    10706,
    10748
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
    10790,
    10832
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
    10874,
    10936,
    10992
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
    3704,
    10202,
    11048,
    708,
    11090,
    11146,
    11194,
    11256,
    11312,
    11354,
    11396
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
    11438,
    11472
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
    11506
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
    11554
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
    11596
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
    11596,
    11652
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
    11506
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
    11694,
    11736,
    666,
    11778,
    6484,
    11820,
    6568,
    11862,
    11904,
    11946,
    11988,
    12030,
    12072,
    12114,
    12156,
    12198,
    12240,
    12282,
    12324,
    12366,
    12408,
    12450,
    12492,
    12534
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
    3704,
    10202,
    1390,
    12576,
    12618,
    12666,
    12714,
    12762,
    1666
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
CINTERFACE_PROXY_VTABLE(15) ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtualsProxyVtbl = 
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
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::Resume */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::SendDTMF */
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
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ServerInfo,
    15,
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
    12810,
    10202,
    12852,
    3788,
    12894,
    12936,
    12978,
    13020,
    13062,
    13104,
    13146,
    13188,
    13230,
    8268,
    5028,
    13272,
    2032,
    13314,
    13370
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


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics, ver. 0.0,
   GUID={0x228FB9E6,0xED53,0x3289,{0xAC,0xE3,0x99,0x5F,0x36,0xF1,0x72,0xB2}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    13426
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics::SetCodecs */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0068, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals, ver. 0.0,
   GUID={0x2F22CC8A,0x1FA9,0x3EF8,{0xBD,0x69,0xA1,0xB6,0x1A,0x69,0x6F,0x3C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    13474,
    11472,
    13522,
    13564,
    13606,
    13648,
    13696
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


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0069, ver. 0.0,
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


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0070, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics, ver. 0.0,
   GUID={0xD397D79C,0x41C8,0x3E86,{0xB7,0x94,0xA2,0x0E,0xA8,0xD5,0x45,0xF5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6948,
    13740,
    13788,
    13836
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


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0071, ver. 0.0,
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
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStaticsProxyVtbl,
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
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStaticsStubVtbl,
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
    "__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics",
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
    &IID_IInspectable,
    0
};


#define _doubango_rt2EBackEnd_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _doubango_rt2EBackEnd, pIID, n)

int __stdcall _doubango_rt2EBackEnd_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _doubango_rt2EBackEnd, 71, 64 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _doubango_rt2EBackEnd, 71, *pIndex )
    
}

const ExtendedProxyFileInfo doubango_rt2EBackEnd_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _doubango_rt2EBackEnd_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _doubango_rt2EBackEnd_StubVtblList,
    (const PCInterfaceName * ) & _doubango_rt2EBackEnd_InterfaceNamesList,
    (const IID ** ) & _doubango_rt2EBackEnd_BaseIIDList,
    & _doubango_rt2EBackEnd_IID_Lookup, 
    71,
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

