

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Mon May 12 01:43:32 2014
 */
/* Compiler settings for C:\Users\mamadou\AppData\Local\Temp\doubango_rt.BackEnd.idl-31255408:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

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
#define PROC_FORMAT_STRING_SIZE   12001                             
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

#if !defined(__RPC_WIN32__)
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
/*  8 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10 */	NdrFcShort( 0x20 ),	/* 32 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter __param1 */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter __param2 */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 40 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x6 ),	/* 6 */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x21 ),	/* 33 */
/* 62 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 64 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x1 ),	/* 1 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 72 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 78 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 84 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure publish1 */


	/* Procedure send1 */


	/* Procedure send1 */


	/* Procedure addPayload */

/* 96 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x7 ),	/* 7 */
/* 104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x21 ),	/* 33 */
/* 110 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 112 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x1 ),	/* 1 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */

/* 120 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 124 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 130 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setActiveMedia */

/* 138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 150 */	NdrFcShort( 0x21 ),	/* 33 */
/* 152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 154 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 166 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 168 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 172 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setResponseLine */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x9 ),	/* 9 */
/* 188 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 190 */	NdrFcShort( 0x6 ),	/* 6 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 196 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter code */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter phrase */

/* 210 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 216 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 220 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setMediaString */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0xa ),	/* 10 */
/* 236 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 244 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 258 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 264 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 274 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 278 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setMediaInt */

/* 282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0xb ),	/* 11 */
/* 290 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 292 */	NdrFcShort( 0x10 ),	/* 16 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 298 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 310 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 312 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 316 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 324 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 326 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 328 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure registerAudioPluginFromFile */


	/* Procedure OnDebugInfo */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x6 ),	/* 6 */
/* 344 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x24 ),	/* 36 */
/* 350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 352 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */


	/* Parameter message */

/* 360 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 364 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 366 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDebugWarn */

/* 378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x7 ),	/* 7 */
/* 386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x24 ),	/* 36 */
/* 392 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 394 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter message */

/* 402 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 406 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 408 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDebugError */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x24 ),	/* 36 */
/* 434 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 436 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter message */

/* 444 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDebugFatal */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x9 ),	/* 9 */
/* 470 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x24 ),	/* 36 */
/* 476 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 478 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter message */

/* 486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 502 */	0x8,		/* FC_LONG */
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

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x6 ),	/* 6 */
/* 512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x24 ),	/* 36 */
/* 518 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 520 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 532 */	0xe,		/* FC_ENUM32 */
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

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPhrase */


	/* Procedure getScheme */


	/* Procedure get_Address */


	/* Procedure getName */

/* 540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x7 ),	/* 7 */
/* 548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 554 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 556 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 564 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 568 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RealmUri */


	/* Procedure getHost */


	/* Procedure getPhrase */


	/* Procedure getDescription */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 592 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 600 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getResponsePhrase */


	/* Procedure getNegFormat */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x9 ),	/* 9 */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 628 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 630 */	NdrFcShort( 0x1 ),	/* 1 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 636 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAudioSamplingRate */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0xa ),	/* 10 */
/* 656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x24 ),	/* 36 */
/* 662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 672 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAudioChannels */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0xb ),	/* 11 */
/* 692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x24 ),	/* 36 */
/* 698 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 700 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAudioPTime */

/* 720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0xc ),	/* 12 */
/* 728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x24 ),	/* 36 */
/* 734 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 736 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 744 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 746 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sessionSetInt32 */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x6 ),	/* 6 */
/* 764 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 766 */	NdrFcShort( 0x10 ),	/* 16 */
/* 768 */	NdrFcShort( 0x21 ),	/* 33 */
/* 770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 772 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 786 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 798 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 800 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 802 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 806 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sessionGetInt32 */

/* 810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x7 ),	/* 7 */
/* 818 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 822 */	NdrFcShort( 0x24 ),	/* 36 */
/* 824 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 826 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 838 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 840 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 844 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure consumerSetInt32 */

/* 858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 866 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 868 */	NdrFcShort( 0x10 ),	/* 16 */
/* 870 */	NdrFcShort( 0x21 ),	/* 33 */
/* 872 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 874 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 886 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 888 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 892 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 900 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 902 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 904 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 908 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure consumerSetInt64 */

/* 912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x9 ),	/* 9 */
/* 920 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 922 */	NdrFcShort( 0x18 ),	/* 24 */
/* 924 */	NdrFcShort( 0x21 ),	/* 33 */
/* 926 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 928 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 940 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 942 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 946 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 950 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 952 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 954 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 956 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 958 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure producerSetInt32 */

/* 966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0xa ),	/* 10 */
/* 974 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 976 */	NdrFcShort( 0x10 ),	/* 16 */
/* 978 */	NdrFcShort( 0x21 ),	/* 33 */
/* 980 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 982 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 994 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 996 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1000 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 1002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1010 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1012 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1016 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure producerSetInt64 */

/* 1020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0xb ),	/* 11 */
/* 1028 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1030 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1032 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1036 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 1044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 1050 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 1056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1060 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1064 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1066 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure producerGetCodec */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0xc ),	/* 12 */
/* 1082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1090 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 1098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1102 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1104 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1108 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 1110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSessionId */

/* 1116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0xd ),	/* 13 */
/* 1124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1128 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1130 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1132 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 1140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1144 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1146 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1150 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetProfile */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1166 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1170 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter profile */

/* 1182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1186 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1192 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HoldState */


	/* Procedure defaultsGetProfile */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1216 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1224 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetPrefVideoSize */

/* 1236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1244 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1248 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1252 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pref_video_size */

/* 1260 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1264 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1266 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1270 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetJbMargin */

/* 1278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0xa ),	/* 10 */
/* 1286 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1290 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1292 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1294 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter jb_margin_ms */

/* 1302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1304 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1308 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1310 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1312 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetJbMaxLateRate */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0xb ),	/* 11 */
/* 1328 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1332 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1334 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1336 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter jb_late_rate_percent */

/* 1344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1354 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setExpires */


	/* Procedure defaultsSetEchoTail */

/* 1362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0xc ),	/* 12 */
/* 1370 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1374 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1376 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1378 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter expires */


	/* Parameter echo_tail */

/* 1386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1396 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetEchoTail */

/* 1404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0xd ),	/* 13 */
/* 1412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1418 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1420 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1428 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendDTMF */


	/* Procedure defaultsSetEchoSkew */

/* 1440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0xe ),	/* 14 */
/* 1448 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1452 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dtmfCode */


	/* Parameter echo_skew */

/* 1464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1474 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSilentHangup */


	/* Procedure defaultsSetEchoSuppEnabled */

/* 1482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0xf ),	/* 15 */
/* 1490 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1492 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1494 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1496 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1498 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter silent */


	/* Parameter echo_supp_enabled */

/* 1506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1510 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1516 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetEchoSuppEnabled */

/* 1524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1538 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1552 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetAgcEnabled */

/* 1560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1568 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1570 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1572 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter agc_enabled */

/* 1584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1588 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1590 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1594 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1598 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetAgcEnabled */

/* 1602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1616 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1618 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1624 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1626 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1630 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetAgcLevel */

/* 1638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1646 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1650 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1652 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1654 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter agc_level */

/* 1662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1664 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1666 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1668 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1672 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetAgcLevel */

/* 1680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1694 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1696 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1704 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1708 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 1710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetVadEnabled */

/* 1716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1724 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1726 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1728 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1730 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1732 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vad_enabled */

/* 1740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1744 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1750 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1754 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnRegister */


	/* Procedure defaultsGetGetVadEnabled */

/* 1758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1766 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1772 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1774 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1782 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1786 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetNoiseSuppEnabled */

/* 1794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1802 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1804 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1806 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1808 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1810 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter noise_supp_enabled */

/* 1818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1822 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1824 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1828 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetNoiseSuppEnabled */

/* 1836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1850 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1852 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1860 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1864 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetNoiseSuppLevel */

/* 1872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1880 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1884 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1886 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1888 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter noise_supp_level */

/* 1896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1902 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1906 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetNoiseSuppLevel */

/* 1914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1920 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1922 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1928 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1930 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1938 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1940 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1946 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSet100relEnabled */

/* 1950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1956 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1958 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1960 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1962 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1964 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1966 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter _100rel_enabled */

/* 1974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1976 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1978 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1982 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1984 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGet100relEnabled */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2020 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetScreenSize */

/* 2028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2036 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2038 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2040 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2042 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sx */

/* 2052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sy */

/* 2058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2064 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2066 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2068 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2072 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetAudioGain */

/* 2076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2084 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2086 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2088 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2090 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2092 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter producer_gain */

/* 2100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter consumer_gain */

/* 2106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2108 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2116 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2120 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtpPortRange */

/* 2124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x1f ),	/* 31 */
/* 2132 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2134 */	NdrFcShort( 0xc ),	/* 12 */
/* 2136 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2138 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2140 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter range_start */

/* 2148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2152 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter range_stop */

/* 2154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2158 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2160 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2164 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2168 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtpSymetricEnabled */

/* 2172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2180 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2182 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2184 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2186 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2188 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2200 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2202 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2206 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetMediaType */

/* 2214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2222 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2226 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2228 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2230 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media_type */

/* 2238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2242 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2248 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetVolume */

/* 2256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2262 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2264 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2268 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2270 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2272 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter volume */

/* 2280 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2286 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2290 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2294 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetVolume */

/* 2298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2310 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2312 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2314 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2322 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetInviteSessionTimers */

/* 2334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2342 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2346 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2348 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2350 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2354 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeout */

/* 2358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refresher */

/* 2364 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2368 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2370 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2374 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2378 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetSRtpMode */

/* 2382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2390 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2394 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2398 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mode */

/* 2406 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2410 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2414 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2416 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetSRtpMode */

/* 2424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2438 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2440 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2448 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2452 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetSRtpType */

/* 2460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2468 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2472 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2474 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2476 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter srtp_type */

/* 2484 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2488 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2490 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2494 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetSRtpType */

/* 2502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2516 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2518 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2530 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtcpEnabled */

/* 2538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2546 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2548 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2550 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2552 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2554 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2566 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2568 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2570 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2572 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isValid */


	/* Procedure defaultsGetRtcpEnabled */

/* 2580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2588 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2594 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2596 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2608 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2612 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtcpMuxEnabled */

/* 2616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2624 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2626 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2628 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2630 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2632 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2644 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2646 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2650 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetRtcpMuxEnabled */

/* 2658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2664 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2670 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2672 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2674 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2686 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2690 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetIceEnabled */

/* 2694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2702 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2704 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2706 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2708 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2710 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ice_enabled */

/* 2718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2722 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2724 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2728 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2732 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetByPassEncoding */

/* 2736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2744 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2746 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2748 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2750 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2752 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2764 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2766 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2770 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetByPassEncoding */

/* 2778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2786 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2790 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2792 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2794 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2802 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2804 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2806 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2810 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetByPassDecoding */

/* 2814 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2822 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2824 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2826 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2828 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2830 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2840 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2842 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2844 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2846 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2848 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2852 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetByPassDecoding */

/* 2856 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2864 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2868 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2870 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2872 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2880 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2884 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2888 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetVideoJbEnabled */

/* 2892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2900 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2902 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2904 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2906 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2908 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2918 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2920 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2922 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2924 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2926 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2930 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetVideoJbEnabled */

/* 2934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2940 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2942 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2948 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2950 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2958 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2960 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2962 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2966 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtpBuffSize */

/* 2970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2976 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2978 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2982 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2984 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2986 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter buffSize */

/* 2994 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2996 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3000 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3004 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetRtpBuffSize */

/* 3012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3020 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3026 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3028 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3036 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetAvpfTail */

/* 3048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3054 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3056 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3058 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3060 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3062 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3064 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tail_min */

/* 3072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tail_max */

/* 3078 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3088 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3092 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Start */

/* 3096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3110 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3120 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3124 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_End */

/* 3132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3138 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3144 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3160 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Total */

/* 3168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3182 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3192 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3196 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WithVideo */


	/* Procedure isResponse */


	/* Procedure subscribe */


	/* Procedure isValid_ */


	/* Procedure initialize */


	/* Procedure start */


	/* Procedure isRequest */

/* 3204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3218 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3228 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3232 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */

/* 3240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3246 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3254 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3268 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AvailableAudioRoutes */


	/* Procedure getRequestType */

/* 3276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3300 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3304 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getByteRange */

/* 3312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3318 */	NdrFcShort( 0xa ),	/* 10 */
/* 3320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3326 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3336 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3340 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Return value */

/* 3342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure isLastChunck */

/* 3348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3354 */	NdrFcShort( 0xb ),	/* 11 */
/* 3356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3362 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3372 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3376 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isFirstChunck */

/* 3384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0xc ),	/* 12 */
/* 3392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3398 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3408 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3412 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject1 */


	/* Procedure isSuccessReport */

/* 3420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0xd ),	/* 13 */
/* 3428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3432 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3448 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderValue */

/* 3456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0xe ),	/* 14 */
/* 3464 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3470 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3472 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3484 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3486 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3490 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderParamValue */

/* 3498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0xf ),	/* 15 */
/* 3506 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3512 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3514 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3516 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3522 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3526 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 3528 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3532 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3534 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3538 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContentLength */

/* 3546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3558 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3560 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3562 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3578 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContent */

/* 3582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3588 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3590 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3596 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3598 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxsize */

/* 3606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3612 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3616 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipSession */

/* 3624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3630 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3632 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3638 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3640 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3648 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3652 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Return value */

/* 3654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMessage */

/* 3660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3668 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3674 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3676 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3684 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3688 */	NdrFcShort( 0xba ),	/* Type Offset=186 */

	/* Return value */

/* 3690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnEvent */

/* 3696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3704 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3712 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEvent */

/* 3720 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3724 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter __returnValue */

/* 3726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */


	/* Procedure get_Port */

/* 3738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3744 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3752 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3754 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3762 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3766 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDebugCallback */

/* 3774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3782 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3788 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3790 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCallback */

/* 3798 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3802 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter __returnValue */

/* 3804 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3808 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp3 */


	/* Procedure setDisplayName */

/* 3816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3824 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3830 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3832 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */


	/* Parameter display_name */

/* 3840 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3844 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3850 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3854 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */


	/* Procedure setRealm */

/* 3858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3864 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3870 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3872 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3874 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */


	/* Parameter realm_uri */

/* 3882 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3886 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3888 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3892 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIMPI */

/* 3900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3906 */	NdrFcShort( 0xa ),	/* 10 */
/* 3908 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3912 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3914 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3916 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter impi */

/* 3924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3928 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3934 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeCaps */


	/* Procedure setIMPU */

/* 3942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0xb ),	/* 11 */
/* 3950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3956 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3958 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */


	/* Parameter impu_uri */

/* 3966 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3970 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3972 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3976 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage1 */


	/* Procedure setPassword */

/* 3984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3990 */	NdrFcShort( 0xc ),	/* 12 */
/* 3992 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3998 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4000 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */


	/* Parameter password */

/* 4008 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4012 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4014 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4018 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAMF */

/* 4026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4032 */	NdrFcShort( 0xd ),	/* 13 */
/* 4034 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4038 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4040 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4042 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter amf */

/* 4050 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4054 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4060 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setOperatorId */

/* 4068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4074 */	NdrFcShort( 0xe ),	/* 14 */
/* 4076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4082 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4084 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter opid */

/* 4092 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4096 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4098 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4102 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setProxyCSCF */

/* 4110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4116 */	NdrFcShort( 0xf ),	/* 15 */
/* 4118 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4120 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4122 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4126 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fqdn */

/* 4134 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4138 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 4140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4144 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 4146 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4150 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ipversion */

/* 4152 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4154 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4156 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4160 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4162 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4166 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP2 */

/* 4170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4176 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4178 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4182 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4184 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4186 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 4194 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4198 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter transport */

/* 4200 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4202 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4204 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4206 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4210 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4214 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP1 */

/* 4218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4226 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4232 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4234 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 4242 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4246 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4248 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4250 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4252 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort2 */

/* 4260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4268 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4270 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4272 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4274 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4276 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter port */

/* 4284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4286 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4288 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 4290 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4294 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4298 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4300 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4304 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort1 */

/* 4308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4314 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4316 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4318 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4320 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4322 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter port */

/* 4332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4336 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4338 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4342 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4346 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stop */


	/* Procedure setEarlyIMS */

/* 4350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4358 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4360 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4362 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4364 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4366 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bEnteringBackground */


	/* Parameter enabled */

/* 4374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4378 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4384 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 4392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4400 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4404 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4406 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4408 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 4416 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4420 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 4422 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4424 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4426 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4428 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4432 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4436 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */

/* 4440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4448 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4454 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4456 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 4464 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4468 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4474 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addDnsServer */

/* 4482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x17 ),	/* 23 */
/* 4490 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4494 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4496 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4498 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4502 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 4506 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4510 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4516 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDnsDiscovery */

/* 4524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4530 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4532 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4534 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4536 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4538 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 4548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4552 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4554 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4558 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAoR */

/* 4566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4572 */	NdrFcShort( 0x19 ),	/* 25 */
/* 4574 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4578 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4580 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4582 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 4590 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4594 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 4596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4598 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4602 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4606 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4610 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSigCompParams */

/* 4614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4620 */	NdrFcShort( 0x1a ),	/* 26 */
/* 4622 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4624 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4626 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4628 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 4630 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dms */

/* 4638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sms */

/* 4644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4646 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cpb */

/* 4650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter enablePresDict */

/* 4656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4660 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4662 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4664 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4666 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4670 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 4674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4680 */	NdrFcShort( 0x1b ),	/* 27 */
/* 4682 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4688 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4690 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter compId */

/* 4698 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4702 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4704 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4708 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeSigCompCompartment */

/* 4716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4722 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4724 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4730 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4732 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter compId */

/* 4740 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4744 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4750 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4754 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNServer */

/* 4758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4764 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4766 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4768 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4770 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4772 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4774 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 4782 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4786 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 4788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4792 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4794 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4796 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4798 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4802 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNCred */

/* 4806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4812 */	NdrFcShort( 0x1e ),	/* 30 */
/* 4814 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4818 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4820 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4822 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter login */

/* 4830 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4834 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter password */

/* 4836 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4840 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4842 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4846 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4850 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setTLSSecAgree */

/* 4854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4860 */	NdrFcShort( 0x1f ),	/* 31 */
/* 4862 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4864 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4866 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4868 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4870 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 4878 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4882 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4888 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4892 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates2 */

/* 4896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4902 */	NdrFcShort( 0x20 ),	/* 32 */
/* 4904 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4906 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4908 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4910 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4912 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4916 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter privKey */

/* 4920 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4922 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4924 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 4926 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4930 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 4932 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4934 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4936 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter verify */

/* 4938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4940 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4942 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4946 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4948 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4952 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates1 */

/* 4956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4962 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4964 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4968 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4970 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4972 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter privKey */

/* 4980 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4984 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 4986 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4990 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 4992 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4994 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4996 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4998 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5000 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5002 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5006 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecSecAgree */

/* 5010 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5016 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5018 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5020 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5022 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5024 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5026 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 5034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5036 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5038 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5040 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5042 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5044 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5048 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecParameters */

/* 5052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0x23 ),	/* 35 */
/* 5060 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5064 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5066 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5068 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter algo */

/* 5076 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5078 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5080 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ealgo */

/* 5082 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5084 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5086 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter mode */

/* 5088 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5090 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5092 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter proto */

/* 5094 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5096 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5098 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5102 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5104 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5108 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsENUM */

/* 5112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5118 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5120 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5126 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5128 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter service */

/* 5136 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5140 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter e164num */

/* 5142 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5146 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter domain */

/* 5148 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5150 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5152 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5154 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5156 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5158 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5162 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsNaptrSrv */

/* 5166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5172 */	NdrFcShort( 0x25 ),	/* 37 */
/* 5174 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5180 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5182 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter domain */

/* 5190 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5194 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter service */

/* 5196 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5200 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5202 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5206 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 5208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5210 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsSrv */

/* 5214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5220 */	NdrFcShort( 0x26 ),	/* 38 */
/* 5222 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5228 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5230 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter service */

/* 5238 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5242 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5244 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5248 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 5250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalIP */

/* 5256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5262 */	NdrFcShort( 0x27 ),	/* 39 */
/* 5264 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5270 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5272 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter protocol */

/* 5280 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5284 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5286 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5290 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5294 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalPort */

/* 5298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0x28 ),	/* 40 */
/* 5306 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5310 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5312 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5314 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter protocol */

/* 5322 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5326 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5332 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPreferredIdentity */

/* 5340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5346 */	NdrFcShort( 0x29 ),	/* 41 */
/* 5348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5354 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5356 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5364 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5368 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stop */

/* 5376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5382 */	NdrFcShort( 0x2b ),	/* 43 */
/* 5384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5390 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5392 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5400 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5404 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unSubscribe */


	/* Procedure register_1 */


	/* Procedure send1 */


	/* Procedure haveOwnership */


	/* Procedure deInitialize */

/* 5412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5440 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecs */

/* 5448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codecs */

/* 5472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5476 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 5478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecPriority */

/* 5484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5490 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5492 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5494 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5496 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5498 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 5500 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codec_id */

/* 5508 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5512 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter priority */

/* 5514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5520 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5522 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5524 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5528 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isCodecSupported */

/* 5532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5538 */	NdrFcShort( 0xa ),	/* 10 */
/* 5540 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5544 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codec_id */

/* 5556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5560 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5562 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5566 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5570 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPort */

/* 5574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5580 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5586 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5588 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5590 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5598 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5602 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpiString */


	/* Procedure getUserName */

/* 5610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5616 */	NdrFcShort( 0xa ),	/* 10 */
/* 5618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5624 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5626 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5634 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5636 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5638 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 5640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5642 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPassword */

/* 5646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5652 */	NdrFcShort( 0xb ),	/* 11 */
/* 5654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5660 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5662 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5664 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5670 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5672 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5674 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5678 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpuUri */


	/* Procedure getDisplayName */

/* 5682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5688 */	NdrFcShort( 0xc ),	/* 12 */
/* 5690 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5696 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5698 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5706 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5710 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 5712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getParamValue */

/* 5718 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5724 */	NdrFcShort( 0xd ),	/* 13 */
/* 5726 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5732 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5734 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 5742 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5744 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5746 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5748 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5750 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5752 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5756 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDisplayName */

/* 5760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5766 */	NdrFcShort( 0xe ),	/* 14 */
/* 5768 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5774 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5776 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5780 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter displayName */

/* 5784 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5786 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5788 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 5790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5792 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance2 */

/* 5796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5802 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5804 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5810 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5812 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uriString */

/* 5820 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5822 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5824 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter displayName */

/* 5826 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5828 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5830 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5832 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5834 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5836 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 5838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5840 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 5844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5850 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5852 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5858 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5860 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5864 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uriString */

/* 5868 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5872 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5874 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5876 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5878 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 5880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isValid */

/* 5886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5892 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5894 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5898 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5900 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5902 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uri */

/* 5910 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5914 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5916 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5918 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5920 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ondata */


	/* Procedure ondata */

/* 5928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5934 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5936 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5940 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5942 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5944 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5950 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */


	/* Parameter pData */

/* 5952 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5954 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5956 */	NdrFcShort( 0x120 ),	/* Type Offset=288 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5958 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5960 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5966 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 5970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5976 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5978 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5984 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5986 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pI */

/* 5994 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5996 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5998 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter __returnValue */

/* 6000 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6004 */	NdrFcShort( 0x144 ),	/* Type Offset=324 */

	/* Return value */

/* 6006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentProcessId */


	/* Procedure getId */

/* 6012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6018 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6020 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6024 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6026 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6028 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6036 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 6048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6056 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6060 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6062 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6064 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6072 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6076 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 6078 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6082 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6088 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6092 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addCaps */

/* 6096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6102 */	NdrFcShort( 0xa ),	/* 10 */
/* 6104 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6108 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6110 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6112 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6116 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6120 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6124 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 6126 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6130 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6132 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6136 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6140 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setFromUri */

/* 6144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6150 */	NdrFcShort( 0xd ),	/* 13 */
/* 6152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6156 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6158 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fromUri */

/* 6168 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6172 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter __returnValue */

/* 6174 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6178 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setToUri */

/* 6186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6192 */	NdrFcShort( 0xe ),	/* 14 */
/* 6194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6198 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter toUri */

/* 6210 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6214 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter __returnValue */

/* 6216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6220 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 6228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6234 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6240 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6244 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter compId */

/* 6252 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6256 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6258 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6262 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold1 */


	/* Procedure removeSigCompCompartment */

/* 6270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6276 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6282 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6284 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6286 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6294 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6298 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6302 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure register_2 */


	/* Procedure send2 */


	/* Procedure accept */

/* 6306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6312 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6314 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6318 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6320 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 6330 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6334 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6336 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6340 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 6342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hangup */

/* 6348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6354 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6360 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6362 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 6372 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6376 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6382 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister2 */


	/* Procedure unPublish2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure reject */

/* 6390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6402 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6404 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 6414 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6418 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6424 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendInfo */

/* 6432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6438 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6440 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6444 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6446 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6448 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */

/* 6456 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6460 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter len */

/* 6462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter config */

/* 6468 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6472 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6476 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6478 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6482 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMediaMgr */

/* 6486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6492 */	NdrFcShort( 0xa ),	/* 10 */
/* 6494 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6500 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6502 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 6510 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6514 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Return value */

/* 6516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6528 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6536 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 6546 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6550 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 6552 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6556 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Return value */

/* 6558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6570 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6578 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6580 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 6588 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6592 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 6594 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6598 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 6600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call4 */

/* 6606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6612 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6614 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6618 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6620 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6622 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */

/* 6630 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6634 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 6636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6640 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 6642 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6646 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6650 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6652 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6656 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call3 */

/* 6660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6666 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6668 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6672 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6674 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6676 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6680 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */

/* 6684 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6688 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 6690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6692 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6694 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6698 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6700 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6704 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call2 */

/* 6708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6716 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6720 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6722 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 6732 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6736 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter media */

/* 6738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6742 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 6744 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6748 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6750 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6752 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6754 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6758 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call1 */

/* 6762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6768 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6770 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6774 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6776 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6778 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 6786 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6790 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter media */

/* 6792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6794 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6796 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6798 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6802 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6806 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSessionTimer */

/* 6810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6816 */	NdrFcShort( 0xa ),	/* 10 */
/* 6818 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6822 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6824 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6826 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeout */

/* 6834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refresher */

/* 6840 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6844 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6850 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set100rel */

/* 6858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6864 */	NdrFcShort( 0xb ),	/* 11 */
/* 6866 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6868 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6870 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6872 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6874 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 6882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6886 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6888 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6892 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcp */

/* 6900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6906 */	NdrFcShort( 0xc ),	/* 12 */
/* 6908 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6910 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6912 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 6924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6928 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6934 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcpMux */

/* 6942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6948 */	NdrFcShort( 0xd ),	/* 13 */
/* 6950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6952 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6954 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6956 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6958 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 6966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6970 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6972 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6976 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setICE */

/* 6984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6990 */	NdrFcShort( 0xe ),	/* 14 */
/* 6992 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6994 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6996 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 7008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7012 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7014 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7018 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setQoS */

/* 7026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7032 */	NdrFcShort( 0xf ),	/* 15 */
/* 7034 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7036 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7038 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7040 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 7042 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 7050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7054 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strength */

/* 7056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7060 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7066 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7070 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold2 */

/* 7074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7080 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7086 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7088 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7090 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 7098 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7102 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7108 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure resume2 */

/* 7116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7122 */	NdrFcShort( 0x12 ),	/* 18 */
/* 7124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7128 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7130 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7132 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 7140 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7144 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7146 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7150 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */


	/* Procedure resume1 */

/* 7158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7164 */	NdrFcShort( 0x13 ),	/* 19 */
/* 7166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7170 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7186 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 7188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer2 */

/* 7194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7200 */	NdrFcShort( 0x14 ),	/* 20 */
/* 7202 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7206 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7208 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7210 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter referToUriString */

/* 7218 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7222 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 7224 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7228 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7230 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7234 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7238 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer1 */

/* 7242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7248 */	NdrFcShort( 0x15 ),	/* 21 */
/* 7250 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7254 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7256 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7258 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7262 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter referToUriString */

/* 7266 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7270 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7276 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer2 */

/* 7284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7290 */	NdrFcShort( 0x16 ),	/* 22 */
/* 7292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7296 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7298 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7300 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 7308 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7312 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7314 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7318 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7322 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer1 */

/* 7326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7332 */	NdrFcShort( 0x17 ),	/* 23 */
/* 7334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7338 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7342 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7354 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer2 */

/* 7362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7368 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7370 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7374 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7376 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7378 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 7386 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7390 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7396 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer1 */

/* 7404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7410 */	NdrFcShort( 0x19 ),	/* 25 */
/* 7412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7416 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7418 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7420 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7428 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7432 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendDTMF */

/* 7440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7446 */	NdrFcShort( 0x1a ),	/* 26 */
/* 7448 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7452 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter number */

/* 7464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7474 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSessionTransferId */

/* 7482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7488 */	NdrFcShort( 0x1b ),	/* 27 */
/* 7490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7494 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7496 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7498 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7506 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data2 */

/* 7518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7524 */	NdrFcShort( 0x1c ),	/* 28 */
/* 7526 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7530 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7532 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7534 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter data_type */

/* 7542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7546 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter data */

/* 7548 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7552 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7554 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7558 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7562 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data1 */

/* 7566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7572 */	NdrFcShort( 0x1d ),	/* 29 */
/* 7574 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7578 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7580 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7582 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter data_type */

/* 7590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7594 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7596 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7598 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7600 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setT140Callback */

/* 7608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7614 */	NdrFcShort( 0x1e ),	/* 30 */
/* 7616 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7620 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7622 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7624 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pT140Callback */

/* 7632 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7636 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */

	/* Parameter __returnValue */

/* 7638 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7642 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7656 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7664 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7666 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 7674 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7678 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 7680 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7682 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7684 */	NdrFcShort( 0x1ae ),	/* Type Offset=430 */

	/* Return value */

/* 7686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCallback */

/* 7692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7698 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7700 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7704 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7706 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7708 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCallback */

/* 7716 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7720 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Parameter __returnValue */

/* 7722 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7726 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp4 */

/* 7734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7740 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7742 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7746 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7748 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7750 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7754 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */

/* 7758 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7762 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 7764 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7768 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 7770 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7774 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7778 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp2 */

/* 7782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7788 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7790 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7794 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7796 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7798 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 7806 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7810 */	NdrFcShort( 0x1e8 ),	/* Type Offset=488 */

	/* Parameter config */

/* 7812 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7814 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7816 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 7818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7822 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7826 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp1 */

/* 7830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7836 */	NdrFcShort( 0xa ),	/* 10 */
/* 7838 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7842 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7844 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7846 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 7854 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7858 */	NdrFcShort( 0x1e8 ),	/* Type Offset=488 */

	/* Parameter __returnValue */

/* 7860 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7864 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7868 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage2 */

/* 7872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7878 */	NdrFcShort( 0xb ),	/* 11 */
/* 7880 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7884 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7886 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7888 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */

/* 7896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7900 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 7902 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7906 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 7908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7912 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7916 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7926 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7928 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7934 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 7944 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7948 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Parameter pCallback */

/* 7950 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7954 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Parameter __returnValue */

/* 7956 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7960 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Return value */

/* 7962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7964 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure publish2 */


	/* Procedure send2 */


	/* Procedure send2 */

/* 7968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7974 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7976 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7980 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7982 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7984 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */

/* 7992 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7996 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 7998 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8002 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8004 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8008 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 8010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8012 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister1 */


	/* Procedure unPublish1 */


	/* Procedure accept1 */


	/* Procedure accept1 */


	/* Procedure accept1 */

/* 8016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8022 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8028 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8030 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8040 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8044 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 8046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept2 */


	/* Procedure reject2 */


	/* Procedure reject2 */


	/* Procedure reject2 */

/* 8052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8058 */	NdrFcShort( 0xa ),	/* 10 */
/* 8060 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8064 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8066 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8068 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 8076 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8078 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8080 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8082 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8084 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8086 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 8088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8090 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8100 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8102 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8108 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8110 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8118 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8120 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8122 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8124 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8126 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8128 */	NdrFcShort( 0x20c ),	/* Type Offset=524 */

	/* Return value */

/* 8130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8132 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8142 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8144 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8150 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8152 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8160 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8164 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8166 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8168 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8170 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Return value */

/* 8172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8174 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8184 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8186 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8192 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8194 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8202 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8204 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8206 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8208 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8210 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8212 */	NdrFcShort( 0x238 ),	/* Type Offset=568 */

	/* Return value */

/* 8214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8216 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8226 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8228 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8234 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8236 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8244 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8246 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8248 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8250 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8252 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8254 */	NdrFcShort( 0x24e ),	/* Type Offset=590 */

	/* Return value */

/* 8256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8258 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject2 */

/* 8262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8268 */	NdrFcShort( 0xc ),	/* 12 */
/* 8270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8274 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8276 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8278 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 8286 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8290 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8292 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8296 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8300 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8310 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8312 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8318 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8320 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8328 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8330 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8332 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8334 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8336 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8338 */	NdrFcShort( 0x264 ),	/* Type Offset=612 */

	/* Return value */

/* 8340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8342 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8352 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8354 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8360 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8362 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8370 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8374 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8376 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8378 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8380 */	NdrFcShort( 0x27a ),	/* Type Offset=634 */

	/* Return value */

/* 8382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDialogEvent */

/* 8388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8394 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8396 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8400 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8402 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8404 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8412 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8414 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8416 */	NdrFcShort( 0x290 ),	/* Type Offset=656 */

	/* Parameter __returnValue */

/* 8418 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8420 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8424 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8426 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackEvent */

/* 8430 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8436 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8438 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8442 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8444 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8446 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8454 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8456 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8458 */	NdrFcShort( 0x2a2 ),	/* Type Offset=674 */

	/* Parameter __returnValue */

/* 8460 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8462 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInviteEvent */

/* 8472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8480 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8484 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8486 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8488 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8496 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8500 */	NdrFcShort( 0x2b4 ),	/* Type Offset=692 */

	/* Parameter __returnValue */

/* 8502 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8504 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnMessagingEvent */

/* 8514 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8520 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8522 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8526 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8528 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8530 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8538 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8542 */	NdrFcShort( 0x2c6 ),	/* Type Offset=710 */

	/* Parameter __returnValue */

/* 8544 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8552 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInfoEvent */

/* 8556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8562 */	NdrFcShort( 0xa ),	/* 10 */
/* 8564 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8568 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8570 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8572 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8580 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8584 */	NdrFcShort( 0x2d8 ),	/* Type Offset=728 */

	/* Parameter __returnValue */

/* 8586 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8594 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnOptionsEvent */

/* 8598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8604 */	NdrFcShort( 0xb ),	/* 11 */
/* 8606 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8610 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8612 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8614 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8622 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8624 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8626 */	NdrFcShort( 0x2ea ),	/* Type Offset=746 */

	/* Parameter __returnValue */

/* 8628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8630 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPublicationEvent */

/* 8640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8646 */	NdrFcShort( 0xc ),	/* 12 */
/* 8648 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8652 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8654 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8656 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8664 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8668 */	NdrFcShort( 0x2fc ),	/* Type Offset=764 */

	/* Parameter __returnValue */

/* 8670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8678 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnRegistrationEvent */

/* 8682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8688 */	NdrFcShort( 0xd ),	/* 13 */
/* 8690 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8694 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8696 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8698 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8706 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8710 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter __returnValue */

/* 8712 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnSubscriptionEvent */

/* 8724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8730 */	NdrFcShort( 0xe ),	/* 14 */
/* 8732 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8736 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8738 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8740 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8748 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8750 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8752 */	NdrFcShort( 0x320 ),	/* Type Offset=800 */

	/* Parameter __returnValue */

/* 8754 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8756 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8762 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getBaseSession */

/* 8766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8780 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8782 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8790 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8792 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8794 */	NdrFcShort( 0x332 ),	/* Type Offset=818 */

	/* Return value */

/* 8796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8798 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipMessage */

/* 8802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8808 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8816 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8818 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8826 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8830 */	NdrFcShort( 0x348 ),	/* Type Offset=840 */

	/* Return value */

/* 8832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RegistrationState */


	/* Procedure get_State */


	/* Procedure getRequestType */


	/* Procedure getMediaType */

/* 8838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8844 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8846 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8850 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8852 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8854 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8862 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8866 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 8868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8870 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8888 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8890 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8898 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8902 */	NdrFcShort( 0x35e ),	/* Type Offset=862 */

	/* Return value */

/* 8904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeCallSessionOwnership */

/* 8910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8916 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8918 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8924 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8926 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8934 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8938 */	NdrFcShort( 0x374 ),	/* Type Offset=884 */

	/* Return value */

/* 8940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8942 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeMsrpSessionOwnership */

/* 8946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8952 */	NdrFcShort( 0xa ),	/* 10 */
/* 8954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8960 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8962 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8970 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8972 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8974 */	NdrFcShort( 0x38a ),	/* Type Offset=906 */

	/* Return value */

/* 8976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8978 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8988 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8990 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8996 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8998 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9006 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9010 */	NdrFcShort( 0x3a0 ),	/* Type Offset=928 */

	/* Return value */

/* 9012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9032 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9034 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9042 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9046 */	NdrFcShort( 0x3a0 ),	/* Type Offset=928 */

	/* Return value */

/* 9048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9050 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 9054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9060 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9062 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9068 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9070 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9078 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9082 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 9084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9098 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9104 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9106 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9114 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9118 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 9120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9122 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 9126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9132 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9140 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9142 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9150 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9154 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 9156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9176 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9178 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9186 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9190 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 9192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 9198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9204 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9212 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9214 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9222 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9226 */	NdrFcShort( 0x3e2 ),	/* Type Offset=994 */

	/* Return value */

/* 9228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9248 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9250 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9258 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9262 */	NdrFcShort( 0x3e2 ),	/* Type Offset=994 */

	/* Return value */

/* 9264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 9270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9276 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9284 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9286 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9294 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9298 */	NdrFcShort( 0x3f8 ),	/* Type Offset=1016 */

	/* Return value */

/* 9300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9302 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9320 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9330 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9334 */	NdrFcShort( 0x3f8 ),	/* Type Offset=1016 */

	/* Return value */

/* 9336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 9342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9348 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9356 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9366 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9370 */	NdrFcShort( 0x40e ),	/* Type Offset=1038 */

	/* Return value */

/* 9372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9386 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9392 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9402 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9406 */	NdrFcShort( 0x40e ),	/* Type Offset=1038 */

	/* Return value */

/* 9408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9410 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue2 */

/* 9414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9420 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9422 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9428 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9430 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 9438 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9442 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 9444 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9448 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 9450 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9456 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9458 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9460 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9464 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue1 */

/* 9468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9474 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9476 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9482 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9484 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9488 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 9492 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9496 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 9498 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9502 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9504 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9508 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9512 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderAValue */

/* 9516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9524 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9530 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9532 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 9540 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9544 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter attributeName */

/* 9546 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9550 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9552 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9556 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9560 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getResponseCode */

/* 9564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9576 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9578 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9580 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9592 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue2 */

/* 9600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9606 */	NdrFcShort( 0xa ),	/* 10 */
/* 9608 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9614 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9616 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 9624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9628 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 9630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9636 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9640 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue1 */

/* 9648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9654 */	NdrFcShort( 0xb ),	/* 11 */
/* 9656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9662 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9664 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 9672 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9676 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9678 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9682 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue2 */

/* 9690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9696 */	NdrFcShort( 0xc ),	/* 12 */
/* 9698 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9704 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9706 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 9714 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9718 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 9720 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9724 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 9726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9732 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9736 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9740 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue1 */

/* 9744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9750 */	NdrFcShort( 0xd ),	/* 13 */
/* 9752 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9758 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9760 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 9768 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9772 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 9774 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9778 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9780 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9782 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9784 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContentLength */

/* 9792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9798 */	NdrFcShort( 0xe ),	/* 14 */
/* 9800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9804 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9806 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9808 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContent */

/* 9828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9834 */	NdrFcShort( 0xf ),	/* 15 */
/* 9836 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9842 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9844 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9852 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9856 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9860 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpMessage */

/* 9864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9870 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9872 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9878 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9888 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9892 */	NdrFcShort( 0x424 ),	/* Type Offset=1060 */

	/* Return value */

/* 9894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */

/* 9900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9906 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 9924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoPeriodicKeepAlive */


	/* Procedure Stop */

/* 9930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9936 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9944 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9946 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 9954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackStateChanged */


	/* Procedure OnDebugMessage */

/* 9960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9966 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9968 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9974 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9976 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9980 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newState */


	/* Parameter level */

/* 9984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9986 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9988 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter message */

/* 9990 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9992 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9994 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 9996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9998 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAudioRoutingChanged */

/* 10002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10008 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10016 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10018 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newRoute */

/* 10026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10030 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10034 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAVCallStateChanged */


	/* Procedure OnRegistrationStateChanged */

/* 10038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10044 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10046 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10048 */	NdrFcShort( 0xe ),	/* 14 */
/* 10050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10052 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10054 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newState */


	/* Parameter newState */

/* 10062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10066 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter sipCode */


	/* Parameter sipCode */

/* 10068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10072 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter description */

/* 10074 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10078 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 10080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnHoldStateChanged */

/* 10086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10092 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10100 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10102 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newState */

/* 10110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10112 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10114 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10118 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DisplayName */

/* 10122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10128 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10136 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10138 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10146 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10150 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DisplayName */

/* 10158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10164 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10172 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10174 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10178 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10182 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10186 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RealmUri */

/* 10194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10200 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10202 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10208 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10210 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10218 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10222 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpiString */

/* 10230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10236 */	NdrFcShort( 0xb ),	/* 11 */
/* 10238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10244 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10246 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10254 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10258 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10262 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpuUri */

/* 10266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10272 */	NdrFcShort( 0xd ),	/* 13 */
/* 10274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10280 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10282 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10290 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10292 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10294 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Password */

/* 10302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10308 */	NdrFcShort( 0xe ),	/* 14 */
/* 10310 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10316 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10318 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10326 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10330 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Password */

/* 10338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10344 */	NdrFcShort( 0xf ),	/* 15 */
/* 10346 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10352 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10354 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10362 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10366 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyHost */

/* 10374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10380 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10388 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10390 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10398 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10400 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10402 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10406 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyHost */

/* 10410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10416 */	NdrFcShort( 0x11 ),	/* 17 */
/* 10418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10424 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10426 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10430 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10434 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10438 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10442 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyPort */

/* 10446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10452 */	NdrFcShort( 0x12 ),	/* 18 */
/* 10454 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10458 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10460 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10462 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10472 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10474 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10478 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyPort */

/* 10482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10488 */	NdrFcShort( 0x13 ),	/* 19 */
/* 10490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10492 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10496 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10498 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10510 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EarlyIMS */

/* 10518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10524 */	NdrFcShort( 0x14 ),	/* 20 */
/* 10526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10530 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10532 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10534 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10542 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10546 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EarlyIMS */

/* 10554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10560 */	NdrFcShort( 0x15 ),	/* 21 */
/* 10562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10564 */	NdrFcShort( 0x5 ),	/* 5 */
/* 10566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10570 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10582 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Transport */

/* 10590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10596 */	NdrFcShort( 0x16 ),	/* 22 */
/* 10598 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10602 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10604 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10606 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10614 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10616 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10618 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10622 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Transport */

/* 10626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10632 */	NdrFcShort( 0x17 ),	/* 23 */
/* 10634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10640 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10642 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10652 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10654 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10658 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IPVersion */

/* 10662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10668 */	NdrFcShort( 0x18 ),	/* 24 */
/* 10670 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10674 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10676 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10678 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10686 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10690 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10694 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IPVersion */

/* 10698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10704 */	NdrFcShort( 0x19 ),	/* 25 */
/* 10706 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10712 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10714 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10722 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10726 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PushNotificationUri */

/* 10734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10740 */	NdrFcShort( 0x1a ),	/* 26 */
/* 10742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10748 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10750 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10758 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10762 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PushNotificationUri */

/* 10770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10776 */	NdrFcShort( 0x1b ),	/* 27 */
/* 10778 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10784 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10786 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10794 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10798 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UserAgent */

/* 10806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10812 */	NdrFcShort( 0x1c ),	/* 28 */
/* 10814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10820 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10822 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10830 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10832 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10834 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_UserAgent */

/* 10842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10848 */	NdrFcShort( 0x1d ),	/* 29 */
/* 10850 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10856 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10858 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10866 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10868 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10870 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10874 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UriRemote */

/* 10878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10884 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10886 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10892 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10894 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10902 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10904 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10906 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Return value */

/* 10908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Accept */

/* 10914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10920 */	NdrFcShort( 0xa ),	/* 10 */
/* 10922 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10926 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10928 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10930 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 10938 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10940 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10942 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 10944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10946 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10948 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10952 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HangUp */

/* 10956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10962 */	NdrFcShort( 0xb ),	/* 11 */
/* 10964 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10968 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10970 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 10980 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10984 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 10986 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10990 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10994 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Hold */

/* 10998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11004 */	NdrFcShort( 0xc ),	/* 12 */
/* 11006 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11010 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11012 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11014 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 11022 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11024 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11026 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 11028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11030 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11032 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */

/* 11040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11046 */	NdrFcShort( 0xd ),	/* 13 */
/* 11048 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11052 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11054 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11056 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 11064 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11068 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 11070 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11074 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipConfig */

/* 11082 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11088 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11090 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11096 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11098 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11106 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11108 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11110 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Return value */

/* 11112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11114 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipActiveAVCall */

/* 11118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11134 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11142 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11144 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11146 */	NdrFcShort( 0x454 ),	/* Type Offset=1108 */

	/* Return value */

/* 11148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11150 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AudioRoute */

/* 11154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11160 */	NdrFcShort( 0xa ),	/* 10 */
/* 11162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11166 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11168 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11178 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11182 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AudioRoute */

/* 11190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11196 */	NdrFcShort( 0xb ),	/* 11 */
/* 11198 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11206 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newRoute */

/* 11214 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11218 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11222 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CameraLocation */

/* 11226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11232 */	NdrFcShort( 0xc ),	/* 12 */
/* 11234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11238 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11250 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11254 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CameraLocation */

/* 11262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11268 */	NdrFcShort( 0xd ),	/* 13 */
/* 11270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11276 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11278 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newLocation */

/* 11286 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11290 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDebugMessageListener */

/* 11298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11304 */	NdrFcShort( 0xe ),	/* 14 */
/* 11306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11312 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11314 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 11322 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11326 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 11328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAudioStateChangedListener */

/* 11334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11340 */	NdrFcShort( 0xf ),	/* 15 */
/* 11342 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11348 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11350 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 11358 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11362 */	NdrFcShort( 0x47c ),	/* Type Offset=1148 */

	/* Return value */

/* 11364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipRegistrationStateChangedListener */

/* 11370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11376 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11384 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11386 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 11394 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11398 */	NdrFcShort( 0x48e ),	/* Type Offset=1166 */

	/* Return value */

/* 11400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11402 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipStackStateChangedListener */

/* 11406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11412 */	NdrFcShort( 0x11 ),	/* 17 */
/* 11414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11420 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11422 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 11430 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11434 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Return value */

/* 11436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipAVCallStateChangedListener */

/* 11442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11448 */	NdrFcShort( 0x12 ),	/* 18 */
/* 11450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11456 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11458 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 11466 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11468 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11470 */	NdrFcShort( 0x4b2 ),	/* Type Offset=1202 */

	/* Return value */

/* 11472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11474 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Register */

/* 11478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11484 */	NdrFcShort( 0x15 ),	/* 21 */
/* 11486 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11490 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11492 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11494 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11502 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11504 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11506 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11510 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudio */

/* 11514 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11520 */	NdrFcShort( 0x17 ),	/* 23 */
/* 11522 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11528 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11530 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTo */

/* 11538 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11540 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11542 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter pConfig */

/* 11544 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11546 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11548 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 11550 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11552 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11554 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 11556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11558 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudioVideo */

/* 11562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11568 */	NdrFcShort( 0x18 ),	/* 24 */
/* 11570 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11576 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11578 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTo */

/* 11586 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11588 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11590 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter pConfig */

/* 11592 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11594 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11596 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 11598 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11602 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 11604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11606 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCodecs */

/* 11610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11616 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11618 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11622 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11624 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11626 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codecs */

/* 11634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11636 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11638 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11640 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11642 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11644 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartServer */

/* 11652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11658 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11660 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11666 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11668 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __outOfProcServerClassNamesSize */

/* 11676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outOfProcServerClassNames */

/* 11682 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 11684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11686 */	NdrFcShort( 0x4de ),	/* Type Offset=1246 */

	/* Return value */

/* 11688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11690 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VideoRenderer */

/* 11694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11702 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11708 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11710 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11718 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11722 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 11724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_VideoRenderer */

/* 11730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11736 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11744 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11746 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 11754 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11758 */	NdrFcShort( 0x4f8 ),	/* Type Offset=1272 */

	/* Return value */

/* 11760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11762 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipService */

/* 11766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11772 */	NdrFcShort( 0xa ),	/* 10 */
/* 11774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11780 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11782 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11790 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11792 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11794 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Return value */

/* 11796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11798 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_VideoFrameReceived */

/* 11802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11808 */	NdrFcShort( 0xb ),	/* 11 */
/* 11810 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11814 */	NdrFcShort( 0x34 ),	/* 52 */
/* 11816 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11818 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 11826 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11830 */	NdrFcShort( 0x520 ),	/* Type Offset=1312 */

	/* Parameter __returnValue */

/* 11832 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 11834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11836 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Return value */

/* 11838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_VideoFrameReceived */

/* 11844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11850 */	NdrFcShort( 0xc ),	/* 12 */
/* 11852 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11854 */	NdrFcShort( 0x18 ),	/* 24 */
/* 11856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11858 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11860 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 11868 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 11870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11872 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Return value */

/* 11874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11876 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUiDisconnectedEventName */

/* 11880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11886 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11888 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11894 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 11896 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter backgroundProcessId */

/* 11904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11910 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11914 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11918 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBackgroundProcessReadyEventName */

/* 11922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11930 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11936 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 11938 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter backgroundProcessId */

/* 11946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11948 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11952 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11954 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11956 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Instance */

/* 11964 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11970 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11972 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11978 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11980 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11988 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11992 */	NdrFcShort( 0x53c ),	/* Type Offset=1340 */

	/* Return value */

/* 11994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11998 */	0x8,		/* FC_LONG */
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
/* 1252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
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
    48,
    96,
    138,
    180,
    228,
    282
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
    336,
    378,
    420,
    462
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
    504,
    540,
    576,
    612,
    648,
    684,
    720
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
    756,
    810,
    858,
    912,
    966,
    1020,
    1074,
    1116
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
    336,
    1158,
    1200,
    1236,
    1278,
    1320,
    1362,
    1404,
    1440,
    1482,
    1524,
    1560,
    1602,
    1638,
    1680,
    1716,
    1758,
    1794,
    1836,
    1872,
    1914,
    1950,
    1992,
    2028,
    2076,
    2124,
    2172,
    2214,
    2256,
    2298,
    2334,
    2382,
    2424,
    2460,
    2502,
    2538,
    2580,
    2616,
    2658,
    2694,
    2736,
    2778,
    2814,
    2856,
    2892,
    2934,
    2970,
    3012,
    3048
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
    3096,
    3132,
    3168
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
    3204,
    3240,
    576,
    3276,
    3312,
    3348,
    3384,
    3420,
    3456,
    3498,
    3546,
    3582
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
    504,
    3624,
    3660
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
    3696
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
    3738,
    540
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
    3204,
    3774,
    3816,
    3858,
    3900,
    3942,
    3984,
    4026,
    4068,
    4110,
    4170,
    4218,
    4260,
    4308,
    4350,
    4392,
    4440,
    4482,
    4524,
    4566,
    4614,
    4674,
    4716,
    4758,
    4806,
    4854,
    4896,
    4956,
    5010,
    5052,
    5112,
    5166,
    5214,
    5256,
    5298,
    5340,
    2580,
    5376
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
    3204,
    5412,
    5448,
    5484,
    5532
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
    3204,
    540,
    576,
    5574,
    5610,
    5646,
    5682,
    5718,
    5760
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
    5796,
    5844
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
    5886
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
    5928
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
    5928
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
    5970
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
    6012,
    5412,
    6048,
    3858,
    6096,
    3942,
    1362,
    6144,
    6186,
    1482,
    6228,
    6270
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
    6306,
    6348,
    6390,
    6432,
    6486
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
    6522
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
    6564
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
    6606,
    6660,
    6708,
    6762,
    6810,
    6858,
    6900,
    6942,
    6984,
    7026,
    7074,
    6270,
    7116,
    7158,
    7194,
    7242,
    7284,
    7326,
    7362,
    7404,
    7440,
    7482,
    7518,
    7566,
    7608
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
    7650
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
    7692,
    7734,
    3816,
    7782,
    7830,
    7872,
    3984
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
    7920
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
    7968,
    96,
    6390,
    8016,
    8052,
    3348
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
    8094
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
    7968,
    96,
    6390,
    8016,
    8052,
    3348
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
    8136
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
    6306,
    5412,
    6390,
    8016,
    8052,
    3348
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
    8178
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
    7968,
    96,
    6390,
    8016
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
    8220
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
    6306,
    5412,
    6390,
    8016,
    8052,
    3348,
    8262,
    3420
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
    8304
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
    3204,
    5412
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
    8346
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
    8388,
    8430,
    8472,
    8514,
    8556,
    8598,
    8640,
    8682,
    8724
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
    3738,
    540,
    8766,
    8802
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
    504,
    8838,
    8874,
    8910,
    8946
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
    504,
    8982,
    9018
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
    504,
    9054,
    9090
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
    504,
    9126,
    9162
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
    504,
    9198,
    9234
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
    504,
    9270,
    9306
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
    504,
    9342,
    9378
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
    9414,
    9468,
    9516
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
    3204,
    8838,
    9564,
    612,
    9600,
    9648,
    9690,
    9744,
    9792,
    9828,
    9864
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
    9900,
    9930
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
    9960
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
    10002
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
    10038
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
    10038,
    10086
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
    9960
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
    10122,
    10158,
    576,
    10194,
    5610,
    10230,
    5682,
    10266,
    10302,
    10338,
    10374,
    10410,
    10446,
    10482,
    10518,
    10554,
    10590,
    10626,
    10662,
    10698,
    10734,
    10770,
    10806,
    10842
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
    3204,
    8838,
    1200,
    10878,
    10914,
    10956,
    10998,
    11040,
    1440
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
    11082,
    8838,
    11118,
    3276,
    11154,
    11190,
    11226,
    11262,
    11298,
    11334,
    11370,
    11406,
    11442,
    7158,
    4350,
    11478,
    1758,
    11514,
    11562
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
    11610
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
    11652,
    9930,
    11694,
    11730,
    11766,
    11802,
    11844
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
    6012,
    11880,
    11922,
    11964
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
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

