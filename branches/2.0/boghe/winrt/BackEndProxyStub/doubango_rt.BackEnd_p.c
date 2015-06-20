

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sat Jun 20 21:05:29 2015
 */
/* Compiler settings for C:\Users\mamadou\AppData\Local\Temp\doubango_rt.BackEnd.idl-8a44d5f3:
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

#define TYPE_FORMAT_STRING_SIZE   1359                              
#define PROC_FORMAT_STRING_SIZE   10945                             
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

	/* Procedure get_Start */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1166 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1186 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_End */

/* 1194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1202 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1208 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1210 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1218 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1222 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1224 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Total */

/* 1230 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1244 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1246 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1254 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1258 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1262 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WithVideo */


	/* Procedure isResponse */


	/* Procedure subscribe */


	/* Procedure isValid_ */


	/* Procedure initialize */


	/* Procedure start */


	/* Procedure isRequest */

/* 1266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1280 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1282 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1290 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1292 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1294 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */

/* 1302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1310 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1318 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1330 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AvailableAudioRoutes */


	/* Procedure getRequestType */

/* 1338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1346 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1352 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1354 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1362 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1366 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getByteRange */

/* 1374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0xa ),	/* 10 */
/* 1382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1388 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1390 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1398 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1400 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1402 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 1404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1406 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure isLastChunck */

/* 1410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0xb ),	/* 11 */
/* 1418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1424 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1426 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1438 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1442 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isFirstChunck */

/* 1446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0xc ),	/* 12 */
/* 1454 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1460 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1462 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1472 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1474 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1478 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject1 */


	/* Procedure isSuccessReport */

/* 1482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0xd ),	/* 13 */
/* 1490 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1496 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1498 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1506 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1510 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderValue */

/* 1518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0xe ),	/* 14 */
/* 1526 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1532 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1534 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1538 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 1542 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1546 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 1548 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1552 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 1554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderParamValue */

/* 1560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0xf ),	/* 15 */
/* 1568 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1574 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1576 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1580 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 1584 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1588 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 1590 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1594 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 1596 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1598 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1600 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 1602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1604 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContentLength */

/* 1608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1616 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1620 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1622 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1624 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContent */

/* 1644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1650 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1652 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1658 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1660 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1662 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxsize */

/* 1668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1674 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1678 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 1680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1682 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipSession */

/* 1686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1694 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1700 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1702 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1710 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1714 */	NdrFcShort( 0xa0 ),	/* Type Offset=160 */

	/* Return value */

/* 1716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1718 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMessage */

/* 1722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1736 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1738 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1746 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1750 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */

	/* Return value */

/* 1752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnEvent */

/* 1758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1766 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1772 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1774 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEvent */

/* 1782 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1786 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Parameter __returnValue */

/* 1788 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1796 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */


	/* Procedure get_Port */

/* 1800 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1814 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1816 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1824 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1826 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1828 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1832 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDebugCallback */

/* 1836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1844 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1850 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1852 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCallback */

/* 1860 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1864 */	NdrFcShort( 0xde ),	/* Type Offset=222 */

	/* Parameter __returnValue */

/* 1866 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1870 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp3 */


	/* Procedure setDisplayName */

/* 1878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1886 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1892 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1894 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */


	/* Parameter display_name */

/* 1902 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1904 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1906 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1912 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */


	/* Procedure setRealm */

/* 1920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1926 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1928 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1934 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1936 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */


	/* Parameter realm_uri */

/* 1944 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1948 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1950 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1954 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIMPI */

/* 1962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0xa ),	/* 10 */
/* 1970 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1976 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1978 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1982 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter impi */

/* 1986 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1990 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 1992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1996 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeCaps */


	/* Procedure setIMPU */

/* 2004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0xb ),	/* 11 */
/* 2012 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2018 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2020 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2024 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */


	/* Parameter impu_uri */

/* 2028 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2032 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2034 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2036 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2038 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage1 */


	/* Procedure setPassword */

/* 2046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0xc ),	/* 12 */
/* 2054 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2060 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2062 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2068 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */


	/* Parameter password */

/* 2070 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2074 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2078 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2080 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAMF */

/* 2088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0xd ),	/* 13 */
/* 2096 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2102 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2104 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2108 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter amf */

/* 2112 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2116 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2118 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2122 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setOperatorId */

/* 2130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0xe ),	/* 14 */
/* 2138 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2144 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2146 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter opid */

/* 2154 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2158 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2160 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2164 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setProxyCSCF */

/* 2172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0xf ),	/* 15 */
/* 2180 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2182 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2184 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2186 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2188 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fqdn */

/* 2196 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2200 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 2202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2206 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 2208 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2212 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ipversion */

/* 2214 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2216 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2218 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2220 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2222 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2224 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2228 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP2 */

/* 2232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2240 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2246 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2248 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 2256 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2260 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter transport */

/* 2262 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2266 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2272 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2276 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP1 */

/* 2280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2288 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2294 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2296 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 2304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2308 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2310 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2314 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort2 */

/* 2322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2330 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2332 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2334 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2336 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2338 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter port */

/* 2346 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2348 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2350 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 2352 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2354 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2356 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2358 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2360 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2362 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2366 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort1 */

/* 2370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2378 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2380 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2382 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2384 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2386 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter port */

/* 2394 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2398 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2400 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2402 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2404 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2408 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stop */


	/* Procedure setEarlyIMS */

/* 2412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2420 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2422 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2424 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bEnteringBackground */


	/* Parameter enabled */

/* 2436 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2440 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2442 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2446 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 2454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2462 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2468 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2470 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2478 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2482 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 2484 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2488 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2490 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2494 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2498 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */

/* 2502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2510 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2516 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2518 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 2526 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2530 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2532 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2534 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2536 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2540 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addDnsServer */

/* 2544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2552 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2558 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2560 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 2568 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2572 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2574 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2578 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDnsDiscovery */

/* 2586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2594 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2596 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2598 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2600 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2602 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2610 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2614 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2616 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2618 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2620 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAoR */

/* 2628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2634 */	NdrFcShort( 0x19 ),	/* 25 */
/* 2636 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2640 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2642 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2644 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 2652 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2656 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 2658 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2664 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2668 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2672 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSigCompParams */

/* 2676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x1a ),	/* 26 */
/* 2684 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2686 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2688 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2690 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 2692 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dms */

/* 2700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sms */

/* 2706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cpb */

/* 2712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2714 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter enablePresDict */

/* 2718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2722 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2724 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2726 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2728 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2732 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 2736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x1b ),	/* 27 */
/* 2744 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2752 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter compId */

/* 2760 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2764 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

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

	/* Procedure removeSigCompCompartment */

/* 2778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2786 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2790 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2792 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2794 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter compId */

/* 2802 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2804 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2806 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2808 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2810 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2812 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2816 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNServer */

/* 2820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2828 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2830 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2832 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2836 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 2844 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2846 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2848 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 2850 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2852 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2854 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2856 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2858 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2860 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2864 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNCred */

/* 2868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2876 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2882 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2884 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter login */

/* 2892 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2894 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2896 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter password */

/* 2898 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2900 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2902 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2904 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2906 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2908 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2912 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setTLSSecAgree */

/* 2916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x1f ),	/* 31 */
/* 2924 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2926 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2928 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2930 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2932 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2944 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2946 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2950 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates2 */

/* 2958 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2966 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2968 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2970 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2972 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2974 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2978 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter privKey */

/* 2982 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2984 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2986 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 2988 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2990 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2992 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 2994 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2996 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2998 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter verify */

/* 3000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3002 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3004 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3006 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3008 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3010 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3014 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates1 */

/* 3018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3026 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3032 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3034 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter privKey */

/* 3042 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3046 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 3048 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3050 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3052 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 3054 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3058 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3060 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3062 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3064 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3068 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecSecAgree */

/* 3072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3080 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3082 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3084 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3086 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3088 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 3096 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3098 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3100 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3106 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecParameters */

/* 3114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3120 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3122 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3130 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter algo */

/* 3138 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3142 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ealgo */

/* 3144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3148 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter mode */

/* 3150 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3154 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter proto */

/* 3156 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3160 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3164 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3166 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3170 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsENUM */

/* 3174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3182 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3188 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3190 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter service */

/* 3198 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3202 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter e164num */

/* 3204 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3208 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter domain */

/* 3210 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3214 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3216 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3218 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3220 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsNaptrSrv */

/* 3228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x25 ),	/* 37 */
/* 3236 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3242 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3244 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter domain */

/* 3252 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3256 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter service */

/* 3258 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3262 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3264 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3268 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Return value */

/* 3270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsSrv */

/* 3276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3290 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3292 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter service */

/* 3300 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3304 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3306 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3310 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Return value */

/* 3312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalIP */

/* 3318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x27 ),	/* 39 */
/* 3326 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3332 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3334 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter protocol */

/* 3342 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3346 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3348 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3352 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalPort */

/* 3360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3368 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3374 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3376 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3380 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter protocol */

/* 3384 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3388 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3390 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3394 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPreferredIdentity */

/* 3402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x29 ),	/* 41 */
/* 3410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3416 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3418 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3420 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3426 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3430 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isValid */

/* 3438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3450 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3452 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3454 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3462 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3466 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stop */

/* 3474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x2b ),	/* 43 */
/* 3482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3488 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3490 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3502 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unSubscribe */


	/* Procedure register_1 */


	/* Procedure send1 */


	/* Procedure haveOwnership */


	/* Procedure deInitialize */

/* 3510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3518 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3524 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3526 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3534 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3538 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecs */

/* 3546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3560 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3562 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codecs */

/* 3570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3574 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 3576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3578 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecPriority */

/* 3582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3588 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3590 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3592 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3594 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3596 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3598 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codec_id */

/* 3606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3608 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3610 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter priority */

/* 3612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3614 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3618 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3622 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3626 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isCodecSupported */

/* 3630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0xa ),	/* 10 */
/* 3638 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3642 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3644 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3646 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codec_id */

/* 3654 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3658 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3660 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3664 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3668 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPort */

/* 3672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3678 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3686 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3700 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpiString */


	/* Procedure getUserName */

/* 3708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0xa ),	/* 10 */
/* 3716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3722 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3724 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3732 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3736 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 3738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPassword */

/* 3744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0xb ),	/* 11 */
/* 3752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3758 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3760 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3768 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3772 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpuUri */


	/* Procedure getDisplayName */

/* 3780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0xc ),	/* 12 */
/* 3788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3794 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3796 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3804 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3808 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 3810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getParamValue */

/* 3816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3822 */	NdrFcShort( 0xd ),	/* 13 */
/* 3824 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3830 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3832 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3834 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3840 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3844 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3846 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3850 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3854 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDisplayName */

/* 3858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3864 */	NdrFcShort( 0xe ),	/* 14 */
/* 3866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3872 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3874 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter displayName */

/* 3882 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3886 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 3888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance2 */

/* 3894 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3900 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3902 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3908 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3910 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3914 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uriString */

/* 3918 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3922 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter displayName */

/* 3924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3926 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3928 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3930 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3932 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3934 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Return value */

/* 3936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3938 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 3942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3956 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3958 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uriString */

/* 3966 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3970 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3972 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3976 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Return value */

/* 3978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isValid */

/* 3984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3990 */	NdrFcShort( 0x6 ),	/* 6 */
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

	/* Parameter uri */

/* 4008 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4012 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4014 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4018 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ondata */


	/* Procedure ondata */

/* 4026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4032 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4034 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4038 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4040 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4042 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */


	/* Parameter pData */

/* 4050 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4054 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 4068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4074 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4082 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4084 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pI */

/* 4092 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4096 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Parameter __returnValue */

/* 4098 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4102 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Return value */

/* 4104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentProcessId */


	/* Procedure getId */

/* 4110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4116 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4124 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4126 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4134 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 4146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4154 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4160 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4162 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 4170 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4174 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 4176 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4180 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4186 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4190 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addCaps */

/* 4194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4200 */	NdrFcShort( 0xa ),	/* 10 */
/* 4202 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4208 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4210 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 4218 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4222 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 4224 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4228 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4230 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4234 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4238 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setExpires */

/* 4242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4248 */	NdrFcShort( 0xc ),	/* 12 */
/* 4250 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4254 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4256 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4258 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter expires */

/* 4266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4276 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setFromUri */

/* 4284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4290 */	NdrFcShort( 0xd ),	/* 13 */
/* 4292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4298 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4300 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fromUri */

/* 4308 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4312 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter __returnValue */

/* 4314 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4318 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4322 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setToUri */

/* 4326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4332 */	NdrFcShort( 0xe ),	/* 14 */
/* 4334 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4340 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4342 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter toUri */

/* 4350 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4354 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter __returnValue */

/* 4356 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4358 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4360 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSilentHangup */

/* 4368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4374 */	NdrFcShort( 0xf ),	/* 15 */
/* 4376 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4378 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4380 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4382 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4384 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter silent */

/* 4392 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4396 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4398 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4402 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4406 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 4410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4416 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4418 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4422 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4424 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4426 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4430 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter compId */

/* 4434 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4438 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4442 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4444 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold1 */


	/* Procedure removeSigCompCompartment */

/* 4452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4464 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4466 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4468 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4476 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4480 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure register_2 */


	/* Procedure send2 */


	/* Procedure accept */

/* 4488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4494 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4496 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4502 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 4512 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4516 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4518 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4522 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 4524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hangup */

/* 4530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4538 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4542 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4544 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4546 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 4554 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4556 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4558 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 4560 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4562 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4564 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister2 */


	/* Procedure unPublish2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure reject */

/* 4572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4580 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4584 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4586 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4588 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 4596 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4600 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4602 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4606 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 4608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendInfo */

/* 4614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4620 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4622 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4626 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4628 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4630 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4634 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */

/* 4638 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4642 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter len */

/* 4644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4646 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter config */

/* 4650 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4654 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 4656 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4660 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4664 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMediaMgr */

/* 4668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4674 */	NdrFcShort( 0xa ),	/* 10 */
/* 4676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4682 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4684 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 4692 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4696 */	NdrFcShort( 0x156 ),	/* Type Offset=342 */

	/* Return value */

/* 4698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 4704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4710 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4712 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4718 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4720 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 4728 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4732 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 4734 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4738 */	NdrFcShort( 0x17e ),	/* Type Offset=382 */

	/* Return value */

/* 4740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4742 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 4746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4752 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4754 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4760 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4762 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 4770 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4774 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 4776 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4780 */	NdrFcShort( 0x194 ),	/* Type Offset=404 */

	/* Return value */

/* 4782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call4 */

/* 4788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4796 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4800 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4802 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4804 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */

/* 4812 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4816 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 4818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4822 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 4824 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4828 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 4830 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4832 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4834 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4838 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call3 */

/* 4842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4848 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4850 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4854 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4856 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4858 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */

/* 4866 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4868 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4870 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 4872 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4874 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4876 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4878 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4882 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4886 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call2 */

/* 4890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4898 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4902 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4904 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4906 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 4914 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4918 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter media */

/* 4920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4924 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 4926 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4930 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 4932 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4934 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4936 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4940 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call1 */

/* 4944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4950 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4952 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4956 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4958 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4960 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 4968 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4972 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter media */

/* 4974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4978 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4984 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4988 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSessionTimer */

/* 4992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4998 */	NdrFcShort( 0xa ),	/* 10 */
/* 5000 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5004 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5008 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeout */

/* 5016 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refresher */

/* 5022 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5026 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5032 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5036 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set100rel */

/* 5040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0xb ),	/* 11 */
/* 5048 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5050 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5052 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5054 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5056 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 5064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5068 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5070 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5074 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcp */

/* 5082 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5088 */	NdrFcShort( 0xc ),	/* 12 */
/* 5090 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5092 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5094 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5096 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5098 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 5106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5108 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5110 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5114 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5116 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcpMux */

/* 5124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5130 */	NdrFcShort( 0xd ),	/* 13 */
/* 5132 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5134 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5136 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5138 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5140 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 5148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5152 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5154 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5158 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5162 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setICE */

/* 5166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5172 */	NdrFcShort( 0xe ),	/* 14 */
/* 5174 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5176 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5178 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5182 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 5190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5194 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5196 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5200 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setQoS */

/* 5208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5214 */	NdrFcShort( 0xf ),	/* 15 */
/* 5216 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5218 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5220 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 5224 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 5232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5236 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strength */

/* 5238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5240 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5242 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5246 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5248 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5252 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold2 */

/* 5256 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5262 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5264 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5270 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5272 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 5280 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5284 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 5286 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5290 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5294 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure resume2 */

/* 5298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0x12 ),	/* 18 */
/* 5306 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5310 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5312 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5314 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 5322 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5326 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 5328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5332 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */


	/* Procedure resume1 */

/* 5340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5346 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5352 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5356 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5364 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5368 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer2 */

/* 5376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5382 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5384 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5390 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5392 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter referToUriString */

/* 5400 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5404 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 5406 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5410 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 5412 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5414 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5416 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5420 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer1 */

/* 5424 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5430 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5432 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5436 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5438 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5440 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter referToUriString */

/* 5448 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5452 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5454 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5458 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer2 */

/* 5466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5472 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5474 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5478 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5480 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5482 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 5490 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5492 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5494 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 5496 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5498 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5500 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer1 */

/* 5508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5514 */	NdrFcShort( 0x17 ),	/* 23 */
/* 5516 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5520 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5522 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5524 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5532 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5536 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5540 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer2 */

/* 5544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5550 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5552 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5556 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5558 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5560 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 5568 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5572 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 5574 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5578 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer1 */

/* 5586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5592 */	NdrFcShort( 0x19 ),	/* 25 */
/* 5594 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5598 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5600 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5602 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5610 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5614 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5618 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendDTMF */

/* 5622 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5628 */	NdrFcShort( 0x1a ),	/* 26 */
/* 5630 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5634 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5636 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5638 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter number */

/* 5646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5654 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5656 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5660 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSessionTransferId */

/* 5664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5670 */	NdrFcShort( 0x1b ),	/* 27 */
/* 5672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5676 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5678 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5680 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5688 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5696 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data2 */

/* 5700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5706 */	NdrFcShort( 0x1c ),	/* 28 */
/* 5708 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5712 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5714 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5716 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter data_type */

/* 5724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5726 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5728 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter data */

/* 5730 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5734 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5736 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5740 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5744 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data1 */

/* 5748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5754 */	NdrFcShort( 0x1d ),	/* 29 */
/* 5756 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5760 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5762 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5764 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter data_type */

/* 5772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5776 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5778 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5782 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5786 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setT140Callback */

/* 5790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5796 */	NdrFcShort( 0x1e ),	/* 30 */
/* 5798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5802 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5804 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5806 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pT140Callback */

/* 5814 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5818 */	NdrFcShort( 0x144 ),	/* Type Offset=324 */

	/* Parameter __returnValue */

/* 5820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5824 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 5832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5838 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5840 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5846 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5848 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 5856 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5860 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 5862 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5866 */	NdrFcShort( 0x1aa ),	/* Type Offset=426 */

	/* Return value */

/* 5868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5870 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCallback */

/* 5874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5880 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5882 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5886 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5888 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5890 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCallback */

/* 5898 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5902 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter __returnValue */

/* 5904 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5908 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp4 */

/* 5916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5922 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5924 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5928 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5930 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5932 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5936 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */

/* 5940 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5944 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 5946 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5950 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 5952 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5954 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5956 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5960 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp2 */

/* 5964 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5970 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5972 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5976 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5978 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5980 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 5988 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5992 */	NdrFcShort( 0x1e4 ),	/* Type Offset=484 */

	/* Parameter config */

/* 5994 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5996 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5998 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 6000 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6002 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6004 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6008 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp1 */

/* 6012 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6018 */	NdrFcShort( 0xa ),	/* 10 */
/* 6020 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6024 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6026 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6028 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 6036 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6040 */	NdrFcShort( 0x1e4 ),	/* Type Offset=484 */

	/* Parameter __returnValue */

/* 6042 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6046 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage2 */

/* 6054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6060 */	NdrFcShort( 0xb ),	/* 11 */
/* 6062 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6066 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6068 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6070 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6074 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */

/* 6078 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6082 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 6084 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6088 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 6090 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6094 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6098 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6108 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6110 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6116 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6118 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 6126 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6130 */	NdrFcShort( 0x1f6 ),	/* Type Offset=502 */

	/* Parameter pCallback */

/* 6132 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6136 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter __returnValue */

/* 6138 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6142 */	NdrFcShort( 0xa0 ),	/* Type Offset=160 */

	/* Return value */

/* 6144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure publish2 */


	/* Procedure send2 */


	/* Procedure send2 */

/* 6150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6156 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6162 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6164 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6166 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */

/* 6174 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6178 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 6180 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6184 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6190 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 6192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister1 */


	/* Procedure unPublish1 */


	/* Procedure accept1 */


	/* Procedure accept1 */


	/* Procedure accept1 */

/* 6198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6204 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6210 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6212 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6214 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6226 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept2 */


	/* Procedure reject2 */


	/* Procedure reject2 */


	/* Procedure reject2 */

/* 6234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6240 */	NdrFcShort( 0xa ),	/* 10 */
/* 6242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6246 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6250 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 6258 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6262 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6268 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6282 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6290 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 6300 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6304 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 6306 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6310 */	NdrFcShort( 0x208 ),	/* Type Offset=520 */

	/* Return value */

/* 6312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6324 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6326 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6332 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6334 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 6342 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6346 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 6348 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6352 */	NdrFcShort( 0x21e ),	/* Type Offset=542 */

	/* Return value */

/* 6354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6366 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6368 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6374 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6376 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 6384 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6386 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6388 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 6390 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6392 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6394 */	NdrFcShort( 0x234 ),	/* Type Offset=564 */

	/* Return value */

/* 6396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6408 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6410 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6416 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6418 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 6426 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6428 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6430 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 6432 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6434 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6436 */	NdrFcShort( 0x24a ),	/* Type Offset=586 */

	/* Return value */

/* 6438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6440 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject2 */

/* 6444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6450 */	NdrFcShort( 0xc ),	/* 12 */
/* 6452 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6456 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6458 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6460 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 6468 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6472 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6478 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6492 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6500 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6502 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 6510 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6514 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 6516 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6520 */	NdrFcShort( 0x260 ),	/* Type Offset=608 */

	/* Return value */

/* 6522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6534 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6536 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6542 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 6552 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6556 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 6558 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6562 */	NdrFcShort( 0x276 ),	/* Type Offset=630 */

	/* Return value */

/* 6564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDialogEvent */

/* 6570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6576 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6582 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6584 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 6594 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6598 */	NdrFcShort( 0x28c ),	/* Type Offset=652 */

	/* Parameter __returnValue */

/* 6600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackEvent */

/* 6612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6618 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6620 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6624 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6626 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 6636 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6640 */	NdrFcShort( 0x29e ),	/* Type Offset=670 */

	/* Parameter __returnValue */

/* 6642 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInviteEvent */

/* 6654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6666 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6668 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6670 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 6678 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6682 */	NdrFcShort( 0x2b0 ),	/* Type Offset=688 */

	/* Parameter __returnValue */

/* 6684 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnMessagingEvent */

/* 6696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6702 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6704 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6708 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6712 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 6720 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6724 */	NdrFcShort( 0x2c2 ),	/* Type Offset=706 */

	/* Parameter __returnValue */

/* 6726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInfoEvent */

/* 6738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6744 */	NdrFcShort( 0xa ),	/* 10 */
/* 6746 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6750 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6752 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6754 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 6762 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6766 */	NdrFcShort( 0x2d4 ),	/* Type Offset=724 */

	/* Parameter __returnValue */

/* 6768 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnOptionsEvent */

/* 6780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6786 */	NdrFcShort( 0xb ),	/* 11 */
/* 6788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6792 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6794 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6796 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 6804 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6808 */	NdrFcShort( 0x2e6 ),	/* Type Offset=742 */

	/* Parameter __returnValue */

/* 6810 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPublicationEvent */

/* 6822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6828 */	NdrFcShort( 0xc ),	/* 12 */
/* 6830 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6834 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6836 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6838 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 6846 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6850 */	NdrFcShort( 0x2f8 ),	/* Type Offset=760 */

	/* Parameter __returnValue */

/* 6852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnRegistrationEvent */

/* 6864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6870 */	NdrFcShort( 0xd ),	/* 13 */
/* 6872 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6876 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6878 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 6888 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6892 */	NdrFcShort( 0x30a ),	/* Type Offset=778 */

	/* Parameter __returnValue */

/* 6894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6902 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnSubscriptionEvent */

/* 6906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6912 */	NdrFcShort( 0xe ),	/* 14 */
/* 6914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6918 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6920 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 6930 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6934 */	NdrFcShort( 0x31c ),	/* Type Offset=796 */

	/* Parameter __returnValue */

/* 6936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getBaseSession */

/* 6948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6962 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 6972 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6976 */	NdrFcShort( 0x32e ),	/* Type Offset=814 */

	/* Return value */

/* 6978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipMessage */

/* 6984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6990 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6998 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7008 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7012 */	NdrFcShort( 0x344 ),	/* Type Offset=836 */

	/* Return value */

/* 7014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RegistrationState */


	/* Procedure get_State */


	/* Procedure getRequestType */


	/* Procedure getMediaType */

/* 7020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7026 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7032 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7034 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7036 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7044 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7048 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 7056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7070 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7080 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7084 */	NdrFcShort( 0x35a ),	/* Type Offset=858 */

	/* Return value */

/* 7086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeCallSessionOwnership */

/* 7092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7098 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7106 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7116 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7120 */	NdrFcShort( 0x370 ),	/* Type Offset=880 */

	/* Return value */

/* 7122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeMsrpSessionOwnership */

/* 7128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7134 */	NdrFcShort( 0xa ),	/* 10 */
/* 7136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7142 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7144 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7152 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7156 */	NdrFcShort( 0x386 ),	/* Type Offset=902 */

	/* Return value */

/* 7158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 7164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7170 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7178 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7180 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7188 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7192 */	NdrFcShort( 0x39c ),	/* Type Offset=924 */

	/* Return value */

/* 7194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 7200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7214 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7216 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7224 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7228 */	NdrFcShort( 0x39c ),	/* Type Offset=924 */

	/* Return value */

/* 7230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 7236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7242 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7250 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7252 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7260 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7264 */	NdrFcShort( 0x3b2 ),	/* Type Offset=946 */

	/* Return value */

/* 7266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 7272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7286 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7288 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7296 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7300 */	NdrFcShort( 0x3b2 ),	/* Type Offset=946 */

	/* Return value */

/* 7302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 7308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7314 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7322 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7332 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7336 */	NdrFcShort( 0x3c8 ),	/* Type Offset=968 */

	/* Return value */

/* 7338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 7344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7358 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7368 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7372 */	NdrFcShort( 0x3c8 ),	/* Type Offset=968 */

	/* Return value */

/* 7374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 7380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7386 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7394 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7404 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7408 */	NdrFcShort( 0x3de ),	/* Type Offset=990 */

	/* Return value */

/* 7410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 7416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7430 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7432 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7440 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7444 */	NdrFcShort( 0x3de ),	/* Type Offset=990 */

	/* Return value */

/* 7446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 7452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7458 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7466 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7468 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7476 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7480 */	NdrFcShort( 0x3f4 ),	/* Type Offset=1012 */

	/* Return value */

/* 7482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 7488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7502 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7512 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7516 */	NdrFcShort( 0x3f4 ),	/* Type Offset=1012 */

	/* Return value */

/* 7518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 7524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7530 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7538 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7548 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7552 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Return value */

/* 7554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 7560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7574 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7584 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7588 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Return value */

/* 7590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue2 */

/* 7596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7602 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7604 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7610 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7612 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 7620 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7624 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 7626 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7630 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 7632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7638 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7640 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7642 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 7644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7646 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue1 */

/* 7650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7656 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7658 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7664 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7666 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 7674 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7678 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 7680 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7682 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7684 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7686 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7690 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 7692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7694 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderAValue */

/* 7698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7706 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7712 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7714 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7718 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 7722 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7726 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter attributeName */

/* 7728 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7732 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7734 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7738 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 7740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7742 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getResponseCode */

/* 7746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7754 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7758 */	NdrFcShort( 0x22 ),	/* 34 */
/* 7760 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7762 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7770 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7774 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue2 */

/* 7782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7788 */	NdrFcShort( 0xa ),	/* 10 */
/* 7790 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7796 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7798 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7800 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7806 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7810 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 7812 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7814 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7818 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7822 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 7824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7826 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue1 */

/* 7830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7836 */	NdrFcShort( 0xb ),	/* 11 */
/* 7838 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7844 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7846 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7854 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7858 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7860 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7864 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 7866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7868 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue2 */

/* 7872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7878 */	NdrFcShort( 0xc ),	/* 12 */
/* 7880 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7886 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7888 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7900 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 7902 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7906 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 7908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7914 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7916 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7918 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 7920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7922 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue1 */

/* 7926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7932 */	NdrFcShort( 0xd ),	/* 13 */
/* 7934 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7940 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7942 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7944 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 7950 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7954 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 7956 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7960 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7962 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7966 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 7968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7970 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContentLength */

/* 7974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7980 */	NdrFcShort( 0xe ),	/* 14 */
/* 7982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7986 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7988 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7990 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7998 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8000 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8006 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContent */

/* 8010 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8016 */	NdrFcShort( 0xf ),	/* 15 */
/* 8018 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8024 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8026 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8028 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8034 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8036 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8038 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 8040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8042 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpMessage */

/* 8046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8052 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8060 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8062 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8068 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8070 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8074 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 8076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8078 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */

/* 8082 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8088 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8090 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8096 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8098 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8108 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoPeriodicKeepAlive */


	/* Procedure Stop */

/* 8112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8118 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8128 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 8136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackStateChanged */


	/* Procedure OnDebugMessage */

/* 8142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8148 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8150 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8156 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8158 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newState */


	/* Parameter level */

/* 8166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8170 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter message */

/* 8172 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8176 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 8178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAudioRoutingChanged */

/* 8184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8190 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8200 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newRoute */

/* 8208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8212 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 8214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAVCallStateChanged */


	/* Procedure OnRegistrationStateChanged */

/* 8220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8226 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8228 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8230 */	NdrFcShort( 0xe ),	/* 14 */
/* 8232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8234 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8236 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newState */


	/* Parameter newState */

/* 8244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8246 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8248 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter sipCode */


	/* Parameter sipCode */

/* 8250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8252 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8254 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter description */

/* 8256 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8258 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8260 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 8262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8264 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnHoldStateChanged */

/* 8268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8274 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8276 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8282 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newState */

/* 8292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8296 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 8298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DisplayName */

/* 8304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8310 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8318 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8320 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8322 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8328 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8330 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8332 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 8334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8336 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DisplayName */

/* 8340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8346 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8354 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8356 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8360 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8364 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8368 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 8370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RealmUri */

/* 8376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8382 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8390 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8392 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8400 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8404 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 8406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpiString */

/* 8412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8418 */	NdrFcShort( 0xb ),	/* 11 */
/* 8420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8426 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8428 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8436 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8440 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 8442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpuUri */

/* 8448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8454 */	NdrFcShort( 0xd ),	/* 13 */
/* 8456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8462 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8464 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8472 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8476 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 8478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Password */

/* 8484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8490 */	NdrFcShort( 0xe ),	/* 14 */
/* 8492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8498 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8500 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8502 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8508 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8512 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 8514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Password */

/* 8520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8526 */	NdrFcShort( 0xf ),	/* 15 */
/* 8528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8534 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8536 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8540 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8544 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8548 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 8550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyHost */

/* 8556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8562 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8570 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8572 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8580 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8584 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 8586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyHost */

/* 8592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8598 */	NdrFcShort( 0x11 ),	/* 17 */
/* 8600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8606 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8608 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8612 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8616 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8618 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8620 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 8622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyPort */

/* 8628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8634 */	NdrFcShort( 0x12 ),	/* 18 */
/* 8636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8640 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8642 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8644 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8656 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyPort */

/* 8664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8670 */	NdrFcShort( 0x13 ),	/* 19 */
/* 8672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8674 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8678 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8680 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8688 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8692 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8696 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EarlyIMS */

/* 8700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8706 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8712 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8714 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8716 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8724 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8726 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8728 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EarlyIMS */

/* 8736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8742 */	NdrFcShort( 0x15 ),	/* 21 */
/* 8744 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8746 */	NdrFcShort( 0x5 ),	/* 5 */
/* 8748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8750 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8752 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8764 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Transport */

/* 8772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8778 */	NdrFcShort( 0x16 ),	/* 22 */
/* 8780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8784 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8786 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8796 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8800 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 8802 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Transport */

/* 8808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8814 */	NdrFcShort( 0x17 ),	/* 23 */
/* 8816 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8822 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8824 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8832 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8836 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 8838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8840 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IPVersion */

/* 8844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8850 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8852 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8856 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8858 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8860 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8868 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8872 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 8874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8876 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IPVersion */

/* 8880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8886 */	NdrFcShort( 0x19 ),	/* 25 */
/* 8888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8894 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8896 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8908 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 8910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PushNotificationUri */

/* 8916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8922 */	NdrFcShort( 0x1a ),	/* 26 */
/* 8924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8930 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8932 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8940 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8944 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 8946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PushNotificationUri */

/* 8952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8958 */	NdrFcShort( 0x1b ),	/* 27 */
/* 8960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8966 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8968 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8972 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8976 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8978 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8980 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 8982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8984 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UserAgent */

/* 8988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8994 */	NdrFcShort( 0x1c ),	/* 28 */
/* 8996 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9002 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9004 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9012 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9016 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_UserAgent */

/* 9024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9030 */	NdrFcShort( 0x1d ),	/* 29 */
/* 9032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9038 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9040 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9044 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9048 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9050 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9052 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 9054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9056 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EchoSupp */

/* 9060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9066 */	NdrFcShort( 0x1e ),	/* 30 */
/* 9068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9072 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9074 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9076 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9088 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9092 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EchoSupp */

/* 9096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9102 */	NdrFcShort( 0x1f ),	/* 31 */
/* 9104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9106 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9110 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9124 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EchoTail */

/* 9132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9138 */	NdrFcShort( 0x20 ),	/* 32 */
/* 9140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9144 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EchoTail */

/* 9168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9174 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9182 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EchoSkew */

/* 9204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9210 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9216 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9218 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9228 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EchoSkew */

/* 9240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9246 */	NdrFcShort( 0x23 ),	/* 35 */
/* 9248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9254 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NoiseSupp */

/* 9276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9282 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9288 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9300 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9304 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_NoiseSupp */

/* 9312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9318 */	NdrFcShort( 0x25 ),	/* 37 */
/* 9320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9322 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9340 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vad */

/* 9348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9354 */	NdrFcShort( 0x26 ),	/* 38 */
/* 9356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9360 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9362 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9372 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9376 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Vad */

/* 9384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9390 */	NdrFcShort( 0x27 ),	/* 39 */
/* 9392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9394 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9398 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9408 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9412 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Agc */

/* 9420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9426 */	NdrFcShort( 0x28 ),	/* 40 */
/* 9428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9432 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9448 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Agc */

/* 9456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9462 */	NdrFcShort( 0x29 ),	/* 41 */
/* 9464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9466 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9484 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_JbMaxLateRate */

/* 9492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9498 */	NdrFcShort( 0x2a ),	/* 42 */
/* 9500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9504 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9506 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9508 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9516 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9524 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_JbMaxLateRate */

/* 9528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9534 */	NdrFcShort( 0x2b ),	/* 43 */
/* 9536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Rtcp */

/* 9564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9570 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9576 */	NdrFcShort( 0x21 ),	/* 33 */
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
/* 9592 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Rtcp */

/* 9600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9606 */	NdrFcShort( 0x2d ),	/* 45 */
/* 9608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9610 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9614 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9616 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9628 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RtcpMux */

/* 9636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9642 */	NdrFcShort( 0x2e ),	/* 46 */
/* 9644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9648 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9650 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9652 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9660 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9664 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RtcpMux */

/* 9672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9678 */	NdrFcShort( 0x2f ),	/* 47 */
/* 9680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9682 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9686 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9700 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HoldState */

/* 9708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9716 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9720 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9736 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 9738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UriRemote */

/* 9744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9750 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9758 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9768 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9772 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 9774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Accept */

/* 9780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9786 */	NdrFcShort( 0xa ),	/* 10 */
/* 9788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9792 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9794 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9796 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 9804 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9808 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 9810 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9814 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HangUp */

/* 9822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9828 */	NdrFcShort( 0xb ),	/* 11 */
/* 9830 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9834 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9836 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9838 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 9846 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9850 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 9852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9856 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Hold */

/* 9864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9870 */	NdrFcShort( 0xc ),	/* 12 */
/* 9872 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9876 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9878 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 9888 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9892 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 9894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9898 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9902 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */

/* 9906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9912 */	NdrFcShort( 0xd ),	/* 13 */
/* 9914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9918 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9920 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 9930 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9934 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 9936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9940 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendDTMF */

/* 9948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9954 */	NdrFcShort( 0xe ),	/* 14 */
/* 9956 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9960 */	NdrFcShort( 0x21 ),	/* 33 */
/* 9962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dtmfCode */

/* 9972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9978 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9982 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 9984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipConfig */

/* 9990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9996 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9998 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10004 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10006 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10014 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10018 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Return value */

/* 10020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipActiveAVCall */

/* 10026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10040 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10042 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10050 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10054 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 10056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AudioRoute */

/* 10062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10068 */	NdrFcShort( 0xa ),	/* 10 */
/* 10070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10074 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10076 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10078 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10086 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10090 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10094 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AudioRoute */

/* 10098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10104 */	NdrFcShort( 0xb ),	/* 11 */
/* 10106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10112 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10114 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newRoute */

/* 10122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10126 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CameraLocation */

/* 10134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10140 */	NdrFcShort( 0xc ),	/* 12 */
/* 10142 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10146 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10148 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10150 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10162 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CameraLocation */

/* 10170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10176 */	NdrFcShort( 0xd ),	/* 13 */
/* 10178 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10184 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10186 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newLocation */

/* 10194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10196 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10198 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10202 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDebugMessageListener */

/* 10206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10212 */	NdrFcShort( 0xe ),	/* 14 */
/* 10214 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10220 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10222 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 10230 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10232 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10234 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 10236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10238 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAudioStateChangedListener */

/* 10242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10248 */	NdrFcShort( 0xf ),	/* 15 */
/* 10250 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10256 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10258 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 10266 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10270 */	NdrFcShort( 0x478 ),	/* Type Offset=1144 */

	/* Return value */

/* 10272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipRegistrationStateChangedListener */

/* 10278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10284 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10292 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10294 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 10302 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10304 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10306 */	NdrFcShort( 0x48a ),	/* Type Offset=1162 */

	/* Return value */

/* 10308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10310 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipStackStateChangedListener */

/* 10314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10320 */	NdrFcShort( 0x11 ),	/* 17 */
/* 10322 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10328 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10330 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 10338 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10340 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10342 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Return value */

/* 10344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10346 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipAVCallStateChangedListener */

/* 10350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10356 */	NdrFcShort( 0x12 ),	/* 18 */
/* 10358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10364 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10366 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 10374 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10378 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 10380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10382 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Register */

/* 10386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10392 */	NdrFcShort( 0x15 ),	/* 21 */
/* 10394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10398 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10400 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10402 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10410 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10414 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnRegister */

/* 10422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10428 */	NdrFcShort( 0x16 ),	/* 22 */
/* 10430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10434 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10436 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10438 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10446 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10448 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10450 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10454 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudio */

/* 10458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10464 */	NdrFcShort( 0x17 ),	/* 23 */
/* 10466 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10472 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10474 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTo */

/* 10482 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10486 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter pConfig */

/* 10488 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10490 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10492 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 10494 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10498 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 10500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10502 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudioVideo */

/* 10506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10512 */	NdrFcShort( 0x18 ),	/* 24 */
/* 10514 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10520 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10522 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTo */

/* 10530 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10532 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10534 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter pConfig */

/* 10536 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10538 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10540 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 10542 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10544 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10546 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 10548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10550 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCodecs */

/* 10554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10560 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10562 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10566 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 10570 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codecs */

/* 10578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10582 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10588 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartServer */

/* 10596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10602 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10604 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10610 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10612 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __outOfProcServerClassNamesSize */

/* 10620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outOfProcServerClassNames */

/* 10626 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10630 */	NdrFcShort( 0x4da ),	/* Type Offset=1242 */

	/* Return value */

/* 10632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VideoRenderer */

/* 10638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10652 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10654 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10662 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10664 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10666 */	NdrFcShort( 0x4f0 ),	/* Type Offset=1264 */

	/* Return value */

/* 10668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_VideoRenderer */

/* 10674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10680 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10682 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10688 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10690 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10698 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10700 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10702 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 10704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10706 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipService */

/* 10710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10716 */	NdrFcShort( 0xa ),	/* 10 */
/* 10718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10724 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10726 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10734 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10736 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10738 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Return value */

/* 10740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10742 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_VideoFrameReceived */

/* 10746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10752 */	NdrFcShort( 0xb ),	/* 11 */
/* 10754 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10758 */	NdrFcShort( 0x34 ),	/* 52 */
/* 10760 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10762 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 10770 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10774 */	NdrFcShort( 0x51c ),	/* Type Offset=1308 */

	/* Parameter __returnValue */

/* 10776 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 10778 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10780 */	NdrFcShort( 0x532 ),	/* Type Offset=1330 */

	/* Return value */

/* 10782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_VideoFrameReceived */

/* 10788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10794 */	NdrFcShort( 0xc ),	/* 12 */
/* 10796 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10798 */	NdrFcShort( 0x18 ),	/* 24 */
/* 10800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10804 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 10812 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 10814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10816 */	NdrFcShort( 0x532 ),	/* Type Offset=1330 */

	/* Return value */

/* 10818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUiDisconnectedEventName */

/* 10824 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10830 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10832 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10836 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10838 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 10840 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10846 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter backgroundProcessId */

/* 10848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10850 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10854 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10856 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10858 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10862 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBackgroundProcessReadyEventName */

/* 10866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10874 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10880 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 10882 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter backgroundProcessId */

/* 10890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10896 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10900 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10904 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Instance */

/* 10908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10914 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10922 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10924 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10932 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10936 */	NdrFcShort( 0x538 ),	/* Type Offset=1336 */

	/* Return value */

/* 10938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10942 */	0x8,		/* FC_LONG */
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
/* 136 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (142) */
/* 142 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 144 */	NdrFcLong( 0x72089dc3 ),	/* 1913167299 */
/* 148 */	NdrFcShort( 0x5600 ),	/* 22016 */
/* 150 */	NdrFcShort( 0x3f9e ),	/* 16286 */
/* 152 */	0x89,		/* 137 */
			0xa9,		/* 169 */
/* 154 */	0x35,		/* 53 */
			0xd5,		/* 213 */
/* 156 */	0xe,		/* 14 */
			0x35,		/* 53 */
/* 158 */	0x3,		/* 3 */
			0x48,		/* 72 */
/* 160 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 162 */	NdrFcShort( 0x2 ),	/* Offset= 2 (164) */
/* 164 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 166 */	NdrFcLong( 0x746afeab ),	/* 1953169067 */
/* 170 */	NdrFcShort( 0x72 ),	/* 114 */
/* 172 */	NdrFcShort( 0x38fe ),	/* 14590 */
/* 174 */	0xb1,		/* 177 */
			0xa7,		/* 167 */
/* 176 */	0x21,		/* 33 */
			0x77,		/* 119 */
/* 178 */	0xb,		/* 11 */
			0xe6,		/* 230 */
/* 180 */	0x4a,		/* 74 */
			0x4a,		/* 74 */
/* 182 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (186) */
/* 186 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 188 */	NdrFcLong( 0xb92764bb ),	/* -1188600645 */
/* 192 */	NdrFcShort( 0xf11d ),	/* -3811 */
/* 194 */	NdrFcShort( 0x3bd1 ),	/* 15313 */
/* 196 */	0x8d,		/* 141 */
			0xea,		/* 234 */
/* 198 */	0xb1,		/* 177 */
			0x33,		/* 51 */
/* 200 */	0xce,		/* 206 */
			0x9b,		/* 155 */
/* 202 */	0xf5,		/* 245 */
			0xf7,		/* 247 */
/* 204 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 206 */	NdrFcLong( 0xe4effef8 ),	/* -454033672 */
/* 210 */	NdrFcShort( 0x5c8d ),	/* 23693 */
/* 212 */	NdrFcShort( 0x389a ),	/* 14490 */
/* 214 */	0xbe,		/* 190 */
			0xa7,		/* 167 */
/* 216 */	0x7e,		/* 126 */
			0x14,		/* 20 */
/* 218 */	0xe2,		/* 226 */
			0xa0,		/* 160 */
/* 220 */	0xaa,		/* 170 */
			0x95,		/* 149 */
/* 222 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 224 */	NdrFcLong( 0xea0b2968 ),	/* -368367256 */
/* 228 */	NdrFcShort( 0x7ad4 ),	/* 31444 */
/* 230 */	NdrFcShort( 0x3d5c ),	/* 15708 */
/* 232 */	0xaa,		/* 170 */
			0xd3,		/* 211 */
/* 234 */	0x2a,		/* 42 */
			0xef,		/* 239 */
/* 236 */	0xb3,		/* 179 */
			0xac,		/* 172 */
/* 238 */	0xd2,		/* 210 */
			0xe7,		/* 231 */
/* 240 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (244) */
/* 244 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 246 */	NdrFcLong( 0x944bb133 ),	/* -1806978765 */
/* 250 */	NdrFcShort( 0x86e3 ),	/* -31005 */
/* 252 */	NdrFcShort( 0x3fb3 ),	/* 16307 */
/* 254 */	0xbc,		/* 188 */
			0xf5,		/* 245 */
/* 256 */	0xfd,		/* 253 */
			0x12,		/* 18 */
/* 258 */	0xb6,		/* 182 */
			0x6e,		/* 110 */
/* 260 */	0x3b,		/* 59 */
			0xa6,		/* 166 */
/* 262 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 264 */	NdrFcShort( 0x2 ),	/* Offset= 2 (266) */
/* 266 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 268 */	NdrFcLong( 0x357645ec ),	/* 896943596 */
/* 272 */	NdrFcShort( 0x98bf ),	/* -26433 */
/* 274 */	NdrFcShort( 0x3baf ),	/* 15279 */
/* 276 */	0x8b,		/* 139 */
			0x97,		/* 151 */
/* 278 */	0x33,		/* 51 */
			0x38,		/* 56 */
/* 280 */	0x78,		/* 120 */
			0x33,		/* 51 */
/* 282 */	0x97,		/* 151 */
			0xcb,		/* 203 */
/* 284 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 286 */	NdrFcLong( 0x19f9a6f1 ),	/* 435791601 */
/* 290 */	NdrFcShort( 0xe76c ),	/* -6292 */
/* 292 */	NdrFcShort( 0x321c ),	/* 12828 */
/* 294 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 296 */	0x78,		/* 120 */
			0xdb,		/* 219 */
/* 298 */	0xa8,		/* 168 */
			0xe,		/* 14 */
/* 300 */	0xc2,		/* 194 */
			0x30,		/* 48 */
/* 302 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 304 */	NdrFcLong( 0xfbc56ee2 ),	/* -70947102 */
/* 308 */	NdrFcShort( 0x7375 ),	/* 29557 */
/* 310 */	NdrFcShort( 0x3f53 ),	/* 16211 */
/* 312 */	0x91,		/* 145 */
			0xd3,		/* 211 */
/* 314 */	0x85,		/* 133 */
			0x30,		/* 48 */
/* 316 */	0x79,		/* 121 */
			0x19,		/* 25 */
/* 318 */	0x31,		/* 49 */
			0x84,		/* 132 */
/* 320 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 322 */	NdrFcShort( 0x2 ),	/* Offset= 2 (324) */
/* 324 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 326 */	NdrFcLong( 0x540329e3 ),	/* 1409493475 */
/* 330 */	NdrFcShort( 0x8dd6 ),	/* -29226 */
/* 332 */	NdrFcShort( 0x391c ),	/* 14620 */
/* 334 */	0x9e,		/* 158 */
			0xbd,		/* 189 */
/* 336 */	0x4d,		/* 77 */
			0x73,		/* 115 */
/* 338 */	0x8e,		/* 142 */
			0x1c,		/* 28 */
/* 340 */	0x4,		/* 4 */
			0xf0,		/* 240 */
/* 342 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 344 */	NdrFcShort( 0x2 ),	/* Offset= 2 (346) */
/* 346 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 348 */	NdrFcLong( 0x40d7757 ),	/* 67991383 */
/* 352 */	NdrFcShort( 0x114c ),	/* 4428 */
/* 354 */	NdrFcShort( 0x3581 ),	/* 13697 */
/* 356 */	0x8e,		/* 142 */
			0xf9,		/* 249 */
/* 358 */	0xd6,		/* 214 */
			0x40,		/* 64 */
/* 360 */	0x25,		/* 37 */
			0x6c,		/* 108 */
/* 362 */	0xc,		/* 12 */
			0x14,		/* 20 */
/* 364 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 366 */	NdrFcLong( 0x31ac4c99 ),	/* 833375385 */
/* 370 */	NdrFcShort( 0x4fe9 ),	/* 20457 */
/* 372 */	NdrFcShort( 0x3cce ),	/* 15566 */
/* 374 */	0x89,		/* 137 */
			0xb5,		/* 181 */
/* 376 */	0xc,		/* 12 */
			0x27,		/* 39 */
/* 378 */	0x50,		/* 80 */
			0xcc,		/* 204 */
/* 380 */	0xee,		/* 238 */
			0xa7,		/* 167 */
/* 382 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 384 */	NdrFcShort( 0x2 ),	/* Offset= 2 (386) */
/* 386 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 388 */	NdrFcLong( 0x6acf024c ),	/* 1791951436 */
/* 392 */	NdrFcShort( 0x5fa2 ),	/* 24482 */
/* 394 */	NdrFcShort( 0x3607 ),	/* 13831 */
/* 396 */	0x92,		/* 146 */
			0xb2,		/* 178 */
/* 398 */	0x67,		/* 103 */
			0x74,		/* 116 */
/* 400 */	0x5,		/* 5 */
			0xc7,		/* 199 */
/* 402 */	0x55,		/* 85 */
			0x19,		/* 25 */
/* 404 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 406 */	NdrFcShort( 0x2 ),	/* Offset= 2 (408) */
/* 408 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 410 */	NdrFcLong( 0x266a5021 ),	/* 644501537 */
/* 414 */	NdrFcShort( 0xf4d7 ),	/* -2857 */
/* 416 */	NdrFcShort( 0x3457 ),	/* 13399 */
/* 418 */	0x8c,		/* 140 */
			0x28,		/* 40 */
/* 420 */	0x0,		/* 0 */
			0xc7,		/* 199 */
/* 422 */	0xa3,		/* 163 */
			0x86,		/* 134 */
/* 424 */	0xab,		/* 171 */
			0xde,		/* 222 */
/* 426 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 428 */	NdrFcShort( 0x2 ),	/* Offset= 2 (430) */
/* 430 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 432 */	NdrFcLong( 0x7d605cc9 ),	/* 2103467209 */
/* 436 */	NdrFcShort( 0x6ff4 ),	/* 28660 */
/* 438 */	NdrFcShort( 0x3d58 ),	/* 15704 */
/* 440 */	0x99,		/* 153 */
			0x76,		/* 118 */
/* 442 */	0xf2,		/* 242 */
			0x3c,		/* 60 */
/* 444 */	0x30,		/* 48 */
			0xd4,		/* 212 */
/* 446 */	0xae,		/* 174 */
			0xd5,		/* 213 */
/* 448 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 450 */	NdrFcLong( 0xbd3cc691 ),	/* -1120090479 */
/* 454 */	NdrFcShort( 0xdaaf ),	/* -9553 */
/* 456 */	NdrFcShort( 0x35dd ),	/* 13789 */
/* 458 */	0x9c,		/* 156 */
			0xda,		/* 218 */
/* 460 */	0x24,		/* 36 */
			0x2b,		/* 43 */
/* 462 */	0x70,		/* 112 */
			0xbd,		/* 189 */
/* 464 */	0xf5,		/* 245 */
			0xdc,		/* 220 */
/* 466 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 468 */	NdrFcLong( 0x1ba29f65 ),	/* 463642469 */
/* 472 */	NdrFcShort( 0x9abb ),	/* -25925 */
/* 474 */	NdrFcShort( 0x3024 ),	/* 12324 */
/* 476 */	0x82,		/* 130 */
			0x21,		/* 33 */
/* 478 */	0xa9,		/* 169 */
			0x8c,		/* 140 */
/* 480 */	0xdb,		/* 219 */
			0x0,		/* 0 */
/* 482 */	0x88,		/* 136 */
			0x87,		/* 135 */
/* 484 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 486 */	NdrFcLong( 0x357645ec ),	/* 896943596 */
/* 490 */	NdrFcShort( 0x98bf ),	/* -26433 */
/* 492 */	NdrFcShort( 0x3baf ),	/* 15279 */
/* 494 */	0x8b,		/* 139 */
			0x97,		/* 151 */
/* 496 */	0x33,		/* 51 */
			0x38,		/* 56 */
/* 498 */	0x78,		/* 120 */
			0x33,		/* 51 */
/* 500 */	0x97,		/* 151 */
			0xcb,		/* 203 */
/* 502 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 504 */	NdrFcLong( 0x31ac4c99 ),	/* 833375385 */
/* 508 */	NdrFcShort( 0x4fe9 ),	/* 20457 */
/* 510 */	NdrFcShort( 0x3cce ),	/* 15566 */
/* 512 */	0x89,		/* 137 */
			0xb5,		/* 181 */
/* 514 */	0xc,		/* 12 */
			0x27,		/* 39 */
/* 516 */	0x50,		/* 80 */
			0xcc,		/* 204 */
/* 518 */	0xee,		/* 238 */
			0xa7,		/* 167 */
/* 520 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 522 */	NdrFcShort( 0x2 ),	/* Offset= 2 (524) */
/* 524 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 526 */	NdrFcLong( 0xaaca3593 ),	/* -1429588589 */
/* 530 */	NdrFcShort( 0xcefb ),	/* -12549 */
/* 532 */	NdrFcShort( 0x373e ),	/* 14142 */
/* 534 */	0xa2,		/* 162 */
			0x29,		/* 41 */
/* 536 */	0x85,		/* 133 */
			0x3c,		/* 60 */
/* 538 */	0x78,		/* 120 */
			0xad,		/* 173 */
/* 540 */	0x59,		/* 89 */
			0x21,		/* 33 */
/* 542 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 544 */	NdrFcShort( 0x2 ),	/* Offset= 2 (546) */
/* 546 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 548 */	NdrFcLong( 0x6a30534c ),	/* 1781551948 */
/* 552 */	NdrFcShort( 0x9226 ),	/* -28122 */
/* 554 */	NdrFcShort( 0x3450 ),	/* 13392 */
/* 556 */	0x86,		/* 134 */
			0x1f,		/* 31 */
/* 558 */	0x8d,		/* 141 */
			0x92,		/* 146 */
/* 560 */	0xe2,		/* 226 */
			0x41,		/* 65 */
/* 562 */	0xd6,		/* 214 */
			0x11,		/* 17 */
/* 564 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 566 */	NdrFcShort( 0x2 ),	/* Offset= 2 (568) */
/* 568 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 570 */	NdrFcLong( 0x7aa94f17 ),	/* 2057916183 */
/* 574 */	NdrFcShort( 0xfbeb ),	/* -1045 */
/* 576 */	NdrFcShort( 0x3fac ),	/* 16300 */
/* 578 */	0x92,		/* 146 */
			0xed,		/* 237 */
/* 580 */	0x89,		/* 137 */
			0x8f,		/* 143 */
/* 582 */	0xb9,		/* 185 */
			0xf4,		/* 244 */
/* 584 */	0xed,		/* 237 */
			0xc7,		/* 199 */
/* 586 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 588 */	NdrFcShort( 0x2 ),	/* Offset= 2 (590) */
/* 590 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 592 */	NdrFcLong( 0x8d8bfb47 ),	/* -1920206009 */
/* 596 */	NdrFcShort( 0xbe91 ),	/* -16751 */
/* 598 */	NdrFcShort( 0x3e55 ),	/* 15957 */
/* 600 */	0xad,		/* 173 */
			0x42,		/* 66 */
/* 602 */	0x51,		/* 81 */
			0xa6,		/* 166 */
/* 604 */	0xf8,		/* 248 */
			0xe0,		/* 224 */
/* 606 */	0x19,		/* 25 */
			0xa,		/* 10 */
/* 608 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 610 */	NdrFcShort( 0x2 ),	/* Offset= 2 (612) */
/* 612 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 614 */	NdrFcLong( 0xd34b80f8 ),	/* -750026504 */
/* 618 */	NdrFcShort( 0x410c ),	/* 16652 */
/* 620 */	NdrFcShort( 0x3a42 ),	/* 14914 */
/* 622 */	0xaa,		/* 170 */
			0x6,		/* 6 */
/* 624 */	0x29,		/* 41 */
			0x6e,		/* 110 */
/* 626 */	0xb6,		/* 182 */
			0xa8,		/* 168 */
/* 628 */	0xe2,		/* 226 */
			0xb1,		/* 177 */
/* 630 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 632 */	NdrFcShort( 0x2 ),	/* Offset= 2 (634) */
/* 634 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 636 */	NdrFcLong( 0xe3f89f64 ),	/* -470245532 */
/* 640 */	NdrFcShort( 0xb94a ),	/* -18102 */
/* 642 */	NdrFcShort( 0x368b ),	/* 13963 */
/* 644 */	0x90,		/* 144 */
			0x82,		/* 130 */
/* 646 */	0x93,		/* 147 */
			0xaf,		/* 175 */
/* 648 */	0x84,		/* 132 */
			0xf8,		/* 248 */
/* 650 */	0xbb,		/* 187 */
			0x1f,		/* 31 */
/* 652 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 654 */	NdrFcLong( 0x65780faa ),	/* 1702367146 */
/* 658 */	NdrFcShort( 0x8ebb ),	/* -28997 */
/* 660 */	NdrFcShort( 0x375d ),	/* 14173 */
/* 662 */	0xb0,		/* 176 */
			0x4c,		/* 76 */
/* 664 */	0x47,		/* 71 */
			0x55,		/* 85 */
/* 666 */	0x5d,		/* 93 */
			0xf,		/* 15 */
/* 668 */	0x28,		/* 40 */
			0x45,		/* 69 */
/* 670 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 672 */	NdrFcLong( 0x5fb380dd ),	/* 1605599453 */
/* 676 */	NdrFcShort( 0x95d ),	/* 2397 */
/* 678 */	NdrFcShort( 0x32d4 ),	/* 13012 */
/* 680 */	0xac,		/* 172 */
			0xe4,		/* 228 */
/* 682 */	0x79,		/* 121 */
			0x91,		/* 145 */
/* 684 */	0x51,		/* 81 */
			0x6f,		/* 111 */
/* 686 */	0xd8,		/* 216 */
			0xea,		/* 234 */
/* 688 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 690 */	NdrFcLong( 0x731a866b ),	/* 1931118187 */
/* 694 */	NdrFcShort( 0x4b61 ),	/* 19297 */
/* 696 */	NdrFcShort( 0x3a41 ),	/* 14913 */
/* 698 */	0x9f,		/* 159 */
			0x4b,		/* 75 */
/* 700 */	0xd,		/* 13 */
			0xa7,		/* 167 */
/* 702 */	0x32,		/* 50 */
			0x2f,		/* 47 */
/* 704 */	0x1a,		/* 26 */
			0xa7,		/* 167 */
/* 706 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 708 */	NdrFcLong( 0xd6d6adfb ),	/* -690573829 */
/* 712 */	NdrFcShort( 0x954a ),	/* -27318 */
/* 714 */	NdrFcShort( 0x36f7 ),	/* 14071 */
/* 716 */	0xb3,		/* 179 */
			0x6b,		/* 107 */
/* 718 */	0x51,		/* 81 */
			0xfd,		/* 253 */
/* 720 */	0x40,		/* 64 */
			0x91,		/* 145 */
/* 722 */	0xfe,		/* 254 */
			0xda,		/* 218 */
/* 724 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 726 */	NdrFcLong( 0x3e3607d8 ),	/* 1043728344 */
/* 730 */	NdrFcShort( 0x9ca6 ),	/* -25434 */
/* 732 */	NdrFcShort( 0x3cd2 ),	/* 15570 */
/* 734 */	0x9c,		/* 156 */
			0x82,		/* 130 */
/* 736 */	0x44,		/* 68 */
			0x78,		/* 120 */
/* 738 */	0x58,		/* 88 */
			0xc,		/* 12 */
/* 740 */	0x86,		/* 134 */
			0xd1,		/* 209 */
/* 742 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 744 */	NdrFcLong( 0x1126de2 ),	/* 17984994 */
/* 748 */	NdrFcShort( 0xdb09 ),	/* -9463 */
/* 750 */	NdrFcShort( 0x3456 ),	/* 13398 */
/* 752 */	0x93,		/* 147 */
			0xc8,		/* 200 */
/* 754 */	0x5,		/* 5 */
			0x17,		/* 23 */
/* 756 */	0xc3,		/* 195 */
			0xf9,		/* 249 */
/* 758 */	0x63,		/* 99 */
			0xd5,		/* 213 */
/* 760 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 762 */	NdrFcLong( 0xec75de12 ),	/* -327819758 */
/* 766 */	NdrFcShort( 0xc356 ),	/* -15530 */
/* 768 */	NdrFcShort( 0x33fd ),	/* 13309 */
/* 770 */	0xb8,		/* 184 */
			0xaf,		/* 175 */
/* 772 */	0xae,		/* 174 */
			0x4a,		/* 74 */
/* 774 */	0xb0,		/* 176 */
			0x54,		/* 84 */
/* 776 */	0x14,		/* 20 */
			0xa5,		/* 165 */
/* 778 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 780 */	NdrFcLong( 0x599ee12a ),	/* 1503584554 */
/* 784 */	NdrFcShort( 0x5485 ),	/* 21637 */
/* 786 */	NdrFcShort( 0x3d18 ),	/* 15640 */
/* 788 */	0x9a,		/* 154 */
			0xce,		/* 206 */
/* 790 */	0xf0,		/* 240 */
			0x88,		/* 136 */
/* 792 */	0x5d,		/* 93 */
			0x29,		/* 41 */
/* 794 */	0x45,		/* 69 */
			0x5e,		/* 94 */
/* 796 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 798 */	NdrFcLong( 0x9f4a8862 ),	/* -1622505374 */
/* 802 */	NdrFcShort( 0x8482 ),	/* -31614 */
/* 804 */	NdrFcShort( 0x3083 ),	/* 12419 */
/* 806 */	0xb2,		/* 178 */
			0x4c,		/* 76 */
/* 808 */	0x79,		/* 121 */
			0x67,		/* 103 */
/* 810 */	0x37,		/* 55 */
			0xfd,		/* 253 */
/* 812 */	0xf4,		/* 244 */
			0x2b,		/* 43 */
/* 814 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 816 */	NdrFcShort( 0x2 ),	/* Offset= 2 (818) */
/* 818 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 820 */	NdrFcLong( 0x9bfb53ad ),	/* -1678027859 */
/* 824 */	NdrFcShort( 0xbfc4 ),	/* -16444 */
/* 826 */	NdrFcShort( 0x3784 ),	/* 14212 */
/* 828 */	0x9e,		/* 158 */
			0x6d,		/* 109 */
/* 830 */	0x68,		/* 104 */
			0x39,		/* 57 */
/* 832 */	0xb5,		/* 181 */
			0xe8,		/* 232 */
/* 834 */	0x73,		/* 115 */
			0x20,		/* 32 */
/* 836 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 838 */	NdrFcShort( 0x2 ),	/* Offset= 2 (840) */
/* 840 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 842 */	NdrFcLong( 0xf68542f0 ),	/* -159038736 */
/* 846 */	NdrFcShort( 0xf6c6 ),	/* -2362 */
/* 848 */	NdrFcShort( 0x3de5 ),	/* 15845 */
/* 850 */	0x86,		/* 134 */
			0xfe,		/* 254 */
/* 852 */	0x31,		/* 49 */
			0xe2,		/* 226 */
/* 854 */	0xad,		/* 173 */
			0xd4,		/* 212 */
/* 856 */	0xe4,		/* 228 */
			0x1e,		/* 30 */
/* 858 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 860 */	NdrFcShort( 0x2 ),	/* Offset= 2 (862) */
/* 862 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 864 */	NdrFcLong( 0x266a5021 ),	/* 644501537 */
/* 868 */	NdrFcShort( 0xf4d7 ),	/* -2857 */
/* 870 */	NdrFcShort( 0x3457 ),	/* 13399 */
/* 872 */	0x8c,		/* 140 */
			0x28,		/* 40 */
/* 874 */	0x0,		/* 0 */
			0xc7,		/* 199 */
/* 876 */	0xa3,		/* 163 */
			0x86,		/* 134 */
/* 878 */	0xab,		/* 171 */
			0xde,		/* 222 */
/* 880 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 882 */	NdrFcShort( 0x2 ),	/* Offset= 2 (884) */
/* 884 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 886 */	NdrFcLong( 0x7d605cc9 ),	/* 2103467209 */
/* 890 */	NdrFcShort( 0x6ff4 ),	/* 28660 */
/* 892 */	NdrFcShort( 0x3d58 ),	/* 15704 */
/* 894 */	0x99,		/* 153 */
			0x76,		/* 118 */
/* 896 */	0xf2,		/* 242 */
			0x3c,		/* 60 */
/* 898 */	0x30,		/* 48 */
			0xd4,		/* 212 */
/* 900 */	0xae,		/* 174 */
			0xd5,		/* 213 */
/* 902 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 904 */	NdrFcShort( 0x2 ),	/* Offset= 2 (906) */
/* 906 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 908 */	NdrFcLong( 0x746afeab ),	/* 1953169067 */
/* 912 */	NdrFcShort( 0x72 ),	/* 114 */
/* 914 */	NdrFcShort( 0x38fe ),	/* 14590 */
/* 916 */	0xb1,		/* 177 */
			0xa7,		/* 167 */
/* 918 */	0x21,		/* 33 */
			0x77,		/* 119 */
/* 920 */	0xb,		/* 11 */
			0xe6,		/* 230 */
/* 922 */	0x4a,		/* 74 */
			0x4a,		/* 74 */
/* 924 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 926 */	NdrFcShort( 0x2 ),	/* Offset= 2 (928) */
/* 928 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 930 */	NdrFcLong( 0xaaca3593 ),	/* -1429588589 */
/* 934 */	NdrFcShort( 0xcefb ),	/* -12549 */
/* 936 */	NdrFcShort( 0x373e ),	/* 14142 */
/* 938 */	0xa2,		/* 162 */
			0x29,		/* 41 */
/* 940 */	0x85,		/* 133 */
			0x3c,		/* 60 */
/* 942 */	0x78,		/* 120 */
			0xad,		/* 173 */
/* 944 */	0x59,		/* 89 */
			0x21,		/* 33 */
/* 946 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 948 */	NdrFcShort( 0x2 ),	/* Offset= 2 (950) */
/* 950 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 952 */	NdrFcLong( 0x6a30534c ),	/* 1781551948 */
/* 956 */	NdrFcShort( 0x9226 ),	/* -28122 */
/* 958 */	NdrFcShort( 0x3450 ),	/* 13392 */
/* 960 */	0x86,		/* 134 */
			0x1f,		/* 31 */
/* 962 */	0x8d,		/* 141 */
			0x92,		/* 146 */
/* 964 */	0xe2,		/* 226 */
			0x41,		/* 65 */
/* 966 */	0xd6,		/* 214 */
			0x11,		/* 17 */
/* 968 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 970 */	NdrFcShort( 0x2 ),	/* Offset= 2 (972) */
/* 972 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 974 */	NdrFcLong( 0x7aa94f17 ),	/* 2057916183 */
/* 978 */	NdrFcShort( 0xfbeb ),	/* -1045 */
/* 980 */	NdrFcShort( 0x3fac ),	/* 16300 */
/* 982 */	0x92,		/* 146 */
			0xed,		/* 237 */
/* 984 */	0x89,		/* 137 */
			0x8f,		/* 143 */
/* 986 */	0xb9,		/* 185 */
			0xf4,		/* 244 */
/* 988 */	0xed,		/* 237 */
			0xc7,		/* 199 */
/* 990 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 992 */	NdrFcShort( 0x2 ),	/* Offset= 2 (994) */
/* 994 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 996 */	NdrFcLong( 0x8d8bfb47 ),	/* -1920206009 */
/* 1000 */	NdrFcShort( 0xbe91 ),	/* -16751 */
/* 1002 */	NdrFcShort( 0x3e55 ),	/* 15957 */
/* 1004 */	0xad,		/* 173 */
			0x42,		/* 66 */
/* 1006 */	0x51,		/* 81 */
			0xa6,		/* 166 */
/* 1008 */	0xf8,		/* 248 */
			0xe0,		/* 224 */
/* 1010 */	0x19,		/* 25 */
			0xa,		/* 10 */
/* 1012 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1014 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1016) */
/* 1016 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1018 */	NdrFcLong( 0xd34b80f8 ),	/* -750026504 */
/* 1022 */	NdrFcShort( 0x410c ),	/* 16652 */
/* 1024 */	NdrFcShort( 0x3a42 ),	/* 14914 */
/* 1026 */	0xaa,		/* 170 */
			0x6,		/* 6 */
/* 1028 */	0x29,		/* 41 */
			0x6e,		/* 110 */
/* 1030 */	0xb6,		/* 182 */
			0xa8,		/* 168 */
/* 1032 */	0xe2,		/* 226 */
			0xb1,		/* 177 */
/* 1034 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1036 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1038) */
/* 1038 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1040 */	NdrFcLong( 0xe3f89f64 ),	/* -470245532 */
/* 1044 */	NdrFcShort( 0xb94a ),	/* -18102 */
/* 1046 */	NdrFcShort( 0x368b ),	/* 13963 */
/* 1048 */	0x90,		/* 144 */
			0x82,		/* 130 */
/* 1050 */	0x93,		/* 147 */
			0xaf,		/* 175 */
/* 1052 */	0x84,		/* 132 */
			0xf8,		/* 248 */
/* 1054 */	0xbb,		/* 187 */
			0x1f,		/* 31 */
/* 1056 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1058 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1060) */
/* 1060 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1062 */	NdrFcLong( 0x6d43145f ),	/* 1833112671 */
/* 1066 */	NdrFcShort( 0xfc50 ),	/* -944 */
/* 1068 */	NdrFcShort( 0x3fd7 ),	/* 16343 */
/* 1070 */	0x9d,		/* 157 */
			0x1f,		/* 31 */
/* 1072 */	0xbc,		/* 188 */
			0x47,		/* 71 */
/* 1074 */	0x89,		/* 137 */
			0xaa,		/* 170 */
/* 1076 */	0x9c,		/* 156 */
			0xed,		/* 237 */
/* 1078 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1080 */	NdrFcShort( 0xfdac ),	/* Offset= -596 (484) */
/* 1082 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1084 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1086) */
/* 1086 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1088 */	NdrFcLong( 0x4868ddc4 ),	/* 1214832068 */
/* 1092 */	NdrFcShort( 0x3353 ),	/* 13139 */
/* 1094 */	NdrFcShort( 0x3344 ),	/* 13124 */
/* 1096 */	0x84,		/* 132 */
			0x2d,		/* 45 */
/* 1098 */	0xeb,		/* 235 */
			0x96,		/* 150 */
/* 1100 */	0xac,		/* 172 */
			0x83,		/* 131 */
/* 1102 */	0x71,		/* 113 */
			0xb9,		/* 185 */
/* 1104 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1108) */
/* 1108 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1110 */	NdrFcLong( 0x5fc37d6 ),	/* 100415446 */
/* 1114 */	NdrFcShort( 0xff7f ),	/* -129 */
/* 1116 */	NdrFcShort( 0x3d9f ),	/* 15775 */
/* 1118 */	0xa6,		/* 166 */
			0xfd,		/* 253 */
/* 1120 */	0x77,		/* 119 */
			0x5d,		/* 93 */
/* 1122 */	0xd1,		/* 209 */
			0x43,		/* 67 */
/* 1124 */	0x72,		/* 114 */
			0xad,		/* 173 */
/* 1126 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1128 */	NdrFcLong( 0x3f230803 ),	/* 1059260419 */
/* 1132 */	NdrFcShort( 0xd28d ),	/* -11635 */
/* 1134 */	NdrFcShort( 0x3153 ),	/* 12627 */
/* 1136 */	0xa0,		/* 160 */
			0x7c,		/* 124 */
/* 1138 */	0x7f,		/* 127 */
			0x9f,		/* 159 */
/* 1140 */	0xd9,		/* 217 */
			0xc9,		/* 201 */
/* 1142 */	0x1e,		/* 30 */
			0x43,		/* 67 */
/* 1144 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1146 */	NdrFcLong( 0x19bab5b7 ),	/* 431666615 */
/* 1150 */	NdrFcShort( 0xa2fc ),	/* -23812 */
/* 1152 */	NdrFcShort( 0x3714 ),	/* 14100 */
/* 1154 */	0x9a,		/* 154 */
			0x50,		/* 80 */
/* 1156 */	0x91,		/* 145 */
			0x33,		/* 51 */
/* 1158 */	0x51,		/* 81 */
			0x61,		/* 97 */
/* 1160 */	0x6b,		/* 107 */
			0xaa,		/* 170 */
/* 1162 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1164 */	NdrFcLong( 0xbeef9a82 ),	/* -1091593598 */
/* 1168 */	NdrFcShort( 0x3e32 ),	/* 15922 */
/* 1170 */	NdrFcShort( 0x3adb ),	/* 15067 */
/* 1172 */	0xa7,		/* 167 */
			0x50,		/* 80 */
/* 1174 */	0x9,		/* 9 */
			0xc0,		/* 192 */
/* 1176 */	0x20,		/* 32 */
			0xb2,		/* 178 */
/* 1178 */	0x51,		/* 81 */
			0x94,		/* 148 */
/* 1180 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1182 */	NdrFcLong( 0xeb16f8ec ),	/* -350816020 */
/* 1186 */	NdrFcShort( 0x3180 ),	/* 12672 */
/* 1188 */	NdrFcShort( 0x35c4 ),	/* 13764 */
/* 1190 */	0xa4,		/* 164 */
			0xd8,		/* 216 */
/* 1192 */	0xa9,		/* 169 */
			0xd7,		/* 215 */
/* 1194 */	0x34,		/* 52 */
			0x27,		/* 39 */
/* 1196 */	0xe4,		/* 228 */
			0xfa,		/* 250 */
/* 1198 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1200 */	NdrFcLong( 0x79981920 ),	/* 2040011040 */
/* 1204 */	NdrFcShort( 0x108e ),	/* 4238 */
/* 1206 */	NdrFcShort( 0x3eff ),	/* 16127 */
/* 1208 */	0xbf,		/* 191 */
			0xfb,		/* 251 */
/* 1210 */	0x14,		/* 20 */
			0x35,		/* 53 */
/* 1212 */	0x77,		/* 119 */
			0x7b,		/* 123 */
/* 1214 */	0x55,		/* 85 */
			0xa0,		/* 160 */
/* 1216 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1220) */
/* 1220 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1222 */	NdrFcLong( 0x5fc37d6 ),	/* 100415446 */
/* 1226 */	NdrFcShort( 0xff7f ),	/* -129 */
/* 1228 */	NdrFcShort( 0x3d9f ),	/* 15775 */
/* 1230 */	0xa6,		/* 166 */
			0xfd,		/* 253 */
/* 1232 */	0x77,		/* 119 */
			0x5d,		/* 93 */
/* 1234 */	0xd1,		/* 209 */
			0x43,		/* 67 */
/* 1236 */	0x72,		/* 114 */
			0xad,		/* 173 */
/* 1238 */	
			0x11, 0x0,	/* FC_RP */
/* 1240 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1242) */
/* 1242 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1250 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1252 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1256 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1258 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1260 */	NdrFcShort( 0xfb42 ),	/* Offset= -1214 (46) */
/* 1262 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1264 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1266 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1268) */
/* 1268 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1270 */	NdrFcLong( 0xf8f3ebee ),	/* -118232082 */
/* 1274 */	NdrFcShort( 0x94d ),	/* 2381 */
/* 1276 */	NdrFcShort( 0x38d5 ),	/* 14549 */
/* 1278 */	0x84,		/* 132 */
			0xa,		/* 10 */
/* 1280 */	0x25,		/* 37 */
			0x47,		/* 71 */
/* 1282 */	0x10,		/* 16 */
			0xae,		/* 174 */
/* 1284 */	0x90,		/* 144 */
			0x91,		/* 145 */
/* 1286 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1288 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1290) */
/* 1290 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1292 */	NdrFcLong( 0xcc5b3c10 ),	/* -866436080 */
/* 1296 */	NdrFcShort( 0x588d ),	/* 22669 */
/* 1298 */	NdrFcShort( 0x37c4 ),	/* 14276 */
/* 1300 */	0x81,		/* 129 */
			0x8a,		/* 138 */
/* 1302 */	0x97,		/* 151 */
			0xdd,		/* 221 */
/* 1304 */	0xa8,		/* 168 */
			0xc1,		/* 193 */
/* 1306 */	0xd5,		/* 213 */
			0xdc,		/* 220 */
/* 1308 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1310 */	NdrFcLong( 0x1fc46173 ),	/* 532963699 */
/* 1314 */	NdrFcShort( 0x3072 ),	/* 12402 */
/* 1316 */	NdrFcShort( 0x316e ),	/* 12654 */
/* 1318 */	0x8c,		/* 140 */
			0x9c,		/* 156 */
/* 1320 */	0xa,		/* 10 */
			0x6,		/* 6 */
/* 1322 */	0xf5,		/* 245 */
			0x38,		/* 56 */
/* 1324 */	0x2,		/* 2 */
			0x2c,		/* 44 */
/* 1326 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1328 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1330) */
/* 1330 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1336 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1338 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1340) */
/* 1340 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1342 */	NdrFcLong( 0x2f22cc8a ),	/* 790809738 */
/* 1346 */	NdrFcShort( 0x1fa9 ),	/* 8105 */
/* 1348 */	NdrFcShort( 0x3ef8 ),	/* 16120 */
/* 1350 */	0xbd,		/* 189 */
			0x69,		/* 105 */
/* 1352 */	0xa1,		/* 161 */
			0xb6,		/* 182 */
/* 1354 */	0x1a,		/* 26 */
			0x69,		/* 105 */
/* 1356 */	0x6f,		/* 111 */
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
    336
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
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::registerAudioPluginFromFile */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ServerInfo,
    7,
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
    1158,
    1194,
    1230
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
    1266,
    1302,
    576,
    1338,
    1374,
    1410,
    1446,
    1482,
    1518,
    1560,
    1608,
    1644
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
    1686,
    1722
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
    1758
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
    1800,
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
    1266,
    1836,
    1878,
    1920,
    1962,
    2004,
    2046,
    2088,
    2130,
    2172,
    2232,
    2280,
    2322,
    2370,
    2412,
    2454,
    2502,
    2544,
    2586,
    2628,
    2676,
    2736,
    2778,
    2820,
    2868,
    2916,
    2958,
    3018,
    3072,
    3114,
    3174,
    3228,
    3276,
    3318,
    3360,
    3402,
    3438,
    3474
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
    1266,
    3510,
    3546,
    3582,
    3630
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
    1266,
    540,
    576,
    3672,
    3708,
    3744,
    3780,
    3816,
    3858
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
    3894,
    3942
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
    3984
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
    4026
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
    4026
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
    4068
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
    4110,
    3510,
    4146,
    1920,
    4194,
    2004,
    4242,
    4284,
    4326,
    4368,
    4410,
    4452
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
    4488,
    4530,
    4572,
    4614,
    4668
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
    4704
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
    4746
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
    4788,
    4842,
    4890,
    4944,
    4992,
    5040,
    5082,
    5124,
    5166,
    5208,
    5256,
    4452,
    5298,
    5340,
    5376,
    5424,
    5466,
    5508,
    5544,
    5586,
    5622,
    5664,
    5700,
    5748,
    5790
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
    5832
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
    5874,
    5916,
    1878,
    5964,
    6012,
    6054,
    2046
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
    6102
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
    6150,
    96,
    4572,
    6198,
    6234,
    1410
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
    6276
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
    6150,
    96,
    4572,
    6198,
    6234,
    1410
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
    6318
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
    4488,
    3510,
    4572,
    6198,
    6234,
    1410
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
    6360
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
    6150,
    96,
    4572,
    6198
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
    6402
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
    4488,
    3510,
    4572,
    6198,
    6234,
    1410,
    6444,
    1482
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
    6486
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
    1266,
    3510
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
    6528
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
    6570,
    6612,
    6654,
    6696,
    6738,
    6780,
    6822,
    6864,
    6906
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
    1800,
    540,
    6948,
    6984
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
    7020,
    7056,
    7092,
    7128
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
    7164,
    7200
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
    7236,
    7272
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
    7308,
    7344
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
    7380,
    7416
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
    7452,
    7488
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
    7524,
    7560
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
    7596,
    7650,
    7698
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
    1266,
    7020,
    7746,
    612,
    7782,
    7830,
    7872,
    7926,
    7974,
    8010,
    8046
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
    8082,
    8112
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
    8142
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
    8184
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
    8220
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
    8220,
    8268
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
    8142
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
    8304,
    8340,
    576,
    8376,
    3708,
    8412,
    3780,
    8448,
    8484,
    8520,
    8556,
    8592,
    8628,
    8664,
    8700,
    8736,
    8772,
    8808,
    8844,
    8880,
    8916,
    8952,
    8988,
    9024,
    9060,
    9096,
    9132,
    9168,
    9204,
    9240,
    9276,
    9312,
    9348,
    9384,
    9420,
    9456,
    9492,
    9528,
    9564,
    9600,
    9636,
    9672
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
CINTERFACE_PROXY_VTABLE(48) ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtualsProxyVtbl = 
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
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_UserAgent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_EchoSupp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_EchoSupp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_EchoTail */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_EchoTail */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_EchoSkew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_EchoSkew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_NoiseSupp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_NoiseSupp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_Vad */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_Vad */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_Agc */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_Agc */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_JbMaxLateRate */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_JbMaxLateRate */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_Rtcp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_Rtcp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_RtcpMux */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_RtcpMux */
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
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
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
    48,
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
    1266,
    7020,
    9708,
    9744,
    9780,
    9822,
    9864,
    9906,
    9948
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
    9990,
    7020,
    10026,
    1338,
    10062,
    10098,
    10134,
    10170,
    10206,
    10242,
    10278,
    10314,
    10350,
    5340,
    2412,
    10386,
    10422,
    10458,
    10506
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
    10554
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
    10596,
    8112,
    10638,
    10674,
    10710,
    10746,
    10788
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
    4110,
    10824,
    10866,
    10908
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

