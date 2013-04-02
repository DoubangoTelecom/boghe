

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Tue Apr 02 23:40:11 2013
 */
/* Compiler settings for C:\Users\mamadou\AppData\Local\Temp\doubango_rt.BackEnd.OutOfProcess.idl-96bd5458:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __doubango_rt2EBackEnd2EOutOfProcess_h__
#define __doubango_rt2EBackEnd2EOutOfProcess_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_FWD_DEFINED__
#define ____x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_FWD_DEFINED__
typedef interface __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals;

#ifdef __cplusplus
namespace ABI {
    namespace doubango_rt {
        namespace BackEnd {
            namespace OutOfProcess {
                interface __IServerPublicNonVirtuals;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "doubango_rt.BackEnd.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_doubango_rt2EBackEnd2EOutOfProcess_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__doubango_rt2Ebackend_h__)
#include <doubango_rt.BackEnd.h>
#endif // !defined(__doubango_rt2Ebackend_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class Globals;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class SipService;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtActionConfig;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtCallSession;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtDDebugCallback;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif





#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtInfoSession;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtMessagingSession;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtMsrpCallback;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtMsrpSession;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtOptionsSession;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtPublicationSession;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtRegistrationSession;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtSipCallback;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtSipStack;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtSipUri;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtSubscriptionSession;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
class rtT140Callback;
} /*BackEnd*/
} /*doubango_rt*/
}
#endif


#ifdef __cplusplus
namespace ABI {
namespace doubango_rt {
namespace BackEnd {
namespace OutOfProcess {
class Server;
} /*OutOfProcess*/
} /*BackEnd*/
} /*doubango_rt*/
}
#endif
#if !defined(____x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_doubango_rt_BackEnd_OutOfProcess___IServerPublicNonVirtuals[] = L"doubango_rt.BackEnd.OutOfProcess.__IServerPublicNonVirtuals";
#endif /* !defined(____x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_doubango_rt2EBackEnd2EOutOfProcess_0000_0000 */
/* [local] */ 

























extern RPC_IF_HANDLE __MIDL_itf_doubango_rt2EBackEnd2EOutOfProcess_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_doubango_rt2EBackEnd2EOutOfProcess_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_INTERFACE_DEFINED__
#define ____x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_INTERFACE_DEFINED__

/* interface __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals */
/* [uuid][object] */ 



/* interface ABI::doubango_rt::BackEnd::OutOfProcess::__IServerPublicNonVirtuals */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace doubango_rt {
            namespace BackEnd {
                namespace OutOfProcess {
                    
                    MIDL_INTERFACE("E4EA5621-E41B-3A0B-8FBD-C2851F7454FC")
                    __IServerPublicNonVirtuals : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Globals( 
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IGlobalsPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SipService( 
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__ISipServicePublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtSipStackNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::rtISipCallback *callback,
                            /* [in] */ HSTRING realmUri,
                            /* [in] */ HSTRING impiString,
                            /* [in] */ HSTRING impuUri,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtSipStackPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtSipCallbackNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::rtISipCallback *callback,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtSipCallbackPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtDDebugCallbackNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::rtIDDebugCallback *callback,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtDDebugCallbackPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtT140CallbackNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::rtIT140Callback *callback,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtT140CallbackProtectedVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtMsrpCallbackNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::rtIMsrpCallback *callback,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtMsrpCallbackPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtRegistrationSessionNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::__IrtSipStackPublicNonVirtuals *stack,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtRegistrationSessionPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtMessagingSessionNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::__IrtSipStackPublicNonVirtuals *stack,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtMessagingSessionPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtInfoSessionNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::__IrtSipStackPublicNonVirtuals *stack,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtInfoSessionPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtOptionsSessionNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::__IrtSipStackPublicNonVirtuals *stack,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtOptionsSessionPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtPublicationSessionNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::__IrtSipStackPublicNonVirtuals *stack,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtPublicationSessionPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtSubscriptionSessionNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::__IrtSipStackPublicNonVirtuals *stack,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtSubscriptionSessionPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtCallSessionNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::__IrtSipStackPublicNonVirtuals *stack,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtCallSessionPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtMsrpSessionNew( 
                            /* [in] */ ABI::doubango_rt::BackEnd::__IrtSipStackPublicNonVirtuals *stack,
                            /* [in] */ ABI::doubango_rt::BackEnd::rtIMsrpCallback *callback,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtMsrpSessionPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtSipUriNew( 
                            /* [in] */ HSTRING uriString,
                            /* [in] */ HSTRING displayName,
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtSipUriPublicNonVirtuals **__returnValue) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE rtActionConfigNew( 
                            /* [out][retval] */ ABI::doubango_rt::BackEnd::__IrtActionConfigPublicNonVirtuals **__returnValue) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID___IServerPublicNonVirtuals = __uuidof(__IServerPublicNonVirtuals);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtualsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Globals )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals **__returnValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SipService )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtSipStackNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback *callback,
            /* [in] */ HSTRING realmUri,
            /* [in] */ HSTRING impiString,
            /* [in] */ HSTRING impuUri,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtSipCallbackNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback *callback,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtDDebugCallbackNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback *callback,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtT140CallbackNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback *callback,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtMsrpCallbackNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback *callback,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtRegistrationSessionNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals *stack,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtMessagingSessionNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals *stack,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtInfoSessionNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals *stack,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtOptionsSessionNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals *stack,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtPublicationSessionNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals *stack,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtSubscriptionSessionNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals *stack,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtCallSessionNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals *stack,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtMsrpSessionNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals *stack,
            /* [in] */ __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback *callback,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtSipUriNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [in] */ HSTRING uriString,
            /* [in] */ HSTRING displayName,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals **__returnValue);
        
        HRESULT ( STDMETHODCALLTYPE *rtActionConfigNew )( 
            __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals * This,
            /* [out][retval] */ __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals **__returnValue);
        
        END_INTERFACE
    } __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtualsVtbl;

    interface __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals
    {
        CONST_VTBL struct __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtualsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_get_Globals(This,__returnValue)	\
    ( (This)->lpVtbl -> get_Globals(This,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_get_SipService(This,__returnValue)	\
    ( (This)->lpVtbl -> get_SipService(This,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtSipStackNew(This,callback,realmUri,impiString,impuUri,__returnValue)	\
    ( (This)->lpVtbl -> rtSipStackNew(This,callback,realmUri,impiString,impuUri,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtSipCallbackNew(This,callback,__returnValue)	\
    ( (This)->lpVtbl -> rtSipCallbackNew(This,callback,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtDDebugCallbackNew(This,callback,__returnValue)	\
    ( (This)->lpVtbl -> rtDDebugCallbackNew(This,callback,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtT140CallbackNew(This,callback,__returnValue)	\
    ( (This)->lpVtbl -> rtT140CallbackNew(This,callback,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtMsrpCallbackNew(This,callback,__returnValue)	\
    ( (This)->lpVtbl -> rtMsrpCallbackNew(This,callback,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtRegistrationSessionNew(This,stack,__returnValue)	\
    ( (This)->lpVtbl -> rtRegistrationSessionNew(This,stack,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtMessagingSessionNew(This,stack,__returnValue)	\
    ( (This)->lpVtbl -> rtMessagingSessionNew(This,stack,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtInfoSessionNew(This,stack,__returnValue)	\
    ( (This)->lpVtbl -> rtInfoSessionNew(This,stack,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtOptionsSessionNew(This,stack,__returnValue)	\
    ( (This)->lpVtbl -> rtOptionsSessionNew(This,stack,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtPublicationSessionNew(This,stack,__returnValue)	\
    ( (This)->lpVtbl -> rtPublicationSessionNew(This,stack,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtSubscriptionSessionNew(This,stack,__returnValue)	\
    ( (This)->lpVtbl -> rtSubscriptionSessionNew(This,stack,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtCallSessionNew(This,stack,__returnValue)	\
    ( (This)->lpVtbl -> rtCallSessionNew(This,stack,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtMsrpSessionNew(This,stack,callback,__returnValue)	\
    ( (This)->lpVtbl -> rtMsrpSessionNew(This,stack,callback,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtSipUriNew(This,uriString,displayName,__returnValue)	\
    ( (This)->lpVtbl -> rtSipUriNew(This,uriString,displayName,__returnValue) ) 

#define __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_rtActionConfigNew(This,__returnValue)	\
    ( (This)->lpVtbl -> rtActionConfigNew(This,__returnValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_doubango_rt2EBackEnd2EOutOfProcess_0000_0001 */
/* [local] */ 

#ifndef RUNTIMECLASS_doubango_rt_BackEnd_OutOfProcess_Server_DEFINED
#define RUNTIMECLASS_doubango_rt_BackEnd_OutOfProcess_Server_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_doubango_rt_BackEnd_OutOfProcess_Server[] = L"doubango_rt.BackEnd.OutOfProcess.Server";
#endif


/* interface __MIDL_itf_doubango_rt2EBackEnd2EOutOfProcess_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_doubango_rt2EBackEnd2EOutOfProcess_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_doubango_rt2EBackEnd2EOutOfProcess_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     unsigned long *, unsigned long            , HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  unsigned long *, unsigned char *, HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(unsigned long *, unsigned char *, HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     unsigned long *, HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


