

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Tue Apr 02 23:40:10 2013
 */
/* Compiler settings for C:\Users\mamadou\AppData\Local\Temp\doubango_rt.BackEnd.idl-254472eb:
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
#define PROC_FORMAT_STRING_SIZE   12007                             
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
/* 2942 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2944 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2946 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2948 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2950 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2960 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2962 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2964 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2966 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2968 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2972 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetRtpBuffSize */

/* 2976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2982 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2984 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2988 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2990 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2992 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter buffSize */

/* 3000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3006 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3008 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3010 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsGetRtpBuffSize */

/* 3018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3034 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3042 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3050 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure defaultsSetAvpfTail */

/* 3054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3062 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3064 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3066 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3068 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3070 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tail_min */

/* 3078 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tail_max */

/* 3084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3090 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3094 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3098 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Start */

/* 3102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3118 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3130 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_End */

/* 3138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3144 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3154 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3166 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Total */

/* 3174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3190 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3202 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WithVideo */


	/* Procedure isResponse */


	/* Procedure subscribe */


	/* Procedure isValid_ */


	/* Procedure initialize */


	/* Procedure start */


	/* Procedure isRequest */

/* 3210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3222 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3224 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3226 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3234 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3238 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */

/* 3246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3260 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3262 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3270 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3274 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AvailableAudioRoutes */


	/* Procedure getRequestType */

/* 3282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3294 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3296 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3298 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3306 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3310 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getByteRange */

/* 3318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0xa ),	/* 10 */
/* 3326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3332 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3334 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3342 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3346 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Return value */

/* 3348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure isLastChunck */

/* 3354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0xb ),	/* 11 */
/* 3362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3368 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3378 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3382 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 3384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isFirstChunck */

/* 3390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0xc ),	/* 12 */
/* 3398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3402 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3414 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3418 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject1 */


	/* Procedure isSuccessReport */

/* 3426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3432 */	NdrFcShort( 0xd ),	/* 13 */
/* 3434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3440 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3442 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3450 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3454 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderValue */

/* 3462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0xe ),	/* 14 */
/* 3470 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3476 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3478 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3490 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3492 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3496 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderParamValue */

/* 3504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0xf ),	/* 15 */
/* 3512 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3518 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3520 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3528 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3532 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 3534 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3538 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3540 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3544 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContentLength */

/* 3552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3558 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3566 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3568 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContent */

/* 3588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3594 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3596 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3602 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3604 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3606 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxsize */

/* 3612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3618 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3622 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3626 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipSession */

/* 3630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3644 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3646 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3654 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3658 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Return value */

/* 3660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMessage */

/* 3666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3680 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3682 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3690 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3694 */	NdrFcShort( 0xba ),	/* Type Offset=186 */

	/* Return value */

/* 3696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnEvent */

/* 3702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3716 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3718 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pEvent */

/* 3726 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3728 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3730 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter __returnValue */

/* 3732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3734 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3740 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */


	/* Procedure get_Port */

/* 3744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3756 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3760 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3768 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3772 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDebugCallback */

/* 3780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3788 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3794 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3796 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCallback */

/* 3804 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3808 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter __returnValue */

/* 3810 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3814 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp3 */


	/* Procedure setDisplayName */

/* 3822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3830 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3836 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3838 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */


	/* Parameter display_name */

/* 3846 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3848 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3850 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3854 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3856 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */


	/* Procedure setRealm */

/* 3864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3870 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3872 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3878 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3880 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */


	/* Parameter realm_uri */

/* 3888 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3892 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3898 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3902 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIMPI */

/* 3906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3912 */	NdrFcShort( 0xa ),	/* 10 */
/* 3914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3918 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3920 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3922 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter impi */

/* 3930 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3934 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3940 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeCaps */


	/* Procedure setIMPU */

/* 3948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0xb ),	/* 11 */
/* 3956 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3962 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3964 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */


	/* Parameter impu_uri */

/* 3972 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3976 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 3978 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3982 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage1 */


	/* Procedure setPassword */

/* 3990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0xc ),	/* 12 */
/* 3998 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4002 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4004 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4006 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */


	/* Parameter password */

/* 4014 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4018 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4020 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4024 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAMF */

/* 4032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4038 */	NdrFcShort( 0xd ),	/* 13 */
/* 4040 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4044 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4046 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4048 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter amf */

/* 4056 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4060 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4064 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4066 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setOperatorId */

/* 4074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0xe ),	/* 14 */
/* 4082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4088 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4090 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter opid */

/* 4098 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4102 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4108 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setProxyCSCF */

/* 4116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0xf ),	/* 15 */
/* 4124 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4126 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4128 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4130 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4132 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fqdn */

/* 4140 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4144 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 4146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4150 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 4152 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4156 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ipversion */

/* 4158 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4160 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4162 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4166 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4168 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4172 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP2 */

/* 4176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4182 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4184 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4188 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4190 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4192 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 4200 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4204 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter transport */

/* 4206 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4210 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4214 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4216 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4220 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP1 */

/* 4224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4238 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4240 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 4248 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4250 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4252 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4254 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4258 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort2 */

/* 4266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4274 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4276 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4278 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4280 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4282 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter port */

/* 4290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4292 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4294 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 4296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4300 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4302 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4304 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4306 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4310 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort1 */

/* 4314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4320 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4322 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4324 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4326 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4328 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4330 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter port */

/* 4338 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4340 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4342 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4344 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4346 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4348 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stop */


	/* Procedure setEarlyIMS */

/* 4356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4362 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4364 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4366 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4368 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4370 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4372 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bEnteringBackground */


	/* Parameter enabled */

/* 4380 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4384 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4386 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4390 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 4398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4404 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4406 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4410 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4412 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4414 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 4422 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4426 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 4428 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4432 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4438 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4442 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */

/* 4446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4454 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4460 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4462 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 4470 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4472 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4474 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4476 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4478 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4480 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addDnsServer */

/* 4488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4494 */	NdrFcShort( 0x17 ),	/* 23 */
/* 4496 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4502 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4504 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 4512 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4516 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4518 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4522 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDnsDiscovery */

/* 4530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4538 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4540 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4542 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4544 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4546 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 4554 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4556 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4558 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

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

	/* Procedure setAoR */

/* 4572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x19 ),	/* 25 */
/* 4580 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4584 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4586 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4588 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 4596 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4600 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 4602 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4608 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4612 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4616 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSigCompParams */

/* 4620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x1a ),	/* 26 */
/* 4628 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4630 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4632 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4634 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 4636 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dms */

/* 4644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sms */

/* 4650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cpb */

/* 4656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4658 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter enablePresDict */

/* 4662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4664 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4666 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4668 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4670 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4672 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4676 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 4680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x1b ),	/* 27 */
/* 4688 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4692 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4694 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4696 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter compId */

/* 4704 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4708 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4710 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4714 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4718 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeSigCompCompartment */

/* 4722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4730 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4734 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4736 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4738 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter compId */

/* 4746 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4750 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4756 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4760 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNServer */

/* 4764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4770 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4772 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4774 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4776 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4778 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4780 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ip */

/* 4788 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4792 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 4794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4798 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4800 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4804 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4808 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNCred */

/* 4812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4818 */	NdrFcShort( 0x1e ),	/* 30 */
/* 4820 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4824 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4826 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4828 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter login */

/* 4836 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4840 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter password */

/* 4842 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4846 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4848 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4850 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4852 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4856 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setTLSSecAgree */

/* 4860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4866 */	NdrFcShort( 0x1f ),	/* 31 */
/* 4868 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4870 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4872 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4876 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 4884 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4886 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4888 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4890 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4892 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4894 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates2 */

/* 4902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4908 */	NdrFcShort( 0x20 ),	/* 32 */
/* 4910 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4912 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4914 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4916 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4918 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4922 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter privKey */

/* 4926 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4930 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 4932 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4936 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 4938 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4940 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4942 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter verify */

/* 4944 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4946 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4948 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4950 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4952 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4954 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4958 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates1 */

/* 4962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4968 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4970 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4974 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4976 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4978 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4982 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter privKey */

/* 4986 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4990 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 4992 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4996 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 4998 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5002 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5004 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5006 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5008 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5012 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecSecAgree */

/* 5016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5022 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5024 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5026 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5028 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5030 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 5040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5044 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5046 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5050 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5052 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecParameters */

/* 5058 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5064 */	NdrFcShort( 0x23 ),	/* 35 */
/* 5066 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5070 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5072 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5074 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter algo */

/* 5082 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5084 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5086 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ealgo */

/* 5088 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5090 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5092 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter mode */

/* 5094 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5098 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter proto */

/* 5100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5102 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5104 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5108 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5110 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5114 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsENUM */

/* 5118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5126 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5132 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5134 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter service */

/* 5142 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5144 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5146 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter e164num */

/* 5148 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5150 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5152 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter domain */

/* 5154 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5156 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5158 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5160 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5162 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5164 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5168 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsNaptrSrv */

/* 5172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5178 */	NdrFcShort( 0x25 ),	/* 37 */
/* 5180 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5186 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5188 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter domain */

/* 5196 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5200 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter service */

/* 5202 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5206 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5208 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5212 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 5214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5216 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsSrv */

/* 5220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5226 */	NdrFcShort( 0x26 ),	/* 38 */
/* 5228 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5234 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5236 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter service */

/* 5244 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5246 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5248 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5250 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5252 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5254 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */

	/* Return value */

/* 5256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5258 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalIP */

/* 5262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x27 ),	/* 39 */
/* 5270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5276 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5278 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter protocol */

/* 5286 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5290 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5292 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5296 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5300 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalPort */

/* 5304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5310 */	NdrFcShort( 0x28 ),	/* 40 */
/* 5312 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5316 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5318 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5320 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5324 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter protocol */

/* 5328 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5330 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5332 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5334 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5336 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5338 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5342 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPreferredIdentity */

/* 5346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5352 */	NdrFcShort( 0x29 ),	/* 41 */
/* 5354 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5360 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5362 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5370 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5374 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5378 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stop */

/* 5382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x2b ),	/* 43 */
/* 5390 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5394 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5396 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5398 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5406 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5410 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5414 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unSubscribe */


	/* Procedure register_1 */


	/* Procedure send1 */


	/* Procedure haveOwnership */


	/* Procedure deInitialize */

/* 5418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5426 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5430 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5432 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5434 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5442 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5446 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5450 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecs */

/* 5454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5468 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5470 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codecs */

/* 5478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5482 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 5484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecPriority */

/* 5490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5496 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5498 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5500 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5502 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5504 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 5506 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codec_id */

/* 5514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5518 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter priority */

/* 5520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5530 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5534 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isCodecSupported */

/* 5538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5544 */	NdrFcShort( 0xa ),	/* 10 */
/* 5546 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5550 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5552 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5554 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codec_id */

/* 5562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5566 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5568 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5570 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5572 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPort */

/* 5580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5586 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5588 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5592 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5594 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5596 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5606 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5608 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5612 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpiString */


	/* Procedure getUserName */

/* 5616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0xa ),	/* 10 */
/* 5624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5630 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5632 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5634 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5640 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5644 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 5646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPassword */

/* 5652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5658 */	NdrFcShort( 0xb ),	/* 11 */
/* 5660 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5666 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5668 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 5676 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5680 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpuUri */


	/* Procedure getDisplayName */

/* 5688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5694 */	NdrFcShort( 0xc ),	/* 12 */
/* 5696 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5702 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5704 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5712 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5714 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5716 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 5718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getParamValue */

/* 5724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5730 */	NdrFcShort( 0xd ),	/* 13 */
/* 5732 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5738 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5740 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 5748 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5750 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5752 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5754 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5756 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5758 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 5760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5762 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDisplayName */

/* 5766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5772 */	NdrFcShort( 0xe ),	/* 14 */
/* 5774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5780 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5782 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5786 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter displayName */

/* 5790 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5792 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5794 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 5796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5798 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance2 */

/* 5802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5808 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5810 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5816 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5818 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uriString */

/* 5826 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5828 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5830 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter displayName */

/* 5832 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5834 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5836 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5838 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5842 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 5844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5846 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 5850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5856 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5858 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5864 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5866 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uriString */

/* 5874 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5878 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5880 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5882 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5884 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 5886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isValid */

/* 5892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5898 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5900 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5904 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5906 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5908 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5912 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uri */

/* 5916 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5918 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5920 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5922 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5924 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5926 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5930 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ondata */


	/* Procedure ondata */

/* 5934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5940 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5942 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5946 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5948 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5950 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pData */


	/* Parameter pData */

/* 5958 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5960 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5962 */	NdrFcShort( 0x120 ),	/* Type Offset=288 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5964 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5966 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5972 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 5976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5982 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5984 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5990 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5992 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pI */

/* 6000 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6004 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter __returnValue */

/* 6006 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6008 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6010 */	NdrFcShort( 0x144 ),	/* Type Offset=324 */

	/* Return value */

/* 6012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentProcessId */


	/* Procedure getId */

/* 6018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6024 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6026 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6030 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6034 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6042 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6050 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 6054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6060 */	NdrFcShort( 0x8 ),	/* 8 */
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

	/* Parameter name */

/* 6078 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6082 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 6084 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6088 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

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

	/* Procedure addCaps */

/* 6102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6108 */	NdrFcShort( 0xa ),	/* 10 */
/* 6110 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6114 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6116 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6118 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6126 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6130 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 6132 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6136 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6138 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6142 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setFromUri */

/* 6150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6156 */	NdrFcShort( 0xd ),	/* 13 */
/* 6158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6162 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6164 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fromUri */

/* 6174 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6178 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter __returnValue */

/* 6180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6184 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setToUri */

/* 6192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6198 */	NdrFcShort( 0xe ),	/* 14 */
/* 6200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6204 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6206 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter toUri */

/* 6216 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6220 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter __returnValue */

/* 6222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6226 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 6234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6240 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6246 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6250 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter compId */

/* 6258 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6262 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6268 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold1 */


	/* Procedure removeSigCompCompartment */

/* 6276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6282 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6288 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6300 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6304 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure register_2 */


	/* Procedure send2 */


	/* Procedure accept */

/* 6312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6318 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6324 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6326 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 6336 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6340 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6346 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 6348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hangup */

/* 6354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6360 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6366 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 6378 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6382 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6384 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6388 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister2 */


	/* Procedure unPublish2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure reject */

/* 6396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6404 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6408 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6410 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6412 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 6420 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6424 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6428 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6430 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 6432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendInfo */

/* 6438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6444 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6446 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6450 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6452 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6454 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */

/* 6462 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6466 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter len */

/* 6468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter config */

/* 6474 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6478 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6482 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6484 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6488 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMediaMgr */

/* 6492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6498 */	NdrFcShort( 0xa ),	/* 10 */
/* 6500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6506 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6508 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 6516 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6520 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Return value */

/* 6522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6524 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
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
/* 6556 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 6558 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6562 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Return value */

/* 6564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6576 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6578 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6584 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 6594 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6598 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 6600 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6604 */	NdrFcShort( 0x198 ),	/* Type Offset=408 */

	/* Return value */

/* 6606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call4 */

/* 6612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6618 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6620 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6624 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6626 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6628 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */

/* 6636 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6640 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 6642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6646 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 6648 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6652 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6658 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6662 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call3 */

/* 6666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6672 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6674 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6678 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6680 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6682 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */

/* 6690 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6694 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 6696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6700 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6702 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6704 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6706 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call2 */

/* 6714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6722 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6726 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6728 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6730 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 6738 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6742 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter media */

/* 6744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6746 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6748 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 6750 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6754 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6758 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6760 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6764 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call1 */

/* 6768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6774 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6776 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6780 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6782 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6784 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 6792 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6794 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6796 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter media */

/* 6798 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6800 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6802 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6804 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6806 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6808 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6812 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSessionTimer */

/* 6816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6822 */	NdrFcShort( 0xa ),	/* 10 */
/* 6824 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6828 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6830 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6832 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timeout */

/* 6840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refresher */

/* 6846 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6850 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6854 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6856 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6860 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set100rel */

/* 6864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6870 */	NdrFcShort( 0xb ),	/* 11 */
/* 6872 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6874 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6876 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6878 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 6888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6892 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6898 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6902 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcp */

/* 6906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6912 */	NdrFcShort( 0xc ),	/* 12 */
/* 6914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6916 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6918 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6920 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 6930 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6934 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6940 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcpMux */

/* 6948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6954 */	NdrFcShort( 0xd ),	/* 13 */
/* 6956 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6958 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6960 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 6972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6976 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6978 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6980 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6982 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6986 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setICE */

/* 6990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6996 */	NdrFcShort( 0xe ),	/* 14 */
/* 6998 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7000 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7002 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7004 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7006 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 7014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7018 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7020 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7024 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setQoS */

/* 7032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7038 */	NdrFcShort( 0xf ),	/* 15 */
/* 7040 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7042 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7044 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7046 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 7048 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 7056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7060 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strength */

/* 7062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7064 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7066 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7068 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7072 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold2 */

/* 7080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7086 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7088 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7092 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7094 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7096 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 7104 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7108 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7114 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure resume2 */

/* 7122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7128 */	NdrFcShort( 0x12 ),	/* 18 */
/* 7130 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7134 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7136 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7138 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 7146 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7150 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7152 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7156 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7160 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */


	/* Procedure resume1 */

/* 7164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7170 */	NdrFcShort( 0x13 ),	/* 19 */
/* 7172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7176 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7178 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7180 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7192 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 7194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer2 */

/* 7200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7206 */	NdrFcShort( 0x14 ),	/* 20 */
/* 7208 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7212 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7214 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7216 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter referToUriString */

/* 7224 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7228 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 7230 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7234 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7236 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7240 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7244 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer1 */

/* 7248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7254 */	NdrFcShort( 0x15 ),	/* 21 */
/* 7256 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7260 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7262 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7264 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter referToUriString */

/* 7272 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7276 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7282 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer2 */

/* 7290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7296 */	NdrFcShort( 0x16 ),	/* 22 */
/* 7298 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7302 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7304 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7306 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 7314 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7318 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7320 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7324 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer1 */

/* 7332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7338 */	NdrFcShort( 0x17 ),	/* 23 */
/* 7340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7344 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7346 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7348 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7356 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7360 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer2 */

/* 7368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7374 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7376 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7380 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7382 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7384 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 7392 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7396 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7398 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7402 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7406 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer1 */

/* 7410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7416 */	NdrFcShort( 0x19 ),	/* 25 */
/* 7418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7422 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7424 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7426 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7438 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7442 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendDTMF */

/* 7446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7452 */	NdrFcShort( 0x1a ),	/* 26 */
/* 7454 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7458 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7460 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7462 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter number */

/* 7470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7472 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7476 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7478 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7480 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7484 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSessionTransferId */

/* 7488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7494 */	NdrFcShort( 0x1b ),	/* 27 */
/* 7496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7500 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7502 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 7512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data2 */

/* 7524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7530 */	NdrFcShort( 0x1c ),	/* 28 */
/* 7532 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7536 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7538 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7540 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7544 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter data_type */

/* 7548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7552 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter data */

/* 7554 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7558 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 7560 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7564 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7568 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data1 */

/* 7572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7578 */	NdrFcShort( 0x1d ),	/* 29 */
/* 7580 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7584 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7586 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7588 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter data_type */

/* 7596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7600 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 7602 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7606 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setT140Callback */

/* 7614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7620 */	NdrFcShort( 0x1e ),	/* 30 */
/* 7622 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7626 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7628 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7630 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pT140Callback */

/* 7638 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7642 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */

	/* Parameter __returnValue */

/* 7644 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7646 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7648 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7656 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7662 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7664 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7670 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7672 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7678 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 7680 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7682 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7684 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 7686 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7688 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7690 */	NdrFcShort( 0x1ae ),	/* Type Offset=430 */

	/* Return value */

/* 7692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7694 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCallback */

/* 7698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7704 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7706 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7710 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7712 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7714 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCallback */

/* 7722 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7726 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Parameter __returnValue */

/* 7728 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7732 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp4 */

/* 7740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7746 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7748 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7752 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7754 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7756 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7760 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUriString */

/* 7764 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7768 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 7770 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7774 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 7776 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7778 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7780 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7784 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp2 */

/* 7788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7794 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7796 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7800 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7802 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7804 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 7812 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7816 */	NdrFcShort( 0x1e8 ),	/* Type Offset=488 */

	/* Parameter config */

/* 7818 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7822 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 7824 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7828 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7832 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp1 */

/* 7836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7842 */	NdrFcShort( 0xa ),	/* 10 */
/* 7844 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7848 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7850 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7852 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter remoteUri */

/* 7860 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7864 */	NdrFcShort( 0x1e8 ),	/* Type Offset=488 */

	/* Parameter __returnValue */

/* 7866 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7870 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage2 */

/* 7878 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7884 */	NdrFcShort( 0xb ),	/* 11 */
/* 7886 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7890 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7892 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7894 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */

/* 7902 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7904 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7906 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 7908 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7912 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 7914 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7918 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7922 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7932 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7934 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7940 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7942 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 7950 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7954 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Parameter pCallback */

/* 7956 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7960 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Parameter __returnValue */

/* 7962 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7966 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Return value */

/* 7968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7970 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure publish2 */


	/* Procedure send2 */


	/* Procedure send2 */

/* 7974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7980 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7982 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7986 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7988 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7990 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */

/* 7998 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8000 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8002 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 8004 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8006 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8008 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8010 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8012 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8014 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 8016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8018 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister1 */


	/* Procedure unPublish1 */


	/* Procedure accept1 */


	/* Procedure accept1 */


	/* Procedure accept1 */

/* 8022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8028 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8034 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8036 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8038 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8046 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8048 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8050 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 8052 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8054 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept2 */


	/* Procedure reject2 */


	/* Procedure reject2 */


	/* Procedure reject2 */

/* 8058 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8064 */	NdrFcShort( 0xa ),	/* 10 */
/* 8066 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8070 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8072 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8074 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 8082 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8084 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8086 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8088 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8090 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8092 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 8094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8106 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8108 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8114 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8124 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8128 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8130 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8134 */	NdrFcShort( 0x20c ),	/* Type Offset=524 */

	/* Return value */

/* 8136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8148 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8150 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8156 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8158 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8166 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8170 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8172 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8176 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Return value */

/* 8178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8190 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8198 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8200 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8208 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8212 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8214 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8218 */	NdrFcShort( 0x238 ),	/* Type Offset=568 */

	/* Return value */

/* 8220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8232 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8234 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8240 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8250 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8254 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8256 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8260 */	NdrFcShort( 0x24e ),	/* Type Offset=590 */

	/* Return value */

/* 8262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject2 */

/* 8268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8274 */	NdrFcShort( 0xc ),	/* 12 */
/* 8276 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8280 */	NdrFcShort( 0x21 ),	/* 33 */
/* 8282 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 8292 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8296 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 8298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8302 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 8304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8316 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8318 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8324 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8326 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8334 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8338 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8340 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8342 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8344 */	NdrFcShort( 0x264 ),	/* Type Offset=612 */

	/* Return value */

/* 8346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 8352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8358 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8360 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8366 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8368 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStack */

/* 8376 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8378 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8380 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter __returnValue */

/* 8382 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8384 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8386 */	NdrFcShort( 0x27a ),	/* Type Offset=634 */

	/* Return value */

/* 8388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8390 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDialogEvent */

/* 8394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8400 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8402 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8406 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8408 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8410 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8418 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8422 */	NdrFcShort( 0x290 ),	/* Type Offset=656 */

	/* Parameter __returnValue */

/* 8424 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackEvent */

/* 8436 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8442 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8444 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8448 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8450 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8452 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8460 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8462 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8464 */	NdrFcShort( 0x2a2 ),	/* Type Offset=674 */

	/* Parameter __returnValue */

/* 8466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8468 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8474 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInviteEvent */

/* 8478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8486 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8490 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8492 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8494 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8500 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8502 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8504 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8506 */	NdrFcShort( 0x2b4 ),	/* Type Offset=692 */

	/* Parameter __returnValue */

/* 8508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8510 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8516 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnMessagingEvent */

/* 8520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8526 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8528 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8534 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8544 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8548 */	NdrFcShort( 0x2c6 ),	/* Type Offset=710 */

	/* Parameter __returnValue */

/* 8550 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8558 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInfoEvent */

/* 8562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8568 */	NdrFcShort( 0xa ),	/* 10 */
/* 8570 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8574 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8576 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8578 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8586 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8588 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8590 */	NdrFcShort( 0x2d8 ),	/* Type Offset=728 */

	/* Parameter __returnValue */

/* 8592 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8594 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnOptionsEvent */

/* 8604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8610 */	NdrFcShort( 0xb ),	/* 11 */
/* 8612 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8616 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8618 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8620 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8628 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8632 */	NdrFcShort( 0x2ea ),	/* Type Offset=746 */

	/* Parameter __returnValue */

/* 8634 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8642 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPublicationEvent */

/* 8646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8652 */	NdrFcShort( 0xc ),	/* 12 */
/* 8654 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8658 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8660 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8662 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8670 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8672 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8674 */	NdrFcShort( 0x2fc ),	/* Type Offset=764 */

	/* Parameter __returnValue */

/* 8676 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8678 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8684 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnRegistrationEvent */

/* 8688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8694 */	NdrFcShort( 0xd ),	/* 13 */
/* 8696 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8700 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8702 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8704 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8712 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8714 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8716 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter __returnValue */

/* 8718 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8720 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8726 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnSubscriptionEvent */

/* 8730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8736 */	NdrFcShort( 0xe ),	/* 14 */
/* 8738 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8742 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8744 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8746 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter e */

/* 8754 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8756 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8758 */	NdrFcShort( 0x320 ),	/* Type Offset=800 */

	/* Parameter __returnValue */

/* 8760 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8762 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8768 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getBaseSession */

/* 8772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8786 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8796 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8800 */	NdrFcShort( 0x332 ),	/* Type Offset=818 */

	/* Return value */

/* 8802 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipMessage */

/* 8808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8814 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8816 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8822 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8824 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8832 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8836 */	NdrFcShort( 0x348 ),	/* Type Offset=840 */

	/* Return value */

/* 8838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8840 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RegistrationState */


	/* Procedure get_State */


	/* Procedure getRequestType */


	/* Procedure getMediaType */

/* 8844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8850 */	NdrFcShort( 0x7 ),	/* 7 */
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


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8868 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8872 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 8874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8876 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8894 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8896 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8904 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8908 */	NdrFcShort( 0x35e ),	/* Type Offset=862 */

	/* Return value */

/* 8910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeCallSessionOwnership */

/* 8916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8922 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8930 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8932 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8940 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8944 */	NdrFcShort( 0x374 ),	/* Type Offset=884 */

	/* Return value */

/* 8946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8948 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeMsrpSessionOwnership */

/* 8952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8958 */	NdrFcShort( 0xa ),	/* 10 */
/* 8960 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8966 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8968 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 8976 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8978 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8980 */	NdrFcShort( 0x38a ),	/* Type Offset=906 */

	/* Return value */

/* 8982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8984 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8994 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8996 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9002 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9004 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9012 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9014 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9016 */	NdrFcShort( 0x3a0 ),	/* Type Offset=928 */

	/* Return value */

/* 9018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9020 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9038 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9040 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9048 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9050 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9052 */	NdrFcShort( 0x3a0 ),	/* Type Offset=928 */

	/* Return value */

/* 9054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9056 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 9060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9066 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9072 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9074 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9076 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9084 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9088 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 9090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9092 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9110 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9120 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9124 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 9126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 9132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9138 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9146 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9156 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9160 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 9162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9182 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9192 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9196 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 9198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 9204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9210 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9218 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9228 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9232 */	NdrFcShort( 0x3e2 ),	/* Type Offset=994 */

	/* Return value */

/* 9234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9254 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9264 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9268 */	NdrFcShort( 0x3e2 ),	/* Type Offset=994 */

	/* Return value */

/* 9270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 9276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9282 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9290 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9292 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9300 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9304 */	NdrFcShort( 0x3f8 ),	/* Type Offset=1016 */

	/* Return value */

/* 9306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9326 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9336 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9340 */	NdrFcShort( 0x3f8 ),	/* Type Offset=1016 */

	/* Return value */

/* 9342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 9348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9354 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9362 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9372 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9376 */	NdrFcShort( 0x40e ),	/* Type Offset=1038 */

	/* Return value */

/* 9378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 9384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9398 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9408 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9412 */	NdrFcShort( 0x40e ),	/* Type Offset=1038 */

	/* Return value */

/* 9414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue2 */

/* 9420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9426 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9428 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9434 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9436 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9438 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 9444 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9448 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 9450 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9454 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 9456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9462 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9464 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9466 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9470 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue1 */

/* 9474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9480 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9482 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9488 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9490 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 9498 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9502 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 9504 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9508 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9510 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9514 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9518 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderAValue */

/* 9522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9530 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9536 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9538 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9540 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter media */

/* 9546 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9550 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter attributeName */

/* 9552 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9556 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9558 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9562 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9566 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getResponseCode */

/* 9570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9582 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9584 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9594 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9598 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue2 */

/* 9606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9612 */	NdrFcShort( 0xa ),	/* 10 */
/* 9614 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9620 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9622 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 9630 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9634 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 9636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9642 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9646 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9650 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue1 */

/* 9654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9660 */	NdrFcShort( 0xb ),	/* 11 */
/* 9662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9668 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9670 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 9678 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9682 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9684 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9688 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue2 */

/* 9696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9702 */	NdrFcShort( 0xc ),	/* 12 */
/* 9704 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9710 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9712 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 9720 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9724 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 9726 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9730 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 9732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9738 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9742 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9746 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue1 */

/* 9750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9756 */	NdrFcShort( 0xd ),	/* 13 */
/* 9758 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9764 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9766 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 9774 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9778 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 9780 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9784 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9786 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9790 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9794 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContentLength */

/* 9798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9804 */	NdrFcShort( 0xe ),	/* 14 */
/* 9806 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9810 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9812 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9814 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContent */

/* 9834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9840 */	NdrFcShort( 0xf ),	/* 15 */
/* 9842 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9848 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9850 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9858 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9860 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9862 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9866 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpMessage */

/* 9870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9876 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9884 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9886 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 9894 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9898 */	NdrFcShort( 0x424 ),	/* Type Offset=1060 */

	/* Return value */

/* 9900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */

/* 9906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9912 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9914 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9920 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 9930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoPeriodicKeepAlive */


	/* Procedure Stop */

/* 9936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9942 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9950 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9952 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 9960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackStateChanged */


	/* Procedure OnDebugMessage */

/* 9966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9972 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9974 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9980 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9982 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newState */


	/* Parameter level */

/* 9990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9994 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter message */

/* 9996 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10000 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 10002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAudioRoutingChanged */

/* 10008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10014 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newRoute */

/* 10032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10036 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAVCallStateChanged */


	/* Procedure OnRegistrationStateChanged */

/* 10044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10050 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10052 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10054 */	NdrFcShort( 0xe ),	/* 14 */
/* 10056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10058 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10060 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10064 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newState */


	/* Parameter newState */

/* 10068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10072 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter sipCode */


	/* Parameter sipCode */

/* 10074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10076 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10078 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter description */

/* 10080 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10084 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 10086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10088 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnHoldStateChanged */

/* 10092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10098 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10106 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newState */

/* 10116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10120 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DisplayName */

/* 10128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10134 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10142 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10144 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10152 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10156 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DisplayName */

/* 10164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10170 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10178 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10180 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10188 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10192 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RealmUri */

/* 10200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10206 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10208 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10214 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10216 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10224 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10228 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpiString */

/* 10236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10242 */	NdrFcShort( 0xb ),	/* 11 */
/* 10244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10250 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10252 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10260 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10264 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpuUri */

/* 10272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10278 */	NdrFcShort( 0xd ),	/* 13 */
/* 10280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10286 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10288 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10300 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Password */

/* 10308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10314 */	NdrFcShort( 0xe ),	/* 14 */
/* 10316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10322 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10324 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10332 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10336 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Password */

/* 10344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10350 */	NdrFcShort( 0xf ),	/* 15 */
/* 10352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10358 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10360 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10368 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10372 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyHost */

/* 10380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10386 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10394 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10396 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10404 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10408 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyHost */

/* 10416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10422 */	NdrFcShort( 0x11 ),	/* 17 */
/* 10424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10430 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10432 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10436 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10440 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10444 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyPort */

/* 10452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10458 */	NdrFcShort( 0x12 ),	/* 18 */
/* 10460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10464 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10466 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10468 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10476 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10478 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10480 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10484 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyPort */

/* 10488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10494 */	NdrFcShort( 0x13 ),	/* 19 */
/* 10496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10498 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10502 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10504 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10516 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EarlyIMS */

/* 10524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10530 */	NdrFcShort( 0x14 ),	/* 20 */
/* 10532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10536 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10538 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10548 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10552 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EarlyIMS */

/* 10560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10566 */	NdrFcShort( 0x15 ),	/* 21 */
/* 10568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10570 */	NdrFcShort( 0x5 ),	/* 5 */
/* 10572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10588 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Transport */

/* 10596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10602 */	NdrFcShort( 0x16 ),	/* 22 */
/* 10604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10608 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10610 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10624 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Transport */

/* 10632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10638 */	NdrFcShort( 0x17 ),	/* 23 */
/* 10640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10646 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10648 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10658 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10660 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10664 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IPVersion */

/* 10668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10674 */	NdrFcShort( 0x18 ),	/* 24 */
/* 10676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10682 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10684 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10692 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10694 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10696 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IPVersion */

/* 10704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10710 */	NdrFcShort( 0x19 ),	/* 25 */
/* 10712 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10718 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10720 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10732 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10734 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10736 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PushNotificationUri */

/* 10740 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10746 */	NdrFcShort( 0x1a ),	/* 26 */
/* 10748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10754 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10756 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10764 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10766 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10768 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10772 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PushNotificationUri */

/* 10776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10782 */	NdrFcShort( 0x1b ),	/* 27 */
/* 10784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10790 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10792 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10800 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10804 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UserAgent */

/* 10812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10818 */	NdrFcShort( 0x1c ),	/* 28 */
/* 10820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10826 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10828 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10836 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10840 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_UserAgent */

/* 10848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10854 */	NdrFcShort( 0x1d ),	/* 29 */
/* 10856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10862 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10864 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10868 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 10872 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10876 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10880 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UriRemote */

/* 10884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10890 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10892 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10898 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10900 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 10908 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10912 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Return value */

/* 10914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Accept */

/* 10920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10926 */	NdrFcShort( 0xa ),	/* 10 */
/* 10928 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10932 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10934 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10936 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 10944 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10946 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10948 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 10950 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10952 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10954 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10958 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HangUp */

/* 10962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10968 */	NdrFcShort( 0xb ),	/* 11 */
/* 10970 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10974 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10976 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10978 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10984 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 10986 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10988 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10990 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 10992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10996 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Hold */

/* 11004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11010 */	NdrFcShort( 0xc ),	/* 12 */
/* 11012 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11016 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11018 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11020 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 11028 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11032 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 11034 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11036 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11038 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */

/* 11046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11052 */	NdrFcShort( 0xd ),	/* 13 */
/* 11054 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11058 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11060 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11062 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11068 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 11070 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11074 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Parameter __returnValue */

/* 11076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11078 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11080 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11084 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipConfig */

/* 11088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11094 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11096 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11102 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11104 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11112 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11116 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Return value */

/* 11118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipActiveAVCall */

/* 11124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11132 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11138 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11140 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11148 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11152 */	NdrFcShort( 0x454 ),	/* Type Offset=1108 */

	/* Return value */

/* 11154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AudioRoute */

/* 11160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11166 */	NdrFcShort( 0xa ),	/* 10 */
/* 11168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11172 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11174 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11176 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11184 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11188 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11192 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AudioRoute */

/* 11196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11202 */	NdrFcShort( 0xb ),	/* 11 */
/* 11204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11210 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11212 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newRoute */

/* 11220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11224 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CameraLocation */

/* 11232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11238 */	NdrFcShort( 0xc ),	/* 12 */
/* 11240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11244 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11246 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11248 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11256 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11260 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CameraLocation */

/* 11268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11274 */	NdrFcShort( 0xd ),	/* 13 */
/* 11276 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11282 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newLocation */

/* 11292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11296 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDebugMessageListener */

/* 11304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11310 */	NdrFcShort( 0xe ),	/* 14 */
/* 11312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11318 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11320 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 11328 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11330 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11332 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 11334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11336 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAudioStateChangedListener */

/* 11340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11346 */	NdrFcShort( 0xf ),	/* 15 */
/* 11348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11354 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11356 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 11364 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11368 */	NdrFcShort( 0x47c ),	/* Type Offset=1148 */

	/* Return value */

/* 11370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipRegistrationStateChangedListener */

/* 11376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11382 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11390 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11392 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 11400 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11404 */	NdrFcShort( 0x48e ),	/* Type Offset=1166 */

	/* Return value */

/* 11406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipStackStateChangedListener */

/* 11412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11418 */	NdrFcShort( 0x11 ),	/* 17 */
/* 11420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11426 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 11436 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11440 */	NdrFcShort( 0x4a0 ),	/* Type Offset=1184 */

	/* Return value */

/* 11442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipAVCallStateChangedListener */

/* 11448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11454 */	NdrFcShort( 0x12 ),	/* 18 */
/* 11456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11462 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pListener */

/* 11472 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11476 */	NdrFcShort( 0x4b2 ),	/* Type Offset=1202 */

	/* Return value */

/* 11478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Register */

/* 11484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11490 */	NdrFcShort( 0x15 ),	/* 21 */
/* 11492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11496 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11498 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11500 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11512 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudio */

/* 11520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11526 */	NdrFcShort( 0x17 ),	/* 23 */
/* 11528 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11534 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTo */

/* 11544 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11548 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter pConfig */

/* 11550 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11554 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 11556 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11558 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11560 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 11562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11564 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudioVideo */

/* 11568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11574 */	NdrFcShort( 0x18 ),	/* 24 */
/* 11576 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 11578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11582 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11584 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTo */

/* 11592 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11594 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11596 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter pConfig */

/* 11598 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11600 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11602 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 11604 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11606 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11608 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 11610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11612 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCodecs */

/* 11616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11622 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11624 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11628 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11630 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11632 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter codecs */

/* 11640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11644 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11646 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11650 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartServer */

/* 11658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11664 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11666 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11672 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11674 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11680 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __outOfProcServerClassNamesSize */

/* 11682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outOfProcServerClassNames */

/* 11688 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 11690 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11692 */	NdrFcShort( 0x4de ),	/* Type Offset=1246 */

	/* Return value */

/* 11694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11696 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VideoRenderer */

/* 11700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11714 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11716 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11724 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11726 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11728 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 11730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_VideoRenderer */

/* 11736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11742 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11744 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11752 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 11760 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11764 */	NdrFcShort( 0x4f8 ),	/* Type Offset=1272 */

	/* Return value */

/* 11766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipService */

/* 11772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11778 */	NdrFcShort( 0xa ),	/* 10 */
/* 11780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11786 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11796 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11800 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Return value */

/* 11802 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_VideoFrameReceived */

/* 11808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11814 */	NdrFcShort( 0xb ),	/* 11 */
/* 11816 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11820 */	NdrFcShort( 0x34 ),	/* 52 */
/* 11822 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11824 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 11832 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11836 */	NdrFcShort( 0x520 ),	/* Type Offset=1312 */

	/* Parameter __returnValue */

/* 11838 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 11840 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11842 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Return value */

/* 11844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11846 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_VideoFrameReceived */

/* 11850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11856 */	NdrFcShort( 0xc ),	/* 12 */
/* 11858 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11860 */	NdrFcShort( 0x18 ),	/* 24 */
/* 11862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11864 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11866 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 11874 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 11876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11878 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Return value */

/* 11880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11882 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUiDisconnectedEventName */

/* 11886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11892 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11894 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11900 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 11902 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11904 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter backgroundProcessId */

/* 11910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11916 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11918 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11920 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBackgroundProcessReadyEventName */

/* 11928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11936 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 11938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11942 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 11944 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11950 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter backgroundProcessId */

/* 11952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11954 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11958 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 11960 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11962 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 11964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11966 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Instance */

/* 11970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11976 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11978 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11984 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11986 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 11994 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11996 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11998 */	NdrFcShort( 0x53c ),	/* Type Offset=1340 */

	/* Return value */

/* 12000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 12004 */	0x8,		/* FC_LONG */
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
    2976,
    3018,
    3054
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
    3102,
    3138,
    3174
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
    3210,
    3246,
    576,
    3282,
    3318,
    3354,
    3390,
    3426,
    3462,
    3504,
    3552,
    3588
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
    3630,
    3666
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
    3702
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
    3744,
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
    3210,
    3780,
    3822,
    3864,
    3906,
    3948,
    3990,
    4032,
    4074,
    4116,
    4176,
    4224,
    4266,
    4314,
    4356,
    4398,
    4446,
    4488,
    4530,
    4572,
    4620,
    4680,
    4722,
    4764,
    4812,
    4860,
    4902,
    4962,
    5016,
    5058,
    5118,
    5172,
    5220,
    5262,
    5304,
    5346,
    2580,
    5382
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
    3210,
    5418,
    5454,
    5490,
    5538
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
    3210,
    540,
    576,
    5580,
    5616,
    5652,
    5688,
    5724,
    5766
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
    5802,
    5850
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
    5892
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
    5934
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
    5934
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
    5976
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
    6018,
    5418,
    6054,
    3864,
    6102,
    3948,
    1362,
    6150,
    6192,
    1482,
    6234,
    6276
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
    6312,
    6354,
    6396,
    6438,
    6492
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
    6528
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
    6570
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
    6612,
    6666,
    6714,
    6768,
    6816,
    6864,
    6906,
    6948,
    6990,
    7032,
    7080,
    6276,
    7122,
    7164,
    7200,
    7248,
    7290,
    7332,
    7368,
    7410,
    7446,
    7488,
    7524,
    7572,
    7614
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
    7656
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
    7698,
    7740,
    3822,
    7788,
    7836,
    7878,
    3990
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
    7926
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
    7974,
    96,
    6396,
    8022,
    8058,
    3354
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
    8100
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
    7974,
    96,
    6396,
    8022,
    8058,
    3354
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
    8142
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
    6312,
    5418,
    6396,
    8022,
    8058,
    3354
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
    8184
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
    7974,
    96,
    6396,
    8022
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
    8226
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
    6312,
    5418,
    6396,
    8022,
    8058,
    3354,
    8268,
    3426
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
    8310
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
    3210,
    5418
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
    8352
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
    8394,
    8436,
    8478,
    8520,
    8562,
    8604,
    8646,
    8688,
    8730
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
    3744,
    540,
    8772,
    8808
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
    8844,
    8880,
    8916,
    8952
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
    8988,
    9024
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
    9060,
    9096
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
    9132,
    9168
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
    9204,
    9240
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
    9276,
    9312
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
    9348,
    9384
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
    9420,
    9474,
    9522
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
    3210,
    8844,
    9570,
    612,
    9606,
    9654,
    9696,
    9750,
    9798,
    9834,
    9870
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
    9906,
    9936
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
    9966
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
    10008
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
    10044
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
    10044,
    10092
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
    9966
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
    10128,
    10164,
    576,
    10200,
    5616,
    10236,
    5688,
    10272,
    10308,
    10344,
    10380,
    10416,
    10452,
    10488,
    10524,
    10560,
    10596,
    10632,
    10668,
    10704,
    10740,
    10776,
    10812,
    10848
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
    3210,
    8844,
    1200,
    10884,
    10920,
    10962,
    11004,
    11046,
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
    11088,
    8844,
    11124,
    3282,
    11160,
    11196,
    11232,
    11268,
    11304,
    11340,
    11376,
    11412,
    11448,
    7164,
    4356,
    11484,
    1758,
    11520,
    11568
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
    11616
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
    11658,
    9936,
    11700,
    11736,
    11772,
    11808,
    11850
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
    6018,
    11886,
    11928,
    11970
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

