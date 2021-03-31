

/* this ALWAYS GENERATED file contains the definitions for the interfaces */

/* File created by MIDL compiler version 8.00.0603 */
/* at Thu Aug 17 21:36:53 2017
 */
/* Compiler settings for C:\Users\Witalia\AppData\Local\Temp\NetUX.idl-14959202:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning(disable : 4049) /* more than 64k source lines */

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

#ifndef __NetUX_h__
#define __NetUX_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */

#ifndef ____x_NetUX_CINetUXCtrl_FWD_DEFINED__
#define ____x_NetUX_CINetUXCtrl_FWD_DEFINED__
typedef interface __x_NetUX_CINetUXCtrl __x_NetUX_CINetUXCtrl;

#ifdef __cplusplus
namespace NetUX
{
    interface INetUXCtrl;
} /* end namespace */

#endif /* __cplusplus */

#endif /* ____x_NetUX_CINetUXCtrl_FWD_DEFINED__ */

/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "inspectable.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* interface __MIDL_itf_NetUX_0000_0000 */
    /* [local] */

#if !defined(____x_NetUX_CINetUXCtrl_INTERFACE_DEFINED__)
    extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_NetUX_INetUXCtrl[] = L"NetUX.INetUXCtrl";
#endif /* !defined(____x_NetUX_CINetUXCtrl_INTERFACE_DEFINED__) */

    /* interface __MIDL_itf_NetUX_0000_0000 */
    /* [local] */

    extern RPC_IF_HANDLE __MIDL_itf_NetUX_0000_0000_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_NetUX_0000_0000_v0_0_s_ifspec;

#ifndef ____x_NetUX_CINetUXCtrl_INTERFACE_DEFINED__
#define ____x_NetUX_CINetUXCtrl_INTERFACE_DEFINED__

    /* interface __x_NetUX_CINetUXCtrl */
    /* [uuid][object] */

    /* interface NetUX::INetUXCtrl */
    /* [uuid][object] */

    EXTERN_C const IID IID___x_NetUX_CINetUXCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* end extern "C" */
namespace NetUX
{

    MIDL_INTERFACE("484F1C82-049E-41D8-983B-3B28BCD50F43")
    INetUXCtrl : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Show(void) = 0;
    };

    extern const __declspec(selectany) IID &IID_INetUXCtrl = __uuidof(INetUXCtrl);

} /* end namespace */
extern "C"
{

#else /* C style interface */

    typedef struct __x_NetUX_CINetUXCtrlVtbl
    {
        BEGIN_INTERFACE

        HRESULT(STDMETHODCALLTYPE *QueryInterface)
        (
            __x_NetUX_CINetUXCtrl *This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */
            _COM_Outptr_ void **ppvObject);

        ULONG(STDMETHODCALLTYPE *AddRef)
        (
            __x_NetUX_CINetUXCtrl *This);

        ULONG(STDMETHODCALLTYPE *Release)
        (
            __x_NetUX_CINetUXCtrl *This);

        HRESULT(STDMETHODCALLTYPE *GetIids)
        (
            __x_NetUX_CINetUXCtrl *This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);

        HRESULT(STDMETHODCALLTYPE *GetRuntimeClassName)
        (
            __x_NetUX_CINetUXCtrl *This,
            /* [out] */ HSTRING *className);

        HRESULT(STDMETHODCALLTYPE *GetTrustLevel)
        (
            __x_NetUX_CINetUXCtrl *This,
            /* [out] */ TrustLevel *trustLevel);

        HRESULT(STDMETHODCALLTYPE *Show)
        (
            __x_NetUX_CINetUXCtrl *This);

        END_INTERFACE
    } __x_NetUX_CINetUXCtrlVtbl;

    interface __x_NetUX_CINetUXCtrl
    {
        CONST_VTBL struct __x_NetUX_CINetUXCtrlVtbl *lpVtbl;
    };

#ifdef COBJMACROS

#define __x_NetUX_CINetUXCtrl_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_NetUX_CINetUXCtrl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_NetUX_CINetUXCtrl_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_NetUX_CINetUXCtrl_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_NetUX_CINetUXCtrl_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_NetUX_CINetUXCtrl_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_NetUX_CINetUXCtrl_Show(This) \
    ((This)->lpVtbl->Show(This))

#endif /* COBJMACROS */

#endif /* C style interface */

#endif /* ____x_NetUX_CINetUXCtrl_INTERFACE_DEFINED__ */

    /* interface __MIDL_itf_NetUX_0000_0001 */
    /* [local] */

#ifdef __cplusplus
    namespace NetUX
    {
        class NetUXCtrl;
    } /*NetUX*/
#endif

#ifndef RUNTIMECLASS_NetUX_NetUXCtrl_DEFINED
#define RUNTIMECLASS_NetUX_NetUXCtrl_DEFINED
    extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_NetUX_NetUXCtrl[] = L"NetUX.NetUXCtrl";
#endif

    /* interface __MIDL_itf_NetUX_0000_0001 */
    /* [local] */

    extern RPC_IF_HANDLE __MIDL_itf_NetUX_0000_0001_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_NetUX_0000_0001_v0_0_s_ifspec;

    /* Additional Prototypes for ALL interfaces */

    /* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
