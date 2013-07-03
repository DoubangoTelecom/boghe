

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Tue Jul 02 10:55:47 2013
 */
/* Compiler settings for C:\Users\mamadou\AppData\Local\Temp\doubango_rt.BackEnd.OutOfProcess.idl-d88c7030:
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


#include "doubango_rt.BackEnd.OutOfProcess.h"

#define TYPE_FORMAT_STRING_SIZE   485                               
#define PROC_FORMAT_STRING_SIZE   837                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _doubango_rt2EBackEnd2EOutOfProcess_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } doubango_rt2EBackEnd2EOutOfProcess_MIDL_TYPE_FORMAT_STRING;

typedef struct _doubango_rt2EBackEnd2EOutOfProcess_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } doubango_rt2EBackEnd2EOutOfProcess_MIDL_PROC_FORMAT_STRING;

typedef struct _doubango_rt2EBackEnd2EOutOfProcess_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } doubango_rt2EBackEnd2EOutOfProcess_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const doubango_rt2EBackEnd2EOutOfProcess_MIDL_TYPE_FORMAT_STRING doubango_rt2EBackEnd2EOutOfProcess__MIDL_TypeFormatString;
extern const doubango_rt2EBackEnd2EOutOfProcess_MIDL_PROC_FORMAT_STRING doubango_rt2EBackEnd2EOutOfProcess__MIDL_ProcFormatString;
extern const doubango_rt2EBackEnd2EOutOfProcess_MIDL_EXPR_FORMAT_STRING doubango_rt2EBackEnd2EOutOfProcess__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_ProxyInfo;


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


static const doubango_rt2EBackEnd2EOutOfProcess_MIDL_PROC_FORMAT_STRING doubango_rt2EBackEnd2EOutOfProcess__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_Globals */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x6 ),	/* 6 */
/*  8 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x2 ),	/* 2 */
/* 26 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 28 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 30 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 32 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 34 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipService */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x7 ),	/* 7 */
/* 50 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 58 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x2 ),	/* 2 */
/* 68 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 70 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 72 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 74 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 76 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtSipStackNew */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 100 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x6 ),	/* 6 */
/* 110 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 112 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 114 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 116 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter callback */

/* 118 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 120 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 122 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter realmUri */

/* 124 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 126 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 128 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter impiString */

/* 130 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 132 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 134 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter impuUri */

/* 136 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 138 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 140 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter __returnValue */

/* 142 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 144 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 146 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 150 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtSipCallbackNew */

/* 154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x9 ),	/* 9 */
/* 162 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 170 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x3 ),	/* 3 */
/* 180 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 182 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter callback */

/* 184 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 186 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 188 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 190 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 192 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 194 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 198 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtDDebugCallbackNew */

/* 202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0xa ),	/* 10 */
/* 210 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 216 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 218 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x3 ),	/* 3 */
/* 228 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 230 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter callback */

/* 232 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 234 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 236 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter __returnValue */

/* 238 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 240 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 242 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 246 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtT140CallbackNew */

/* 250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0xb ),	/* 11 */
/* 258 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 264 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 266 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x3 ),	/* 3 */
/* 276 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 278 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter callback */

/* 280 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 282 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 284 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter __returnValue */

/* 286 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 288 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 290 */	NdrFcShort( 0xca ),	/* Type Offset=202 */

	/* Return value */

/* 292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 294 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtMsrpCallbackNew */

/* 298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0xc ),	/* 12 */
/* 306 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 312 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 314 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x3 ),	/* 3 */
/* 324 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 326 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter callback */

/* 328 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 330 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 332 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Parameter __returnValue */

/* 334 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 336 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 338 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Return value */

/* 340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 342 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtRegistrationSessionNew */

/* 346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0xd ),	/* 13 */
/* 354 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 360 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 362 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x3 ),	/* 3 */
/* 372 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 374 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter stack */

/* 376 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 378 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 380 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter __returnValue */

/* 382 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 384 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 386 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Return value */

/* 388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 390 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtMessagingSessionNew */

/* 394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0xe ),	/* 14 */
/* 402 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 408 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 410 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x3 ),	/* 3 */
/* 420 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 422 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter stack */

/* 424 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 426 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 428 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter __returnValue */

/* 430 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 432 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 434 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 438 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtInfoSessionNew */

/* 442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0xf ),	/* 15 */
/* 450 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 456 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 458 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x3 ),	/* 3 */
/* 468 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 470 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter stack */

/* 472 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 474 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 476 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter __returnValue */

/* 478 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 480 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 482 */	NdrFcShort( 0x134 ),	/* Type Offset=308 */

	/* Return value */

/* 484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 486 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtOptionsSessionNew */

/* 490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x10 ),	/* 16 */
/* 498 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 504 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 506 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x3 ),	/* 3 */
/* 516 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 518 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter stack */

/* 520 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 522 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 524 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter __returnValue */

/* 526 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 528 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 530 */	NdrFcShort( 0x14a ),	/* Type Offset=330 */

	/* Return value */

/* 532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 534 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtPublicationSessionNew */

/* 538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x11 ),	/* 17 */
/* 546 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 552 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 554 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x3 ),	/* 3 */
/* 564 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 566 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter stack */

/* 568 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 570 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 572 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter __returnValue */

/* 574 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 576 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 578 */	NdrFcShort( 0x160 ),	/* Type Offset=352 */

	/* Return value */

/* 580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 582 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtSubscriptionSessionNew */

/* 586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x12 ),	/* 18 */
/* 594 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 600 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 602 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x3 ),	/* 3 */
/* 612 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 614 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter stack */

/* 616 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 618 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 620 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter __returnValue */

/* 622 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 624 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 626 */	NdrFcShort( 0x176 ),	/* Type Offset=374 */

	/* Return value */

/* 628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 630 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtCallSessionNew */

/* 634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x13 ),	/* 19 */
/* 642 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 648 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 650 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x3 ),	/* 3 */
/* 660 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 662 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter stack */

/* 664 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 666 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 668 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter __returnValue */

/* 670 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 672 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 674 */	NdrFcShort( 0x18c ),	/* Type Offset=396 */

	/* Return value */

/* 676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 678 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtMsrpSessionNew */

/* 682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x14 ),	/* 20 */
/* 690 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 696 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 698 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x4 ),	/* 4 */
/* 708 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 710 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 712 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter stack */

/* 714 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 716 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 718 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter callback */

/* 720 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 722 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 724 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Parameter __returnValue */

/* 726 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 728 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 730 */	NdrFcShort( 0x1a2 ),	/* Type Offset=418 */

	/* Return value */

/* 732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 734 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtSipUriNew */

/* 738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x15 ),	/* 21 */
/* 746 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 752 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 754 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x4 ),	/* 4 */
/* 764 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 766 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 768 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter uriString */

/* 770 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 772 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 774 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter displayName */

/* 776 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 778 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 780 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter __returnValue */

/* 782 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 784 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 786 */	NdrFcShort( 0x1b8 ),	/* Type Offset=440 */

	/* Return value */

/* 788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 790 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rtActionConfigNew */

/* 794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x16 ),	/* 22 */
/* 802 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 808 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 810 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x2 ),	/* 2 */
/* 820 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 822 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 824 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 826 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 828 */	NdrFcShort( 0x1ce ),	/* Type Offset=462 */

	/* Return value */

/* 830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 832 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const doubango_rt2EBackEnd2EOutOfProcess_MIDL_TYPE_FORMAT_STRING doubango_rt2EBackEnd2EOutOfProcess__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  8 */	NdrFcLong( 0x2f22cc8a ),	/* 790809738 */
/* 12 */	NdrFcShort( 0x1fa9 ),	/* 8105 */
/* 14 */	NdrFcShort( 0x3ef8 ),	/* 16120 */
/* 16 */	0xbd,		/* 189 */
			0x69,		/* 105 */
/* 18 */	0xa1,		/* 161 */
			0xb6,		/* 182 */
/* 20 */	0x1a,		/* 26 */
			0x69,		/* 105 */
/* 22 */	0x6f,		/* 111 */
			0x3c,		/* 60 */
/* 24 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 26 */	NdrFcShort( 0x2 ),	/* Offset= 2 (28) */
/* 28 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 30 */	NdrFcLong( 0xcc5b3c10 ),	/* -866436080 */
/* 34 */	NdrFcShort( 0x588d ),	/* 22669 */
/* 36 */	NdrFcShort( 0x37c4 ),	/* 14276 */
/* 38 */	0x81,		/* 129 */
			0x8a,		/* 138 */
/* 40 */	0x97,		/* 151 */
			0xdd,		/* 221 */
/* 42 */	0xa8,		/* 168 */
			0xc1,		/* 193 */
/* 44 */	0xd5,		/* 213 */
			0xdc,		/* 220 */
/* 46 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 48 */	NdrFcLong( 0xb210dd33 ),	/* -1307517645 */
/* 52 */	NdrFcShort( 0xa6a6 ),	/* -22874 */
/* 54 */	NdrFcShort( 0x34a8 ),	/* 13480 */
/* 56 */	0xa9,		/* 169 */
			0x6a,		/* 106 */
/* 58 */	0xef,		/* 239 */
			0xac,		/* 172 */
/* 60 */	0x9d,		/* 157 */
			0xb,		/* 11 */
/* 62 */	0x8d,		/* 141 */
			0xba,		/* 186 */
/* 64 */	
			0x12, 0x0,	/* FC_UP */
/* 66 */	NdrFcShort( 0xe ),	/* Offset= 14 (80) */
/* 68 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 70 */	NdrFcShort( 0x2 ),	/* 2 */
/* 72 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 74 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 76 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 78 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 80 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 82 */	NdrFcShort( 0x8 ),	/* 8 */
/* 84 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (68) */
/* 86 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 88 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 90 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x4 ),	/* 4 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0xffde ),	/* Offset= -34 (64) */
/* 100 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (104) */
/* 104 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 106 */	NdrFcLong( 0x31ac4c99 ),	/* 833375385 */
/* 110 */	NdrFcShort( 0x4fe9 ),	/* 20457 */
/* 112 */	NdrFcShort( 0x3cce ),	/* 15566 */
/* 114 */	0x89,		/* 137 */
			0xb5,		/* 181 */
/* 116 */	0xc,		/* 12 */
			0x27,		/* 39 */
/* 118 */	0x50,		/* 80 */
			0xcc,		/* 204 */
/* 120 */	0xee,		/* 238 */
			0xa7,		/* 167 */
/* 122 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 124 */	NdrFcShort( 0x2 ),	/* Offset= 2 (126) */
/* 126 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 128 */	NdrFcLong( 0xf6f4ff9e ),	/* -151715938 */
/* 132 */	NdrFcShort( 0x6bc ),	/* 1724 */
/* 134 */	NdrFcShort( 0x3929 ),	/* 14633 */
/* 136 */	0xba,		/* 186 */
			0xea,		/* 234 */
/* 138 */	0x6f,		/* 111 */
			0x7f,		/* 127 */
/* 140 */	0xa4,		/* 164 */
			0x40,		/* 64 */
/* 142 */	0x13,		/* 19 */
			0xfe,		/* 254 */
/* 144 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 146 */	NdrFcLong( 0xea0b2968 ),	/* -368367256 */
/* 150 */	NdrFcShort( 0x7ad4 ),	/* 31444 */
/* 152 */	NdrFcShort( 0x3d5c ),	/* 15708 */
/* 154 */	0xaa,		/* 170 */
			0xd3,		/* 211 */
/* 156 */	0x2a,		/* 42 */
			0xef,		/* 239 */
/* 158 */	0xb3,		/* 179 */
			0xac,		/* 172 */
/* 160 */	0xd2,		/* 210 */
			0xe7,		/* 231 */
/* 162 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 168 */	NdrFcLong( 0xf8bb64e3 ),	/* -121936669 */
/* 172 */	NdrFcShort( 0x54a8 ),	/* 21672 */
/* 174 */	NdrFcShort( 0x3060 ),	/* 12384 */
/* 176 */	0x93,		/* 147 */
			0x10,		/* 16 */
/* 178 */	0xd,		/* 13 */
			0x73,		/* 115 */
/* 180 */	0xb4,		/* 180 */
			0xc5,		/* 197 */
/* 182 */	0xd4,		/* 212 */
			0x23,		/* 35 */
/* 184 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 186 */	NdrFcLong( 0xfbc56ee2 ),	/* -70947102 */
/* 190 */	NdrFcShort( 0x7375 ),	/* 29557 */
/* 192 */	NdrFcShort( 0x3f53 ),	/* 16211 */
/* 194 */	0x91,		/* 145 */
			0xd3,		/* 211 */
/* 196 */	0x85,		/* 133 */
			0x30,		/* 48 */
/* 198 */	0x79,		/* 121 */
			0x19,		/* 25 */
/* 200 */	0x31,		/* 49 */
			0x84,		/* 132 */
/* 202 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 204 */	NdrFcShort( 0x2 ),	/* Offset= 2 (206) */
/* 206 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 208 */	NdrFcLong( 0x540329e3 ),	/* 1409493475 */
/* 212 */	NdrFcShort( 0x8dd6 ),	/* -29226 */
/* 214 */	NdrFcShort( 0x391c ),	/* 14620 */
/* 216 */	0x9e,		/* 158 */
			0xbd,		/* 189 */
/* 218 */	0x4d,		/* 77 */
			0x73,		/* 115 */
/* 220 */	0x8e,		/* 142 */
			0x1c,		/* 28 */
/* 222 */	0x4,		/* 4 */
			0xf0,		/* 240 */
/* 224 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 226 */	NdrFcLong( 0xbd3cc691 ),	/* -1120090479 */
/* 230 */	NdrFcShort( 0xdaaf ),	/* -9553 */
/* 232 */	NdrFcShort( 0x35dd ),	/* 13789 */
/* 234 */	0x9c,		/* 156 */
			0xda,		/* 218 */
/* 236 */	0x24,		/* 36 */
			0x2b,		/* 43 */
/* 238 */	0x70,		/* 112 */
			0xbd,		/* 189 */
/* 240 */	0xf5,		/* 245 */
			0xdc,		/* 220 */
/* 242 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 244 */	NdrFcShort( 0x2 ),	/* Offset= 2 (246) */
/* 246 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 248 */	NdrFcLong( 0x38a8b79d ),	/* 950581149 */
/* 252 */	NdrFcShort( 0x5679 ),	/* 22137 */
/* 254 */	NdrFcShort( 0x3af4 ),	/* 15092 */
/* 256 */	0xbd,		/* 189 */
			0x1c,		/* 28 */
/* 258 */	0xd2,		/* 210 */
			0x7d,		/* 125 */
/* 260 */	0xe0,		/* 224 */
			0x49,		/* 73 */
/* 262 */	0x4b,		/* 75 */
			0x1d,		/* 29 */
/* 264 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 266 */	NdrFcShort( 0x2 ),	/* Offset= 2 (268) */
/* 268 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 270 */	NdrFcLong( 0xd34b80f8 ),	/* -750026504 */
/* 274 */	NdrFcShort( 0x410c ),	/* 16652 */
/* 276 */	NdrFcShort( 0x3a42 ),	/* 14914 */
/* 278 */	0xaa,		/* 170 */
			0x6,		/* 6 */
/* 280 */	0x29,		/* 41 */
			0x6e,		/* 110 */
/* 282 */	0xb6,		/* 182 */
			0xa8,		/* 168 */
/* 284 */	0xe2,		/* 226 */
			0xb1,		/* 177 */
/* 286 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 288 */	NdrFcShort( 0x2 ),	/* Offset= 2 (290) */
/* 290 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 292 */	NdrFcLong( 0xaaca3593 ),	/* -1429588589 */
/* 296 */	NdrFcShort( 0xcefb ),	/* -12549 */
/* 298 */	NdrFcShort( 0x373e ),	/* 14142 */
/* 300 */	0xa2,		/* 162 */
			0x29,		/* 41 */
/* 302 */	0x85,		/* 133 */
			0x3c,		/* 60 */
/* 304 */	0x78,		/* 120 */
			0xad,		/* 173 */
/* 306 */	0x59,		/* 89 */
			0x21,		/* 33 */
/* 308 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 310 */	NdrFcShort( 0x2 ),	/* Offset= 2 (312) */
/* 312 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 314 */	NdrFcLong( 0x6a30534c ),	/* 1781551948 */
/* 318 */	NdrFcShort( 0x9226 ),	/* -28122 */
/* 320 */	NdrFcShort( 0x3450 ),	/* 13392 */
/* 322 */	0x86,		/* 134 */
			0x1f,		/* 31 */
/* 324 */	0x8d,		/* 141 */
			0x92,		/* 146 */
/* 326 */	0xe2,		/* 226 */
			0x41,		/* 65 */
/* 328 */	0xd6,		/* 214 */
			0x11,		/* 17 */
/* 330 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 332 */	NdrFcShort( 0x2 ),	/* Offset= 2 (334) */
/* 334 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 336 */	NdrFcLong( 0x7aa94f17 ),	/* 2057916183 */
/* 340 */	NdrFcShort( 0xfbeb ),	/* -1045 */
/* 342 */	NdrFcShort( 0x3fac ),	/* 16300 */
/* 344 */	0x92,		/* 146 */
			0xed,		/* 237 */
/* 346 */	0x89,		/* 137 */
			0x8f,		/* 143 */
/* 348 */	0xb9,		/* 185 */
			0xf4,		/* 244 */
/* 350 */	0xed,		/* 237 */
			0xc7,		/* 199 */
/* 352 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 354 */	NdrFcShort( 0x2 ),	/* Offset= 2 (356) */
/* 356 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 358 */	NdrFcLong( 0x8d8bfb47 ),	/* -1920206009 */
/* 362 */	NdrFcShort( 0xbe91 ),	/* -16751 */
/* 364 */	NdrFcShort( 0x3e55 ),	/* 15957 */
/* 366 */	0xad,		/* 173 */
			0x42,		/* 66 */
/* 368 */	0x51,		/* 81 */
			0xa6,		/* 166 */
/* 370 */	0xf8,		/* 248 */
			0xe0,		/* 224 */
/* 372 */	0x19,		/* 25 */
			0xa,		/* 10 */
/* 374 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 376 */	NdrFcShort( 0x2 ),	/* Offset= 2 (378) */
/* 378 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 380 */	NdrFcLong( 0xe3f89f64 ),	/* -470245532 */
/* 384 */	NdrFcShort( 0xb94a ),	/* -18102 */
/* 386 */	NdrFcShort( 0x368b ),	/* 13963 */
/* 388 */	0x90,		/* 144 */
			0x82,		/* 130 */
/* 390 */	0x93,		/* 147 */
			0xaf,		/* 175 */
/* 392 */	0x84,		/* 132 */
			0xf8,		/* 248 */
/* 394 */	0xbb,		/* 187 */
			0x1f,		/* 31 */
/* 396 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 398 */	NdrFcShort( 0x2 ),	/* Offset= 2 (400) */
/* 400 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 402 */	NdrFcLong( 0x7d605cc9 ),	/* 2103467209 */
/* 406 */	NdrFcShort( 0x6ff4 ),	/* 28660 */
/* 408 */	NdrFcShort( 0x3d58 ),	/* 15704 */
/* 410 */	0x99,		/* 153 */
			0x76,		/* 118 */
/* 412 */	0xf2,		/* 242 */
			0x3c,		/* 60 */
/* 414 */	0x30,		/* 48 */
			0xd4,		/* 212 */
/* 416 */	0xae,		/* 174 */
			0xd5,		/* 213 */
/* 418 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 420 */	NdrFcShort( 0x2 ),	/* Offset= 2 (422) */
/* 422 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 424 */	NdrFcLong( 0x746afeab ),	/* 1953169067 */
/* 428 */	NdrFcShort( 0x72 ),	/* 114 */
/* 430 */	NdrFcShort( 0x38fe ),	/* 14590 */
/* 432 */	0xb1,		/* 177 */
			0xa7,		/* 167 */
/* 434 */	0x21,		/* 33 */
			0x77,		/* 119 */
/* 436 */	0xb,		/* 11 */
			0xe6,		/* 230 */
/* 438 */	0x4a,		/* 74 */
			0x4a,		/* 74 */
/* 440 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 442 */	NdrFcShort( 0x2 ),	/* Offset= 2 (444) */
/* 444 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 446 */	NdrFcLong( 0x357645ec ),	/* 896943596 */
/* 450 */	NdrFcShort( 0x98bf ),	/* -26433 */
/* 452 */	NdrFcShort( 0x3baf ),	/* 15279 */
/* 454 */	0x8b,		/* 139 */
			0x97,		/* 151 */
/* 456 */	0x33,		/* 51 */
			0x38,		/* 56 */
/* 458 */	0x78,		/* 120 */
			0x33,		/* 51 */
/* 460 */	0x97,		/* 151 */
			0xcb,		/* 203 */
/* 462 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 464 */	NdrFcShort( 0x2 ),	/* Offset= 2 (466) */
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



/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd2EOutOfProcess_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IInspectable, ver. 0.0,
   GUID={0xAF86E2E0,0xB12D,0x4c6a,{0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals, ver. 0.0,
   GUID={0xE4EA5621,0xE41B,0x3A0B,{0x8F,0xBD,0xC2,0x85,0x1F,0x74,0x54,0xFC}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    42,
    84,
    154,
    202,
    250,
    298,
    346,
    394,
    442,
    490,
    538,
    586,
    634,
    682,
    738,
    794
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd2EOutOfProcess__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd2EOutOfProcess__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) ___x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::get_Globals */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::get_SipService */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtSipStackNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtSipCallbackNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtDDebugCallbackNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtT140CallbackNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtMsrpCallbackNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtRegistrationSessionNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtMessagingSessionNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtInfoSessionNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtOptionsSessionNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtPublicationSessionNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtSubscriptionSessionNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtCallSessionNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtMsrpSessionNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtSipUriNew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals::rtActionConfigNew */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_table[] =
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
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_ServerInfo,
    23,
    &__x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd2EOutOfProcess_0000_0001, ver. 0.0,
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
    doubango_rt2EBackEnd2EOutOfProcess__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _doubango_rt2EBackEnd2EOutOfProcess_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtualsProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _doubango_rt2EBackEnd2EOutOfProcess_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtualsStubVtbl,
    0
};

PCInterfaceName const _doubango_rt2EBackEnd2EOutOfProcess_InterfaceNamesList[] = 
{
    "__x_ABI_Cdoubango__rt_CBackEnd_COutOfProcess_C____IServerPublicNonVirtuals",
    0
};

const IID *  const _doubango_rt2EBackEnd2EOutOfProcess_BaseIIDList[] = 
{
    &IID_IInspectable,
    0
};


#define _doubango_rt2EBackEnd2EOutOfProcess_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _doubango_rt2EBackEnd2EOutOfProcess, pIID, n)

int __stdcall _doubango_rt2EBackEnd2EOutOfProcess_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_doubango_rt2EBackEnd2EOutOfProcess_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo doubango_rt2EBackEnd2EOutOfProcess_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _doubango_rt2EBackEnd2EOutOfProcess_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _doubango_rt2EBackEnd2EOutOfProcess_StubVtblList,
    (const PCInterfaceName * ) & _doubango_rt2EBackEnd2EOutOfProcess_InterfaceNamesList,
    (const IID ** ) & _doubango_rt2EBackEnd2EOutOfProcess_BaseIIDList,
    & _doubango_rt2EBackEnd2EOutOfProcess_IID_Lookup, 
    1,
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

