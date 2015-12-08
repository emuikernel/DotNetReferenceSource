

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0601 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
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

#ifndef __langproject_h__
#define __langproject_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ILangProject_FWD_DEFINED__
#define __ILangProject_FWD_DEFINED__
typedef interface ILangProject ILangProject;

#endif 	/* __ILangProject_FWD_DEFINED__ */


#ifndef __ILangBuildManager_FWD_DEFINED__
#define __ILangBuildManager_FWD_DEFINED__
typedef interface ILangBuildManager ILangBuildManager;

#endif 	/* __ILangBuildManager_FWD_DEFINED__ */


#ifndef __ILangBuildEvents_FWD_DEFINED__
#define __ILangBuildEvents_FWD_DEFINED__
typedef interface ILangBuildEvents ILangBuildEvents;

#endif 	/* __ILangBuildEvents_FWD_DEFINED__ */


#ifndef __ILangCfgManager_FWD_DEFINED__
#define __ILangCfgManager_FWD_DEFINED__
typedef interface ILangCfgManager ILangCfgManager;

#endif 	/* __ILangCfgManager_FWD_DEFINED__ */


#ifndef __ILangReference_FWD_DEFINED__
#define __ILangReference_FWD_DEFINED__
typedef interface ILangReference ILangReference;

#endif 	/* __ILangReference_FWD_DEFINED__ */


#ifndef __IEnumLangReferences_FWD_DEFINED__
#define __IEnumLangReferences_FWD_DEFINED__
typedef interface IEnumLangReferences IEnumLangReferences;

#endif 	/* __IEnumLangReferences_FWD_DEFINED__ */


#ifndef __ILangReferenceManager_FWD_DEFINED__
#define __ILangReferenceManager_FWD_DEFINED__
typedef interface ILangReferenceManager ILangReferenceManager;

#endif 	/* __ILangReferenceManager_FWD_DEFINED__ */


#ifndef __ILangReferenceService_FWD_DEFINED__
#define __ILangReferenceService_FWD_DEFINED__
typedef interface ILangReferenceService ILangReferenceService;

#endif 	/* __ILangReferenceService_FWD_DEFINED__ */


#ifndef __ILangReferenceEvents_FWD_DEFINED__
#define __ILangReferenceEvents_FWD_DEFINED__
typedef interface ILangReferenceEvents ILangReferenceEvents;

#endif 	/* __ILangReferenceEvents_FWD_DEFINED__ */


#ifndef __ILangFileManager_FWD_DEFINED__
#define __ILangFileManager_FWD_DEFINED__
typedef interface ILangFileManager ILangFileManager;

#endif 	/* __ILangFileManager_FWD_DEFINED__ */


#ifndef __ILangTempPEEvents_FWD_DEFINED__
#define __ILangTempPEEvents_FWD_DEFINED__
typedef interface ILangTempPEEvents ILangTempPEEvents;

#endif 	/* __ILangTempPEEvents_FWD_DEFINED__ */


#ifndef __ILangFileEvents_FWD_DEFINED__
#define __ILangFileEvents_FWD_DEFINED__
typedef interface ILangFileEvents ILangFileEvents;

#endif 	/* __ILangFileEvents_FWD_DEFINED__ */


#ifndef __ILangBuildStatusCallback_FWD_DEFINED__
#define __ILangBuildStatusCallback_FWD_DEFINED__
typedef interface ILangBuildStatusCallback ILangBuildStatusCallback;

#endif 	/* __ILangBuildStatusCallback_FWD_DEFINED__ */


#ifndef __ILangPropertyProvideBatchUpdate_FWD_DEFINED__
#define __ILangPropertyProvideBatchUpdate_FWD_DEFINED__
typedef interface ILangPropertyProvideBatchUpdate ILangPropertyProvideBatchUpdate;

#endif 	/* __ILangPropertyProvideBatchUpdate_FWD_DEFINED__ */


#ifndef __ILangCultureStringUtilities_FWD_DEFINED__
#define __ILangCultureStringUtilities_FWD_DEFINED__
typedef interface ILangCultureStringUtilities ILangCultureStringUtilities;

#endif 	/* __ILangCultureStringUtilities_FWD_DEFINED__ */


#ifndef __ILangNativeAssemblyUtilities_FWD_DEFINED__
#define __ILangNativeAssemblyUtilities_FWD_DEFINED__
typedef interface ILangNativeAssemblyUtilities ILangNativeAssemblyUtilities;

#endif 	/* __ILangNativeAssemblyUtilities_FWD_DEFINED__ */


#ifndef __ILangUnmanagedRegistrar_FWD_DEFINED__
#define __ILangUnmanagedRegistrar_FWD_DEFINED__
typedef interface ILangUnmanagedRegistrar ILangUnmanagedRegistrar;

#endif 	/* __ILangUnmanagedRegistrar_FWD_DEFINED__ */


#ifndef __ILangAddReferenceCallback_FWD_DEFINED__
#define __ILangAddReferenceCallback_FWD_DEFINED__
typedef interface ILangAddReferenceCallback ILangAddReferenceCallback;

#endif 	/* __ILangAddReferenceCallback_FWD_DEFINED__ */


#ifndef __ILangInactiveCfgPropertyNotifySink_FWD_DEFINED__
#define __ILangInactiveCfgPropertyNotifySink_FWD_DEFINED__
typedef interface ILangInactiveCfgPropertyNotifySink ILangInactiveCfgPropertyNotifySink;

#endif 	/* __ILangInactiveCfgPropertyNotifySink_FWD_DEFINED__ */


#ifndef __ILangBuildDeleteTaskItems_FWD_DEFINED__
#define __ILangBuildDeleteTaskItems_FWD_DEFINED__
typedef interface ILangBuildDeleteTaskItems ILangBuildDeleteTaskItems;

#endif 	/* __ILangBuildDeleteTaskItems_FWD_DEFINED__ */


#ifndef __ILangBuildTaskItem_FWD_DEFINED__
#define __ILangBuildTaskItem_FWD_DEFINED__
typedef interface ILangBuildTaskItem ILangBuildTaskItem;

#endif 	/* __ILangBuildTaskItem_FWD_DEFINED__ */


#ifndef __ILangBuildTaskCollection_FWD_DEFINED__
#define __ILangBuildTaskCollection_FWD_DEFINED__
typedef interface ILangBuildTaskCollection ILangBuildTaskCollection;

#endif 	/* __ILangBuildTaskCollection_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "oleipc.h"
#include "vsshell.h"
#include "vssolutn.h"
#include "vslangproj.h"
#include "fusion.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_langproject_0000_0000 */
/* [local] */ 























extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0000_v0_0_s_ifspec;

#ifndef __ILangProject_INTERFACE_DEFINED__
#define __ILangProject_INTERFACE_DEFINED__

/* interface ILangProject */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangProject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("122CA7BB-0FBB-11d3-B1FF-00C04F79CACB")
    ILangProject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFileManager( 
            /* [retval][out] */ __RPC__deref_out_opt ILangFileManager **ppFileManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBuildManager( 
            /* [retval][out] */ __RPC__deref_out_opt ILangBuildManager **ppLangBuildManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSolution( 
            /* [retval][out] */ __RPC__deref_out_opt IVsSolution **ppVsSolution) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddBuildDependency( 
            /* [in] */ __RPC__in_opt IVsBuildDependency *pVsBldDependency) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveBuildDependency( 
            /* [in] */ __RPC__in_opt IVsBuildDependency *pVsBldDependency) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenameProject( 
            __RPC__in BSTR bstrNewName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangProjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangProject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangProject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangProject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileManager )( 
            __RPC__in ILangProject * This,
            /* [retval][out] */ __RPC__deref_out_opt ILangFileManager **ppFileManager);
        
        HRESULT ( STDMETHODCALLTYPE *GetBuildManager )( 
            __RPC__in ILangProject * This,
            /* [retval][out] */ __RPC__deref_out_opt ILangBuildManager **ppLangBuildManager);
        
        HRESULT ( STDMETHODCALLTYPE *GetSolution )( 
            __RPC__in ILangProject * This,
            /* [retval][out] */ __RPC__deref_out_opt IVsSolution **ppVsSolution);
        
        HRESULT ( STDMETHODCALLTYPE *AddBuildDependency )( 
            __RPC__in ILangProject * This,
            /* [in] */ __RPC__in_opt IVsBuildDependency *pVsBldDependency);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveBuildDependency )( 
            __RPC__in ILangProject * This,
            /* [in] */ __RPC__in_opt IVsBuildDependency *pVsBldDependency);
        
        HRESULT ( STDMETHODCALLTYPE *RenameProject )( 
            __RPC__in ILangProject * This,
            __RPC__in BSTR bstrNewName);
        
        END_INTERFACE
    } ILangProjectVtbl;

    interface ILangProject
    {
        CONST_VTBL struct ILangProjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangProject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangProject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangProject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangProject_GetFileManager(This,ppFileManager)	\
    ( (This)->lpVtbl -> GetFileManager(This,ppFileManager) ) 

#define ILangProject_GetBuildManager(This,ppLangBuildManager)	\
    ( (This)->lpVtbl -> GetBuildManager(This,ppLangBuildManager) ) 

#define ILangProject_GetSolution(This,ppVsSolution)	\
    ( (This)->lpVtbl -> GetSolution(This,ppVsSolution) ) 

#define ILangProject_AddBuildDependency(This,pVsBldDependency)	\
    ( (This)->lpVtbl -> AddBuildDependency(This,pVsBldDependency) ) 

#define ILangProject_RemoveBuildDependency(This,pVsBldDependency)	\
    ( (This)->lpVtbl -> RemoveBuildDependency(This,pVsBldDependency) ) 

#define ILangProject_RenameProject(This,bstrNewName)	\
    ( (This)->lpVtbl -> RenameProject(This,bstrNewName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangProject_INTERFACE_DEFINED__ */


#ifndef __ILangBuildManager_INTERFACE_DEFINED__
#define __ILangBuildManager_INTERFACE_DEFINED__

/* interface ILangBuildManager */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangBuildManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("122CA7B7-0FBB-11d3-B1FF-00C04F79CACB")
    ILangBuildManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseBuildEvents( 
            /* [in] */ __RPC__in_opt ILangBuildEvents *ppILangBuildEvents,
            /* [retval][out] */ __RPC__out VSCOOKIE *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseBuildEvents( 
            /* [in] */ VSCOOKIE dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConfigManager( 
            /* [retval][out] */ __RPC__deref_out_opt ILangCfgManager **ppLangCfgManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReferenceManager( 
            /* [retval][out] */ __RPC__deref_out_opt ILangReferenceManager **ppLangReferenceManager) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangBuildManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangBuildManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangBuildManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangBuildManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseBuildEvents )( 
            __RPC__in ILangBuildManager * This,
            /* [in] */ __RPC__in_opt ILangBuildEvents *ppILangBuildEvents,
            /* [retval][out] */ __RPC__out VSCOOKIE *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseBuildEvents )( 
            __RPC__in ILangBuildManager * This,
            /* [in] */ VSCOOKIE dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *GetConfigManager )( 
            __RPC__in ILangBuildManager * This,
            /* [retval][out] */ __RPC__deref_out_opt ILangCfgManager **ppLangCfgManager);
        
        HRESULT ( STDMETHODCALLTYPE *GetReferenceManager )( 
            __RPC__in ILangBuildManager * This,
            /* [retval][out] */ __RPC__deref_out_opt ILangReferenceManager **ppLangReferenceManager);
        
        END_INTERFACE
    } ILangBuildManagerVtbl;

    interface ILangBuildManager
    {
        CONST_VTBL struct ILangBuildManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangBuildManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangBuildManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangBuildManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangBuildManager_AdviseBuildEvents(This,ppILangBuildEvents,pdwCookie)	\
    ( (This)->lpVtbl -> AdviseBuildEvents(This,ppILangBuildEvents,pdwCookie) ) 

#define ILangBuildManager_UnadviseBuildEvents(This,dwCookie)	\
    ( (This)->lpVtbl -> UnadviseBuildEvents(This,dwCookie) ) 

#define ILangBuildManager_GetConfigManager(This,ppLangCfgManager)	\
    ( (This)->lpVtbl -> GetConfigManager(This,ppLangCfgManager) ) 

#define ILangBuildManager_GetReferenceManager(This,ppLangReferenceManager)	\
    ( (This)->lpVtbl -> GetReferenceManager(This,ppLangReferenceManager) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangBuildManager_INTERFACE_DEFINED__ */


#ifndef __ILangBuildEvents_INTERFACE_DEFINED__
#define __ILangBuildEvents_INTERFACE_DEFINED__

/* interface ILangBuildEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangBuildEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("122CA7B8-0FBB-11d3-B1FF-00C04F79CACB")
    ILangBuildEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnBuildBegin( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCompileBegin( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCompileEnd( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBuildEnd( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCloseBuildEvents( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangBuildEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangBuildEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangBuildEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangBuildEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBuildBegin )( 
            __RPC__in ILangBuildEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnCompileBegin )( 
            __RPC__in ILangBuildEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnCompileEnd )( 
            __RPC__in ILangBuildEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBuildEnd )( 
            __RPC__in ILangBuildEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnCloseBuildEvents )( 
            __RPC__in ILangBuildEvents * This);
        
        END_INTERFACE
    } ILangBuildEventsVtbl;

    interface ILangBuildEvents
    {
        CONST_VTBL struct ILangBuildEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangBuildEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangBuildEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangBuildEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangBuildEvents_OnBuildBegin(This)	\
    ( (This)->lpVtbl -> OnBuildBegin(This) ) 

#define ILangBuildEvents_OnCompileBegin(This)	\
    ( (This)->lpVtbl -> OnCompileBegin(This) ) 

#define ILangBuildEvents_OnCompileEnd(This)	\
    ( (This)->lpVtbl -> OnCompileEnd(This) ) 

#define ILangBuildEvents_OnBuildEnd(This)	\
    ( (This)->lpVtbl -> OnBuildEnd(This) ) 

#define ILangBuildEvents_OnCloseBuildEvents(This)	\
    ( (This)->lpVtbl -> OnCloseBuildEvents(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangBuildEvents_INTERFACE_DEFINED__ */


#ifndef __ILangCfgManager_INTERFACE_DEFINED__
#define __ILangCfgManager_INTERFACE_DEFINED__

/* interface ILangCfgManager */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangCfgManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("122CA7B9-0FBB-11d3-B1FF-00C04F79CACB")
    ILangCfgManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBuildManager( 
            /* [retval][out] */ __RPC__deref_out_opt ILangBuildManager **ppLangBuildManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCfgNameList( 
            /* [in] */ ULONG ccfgs,
            /* [size_is][out][in] */ __RPC__inout_ecount_full(ccfgs) BSTR rgbstr[  ],
            /* [optional][out] */ __RPC__out ULONG *pcActualcfgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetActiveCfgName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrCfgName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProjectPropertyBrowseObject( 
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **ppBrowseObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCfgPropertyBrowseObject( 
            /* [in] */ __RPC__in BSTR bstrCfgName,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **ppBrowseObject) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangCfgManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangCfgManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangCfgManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangCfgManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBuildManager )( 
            __RPC__in ILangCfgManager * This,
            /* [retval][out] */ __RPC__deref_out_opt ILangBuildManager **ppLangBuildManager);
        
        HRESULT ( STDMETHODCALLTYPE *GetCfgNameList )( 
            __RPC__in ILangCfgManager * This,
            /* [in] */ ULONG ccfgs,
            /* [size_is][out][in] */ __RPC__inout_ecount_full(ccfgs) BSTR rgbstr[  ],
            /* [optional][out] */ __RPC__out ULONG *pcActualcfgs);
        
        HRESULT ( STDMETHODCALLTYPE *GetActiveCfgName )( 
            __RPC__in ILangCfgManager * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrCfgName);
        
        HRESULT ( STDMETHODCALLTYPE *GetProjectPropertyBrowseObject )( 
            __RPC__in ILangCfgManager * This,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **ppBrowseObject);
        
        HRESULT ( STDMETHODCALLTYPE *GetCfgPropertyBrowseObject )( 
            __RPC__in ILangCfgManager * This,
            /* [in] */ __RPC__in BSTR bstrCfgName,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **ppBrowseObject);
        
        END_INTERFACE
    } ILangCfgManagerVtbl;

    interface ILangCfgManager
    {
        CONST_VTBL struct ILangCfgManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangCfgManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangCfgManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangCfgManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangCfgManager_GetBuildManager(This,ppLangBuildManager)	\
    ( (This)->lpVtbl -> GetBuildManager(This,ppLangBuildManager) ) 

#define ILangCfgManager_GetCfgNameList(This,ccfgs,rgbstr,pcActualcfgs)	\
    ( (This)->lpVtbl -> GetCfgNameList(This,ccfgs,rgbstr,pcActualcfgs) ) 

#define ILangCfgManager_GetActiveCfgName(This,pbstrCfgName)	\
    ( (This)->lpVtbl -> GetActiveCfgName(This,pbstrCfgName) ) 

#define ILangCfgManager_GetProjectPropertyBrowseObject(This,ppBrowseObject)	\
    ( (This)->lpVtbl -> GetProjectPropertyBrowseObject(This,ppBrowseObject) ) 

#define ILangCfgManager_GetCfgPropertyBrowseObject(This,bstrCfgName,ppBrowseObject)	\
    ( (This)->lpVtbl -> GetCfgPropertyBrowseObject(This,bstrCfgName,ppBrowseObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangCfgManager_INTERFACE_DEFINED__ */


#ifndef __ILangReference_INTERFACE_DEFINED__
#define __ILangReference_INTERFACE_DEFINED__

/* interface ILangReference */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4cfd2d7d-2c85-4252-91b9-fe45588e7ecd")
    ILangReference : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAlias( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAlias) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeLibName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrTypeLibName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCulture( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrCulture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResolvedPath( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrResolvedPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIdentity( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWrapperTool( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrWrapperTool) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProjRefString( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrProjRefString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRuntimeVersion( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrRuntimeVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFusionName( 
            /* [in] */ BOOL bUseProcessorArchitecture,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrFusionName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsWinMD( 
            /* [retval][out] */ __RPC__out BOOL *pbIsWinMD) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsCopyLocal( 
            /* [retval][out] */ __RPC__out BOOL *pbIsCopyLocal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsComClassic( 
            /* [retval][out] */ __RPC__out BOOL *pbIsComClassic) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsPrimary( 
            /* [retval][out] */ __RPC__out BOOL *pbIsPrimary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsPersistent( 
            /* [retval][out] */ __RPC__out BOOL *pbIsPersistent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsStrongName( 
            /* [retval][out] */ __RPC__out BOOL *pbIsStrongName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPublicKeyToken( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrPublicKeyToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsSuccessfullyResolved( 
            /* [retval][out] */ __RPC__out BOOL *pbIsSuccessfullyResolved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsProjectReference( 
            /* [retval][out] */ __RPC__out BOOL *pbProjectReference) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsSpecificVersion( 
            /* [retval][out] */ __RPC__out BOOL *pbSpecificVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsNativeReference( 
            /* [retval][out] */ __RPC__out BOOL *pbNativeReference) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsSDKReference( 
            /* [retval][out] */ __RPC__out BOOL *pbIsSDKReference) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsolated( 
            /* [retval][out] */ __RPC__out BOOL *pbIsolated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHasResolvedPath( 
            /* [retval][out] */ __RPC__out BOOL *pbHasResolvedPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAliases( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAliases) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMajorVersion( 
            /* [retval][out] */ __RPC__out DWORD *pdwMajorVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMinorVersion( 
            /* [retval][out] */ __RPC__out DWORD *pdwMinorVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBuildNumber( 
            /* [retval][out] */ __RPC__out DWORD *pdwBuildNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRevisionNumber( 
            /* [retval][out] */ __RPC__out DWORD *pdwRevisionNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeLibLcid( 
            /* [retval][out] */ __RPC__out LCID *plcid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeLibGuid( 
            /* [retval][out] */ __RPC__out GUID *pguid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPackageGuid( 
            /* [retval][out] */ __RPC__out GUID *pguid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProjectGuid( 
            /* [retval][out] */ __RPC__out GUID *pguid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPEKind( 
            /* [retval][out] */ __RPC__out PEKIND *pPeKind) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSubType( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSubType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttribute( 
            /* [in] */ __RPC__in LPCWSTR szAttribute,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIdentity( 
            __RPC__in LPCWSTR wszIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetName( 
            __RPC__in LPCWSTR wszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDescription( 
            __RPC__in LPCWSTR wszDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCulture( 
            __RPC__in LPCWSTR wszCulture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProjRefString( 
            __RPC__in LPCWSTR wszProjRefString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTypeLibLcid( 
            LCID lcid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTypeLibGuid( 
            __RPC__in REFGUID guid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPackageGuid( 
            __RPC__in REFGUID guid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsPrimary( 
            BOOL bIsPrimary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsPersistent( 
            BOOL bIsPersistent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsWinMD( 
            BOOL bIsWinMD) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsCopyLocal( 
            BOOL bIsCopyLocal,
            BOOL bUserOverriding) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsSpecificVersion( 
            BOOL bSpecificVersion,
            BOOL bRefreshImmediately) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsNativeReference( 
            BOOL bNativeReference) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsSDKReference( 
            BOOL bIsSDKReference) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsolated( 
            BOOL bIsolated) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAliases( 
            __RPC__in LPCWSTR wszAliases) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMajorVersion( 
            DWORD dwMajorVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMinorVersion( 
            DWORD dwMinorVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBuildNumber( 
            DWORD dwBuildNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRevisionNumber( 
            DWORD dwRevisionNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSubType( 
            __RPC__in LPCWSTR szSubType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAttribute( 
            /* [in] */ __RPC__in LPCWSTR szAttribute,
            /* [in] */ __RPC__in LPCWSTR szvalue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTargetFramework( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEmbedInteropTypes( 
            /* [retval][out] */ __RPC__out BOOL *pbEmbedInteropTypes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEmbedInteropTypes( 
            BOOL bEmbedInteropTypes,
            BOOL bRefreshImmediately) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangReference * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAlias )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAlias);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrDescription);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeLibName )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrTypeLibName);
        
        HRESULT ( STDMETHODCALLTYPE *GetCulture )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrCulture);
        
        HRESULT ( STDMETHODCALLTYPE *GetResolvedPath )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrResolvedPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetIdentity )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *GetWrapperTool )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrWrapperTool);
        
        HRESULT ( STDMETHODCALLTYPE *GetProjRefString )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrProjRefString);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeVersion )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrRuntimeVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetFusionName )( 
            __RPC__in ILangReference * This,
            /* [in] */ BOOL bUseProcessorArchitecture,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrFusionName);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsWinMD )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsWinMD);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsCopyLocal )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsCopyLocal);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsComClassic )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsComClassic);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsPrimary )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsPrimary);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsPersistent )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsPersistent);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsStrongName )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsStrongName);
        
        HRESULT ( STDMETHODCALLTYPE *GetPublicKeyToken )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrPublicKeyToken);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsSuccessfullyResolved )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsSuccessfullyResolved);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsProjectReference )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbProjectReference);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsSpecificVersion )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbSpecificVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsNativeReference )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbNativeReference);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsSDKReference )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsSDKReference);
        
        HRESULT ( STDMETHODCALLTYPE *GetIsolated )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbIsolated);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasResolvedPath )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbHasResolvedPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetAliases )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAliases);
        
        HRESULT ( STDMETHODCALLTYPE *GetMajorVersion )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out DWORD *pdwMajorVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetMinorVersion )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out DWORD *pdwMinorVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetBuildNumber )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out DWORD *pdwBuildNumber);
        
        HRESULT ( STDMETHODCALLTYPE *GetRevisionNumber )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out DWORD *pdwRevisionNumber);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeLibLcid )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out LCID *plcid);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeLibGuid )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out GUID *pguid);
        
        HRESULT ( STDMETHODCALLTYPE *GetPackageGuid )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out GUID *pguid);
        
        HRESULT ( STDMETHODCALLTYPE *GetProjectGuid )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out GUID *pguid);
        
        HRESULT ( STDMETHODCALLTYPE *GetPEKind )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out PEKIND *pPeKind);
        
        HRESULT ( STDMETHODCALLTYPE *GetSubType )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrSubType);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttribute )( 
            __RPC__in ILangReference * This,
            /* [in] */ __RPC__in LPCWSTR szAttribute,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetIdentity )( 
            __RPC__in ILangReference * This,
            __RPC__in LPCWSTR wszIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *SetName )( 
            __RPC__in ILangReference * This,
            __RPC__in LPCWSTR wszName);
        
        HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            __RPC__in ILangReference * This,
            __RPC__in LPCWSTR wszDescription);
        
        HRESULT ( STDMETHODCALLTYPE *SetCulture )( 
            __RPC__in ILangReference * This,
            __RPC__in LPCWSTR wszCulture);
        
        HRESULT ( STDMETHODCALLTYPE *SetProjRefString )( 
            __RPC__in ILangReference * This,
            __RPC__in LPCWSTR wszProjRefString);
        
        HRESULT ( STDMETHODCALLTYPE *SetTypeLibLcid )( 
            __RPC__in ILangReference * This,
            LCID lcid);
        
        HRESULT ( STDMETHODCALLTYPE *SetTypeLibGuid )( 
            __RPC__in ILangReference * This,
            __RPC__in REFGUID guid);
        
        HRESULT ( STDMETHODCALLTYPE *SetPackageGuid )( 
            __RPC__in ILangReference * This,
            __RPC__in REFGUID guid);
        
        HRESULT ( STDMETHODCALLTYPE *SetIsPrimary )( 
            __RPC__in ILangReference * This,
            BOOL bIsPrimary);
        
        HRESULT ( STDMETHODCALLTYPE *SetIsPersistent )( 
            __RPC__in ILangReference * This,
            BOOL bIsPersistent);
        
        HRESULT ( STDMETHODCALLTYPE *SetIsWinMD )( 
            __RPC__in ILangReference * This,
            BOOL bIsWinMD);
        
        HRESULT ( STDMETHODCALLTYPE *SetIsCopyLocal )( 
            __RPC__in ILangReference * This,
            BOOL bIsCopyLocal,
            BOOL bUserOverriding);
        
        HRESULT ( STDMETHODCALLTYPE *SetIsSpecificVersion )( 
            __RPC__in ILangReference * This,
            BOOL bSpecificVersion,
            BOOL bRefreshImmediately);
        
        HRESULT ( STDMETHODCALLTYPE *SetIsNativeReference )( 
            __RPC__in ILangReference * This,
            BOOL bNativeReference);
        
        HRESULT ( STDMETHODCALLTYPE *SetIsSDKReference )( 
            __RPC__in ILangReference * This,
            BOOL bIsSDKReference);
        
        HRESULT ( STDMETHODCALLTYPE *SetIsolated )( 
            __RPC__in ILangReference * This,
            BOOL bIsolated);
        
        HRESULT ( STDMETHODCALLTYPE *SetAliases )( 
            __RPC__in ILangReference * This,
            __RPC__in LPCWSTR wszAliases);
        
        HRESULT ( STDMETHODCALLTYPE *SetMajorVersion )( 
            __RPC__in ILangReference * This,
            DWORD dwMajorVersion);
        
        HRESULT ( STDMETHODCALLTYPE *SetMinorVersion )( 
            __RPC__in ILangReference * This,
            DWORD dwMinorVersion);
        
        HRESULT ( STDMETHODCALLTYPE *SetBuildNumber )( 
            __RPC__in ILangReference * This,
            DWORD dwBuildNumber);
        
        HRESULT ( STDMETHODCALLTYPE *SetRevisionNumber )( 
            __RPC__in ILangReference * This,
            DWORD dwRevisionNumber);
        
        HRESULT ( STDMETHODCALLTYPE *SetSubType )( 
            __RPC__in ILangReference * This,
            __RPC__in LPCWSTR szSubType);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttribute )( 
            __RPC__in ILangReference * This,
            /* [in] */ __RPC__in LPCWSTR szAttribute,
            /* [in] */ __RPC__in LPCWSTR szvalue);
        
        HRESULT ( STDMETHODCALLTYPE *SetTargetFramework )( 
            __RPC__in ILangReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEmbedInteropTypes )( 
            __RPC__in ILangReference * This,
            /* [retval][out] */ __RPC__out BOOL *pbEmbedInteropTypes);
        
        HRESULT ( STDMETHODCALLTYPE *SetEmbedInteropTypes )( 
            __RPC__in ILangReference * This,
            BOOL bEmbedInteropTypes,
            BOOL bRefreshImmediately);
        
        END_INTERFACE
    } ILangReferenceVtbl;

    interface ILangReference
    {
        CONST_VTBL struct ILangReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangReference_GetAlias(This,pbstrAlias)	\
    ( (This)->lpVtbl -> GetAlias(This,pbstrAlias) ) 

#define ILangReference_GetName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetName(This,pbstrName) ) 

#define ILangReference_GetDescription(This,pbstrDescription)	\
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription) ) 

#define ILangReference_GetTypeLibName(This,pbstrTypeLibName)	\
    ( (This)->lpVtbl -> GetTypeLibName(This,pbstrTypeLibName) ) 

#define ILangReference_GetCulture(This,pbstrCulture)	\
    ( (This)->lpVtbl -> GetCulture(This,pbstrCulture) ) 

#define ILangReference_GetResolvedPath(This,pbstrResolvedPath)	\
    ( (This)->lpVtbl -> GetResolvedPath(This,pbstrResolvedPath) ) 

#define ILangReference_GetIdentity(This,pbstrIdentity)	\
    ( (This)->lpVtbl -> GetIdentity(This,pbstrIdentity) ) 

#define ILangReference_GetWrapperTool(This,pbstrWrapperTool)	\
    ( (This)->lpVtbl -> GetWrapperTool(This,pbstrWrapperTool) ) 

#define ILangReference_GetProjRefString(This,pbstrProjRefString)	\
    ( (This)->lpVtbl -> GetProjRefString(This,pbstrProjRefString) ) 

#define ILangReference_GetRuntimeVersion(This,pbstrRuntimeVersion)	\
    ( (This)->lpVtbl -> GetRuntimeVersion(This,pbstrRuntimeVersion) ) 

#define ILangReference_GetFusionName(This,bUseProcessorArchitecture,pbstrFusionName)	\
    ( (This)->lpVtbl -> GetFusionName(This,bUseProcessorArchitecture,pbstrFusionName) ) 

#define ILangReference_GetIsWinMD(This,pbIsWinMD)	\
    ( (This)->lpVtbl -> GetIsWinMD(This,pbIsWinMD) ) 

#define ILangReference_GetIsCopyLocal(This,pbIsCopyLocal)	\
    ( (This)->lpVtbl -> GetIsCopyLocal(This,pbIsCopyLocal) ) 

#define ILangReference_GetIsComClassic(This,pbIsComClassic)	\
    ( (This)->lpVtbl -> GetIsComClassic(This,pbIsComClassic) ) 

#define ILangReference_GetIsPrimary(This,pbIsPrimary)	\
    ( (This)->lpVtbl -> GetIsPrimary(This,pbIsPrimary) ) 

#define ILangReference_GetIsPersistent(This,pbIsPersistent)	\
    ( (This)->lpVtbl -> GetIsPersistent(This,pbIsPersistent) ) 

#define ILangReference_GetIsStrongName(This,pbIsStrongName)	\
    ( (This)->lpVtbl -> GetIsStrongName(This,pbIsStrongName) ) 

#define ILangReference_GetPublicKeyToken(This,pbstrPublicKeyToken)	\
    ( (This)->lpVtbl -> GetPublicKeyToken(This,pbstrPublicKeyToken) ) 

#define ILangReference_GetIsSuccessfullyResolved(This,pbIsSuccessfullyResolved)	\
    ( (This)->lpVtbl -> GetIsSuccessfullyResolved(This,pbIsSuccessfullyResolved) ) 

#define ILangReference_GetIsProjectReference(This,pbProjectReference)	\
    ( (This)->lpVtbl -> GetIsProjectReference(This,pbProjectReference) ) 

#define ILangReference_GetIsSpecificVersion(This,pbSpecificVersion)	\
    ( (This)->lpVtbl -> GetIsSpecificVersion(This,pbSpecificVersion) ) 

#define ILangReference_GetIsNativeReference(This,pbNativeReference)	\
    ( (This)->lpVtbl -> GetIsNativeReference(This,pbNativeReference) ) 

#define ILangReference_GetIsSDKReference(This,pbIsSDKReference)	\
    ( (This)->lpVtbl -> GetIsSDKReference(This,pbIsSDKReference) ) 

#define ILangReference_GetIsolated(This,pbIsolated)	\
    ( (This)->lpVtbl -> GetIsolated(This,pbIsolated) ) 

#define ILangReference_GetHasResolvedPath(This,pbHasResolvedPath)	\
    ( (This)->lpVtbl -> GetHasResolvedPath(This,pbHasResolvedPath) ) 

#define ILangReference_GetAliases(This,pbstrAliases)	\
    ( (This)->lpVtbl -> GetAliases(This,pbstrAliases) ) 

#define ILangReference_GetMajorVersion(This,pdwMajorVersion)	\
    ( (This)->lpVtbl -> GetMajorVersion(This,pdwMajorVersion) ) 

#define ILangReference_GetMinorVersion(This,pdwMinorVersion)	\
    ( (This)->lpVtbl -> GetMinorVersion(This,pdwMinorVersion) ) 

#define ILangReference_GetBuildNumber(This,pdwBuildNumber)	\
    ( (This)->lpVtbl -> GetBuildNumber(This,pdwBuildNumber) ) 

#define ILangReference_GetRevisionNumber(This,pdwRevisionNumber)	\
    ( (This)->lpVtbl -> GetRevisionNumber(This,pdwRevisionNumber) ) 

#define ILangReference_GetTypeLibLcid(This,plcid)	\
    ( (This)->lpVtbl -> GetTypeLibLcid(This,plcid) ) 

#define ILangReference_GetTypeLibGuid(This,pguid)	\
    ( (This)->lpVtbl -> GetTypeLibGuid(This,pguid) ) 

#define ILangReference_GetPackageGuid(This,pguid)	\
    ( (This)->lpVtbl -> GetPackageGuid(This,pguid) ) 

#define ILangReference_GetProjectGuid(This,pguid)	\
    ( (This)->lpVtbl -> GetProjectGuid(This,pguid) ) 

#define ILangReference_GetPEKind(This,pPeKind)	\
    ( (This)->lpVtbl -> GetPEKind(This,pPeKind) ) 

#define ILangReference_GetSubType(This,pbstrSubType)	\
    ( (This)->lpVtbl -> GetSubType(This,pbstrSubType) ) 

#define ILangReference_GetAttribute(This,szAttribute,pbstrValue)	\
    ( (This)->lpVtbl -> GetAttribute(This,szAttribute,pbstrValue) ) 

#define ILangReference_SetIdentity(This,wszIdentity)	\
    ( (This)->lpVtbl -> SetIdentity(This,wszIdentity) ) 

#define ILangReference_SetName(This,wszName)	\
    ( (This)->lpVtbl -> SetName(This,wszName) ) 

#define ILangReference_SetDescription(This,wszDescription)	\
    ( (This)->lpVtbl -> SetDescription(This,wszDescription) ) 

#define ILangReference_SetCulture(This,wszCulture)	\
    ( (This)->lpVtbl -> SetCulture(This,wszCulture) ) 

#define ILangReference_SetProjRefString(This,wszProjRefString)	\
    ( (This)->lpVtbl -> SetProjRefString(This,wszProjRefString) ) 

#define ILangReference_SetTypeLibLcid(This,lcid)	\
    ( (This)->lpVtbl -> SetTypeLibLcid(This,lcid) ) 

#define ILangReference_SetTypeLibGuid(This,guid)	\
    ( (This)->lpVtbl -> SetTypeLibGuid(This,guid) ) 

#define ILangReference_SetPackageGuid(This,guid)	\
    ( (This)->lpVtbl -> SetPackageGuid(This,guid) ) 

#define ILangReference_SetIsPrimary(This,bIsPrimary)	\
    ( (This)->lpVtbl -> SetIsPrimary(This,bIsPrimary) ) 

#define ILangReference_SetIsPersistent(This,bIsPersistent)	\
    ( (This)->lpVtbl -> SetIsPersistent(This,bIsPersistent) ) 

#define ILangReference_SetIsWinMD(This,bIsWinMD)	\
    ( (This)->lpVtbl -> SetIsWinMD(This,bIsWinMD) ) 

#define ILangReference_SetIsCopyLocal(This,bIsCopyLocal,bUserOverriding)	\
    ( (This)->lpVtbl -> SetIsCopyLocal(This,bIsCopyLocal,bUserOverriding) ) 

#define ILangReference_SetIsSpecificVersion(This,bSpecificVersion,bRefreshImmediately)	\
    ( (This)->lpVtbl -> SetIsSpecificVersion(This,bSpecificVersion,bRefreshImmediately) ) 

#define ILangReference_SetIsNativeReference(This,bNativeReference)	\
    ( (This)->lpVtbl -> SetIsNativeReference(This,bNativeReference) ) 

#define ILangReference_SetIsSDKReference(This,bIsSDKReference)	\
    ( (This)->lpVtbl -> SetIsSDKReference(This,bIsSDKReference) ) 

#define ILangReference_SetIsolated(This,bIsolated)	\
    ( (This)->lpVtbl -> SetIsolated(This,bIsolated) ) 

#define ILangReference_SetAliases(This,wszAliases)	\
    ( (This)->lpVtbl -> SetAliases(This,wszAliases) ) 

#define ILangReference_SetMajorVersion(This,dwMajorVersion)	\
    ( (This)->lpVtbl -> SetMajorVersion(This,dwMajorVersion) ) 

#define ILangReference_SetMinorVersion(This,dwMinorVersion)	\
    ( (This)->lpVtbl -> SetMinorVersion(This,dwMinorVersion) ) 

#define ILangReference_SetBuildNumber(This,dwBuildNumber)	\
    ( (This)->lpVtbl -> SetBuildNumber(This,dwBuildNumber) ) 

#define ILangReference_SetRevisionNumber(This,dwRevisionNumber)	\
    ( (This)->lpVtbl -> SetRevisionNumber(This,dwRevisionNumber) ) 

#define ILangReference_SetSubType(This,szSubType)	\
    ( (This)->lpVtbl -> SetSubType(This,szSubType) ) 

#define ILangReference_SetAttribute(This,szAttribute,szvalue)	\
    ( (This)->lpVtbl -> SetAttribute(This,szAttribute,szvalue) ) 

#define ILangReference_SetTargetFramework(This)	\
    ( (This)->lpVtbl -> SetTargetFramework(This) ) 

#define ILangReference_GetEmbedInteropTypes(This,pbEmbedInteropTypes)	\
    ( (This)->lpVtbl -> GetEmbedInteropTypes(This,pbEmbedInteropTypes) ) 

#define ILangReference_SetEmbedInteropTypes(This,bEmbedInteropTypes,bRefreshImmediately)	\
    ( (This)->lpVtbl -> SetEmbedInteropTypes(This,bEmbedInteropTypes,bRefreshImmediately) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangReference_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_langproject_0000_0005 */
/* [local] */ 


enum PERSIST_TYPE
    {
        PERSIST_NONE	= 0,
        PERSIST_USER	= 1,
        PERSIST_PROJECT	= 2
    } ;

enum __BROWSEDISPID
    {
        DISPID_LangReference_GetAlias	= 2400,
        DISPID_LangReference_GetName	= ( DISPID_LangReference_GetAlias + 1 ) ,
        DISPID_LangReference_GetResolvedPath	= ( DISPID_LangReference_GetName + 1 ) ,
        DISPID_LangReference_Identity	= ( DISPID_LangReference_GetResolvedPath + 1 ) ,
        DISPID_LangReference_Culture	= ( DISPID_LangReference_Identity + 1 ) ,
        DISPID_LangReference_IsModule	= ( DISPID_LangReference_Culture + 1 ) ,
        DISPID_LangReference_IsStrongName	= ( DISPID_LangReference_IsModule + 1 ) ,
        DISPID_LangReference_GetMajorVersion	= ( DISPID_LangReference_IsStrongName + 1 ) ,
        DISPID_LangReference_GetMinorVersion	= ( DISPID_LangReference_GetMajorVersion + 1 ) ,
        DISPID_LangReference_GetRevisionNumber	= ( DISPID_LangReference_GetMinorVersion + 1 ) ,
        DISPID_LangReference_GetBuildNumber	= ( DISPID_LangReference_GetRevisionNumber + 1 ) ,
        DISPID_LangReference_Extender	= ( DISPID_LangReference_GetBuildNumber + 1 ) ,
        DISPID_LangReference_ExtenderNames	= ( DISPID_LangReference_Extender + 1 ) ,
        DISPID_LangReference_ExtenderCATID	= ( DISPID_LangReference_ExtenderNames + 1 ) ,
        DISPID_LangReference_Private	= ( DISPID_LangReference_ExtenderCATID + 1 ) ,
        DISPID_LangReference_Reserved	= ( DISPID_LangReference_Private + 1 ) ,
        DISPID_LangReference_Description	= ( DISPID_LangReference_Reserved + 1 ) 
    } ;


extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0005_v0_0_s_ifspec;

#ifndef __IEnumLangReferences_INTERFACE_DEFINED__
#define __IEnumLangReferences_INTERFACE_DEFINED__

/* interface IEnumLangReferences */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumLangReferences;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5E414AF6-FA9D-11d2-8783-00C04F8EF94B")
    IEnumLangReferences : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) ILangReference **rgelt,
            /* [out] */ __RPC__out ULONG *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ __RPC__deref_out_opt IEnumLangReferences **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumLangReferencesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumLangReferences * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumLangReferences * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumLangReferences * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumLangReferences * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(celt, *pceltFetched) ILangReference **rgelt,
            /* [out] */ __RPC__out ULONG *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumLangReferences * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumLangReferences * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumLangReferences * This,
            /* [retval][out] */ __RPC__deref_out_opt IEnumLangReferences **ppenum);
        
        END_INTERFACE
    } IEnumLangReferencesVtbl;

    interface IEnumLangReferences
    {
        CONST_VTBL struct IEnumLangReferencesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumLangReferences_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumLangReferences_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumLangReferences_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumLangReferences_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumLangReferences_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumLangReferences_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumLangReferences_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumLangReferences_INTERFACE_DEFINED__ */


#ifndef __ILangReferenceManager_INTERFACE_DEFINED__
#define __ILangReferenceManager_INTERFACE_DEFINED__

/* interface ILangReferenceManager */
/* [object][version][uuid] */ 


EXTERN_C const IID IID_ILangReferenceManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5E414AF5-FA9D-11d2-8783-00C04F8EF94B")
    ILangReferenceManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetBuildManager( 
            /* [retval][out] */ __RPC__deref_out_opt ILangBuildManager **ppLangBuildManager) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseReferenceEvents( 
            /* [in] */ __RPC__in_opt ILangReferenceEvents *pILangReferenceEvents,
            /* [retval][out] */ __RPC__out VSCOOKIE *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseReferenceEvents( 
            /* [in] */ VSCOOKIE dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumReferences( 
            /* [retval][out] */ __RPC__deref_out_opt IEnumLangReferences **ppEnumReferences) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReference( 
            /* [in] */ __RPC__in LPCOLESTR wszName,
            /* [retval][out] */ __RPC__deref_out_opt ILangReference **pplref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateReference( 
            /* [in] */ __RPC__in LPCOLESTR wszName,
            /* [retval][out] */ __RPC__deref_out_opt ILangReference **pplref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ __RPC__in LPCOLESTR wszIdentity,
            /* [retval][out] */ __RPC__deref_out_opt ILangReference **pplref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddReference( 
            /* [in] */ __RPC__in_opt ILangReference *plref,
            /* [in] */ BOOL fAddOnlyIfResolved,
            /* [in] */ BOOL fFireAddedEvent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteReference( 
            /* [in] */ __RPC__in LPCOLESTR wszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteReferenceInterface( 
            /* [in] */ __RPC__in_opt ILangReference *plref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnProjectLocationChanged( 
            __RPC__in LPCWSTR wszOldProjectFilename,
            __RPC__in LPCWSTR wszNewProjectFilename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveSQMDataForReferences( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangReferenceManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangReferenceManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangReferenceManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangReferenceManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBuildManager )( 
            __RPC__in ILangReferenceManager * This,
            /* [retval][out] */ __RPC__deref_out_opt ILangBuildManager **ppLangBuildManager);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseReferenceEvents )( 
            __RPC__in ILangReferenceManager * This,
            /* [in] */ __RPC__in_opt ILangReferenceEvents *pILangReferenceEvents,
            /* [retval][out] */ __RPC__out VSCOOKIE *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseReferenceEvents )( 
            __RPC__in ILangReferenceManager * This,
            /* [in] */ VSCOOKIE dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *EnumReferences )( 
            __RPC__in ILangReferenceManager * This,
            /* [retval][out] */ __RPC__deref_out_opt IEnumLangReferences **ppEnumReferences);
        
        HRESULT ( STDMETHODCALLTYPE *GetReference )( 
            __RPC__in ILangReferenceManager * This,
            /* [in] */ __RPC__in LPCOLESTR wszName,
            /* [retval][out] */ __RPC__deref_out_opt ILangReference **pplref);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReference )( 
            __RPC__in ILangReferenceManager * This,
            /* [in] */ __RPC__in LPCOLESTR wszName,
            /* [retval][out] */ __RPC__deref_out_opt ILangReference **pplref);
        
        HRESULT ( STDMETHODCALLTYPE *Find )( 
            __RPC__in ILangReferenceManager * This,
            /* [in] */ __RPC__in LPCOLESTR wszIdentity,
            /* [retval][out] */ __RPC__deref_out_opt ILangReference **pplref);
        
        HRESULT ( STDMETHODCALLTYPE *AddReference )( 
            __RPC__in ILangReferenceManager * This,
            /* [in] */ __RPC__in_opt ILangReference *plref,
            /* [in] */ BOOL fAddOnlyIfResolved,
            /* [in] */ BOOL fFireAddedEvent);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteReference )( 
            __RPC__in ILangReferenceManager * This,
            /* [in] */ __RPC__in LPCOLESTR wszName);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteReferenceInterface )( 
            __RPC__in ILangReferenceManager * This,
            /* [in] */ __RPC__in_opt ILangReference *plref);
        
        HRESULT ( STDMETHODCALLTYPE *OnProjectLocationChanged )( 
            __RPC__in ILangReferenceManager * This,
            __RPC__in LPCWSTR wszOldProjectFilename,
            __RPC__in LPCWSTR wszNewProjectFilename);
        
        HRESULT ( STDMETHODCALLTYPE *SaveSQMDataForReferences )( 
            __RPC__in ILangReferenceManager * This);
        
        END_INTERFACE
    } ILangReferenceManagerVtbl;

    interface ILangReferenceManager
    {
        CONST_VTBL struct ILangReferenceManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangReferenceManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangReferenceManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangReferenceManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangReferenceManager_GetBuildManager(This,ppLangBuildManager)	\
    ( (This)->lpVtbl -> GetBuildManager(This,ppLangBuildManager) ) 

#define ILangReferenceManager_AdviseReferenceEvents(This,pILangReferenceEvents,pdwCookie)	\
    ( (This)->lpVtbl -> AdviseReferenceEvents(This,pILangReferenceEvents,pdwCookie) ) 

#define ILangReferenceManager_UnadviseReferenceEvents(This,dwCookie)	\
    ( (This)->lpVtbl -> UnadviseReferenceEvents(This,dwCookie) ) 

#define ILangReferenceManager_EnumReferences(This,ppEnumReferences)	\
    ( (This)->lpVtbl -> EnumReferences(This,ppEnumReferences) ) 

#define ILangReferenceManager_GetReference(This,wszName,pplref)	\
    ( (This)->lpVtbl -> GetReference(This,wszName,pplref) ) 

#define ILangReferenceManager_CreateReference(This,wszName,pplref)	\
    ( (This)->lpVtbl -> CreateReference(This,wszName,pplref) ) 

#define ILangReferenceManager_Find(This,wszIdentity,pplref)	\
    ( (This)->lpVtbl -> Find(This,wszIdentity,pplref) ) 

#define ILangReferenceManager_AddReference(This,plref,fAddOnlyIfResolved,fFireAddedEvent)	\
    ( (This)->lpVtbl -> AddReference(This,plref,fAddOnlyIfResolved,fFireAddedEvent) ) 

#define ILangReferenceManager_DeleteReference(This,wszName)	\
    ( (This)->lpVtbl -> DeleteReference(This,wszName) ) 

#define ILangReferenceManager_DeleteReferenceInterface(This,plref)	\
    ( (This)->lpVtbl -> DeleteReferenceInterface(This,plref) ) 

#define ILangReferenceManager_OnProjectLocationChanged(This,wszOldProjectFilename,wszNewProjectFilename)	\
    ( (This)->lpVtbl -> OnProjectLocationChanged(This,wszOldProjectFilename,wszNewProjectFilename) ) 

#define ILangReferenceManager_SaveSQMDataForReferences(This)	\
    ( (This)->lpVtbl -> SaveSQMDataForReferences(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangReferenceManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_langproject_0000_0007 */
/* [local] */ 


enum __REFERENCE_ATTRIBUTES
    {
        RA_COMPLUS	= 1,
        RA_COMCLASSIC	= 2,
        RA_ASSEMBLY	= 4,
        RA_DLL	= 8,
        RA_EXE	= 16,
        RA_DESIRED_COMPLUSONLY	= ( ( ( RA_COMPLUS | RA_ASSEMBLY )  | RA_DLL )  | RA_EXE ) ,
        RA_DESIRED_ALL	= ( ( ( ( RA_COMPLUS | RA_ASSEMBLY )  | RA_DLL )  | RA_EXE )  | RA_COMCLASSIC ) 
    } ;
typedef DWORD REFERENCE_ATTRIBUTES;


enum __ASSEMBLY_LOCATION
    {
        ASMFINDLOC_INDETERMINATE	= 0,
        ASMFINDLOC_REFERENCE_PATH	= 1,
        ASMFINDLOC_CORSYSDIR	= 2,
        ASMFINDLOC_PICKER_PATH	= 4,
        ASMFINDLOC_HIERARCHY	= 8,
        ASMFINDLOC_WRAPPER_DIRECTORY	= 16,
        ASMFINDLOC_GAC	= 32
    } ;
typedef DWORD ASSEMBLY_LOCATION;



extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0007_v0_0_s_ifspec;

#ifndef __ILangReferenceService_INTERFACE_DEFINED__
#define __ILangReferenceService_INTERFACE_DEFINED__

/* interface ILangReferenceService */
/* [object][version][uuid] */ 


EXTERN_C const IID IID_ILangReferenceService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ED509B9D-A513-42c9-B18B-931B8E951547")
    ILangReferenceService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDefaultAliasForAssembly( 
            /* [in] */ __RPC__in LPCWSTR wszFileName,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAlias) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAssemblyPropsFromMetaData( 
            /* [in] */ __RPC__in LPCWSTR wszFileName,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrDefaultAlias,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrDescription,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrCulture,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrRuntimeVersion,
            /* [out] */ __RPC__out USHORT *pusMajorVersion,
            /* [out] */ __RPC__out USHORT *pusMinorVersion,
            /* [out] */ __RPC__out USHORT *pusBuildNumber,
            /* [out] */ __RPC__out USHORT *pusRevisionNumber,
            /* [out] */ __RPC__deref_out_opt BYTE **prgbOriginator,
            /* [out] */ __RPC__out DWORD *pcbOriginator,
            /* [out] */ __RPC__out BOOL *pfIsAssembly,
            /* [out] */ __RPC__out PEKIND *pPeKind,
            /* [out] */ __RPC__out BOOL *pbImportedFromTypeLib) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReferenceAttributes( 
            /* [in] */ __RPC__in LPCWSTR wszFileName,
            /* [in] */ REFERENCE_ATTRIBUTES dwDesired,
            /* [out] */ __RPC__out REFERENCE_ATTRIBUTES *pdwAttributes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangReferenceServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangReferenceService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangReferenceService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangReferenceService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultAliasForAssembly )( 
            __RPC__in ILangReferenceService * This,
            /* [in] */ __RPC__in LPCWSTR wszFileName,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAlias);
        
        HRESULT ( STDMETHODCALLTYPE *GetAssemblyPropsFromMetaData )( 
            __RPC__in ILangReferenceService * This,
            /* [in] */ __RPC__in LPCWSTR wszFileName,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrDefaultAlias,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrDescription,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrCulture,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrRuntimeVersion,
            /* [out] */ __RPC__out USHORT *pusMajorVersion,
            /* [out] */ __RPC__out USHORT *pusMinorVersion,
            /* [out] */ __RPC__out USHORT *pusBuildNumber,
            /* [out] */ __RPC__out USHORT *pusRevisionNumber,
            /* [out] */ __RPC__deref_out_opt BYTE **prgbOriginator,
            /* [out] */ __RPC__out DWORD *pcbOriginator,
            /* [out] */ __RPC__out BOOL *pfIsAssembly,
            /* [out] */ __RPC__out PEKIND *pPeKind,
            /* [out] */ __RPC__out BOOL *pbImportedFromTypeLib);
        
        HRESULT ( STDMETHODCALLTYPE *GetReferenceAttributes )( 
            __RPC__in ILangReferenceService * This,
            /* [in] */ __RPC__in LPCWSTR wszFileName,
            /* [in] */ REFERENCE_ATTRIBUTES dwDesired,
            /* [out] */ __RPC__out REFERENCE_ATTRIBUTES *pdwAttributes);
        
        END_INTERFACE
    } ILangReferenceServiceVtbl;

    interface ILangReferenceService
    {
        CONST_VTBL struct ILangReferenceServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangReferenceService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangReferenceService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangReferenceService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangReferenceService_GetDefaultAliasForAssembly(This,wszFileName,pbstrAlias)	\
    ( (This)->lpVtbl -> GetDefaultAliasForAssembly(This,wszFileName,pbstrAlias) ) 

#define ILangReferenceService_GetAssemblyPropsFromMetaData(This,wszFileName,pbstrName,pbstrDefaultAlias,pbstrDescription,pbstrCulture,pbstrRuntimeVersion,pusMajorVersion,pusMinorVersion,pusBuildNumber,pusRevisionNumber,prgbOriginator,pcbOriginator,pfIsAssembly,pPeKind,pbImportedFromTypeLib)	\
    ( (This)->lpVtbl -> GetAssemblyPropsFromMetaData(This,wszFileName,pbstrName,pbstrDefaultAlias,pbstrDescription,pbstrCulture,pbstrRuntimeVersion,pusMajorVersion,pusMinorVersion,pusBuildNumber,pusRevisionNumber,prgbOriginator,pcbOriginator,pfIsAssembly,pPeKind,pbImportedFromTypeLib) ) 

#define ILangReferenceService_GetReferenceAttributes(This,wszFileName,dwDesired,pdwAttributes)	\
    ( (This)->lpVtbl -> GetReferenceAttributes(This,wszFileName,dwDesired,pdwAttributes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangReferenceService_INTERFACE_DEFINED__ */


#ifndef __ILangReferenceEvents_INTERFACE_DEFINED__
#define __ILangReferenceEvents_INTERFACE_DEFINED__

/* interface ILangReferenceEvents */
/* [object][version][uuid] */ 


EXTERN_C const IID IID_ILangReferenceEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("122CA7BC-0FBB-11d3-B1FF-00C04F79CACB")
    ILangReferenceEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryAddReference( 
            /* [in] */ __RPC__in_opt ILangReference *plangref,
            /* [retval][out] */ __RPC__out BOOL *pfCanAdd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReferenceAdded( 
            __RPC__in_opt ILangReference *plangref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryRemoveReference( 
            /* [in] */ __RPC__in_opt ILangReference *plangref,
            /* [retval][out] */ __RPC__out BOOL *pfCanRemove) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReferenceRemoved( 
            /* [in] */ __RPC__in_opt ILangReference *plangref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryChangeReference( 
            /* [in] */ __RPC__in_opt ILangReference *plangref,
            /* [retval][out] */ __RPC__out BOOL *pfCanChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReferenceChanged( 
            __RPC__in_opt ILangReference *plangref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeforeReferenceChanged( 
            __RPC__in_opt ILangReference *plangref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAfterReferencedProjectUnloaded( 
            __RPC__in_opt ILangReference *plangref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryRefreshReference( 
            /* [in] */ __RPC__in_opt ILangReference *plangref,
            /* [retval][out] */ __RPC__out BOOL *pfCanRefresh) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReferenceRefreshed( 
            __RPC__in_opt ILangReference *plangref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeforeReferenceRefreshed( 
            __RPC__in_opt ILangReference *plangref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeforeReferencedProjectUnloaded( 
            __RPC__in_opt ILangReference *plangref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReferencedProjectLoaded( 
            __RPC__in_opt ILangReference *plangref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCloseReferenceEvents( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnBeforeAddReference( 
            /* [in] */ __RPC__in_opt ILangReference *plangref) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryChangeReferenceAliases( 
            /* [in] */ __RPC__in_opt ILangReference *plangref,
            /* [retval][out] */ __RPC__out BOOL *pfCanChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReferenceAliasesChanged( 
            __RPC__in_opt ILangReference *plangref) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangReferenceEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangReferenceEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangReferenceEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangReferenceEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryAddReference )( 
            __RPC__in ILangReferenceEvents * This,
            /* [in] */ __RPC__in_opt ILangReference *plangref,
            /* [retval][out] */ __RPC__out BOOL *pfCanAdd);
        
        HRESULT ( STDMETHODCALLTYPE *OnReferenceAdded )( 
            __RPC__in ILangReferenceEvents * This,
            __RPC__in_opt ILangReference *plangref);
        
        HRESULT ( STDMETHODCALLTYPE *QueryRemoveReference )( 
            __RPC__in ILangReferenceEvents * This,
            /* [in] */ __RPC__in_opt ILangReference *plangref,
            /* [retval][out] */ __RPC__out BOOL *pfCanRemove);
        
        HRESULT ( STDMETHODCALLTYPE *OnReferenceRemoved )( 
            __RPC__in ILangReferenceEvents * This,
            /* [in] */ __RPC__in_opt ILangReference *plangref);
        
        HRESULT ( STDMETHODCALLTYPE *QueryChangeReference )( 
            __RPC__in ILangReferenceEvents * This,
            /* [in] */ __RPC__in_opt ILangReference *plangref,
            /* [retval][out] */ __RPC__out BOOL *pfCanChange);
        
        HRESULT ( STDMETHODCALLTYPE *OnReferenceChanged )( 
            __RPC__in ILangReferenceEvents * This,
            __RPC__in_opt ILangReference *plangref);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeReferenceChanged )( 
            __RPC__in ILangReferenceEvents * This,
            __RPC__in_opt ILangReference *plangref);
        
        HRESULT ( STDMETHODCALLTYPE *OnAfterReferencedProjectUnloaded )( 
            __RPC__in ILangReferenceEvents * This,
            __RPC__in_opt ILangReference *plangref);
        
        HRESULT ( STDMETHODCALLTYPE *QueryRefreshReference )( 
            __RPC__in ILangReferenceEvents * This,
            /* [in] */ __RPC__in_opt ILangReference *plangref,
            /* [retval][out] */ __RPC__out BOOL *pfCanRefresh);
        
        HRESULT ( STDMETHODCALLTYPE *OnReferenceRefreshed )( 
            __RPC__in ILangReferenceEvents * This,
            __RPC__in_opt ILangReference *plangref);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeReferenceRefreshed )( 
            __RPC__in ILangReferenceEvents * This,
            __RPC__in_opt ILangReference *plangref);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeReferencedProjectUnloaded )( 
            __RPC__in ILangReferenceEvents * This,
            __RPC__in_opt ILangReference *plangref);
        
        HRESULT ( STDMETHODCALLTYPE *OnReferencedProjectLoaded )( 
            __RPC__in ILangReferenceEvents * This,
            __RPC__in_opt ILangReference *plangref);
        
        HRESULT ( STDMETHODCALLTYPE *OnCloseReferenceEvents )( 
            __RPC__in ILangReferenceEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeforeAddReference )( 
            __RPC__in ILangReferenceEvents * This,
            /* [in] */ __RPC__in_opt ILangReference *plangref);
        
        HRESULT ( STDMETHODCALLTYPE *QueryChangeReferenceAliases )( 
            __RPC__in ILangReferenceEvents * This,
            /* [in] */ __RPC__in_opt ILangReference *plangref,
            /* [retval][out] */ __RPC__out BOOL *pfCanChange);
        
        HRESULT ( STDMETHODCALLTYPE *OnReferenceAliasesChanged )( 
            __RPC__in ILangReferenceEvents * This,
            __RPC__in_opt ILangReference *plangref);
        
        END_INTERFACE
    } ILangReferenceEventsVtbl;

    interface ILangReferenceEvents
    {
        CONST_VTBL struct ILangReferenceEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangReferenceEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangReferenceEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangReferenceEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangReferenceEvents_QueryAddReference(This,plangref,pfCanAdd)	\
    ( (This)->lpVtbl -> QueryAddReference(This,plangref,pfCanAdd) ) 

#define ILangReferenceEvents_OnReferenceAdded(This,plangref)	\
    ( (This)->lpVtbl -> OnReferenceAdded(This,plangref) ) 

#define ILangReferenceEvents_QueryRemoveReference(This,plangref,pfCanRemove)	\
    ( (This)->lpVtbl -> QueryRemoveReference(This,plangref,pfCanRemove) ) 

#define ILangReferenceEvents_OnReferenceRemoved(This,plangref)	\
    ( (This)->lpVtbl -> OnReferenceRemoved(This,plangref) ) 

#define ILangReferenceEvents_QueryChangeReference(This,plangref,pfCanChange)	\
    ( (This)->lpVtbl -> QueryChangeReference(This,plangref,pfCanChange) ) 

#define ILangReferenceEvents_OnReferenceChanged(This,plangref)	\
    ( (This)->lpVtbl -> OnReferenceChanged(This,plangref) ) 

#define ILangReferenceEvents_OnBeforeReferenceChanged(This,plangref)	\
    ( (This)->lpVtbl -> OnBeforeReferenceChanged(This,plangref) ) 

#define ILangReferenceEvents_OnAfterReferencedProjectUnloaded(This,plangref)	\
    ( (This)->lpVtbl -> OnAfterReferencedProjectUnloaded(This,plangref) ) 

#define ILangReferenceEvents_QueryRefreshReference(This,plangref,pfCanRefresh)	\
    ( (This)->lpVtbl -> QueryRefreshReference(This,plangref,pfCanRefresh) ) 

#define ILangReferenceEvents_OnReferenceRefreshed(This,plangref)	\
    ( (This)->lpVtbl -> OnReferenceRefreshed(This,plangref) ) 

#define ILangReferenceEvents_OnBeforeReferenceRefreshed(This,plangref)	\
    ( (This)->lpVtbl -> OnBeforeReferenceRefreshed(This,plangref) ) 

#define ILangReferenceEvents_OnBeforeReferencedProjectUnloaded(This,plangref)	\
    ( (This)->lpVtbl -> OnBeforeReferencedProjectUnloaded(This,plangref) ) 

#define ILangReferenceEvents_OnReferencedProjectLoaded(This,plangref)	\
    ( (This)->lpVtbl -> OnReferencedProjectLoaded(This,plangref) ) 

#define ILangReferenceEvents_OnCloseReferenceEvents(This)	\
    ( (This)->lpVtbl -> OnCloseReferenceEvents(This) ) 

#define ILangReferenceEvents_OnBeforeAddReference(This,plangref)	\
    ( (This)->lpVtbl -> OnBeforeAddReference(This,plangref) ) 

#define ILangReferenceEvents_QueryChangeReferenceAliases(This,plangref,pfCanChange)	\
    ( (This)->lpVtbl -> QueryChangeReferenceAliases(This,plangref,pfCanChange) ) 

#define ILangReferenceEvents_OnReferenceAliasesChanged(This,plangref)	\
    ( (This)->lpVtbl -> OnReferenceAliasesChanged(This,plangref) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangReferenceEvents_INTERFACE_DEFINED__ */


#ifndef __ILangFileManager_INTERFACE_DEFINED__
#define __ILangFileManager_INTERFACE_DEFINED__

/* interface ILangFileManager */
/* [object][version][uuid] */ 


EXTERN_C const IID IID_ILangFileManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("08E6BFEF-2527-11d3-B208-00C04F79CACB")
    ILangFileManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseFileEvents( 
            /* [in] */ __RPC__in_opt ILangFileEvents *pILangFileEvents,
            /* [retval][out] */ __RPC__out VSCOOKIE *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseFileEvents( 
            /* [in] */ VSCOOKIE dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileList( 
            /* [in] */ ULONG cFiles,
            /* [size_is][in] */ __RPC__in_ecount_full(cFiles) DWORD rgdwAbsPathLens[  ],
            /* [size_is][out][in] */ __RPC__inout_ecount_full(cFiles) LPOLESTR rgpszAbsPaths[  ],
            /* [size_is][in] */ __RPC__in_ecount_full(cFiles) DWORD rgdwRelPathLens[  ],
            /* [size_is][out][in] */ __RPC__inout_ecount_full(cFiles) LPOLESTR rgpszRelPaths[  ],
            /* [size_is][out][in] */ __RPC__inout_ecount_full(cFiles) VSITEMID itemids[  ],
            /* [optional][out] */ __RPC__out ULONG *pcActualFiles) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangFileManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangFileManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangFileManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangFileManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseFileEvents )( 
            __RPC__in ILangFileManager * This,
            /* [in] */ __RPC__in_opt ILangFileEvents *pILangFileEvents,
            /* [retval][out] */ __RPC__out VSCOOKIE *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseFileEvents )( 
            __RPC__in ILangFileManager * This,
            /* [in] */ VSCOOKIE dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileList )( 
            __RPC__in ILangFileManager * This,
            /* [in] */ ULONG cFiles,
            /* [size_is][in] */ __RPC__in_ecount_full(cFiles) DWORD rgdwAbsPathLens[  ],
            /* [size_is][out][in] */ __RPC__inout_ecount_full(cFiles) LPOLESTR rgpszAbsPaths[  ],
            /* [size_is][in] */ __RPC__in_ecount_full(cFiles) DWORD rgdwRelPathLens[  ],
            /* [size_is][out][in] */ __RPC__inout_ecount_full(cFiles) LPOLESTR rgpszRelPaths[  ],
            /* [size_is][out][in] */ __RPC__inout_ecount_full(cFiles) VSITEMID itemids[  ],
            /* [optional][out] */ __RPC__out ULONG *pcActualFiles);
        
        END_INTERFACE
    } ILangFileManagerVtbl;

    interface ILangFileManager
    {
        CONST_VTBL struct ILangFileManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangFileManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangFileManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangFileManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangFileManager_AdviseFileEvents(This,pILangFileEvents,pdwCookie)	\
    ( (This)->lpVtbl -> AdviseFileEvents(This,pILangFileEvents,pdwCookie) ) 

#define ILangFileManager_UnadviseFileEvents(This,dwCookie)	\
    ( (This)->lpVtbl -> UnadviseFileEvents(This,dwCookie) ) 

#define ILangFileManager_GetFileList(This,cFiles,rgdwAbsPathLens,rgpszAbsPaths,rgdwRelPathLens,rgpszRelPaths,itemids,pcActualFiles)	\
    ( (This)->lpVtbl -> GetFileList(This,cFiles,rgdwAbsPathLens,rgpszAbsPaths,rgdwRelPathLens,rgpszRelPaths,itemids,pcActualFiles) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangFileManager_INTERFACE_DEFINED__ */


#ifndef __ILangTempPEEvents_INTERFACE_DEFINED__
#define __ILangTempPEEvents_INTERFACE_DEFINED__

/* interface ILangTempPEEvents */
/* [object][version][uuid] */ 


EXTERN_C const IID IID_ILangTempPEEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B56FF389-85ED-4b59-845D-A0882AA868E4")
    ILangTempPEEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PEDirty( 
            /* [in] */ __RPC__in BSTR bstrPEMoniker) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PEDeleted( 
            /* [in] */ __RPC__in BSTR bstrPEMoniker) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangTempPEEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangTempPEEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangTempPEEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangTempPEEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *PEDirty )( 
            __RPC__in ILangTempPEEvents * This,
            /* [in] */ __RPC__in BSTR bstrPEMoniker);
        
        HRESULT ( STDMETHODCALLTYPE *PEDeleted )( 
            __RPC__in ILangTempPEEvents * This,
            /* [in] */ __RPC__in BSTR bstrPEMoniker);
        
        END_INTERFACE
    } ILangTempPEEventsVtbl;

    interface ILangTempPEEvents
    {
        CONST_VTBL struct ILangTempPEEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangTempPEEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangTempPEEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangTempPEEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangTempPEEvents_PEDirty(This,bstrPEMoniker)	\
    ( (This)->lpVtbl -> PEDirty(This,bstrPEMoniker) ) 

#define ILangTempPEEvents_PEDeleted(This,bstrPEMoniker)	\
    ( (This)->lpVtbl -> PEDeleted(This,bstrPEMoniker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangTempPEEvents_INTERFACE_DEFINED__ */


#ifndef __ILangFileEvents_INTERFACE_DEFINED__
#define __ILangFileEvents_INTERFACE_DEFINED__

/* interface ILangFileEvents */
/* [object][version][uuid] */ 


EXTERN_C const IID IID_ILangFileEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5FDC47D3-2523-11d3-B208-00C04F79CACB")
    ILangFileEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryFileAdd( 
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [retval][out] */ __RPC__out BOOL *pfCanAdd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFileAdd( 
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszRelPath,
            /* [in] */ VSITEMID itemid,
            /* [in] */ prjBuildAction buildAction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryFileRemove( 
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszRelPath,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__out BOOL *pfCanRemove) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFileRemove( 
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszRelPath,
            /* [in] */ VSITEMID itemid,
            /* [in] */ prjBuildAction buildAction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryFileRename( 
            /* [in] */ __RPC__in LPCOLESTR wszOldAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewAbsPath,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__out BOOL *pfCanRename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFileRename( 
            /* [in] */ __RPC__in LPCOLESTR wszOldAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewRelPath,
            /* [in] */ VSITEMID itemid,
            /* [in] */ prjBuildAction buildActionOld,
            /* [in] */ prjBuildAction buildActionNew) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryFileMove( 
            /* [in] */ __RPC__in LPCOLESTR wszOldAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewRelPath,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__out BOOL *pfCanMove) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFileMove( 
            /* [in] */ __RPC__in LPCOLESTR wszOldAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewRelPath,
            /* [in] */ VSITEMID itemid,
            /* [in] */ prjBuildAction buildAction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryChangeBuildAction( 
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__out BOOL *pfCanChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnChangeBuildAction( 
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszRelPath,
            /* [in] */ VSITEMID itemid,
            /* [in] */ prjBuildAction buildActionOld,
            /* [in] */ prjBuildAction buildActionNew) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCloseFileEvents( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangFileEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangFileEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangFileEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryFileAdd )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [retval][out] */ __RPC__out BOOL *pfCanAdd);
        
        HRESULT ( STDMETHODCALLTYPE *OnFileAdd )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszRelPath,
            /* [in] */ VSITEMID itemid,
            /* [in] */ prjBuildAction buildAction);
        
        HRESULT ( STDMETHODCALLTYPE *QueryFileRemove )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszRelPath,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__out BOOL *pfCanRemove);
        
        HRESULT ( STDMETHODCALLTYPE *OnFileRemove )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszRelPath,
            /* [in] */ VSITEMID itemid,
            /* [in] */ prjBuildAction buildAction);
        
        HRESULT ( STDMETHODCALLTYPE *QueryFileRename )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in LPCOLESTR wszOldAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewAbsPath,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__out BOOL *pfCanRename);
        
        HRESULT ( STDMETHODCALLTYPE *OnFileRename )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in LPCOLESTR wszOldAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewRelPath,
            /* [in] */ VSITEMID itemid,
            /* [in] */ prjBuildAction buildActionOld,
            /* [in] */ prjBuildAction buildActionNew);
        
        HRESULT ( STDMETHODCALLTYPE *QueryFileMove )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in LPCOLESTR wszOldAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewRelPath,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__out BOOL *pfCanMove);
        
        HRESULT ( STDMETHODCALLTYPE *OnFileMove )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in LPCOLESTR wszOldAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszNewRelPath,
            /* [in] */ VSITEMID itemid,
            /* [in] */ prjBuildAction buildAction);
        
        HRESULT ( STDMETHODCALLTYPE *QueryChangeBuildAction )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [in] */ VSITEMID itemid,
            /* [retval][out] */ __RPC__out BOOL *pfCanChange);
        
        HRESULT ( STDMETHODCALLTYPE *OnChangeBuildAction )( 
            __RPC__in ILangFileEvents * This,
            /* [in] */ __RPC__in LPCOLESTR wszAbsPath,
            /* [in] */ __RPC__in LPCOLESTR wszRelPath,
            /* [in] */ VSITEMID itemid,
            /* [in] */ prjBuildAction buildActionOld,
            /* [in] */ prjBuildAction buildActionNew);
        
        HRESULT ( STDMETHODCALLTYPE *OnCloseFileEvents )( 
            __RPC__in ILangFileEvents * This);
        
        END_INTERFACE
    } ILangFileEventsVtbl;

    interface ILangFileEvents
    {
        CONST_VTBL struct ILangFileEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangFileEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangFileEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangFileEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangFileEvents_QueryFileAdd(This,wszAbsPath,pfCanAdd)	\
    ( (This)->lpVtbl -> QueryFileAdd(This,wszAbsPath,pfCanAdd) ) 

#define ILangFileEvents_OnFileAdd(This,wszAbsPath,wszRelPath,itemid,buildAction)	\
    ( (This)->lpVtbl -> OnFileAdd(This,wszAbsPath,wszRelPath,itemid,buildAction) ) 

#define ILangFileEvents_QueryFileRemove(This,wszAbsPath,wszRelPath,itemid,pfCanRemove)	\
    ( (This)->lpVtbl -> QueryFileRemove(This,wszAbsPath,wszRelPath,itemid,pfCanRemove) ) 

#define ILangFileEvents_OnFileRemove(This,wszAbsPath,wszRelPath,itemid,buildAction)	\
    ( (This)->lpVtbl -> OnFileRemove(This,wszAbsPath,wszRelPath,itemid,buildAction) ) 

#define ILangFileEvents_QueryFileRename(This,wszOldAbsPath,wszNewAbsPath,itemid,pfCanRename)	\
    ( (This)->lpVtbl -> QueryFileRename(This,wszOldAbsPath,wszNewAbsPath,itemid,pfCanRename) ) 

#define ILangFileEvents_OnFileRename(This,wszOldAbsPath,wszNewAbsPath,wszNewRelPath,itemid,buildActionOld,buildActionNew)	\
    ( (This)->lpVtbl -> OnFileRename(This,wszOldAbsPath,wszNewAbsPath,wszNewRelPath,itemid,buildActionOld,buildActionNew) ) 

#define ILangFileEvents_QueryFileMove(This,wszOldAbsPath,wszNewAbsPath,wszNewRelPath,itemid,pfCanMove)	\
    ( (This)->lpVtbl -> QueryFileMove(This,wszOldAbsPath,wszNewAbsPath,wszNewRelPath,itemid,pfCanMove) ) 

#define ILangFileEvents_OnFileMove(This,wszOldAbsPath,wszNewAbsPath,wszNewRelPath,itemid,buildAction)	\
    ( (This)->lpVtbl -> OnFileMove(This,wszOldAbsPath,wszNewAbsPath,wszNewRelPath,itemid,buildAction) ) 

#define ILangFileEvents_QueryChangeBuildAction(This,wszAbsPath,itemid,pfCanChange)	\
    ( (This)->lpVtbl -> QueryChangeBuildAction(This,wszAbsPath,itemid,pfCanChange) ) 

#define ILangFileEvents_OnChangeBuildAction(This,wszAbsPath,wszRelPath,itemid,buildActionOld,buildActionNew)	\
    ( (This)->lpVtbl -> OnChangeBuildAction(This,wszAbsPath,wszRelPath,itemid,buildActionOld,buildActionNew) ) 

#define ILangFileEvents_OnCloseFileEvents(This)	\
    ( (This)->lpVtbl -> OnCloseFileEvents(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangFileEvents_INTERFACE_DEFINED__ */


#ifndef __ILangBuildStatusCallback_INTERFACE_DEFINED__
#define __ILangBuildStatusCallback_INTERFACE_DEFINED__

/* interface ILangBuildStatusCallback */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangBuildStatusCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6AFE1134-2A54-11d3-9B5A-00C04F68380C")
    ILangBuildStatusCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BuildBegin( 
            /* [out][in] */ __RPC__inout BOOL *pfContinue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BuildEnd( 
            /* [in] */ BOOL fSuccess) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TickEx( 
            /* [out][in] */ __RPC__inout BOOL *pfContinue,
            /* [in] */ DWORD cItemsLeft,
            /* [in] */ DWORD cItemsTotal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Tick( 
            /* [out] */ __RPC__out BOOL *pfContinue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangBuildStatusCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangBuildStatusCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangBuildStatusCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangBuildStatusCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *BuildBegin )( 
            __RPC__in ILangBuildStatusCallback * This,
            /* [out][in] */ __RPC__inout BOOL *pfContinue);
        
        HRESULT ( STDMETHODCALLTYPE *BuildEnd )( 
            __RPC__in ILangBuildStatusCallback * This,
            /* [in] */ BOOL fSuccess);
        
        HRESULT ( STDMETHODCALLTYPE *TickEx )( 
            __RPC__in ILangBuildStatusCallback * This,
            /* [out][in] */ __RPC__inout BOOL *pfContinue,
            /* [in] */ DWORD cItemsLeft,
            /* [in] */ DWORD cItemsTotal);
        
        HRESULT ( STDMETHODCALLTYPE *Tick )( 
            __RPC__in ILangBuildStatusCallback * This,
            /* [out] */ __RPC__out BOOL *pfContinue);
        
        END_INTERFACE
    } ILangBuildStatusCallbackVtbl;

    interface ILangBuildStatusCallback
    {
        CONST_VTBL struct ILangBuildStatusCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangBuildStatusCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangBuildStatusCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangBuildStatusCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangBuildStatusCallback_BuildBegin(This,pfContinue)	\
    ( (This)->lpVtbl -> BuildBegin(This,pfContinue) ) 

#define ILangBuildStatusCallback_BuildEnd(This,fSuccess)	\
    ( (This)->lpVtbl -> BuildEnd(This,fSuccess) ) 

#define ILangBuildStatusCallback_TickEx(This,pfContinue,cItemsLeft,cItemsTotal)	\
    ( (This)->lpVtbl -> TickEx(This,pfContinue,cItemsLeft,cItemsTotal) ) 

#define ILangBuildStatusCallback_Tick(This,pfContinue)	\
    ( (This)->lpVtbl -> Tick(This,pfContinue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangBuildStatusCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_langproject_0000_0013 */
/* [local] */ 

typedef 
enum __LANGPROJPROPID
    {
        LANGPROJPROPID_LAST	= -3700,
        LANGPROJPROPID_ILangProject	= LANGPROJPROPID_LAST,
        LANGPROJPROPID_CLangCompiler	= -3701,
        LANGPROJPROPID_FIRST	= -3701
    } 	LANGPROJPROPID;



extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0013_v0_0_s_ifspec;

#ifndef __ILangPropertyProvideBatchUpdate_INTERFACE_DEFINED__
#define __ILangPropertyProvideBatchUpdate_INTERFACE_DEFINED__

/* interface ILangPropertyProvideBatchUpdate */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangPropertyProvideBatchUpdate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F8828A38-5208-4497-991A-F8034C8D5A69")
    ILangPropertyProvideBatchUpdate : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginBatch( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndBatch( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsBatchModeEnabled( 
            /* [out][in] */ __RPC__inout BOOL *pbBatchModeEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PushOptionsToCompiler( 
            DISPID dispid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangPropertyProvideBatchUpdateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangPropertyProvideBatchUpdate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangPropertyProvideBatchUpdate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangPropertyProvideBatchUpdate * This);
        
        HRESULT ( STDMETHODCALLTYPE *BeginBatch )( 
            __RPC__in ILangPropertyProvideBatchUpdate * This);
        
        HRESULT ( STDMETHODCALLTYPE *EndBatch )( 
            __RPC__in ILangPropertyProvideBatchUpdate * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsBatchModeEnabled )( 
            __RPC__in ILangPropertyProvideBatchUpdate * This,
            /* [out][in] */ __RPC__inout BOOL *pbBatchModeEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *PushOptionsToCompiler )( 
            __RPC__in ILangPropertyProvideBatchUpdate * This,
            DISPID dispid);
        
        END_INTERFACE
    } ILangPropertyProvideBatchUpdateVtbl;

    interface ILangPropertyProvideBatchUpdate
    {
        CONST_VTBL struct ILangPropertyProvideBatchUpdateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangPropertyProvideBatchUpdate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangPropertyProvideBatchUpdate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangPropertyProvideBatchUpdate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangPropertyProvideBatchUpdate_BeginBatch(This)	\
    ( (This)->lpVtbl -> BeginBatch(This) ) 

#define ILangPropertyProvideBatchUpdate_EndBatch(This)	\
    ( (This)->lpVtbl -> EndBatch(This) ) 

#define ILangPropertyProvideBatchUpdate_IsBatchModeEnabled(This,pbBatchModeEnabled)	\
    ( (This)->lpVtbl -> IsBatchModeEnabled(This,pbBatchModeEnabled) ) 

#define ILangPropertyProvideBatchUpdate_PushOptionsToCompiler(This,dispid)	\
    ( (This)->lpVtbl -> PushOptionsToCompiler(This,dispid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangPropertyProvideBatchUpdate_INTERFACE_DEFINED__ */


#ifndef __ILangCultureStringUtilities_INTERFACE_DEFINED__
#define __ILangCultureStringUtilities_INTERFACE_DEFINED__

/* interface ILangCultureStringUtilities */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangCultureStringUtilities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2C2F78F2-8959-4112-A00B-1A52931318FD")
    ILangCultureStringUtilities : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ValidateCultureString( 
            /* [in] */ __RPC__in BSTR bstrCultureString,
            /* [retval][out] */ __RPC__out BOOL *pbValid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSupportedCultureStrings( 
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *ppsaStrings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CultureStringFromLCID( 
            /* [in] */ LCID lcid,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrCultureString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDetailedCultureStrings( 
            /* [in] */ int iCultureType,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *ppsaStrings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangCultureStringUtilitiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangCultureStringUtilities * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangCultureStringUtilities * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangCultureStringUtilities * This);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateCultureString )( 
            __RPC__in ILangCultureStringUtilities * This,
            /* [in] */ __RPC__in BSTR bstrCultureString,
            /* [retval][out] */ __RPC__out BOOL *pbValid);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupportedCultureStrings )( 
            __RPC__in ILangCultureStringUtilities * This,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *ppsaStrings);
        
        HRESULT ( STDMETHODCALLTYPE *CultureStringFromLCID )( 
            __RPC__in ILangCultureStringUtilities * This,
            /* [in] */ LCID lcid,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrCultureString);
        
        HRESULT ( STDMETHODCALLTYPE *GetDetailedCultureStrings )( 
            __RPC__in ILangCultureStringUtilities * This,
            /* [in] */ int iCultureType,
            /* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *ppsaStrings);
        
        END_INTERFACE
    } ILangCultureStringUtilitiesVtbl;

    interface ILangCultureStringUtilities
    {
        CONST_VTBL struct ILangCultureStringUtilitiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangCultureStringUtilities_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangCultureStringUtilities_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangCultureStringUtilities_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangCultureStringUtilities_ValidateCultureString(This,bstrCultureString,pbValid)	\
    ( (This)->lpVtbl -> ValidateCultureString(This,bstrCultureString,pbValid) ) 

#define ILangCultureStringUtilities_GetSupportedCultureStrings(This,ppsaStrings)	\
    ( (This)->lpVtbl -> GetSupportedCultureStrings(This,ppsaStrings) ) 

#define ILangCultureStringUtilities_CultureStringFromLCID(This,lcid,pbstrCultureString)	\
    ( (This)->lpVtbl -> CultureStringFromLCID(This,lcid,pbstrCultureString) ) 

#define ILangCultureStringUtilities_GetDetailedCultureStrings(This,iCultureType,ppsaStrings)	\
    ( (This)->lpVtbl -> GetDetailedCultureStrings(This,iCultureType,ppsaStrings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangCultureStringUtilities_INTERFACE_DEFINED__ */


#ifndef __ILangNativeAssemblyUtilities_INTERFACE_DEFINED__
#define __ILangNativeAssemblyUtilities_INTERFACE_DEFINED__

/* interface ILangNativeAssemblyUtilities */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangNativeAssemblyUtilities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DBC02F8D-6DC4-49fb-BDEE-C80CBBEA60DD")
    ILangNativeAssemblyUtilities : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNativeAssemblyIdentity( 
            /* [in] */ __RPC__in BSTR bstrAssemblyPath,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAssemblyIndentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNativeApplicationIdentity( 
            /* [in] */ __RPC__in BSTR bstrUrl,
            /* [in] */ __RPC__in BSTR bstrDeployManifestPath,
            /* [in] */ __RPC__in BSTR bstrAppManifestPath,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrApplicationIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckValidPermissionsForDebug( 
            /* [in] */ __RPC__in BSTR bstrManifestPath,
            /* [retval][out] */ __RPC__out BOOL *pbValidPermissionSet) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CheckValidUrl( 
            /* [in] */ __RPC__in BSTR bstrUrl,
            /* [retval][out] */ __RPC__out BOOL *pbValidUrl) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangNativeAssemblyUtilitiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangNativeAssemblyUtilities * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangNativeAssemblyUtilities * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangNativeAssemblyUtilities * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNativeAssemblyIdentity )( 
            __RPC__in ILangNativeAssemblyUtilities * This,
            /* [in] */ __RPC__in BSTR bstrAssemblyPath,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAssemblyIndentity);
        
        HRESULT ( STDMETHODCALLTYPE *GetNativeApplicationIdentity )( 
            __RPC__in ILangNativeAssemblyUtilities * This,
            /* [in] */ __RPC__in BSTR bstrUrl,
            /* [in] */ __RPC__in BSTR bstrDeployManifestPath,
            /* [in] */ __RPC__in BSTR bstrAppManifestPath,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrApplicationIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *CheckValidPermissionsForDebug )( 
            __RPC__in ILangNativeAssemblyUtilities * This,
            /* [in] */ __RPC__in BSTR bstrManifestPath,
            /* [retval][out] */ __RPC__out BOOL *pbValidPermissionSet);
        
        HRESULT ( STDMETHODCALLTYPE *CheckValidUrl )( 
            __RPC__in ILangNativeAssemblyUtilities * This,
            /* [in] */ __RPC__in BSTR bstrUrl,
            /* [retval][out] */ __RPC__out BOOL *pbValidUrl);
        
        END_INTERFACE
    } ILangNativeAssemblyUtilitiesVtbl;

    interface ILangNativeAssemblyUtilities
    {
        CONST_VTBL struct ILangNativeAssemblyUtilitiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangNativeAssemblyUtilities_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangNativeAssemblyUtilities_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangNativeAssemblyUtilities_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangNativeAssemblyUtilities_GetNativeAssemblyIdentity(This,bstrAssemblyPath,pbstrAssemblyIndentity)	\
    ( (This)->lpVtbl -> GetNativeAssemblyIdentity(This,bstrAssemblyPath,pbstrAssemblyIndentity) ) 

#define ILangNativeAssemblyUtilities_GetNativeApplicationIdentity(This,bstrUrl,bstrDeployManifestPath,bstrAppManifestPath,pbstrApplicationIdentity)	\
    ( (This)->lpVtbl -> GetNativeApplicationIdentity(This,bstrUrl,bstrDeployManifestPath,bstrAppManifestPath,pbstrApplicationIdentity) ) 

#define ILangNativeAssemblyUtilities_CheckValidPermissionsForDebug(This,bstrManifestPath,pbValidPermissionSet)	\
    ( (This)->lpVtbl -> CheckValidPermissionsForDebug(This,bstrManifestPath,pbValidPermissionSet) ) 

#define ILangNativeAssemblyUtilities_CheckValidUrl(This,bstrUrl,pbValidUrl)	\
    ( (This)->lpVtbl -> CheckValidUrl(This,bstrUrl,pbValidUrl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangNativeAssemblyUtilities_INTERFACE_DEFINED__ */


#ifndef __ILangUnmanagedRegistrar_INTERFACE_DEFINED__
#define __ILangUnmanagedRegistrar_INTERFACE_DEFINED__

/* interface ILangUnmanagedRegistrar */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangUnmanagedRegistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("022B9963-2325-4F51-992A-BF551BBA5C31")
    ILangUnmanagedRegistrar : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterAssembly( 
            __RPC__in LPCWSTR wszAssemblyPath,
            __RPC__in LPCWSTR wszTypeLibFilename,
            BOOL bRegenerateTypeLibrary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterAssembly( 
            __RPC__in LPCWSTR wszAssemblyPath,
            __RPC__in LPCWSTR wszTypeLibFilename) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Init( 
            __RPC__in LPCWSTR wszAppBase) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cleanup( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangUnmanagedRegistrarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangUnmanagedRegistrar * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangUnmanagedRegistrar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangUnmanagedRegistrar * This);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterAssembly )( 
            __RPC__in ILangUnmanagedRegistrar * This,
            __RPC__in LPCWSTR wszAssemblyPath,
            __RPC__in LPCWSTR wszTypeLibFilename,
            BOOL bRegenerateTypeLibrary);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterAssembly )( 
            __RPC__in ILangUnmanagedRegistrar * This,
            __RPC__in LPCWSTR wszAssemblyPath,
            __RPC__in LPCWSTR wszTypeLibFilename);
        
        HRESULT ( STDMETHODCALLTYPE *Init )( 
            __RPC__in ILangUnmanagedRegistrar * This,
            __RPC__in LPCWSTR wszAppBase);
        
        HRESULT ( STDMETHODCALLTYPE *Cleanup )( 
            __RPC__in ILangUnmanagedRegistrar * This);
        
        END_INTERFACE
    } ILangUnmanagedRegistrarVtbl;

    interface ILangUnmanagedRegistrar
    {
        CONST_VTBL struct ILangUnmanagedRegistrarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangUnmanagedRegistrar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangUnmanagedRegistrar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangUnmanagedRegistrar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangUnmanagedRegistrar_RegisterAssembly(This,wszAssemblyPath,wszTypeLibFilename,bRegenerateTypeLibrary)	\
    ( (This)->lpVtbl -> RegisterAssembly(This,wszAssemblyPath,wszTypeLibFilename,bRegenerateTypeLibrary) ) 

#define ILangUnmanagedRegistrar_UnregisterAssembly(This,wszAssemblyPath,wszTypeLibFilename)	\
    ( (This)->lpVtbl -> UnregisterAssembly(This,wszAssemblyPath,wszTypeLibFilename) ) 

#define ILangUnmanagedRegistrar_Init(This,wszAppBase)	\
    ( (This)->lpVtbl -> Init(This,wszAppBase) ) 

#define ILangUnmanagedRegistrar_Cleanup(This)	\
    ( (This)->lpVtbl -> Cleanup(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangUnmanagedRegistrar_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_langproject_0000_0017 */
/* [local] */ 

typedef 
enum __COM2_ADDREF_FAILURE_ACTION
    {
        C2AFA_ABORT	= 1,
        C2AFA_RETRY	= ( C2AFA_ABORT + 1 ) 
    } 	COM2_ADDREF_FAILURE_ACTION;

typedef struct __COM2_ADDREF_FAILURE_INFO
    {
    COM2_ADDREF_FAILURE_ACTION action;
    LPWSTR wszToolName;
    ULONG cchToolName;
    } 	COM2_ADDREF_FAILURE_INFO;



extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0017_v0_0_s_ifspec;

#ifndef __ILangAddReferenceCallback_INTERFACE_DEFINED__
#define __ILangAddReferenceCallback_INTERFACE_DEFINED__

/* interface ILangAddReferenceCallback */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangAddReferenceCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("86D564C3-690C-45C2-9BA6-744445479C4B")
    ILangAddReferenceCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnCom2AddFailure( 
            __RPC__in LPCWSTR wszTypeLib,
            __RPC__in LPCWSTR wszWrapperTool,
            __RPC__in COM2_ADDREF_FAILURE_INFO *pInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSpecialReferenceAddFailure( 
            __RPC__in LPCWSTR wszPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangAddReferenceCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangAddReferenceCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangAddReferenceCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangAddReferenceCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnCom2AddFailure )( 
            __RPC__in ILangAddReferenceCallback * This,
            __RPC__in LPCWSTR wszTypeLib,
            __RPC__in LPCWSTR wszWrapperTool,
            __RPC__in COM2_ADDREF_FAILURE_INFO *pInfo);
        
        HRESULT ( STDMETHODCALLTYPE *OnSpecialReferenceAddFailure )( 
            __RPC__in ILangAddReferenceCallback * This,
            __RPC__in LPCWSTR wszPath);
        
        END_INTERFACE
    } ILangAddReferenceCallbackVtbl;

    interface ILangAddReferenceCallback
    {
        CONST_VTBL struct ILangAddReferenceCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangAddReferenceCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangAddReferenceCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangAddReferenceCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangAddReferenceCallback_OnCom2AddFailure(This,wszTypeLib,wszWrapperTool,pInfo)	\
    ( (This)->lpVtbl -> OnCom2AddFailure(This,wszTypeLib,wszWrapperTool,pInfo) ) 

#define ILangAddReferenceCallback_OnSpecialReferenceAddFailure(This,wszPath)	\
    ( (This)->lpVtbl -> OnSpecialReferenceAddFailure(This,wszPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangAddReferenceCallback_INTERFACE_DEFINED__ */


#ifndef __ILangInactiveCfgPropertyNotifySink_INTERFACE_DEFINED__
#define __ILangInactiveCfgPropertyNotifySink_INTERFACE_DEFINED__

/* interface ILangInactiveCfgPropertyNotifySink */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangInactiveCfgPropertyNotifySink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20bd130e-bcd6-4977-a7da-121555dca33b")
    ILangInactiveCfgPropertyNotifySink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnChanged( 
            /* [in] */ DISPID dispid,
            /* [in] */ __RPC__in LPCWSTR wszConfigName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangInactiveCfgPropertyNotifySinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangInactiveCfgPropertyNotifySink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangInactiveCfgPropertyNotifySink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangInactiveCfgPropertyNotifySink * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnChanged )( 
            __RPC__in ILangInactiveCfgPropertyNotifySink * This,
            /* [in] */ DISPID dispid,
            /* [in] */ __RPC__in LPCWSTR wszConfigName);
        
        END_INTERFACE
    } ILangInactiveCfgPropertyNotifySinkVtbl;

    interface ILangInactiveCfgPropertyNotifySink
    {
        CONST_VTBL struct ILangInactiveCfgPropertyNotifySinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangInactiveCfgPropertyNotifySink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangInactiveCfgPropertyNotifySink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangInactiveCfgPropertyNotifySink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangInactiveCfgPropertyNotifySink_OnChanged(This,dispid,wszConfigName)	\
    ( (This)->lpVtbl -> OnChanged(This,dispid,wszConfigName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangInactiveCfgPropertyNotifySink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_langproject_0000_0019 */
/* [local] */ 

typedef 
enum __LANGBLD_TASK_KIND
    {
        LBTK_Unused	= 0,
        LBTK_Project_Load	= ( LBTK_Unused + 1 ) ,
        LBTK_Build_General	= ( LBTK_Project_Load + 1 ) ,
        LBTK_Build_Resources	= ( LBTK_Build_General + 1 ) ,
        LBTK_DependencyResolution	= ( LBTK_Build_Resources + 1 ) ,
        LBTK_Generator	= ( LBTK_DependencyResolution + 1 ) ,
        LBTK_Output_Directory_Creation	= ( LBTK_Generator + 1 ) ,
        LBTK_Reference_Manager	= ( LBTK_Output_Directory_Creation + 1 ) ,
        LBTK_RunDir_General	= ( LBTK_Reference_Manager + 1 ) ,
        LBTK_RunDir_Conflict	= ( LBTK_RunDir_General + 1 ) ,
        LBTK_Deploy	= ( LBTK_RunDir_Conflict + 1 ) ,
        LBTK_Compiler_Initialization	= ( LBTK_Deploy + 1 ) 
    } 	LANGBLD_TASK_KIND;

typedef 
enum __TASK_COLL_FLAGS
    {
        TCF_IMMED_REFRESH	= 1,
        TCF_OUTPUT_PANE	= 2,
        TCF_OUTPUT_TASKLIST	= 4,
        TCF_DEFAULT	= ( TCF_OUTPUT_TASKLIST | TCF_OUTPUT_PANE ) ,
        TCF_TASKLISTONLY	= TCF_OUTPUT_TASKLIST,
        TCF_PANEONLY	= TCF_OUTPUT_PANE
    } 	TASK_COLL_FLAGS;



extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_langproject_0000_0019_v0_0_s_ifspec;

#ifndef __ILangBuildDeleteTaskItems_INTERFACE_DEFINED__
#define __ILangBuildDeleteTaskItems_INTERFACE_DEFINED__

/* interface ILangBuildDeleteTaskItems */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangBuildDeleteTaskItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0f1f13a8-84d3-40be-8584-a9f53406b9e7")
    ILangBuildDeleteTaskItems : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DeleteTaskItem( 
            __RPC__in_opt IVsTaskItem *pTaskItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangBuildDeleteTaskItemsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangBuildDeleteTaskItems * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangBuildDeleteTaskItems * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangBuildDeleteTaskItems * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteTaskItem )( 
            __RPC__in ILangBuildDeleteTaskItems * This,
            __RPC__in_opt IVsTaskItem *pTaskItem);
        
        END_INTERFACE
    } ILangBuildDeleteTaskItemsVtbl;

    interface ILangBuildDeleteTaskItems
    {
        CONST_VTBL struct ILangBuildDeleteTaskItemsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangBuildDeleteTaskItems_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangBuildDeleteTaskItems_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangBuildDeleteTaskItems_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangBuildDeleteTaskItems_DeleteTaskItem(This,pTaskItem)	\
    ( (This)->lpVtbl -> DeleteTaskItem(This,pTaskItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangBuildDeleteTaskItems_INTERFACE_DEFINED__ */


#ifndef __ILangBuildTaskItem_INTERFACE_DEFINED__
#define __ILangBuildTaskItem_INTERFACE_DEFINED__

/* interface ILangBuildTaskItem */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangBuildTaskItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60b8588f-8553-4440-acf9-a0cc18c9cdc8")
    ILangBuildTaskItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCategory( 
            /* [in] */ VSTASKCATEGORY cat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCanDelete( 
            /* [in] */ BOOL bCanDelete) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetImageListIndex( 
            /* [in] */ LONG lImageListIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTaskFileAndLine( 
            /* [in] */ __RPC__in LPCOLESTR wszFile,
            /* [in] */ LONG lLine,
            /* [in] */ LONG lCol) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTaskFile( 
            /* [in] */ __RPC__in LPCOLESTR wszFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLangBuildTaskKind( 
            /* [retval][out] */ __RPC__out LANGBLD_TASK_KIND *plbtk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLangBuildTaskKind( 
            /* [in] */ LANGBLD_TASK_KIND lbtk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDelete( 
            /* [in] */ __RPC__in_opt ILangBuildDeleteTaskItems *pDeleteTaskItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNavigable( 
            /* [retval][out] */ __RPC__out BOOL *pbNavigable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNavigable( 
            /* [in] */ BOOL bNavigable) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangBuildTaskItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangBuildTaskItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangBuildTaskItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCategory )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [in] */ VSTASKCATEGORY cat);
        
        HRESULT ( STDMETHODCALLTYPE *SetCanDelete )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [in] */ BOOL bCanDelete);
        
        HRESULT ( STDMETHODCALLTYPE *SetImageListIndex )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [in] */ LONG lImageListIndex);
        
        HRESULT ( STDMETHODCALLTYPE *SetTaskFileAndLine )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [in] */ __RPC__in LPCOLESTR wszFile,
            /* [in] */ LONG lLine,
            /* [in] */ LONG lCol);
        
        HRESULT ( STDMETHODCALLTYPE *SetTaskFile )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [in] */ __RPC__in LPCOLESTR wszFile);
        
        HRESULT ( STDMETHODCALLTYPE *GetLangBuildTaskKind )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [retval][out] */ __RPC__out LANGBLD_TASK_KIND *plbtk);
        
        HRESULT ( STDMETHODCALLTYPE *SetLangBuildTaskKind )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [in] */ LANGBLD_TASK_KIND lbtk);
        
        HRESULT ( STDMETHODCALLTYPE *SetDelete )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [in] */ __RPC__in_opt ILangBuildDeleteTaskItems *pDeleteTaskItems);
        
        HRESULT ( STDMETHODCALLTYPE *GetNavigable )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [retval][out] */ __RPC__out BOOL *pbNavigable);
        
        HRESULT ( STDMETHODCALLTYPE *SetNavigable )( 
            __RPC__in ILangBuildTaskItem * This,
            /* [in] */ BOOL bNavigable);
        
        END_INTERFACE
    } ILangBuildTaskItemVtbl;

    interface ILangBuildTaskItem
    {
        CONST_VTBL struct ILangBuildTaskItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangBuildTaskItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangBuildTaskItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangBuildTaskItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangBuildTaskItem_SetCategory(This,cat)	\
    ( (This)->lpVtbl -> SetCategory(This,cat) ) 

#define ILangBuildTaskItem_SetCanDelete(This,bCanDelete)	\
    ( (This)->lpVtbl -> SetCanDelete(This,bCanDelete) ) 

#define ILangBuildTaskItem_SetImageListIndex(This,lImageListIndex)	\
    ( (This)->lpVtbl -> SetImageListIndex(This,lImageListIndex) ) 

#define ILangBuildTaskItem_SetTaskFileAndLine(This,wszFile,lLine,lCol)	\
    ( (This)->lpVtbl -> SetTaskFileAndLine(This,wszFile,lLine,lCol) ) 

#define ILangBuildTaskItem_SetTaskFile(This,wszFile)	\
    ( (This)->lpVtbl -> SetTaskFile(This,wszFile) ) 

#define ILangBuildTaskItem_GetLangBuildTaskKind(This,plbtk)	\
    ( (This)->lpVtbl -> GetLangBuildTaskKind(This,plbtk) ) 

#define ILangBuildTaskItem_SetLangBuildTaskKind(This,lbtk)	\
    ( (This)->lpVtbl -> SetLangBuildTaskKind(This,lbtk) ) 

#define ILangBuildTaskItem_SetDelete(This,pDeleteTaskItems)	\
    ( (This)->lpVtbl -> SetDelete(This,pDeleteTaskItems) ) 

#define ILangBuildTaskItem_GetNavigable(This,pbNavigable)	\
    ( (This)->lpVtbl -> GetNavigable(This,pbNavigable) ) 

#define ILangBuildTaskItem_SetNavigable(This,bNavigable)	\
    ( (This)->lpVtbl -> SetNavigable(This,bNavigable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangBuildTaskItem_INTERFACE_DEFINED__ */


#ifndef __ILangBuildTaskCollection_INTERFACE_DEFINED__
#define __ILangBuildTaskCollection_INTERFACE_DEFINED__

/* interface ILangBuildTaskCollection */
/* [object][uuid] */ 


EXTERN_C const IID IID_ILangBuildTaskCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cac4396a-3e11-49c7-8cc9-0f0453174d04")
    ILangBuildTaskCollection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddTask( 
            /* [in] */ DWORD dwControlFlags,
            /* [in] */ __RPC__in_opt IVsTaskItem *pVsTaskItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllTasks( 
            /* [in] */ DWORD dwControlFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveTasksByKind( 
            /* [in] */ LANGBLD_TASK_KIND lbtk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTaskArray( 
            /* [out] */ __RPC__deref_out_opt IVsTaskItem ***pppVsTaskItem,
            /* [out] */ __RPC__out ULONG *pcActual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Term( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILangBuildTaskCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILangBuildTaskCollection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILangBuildTaskCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILangBuildTaskCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddTask )( 
            __RPC__in ILangBuildTaskCollection * This,
            /* [in] */ DWORD dwControlFlags,
            /* [in] */ __RPC__in_opt IVsTaskItem *pVsTaskItem);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveAllTasks )( 
            __RPC__in ILangBuildTaskCollection * This,
            /* [in] */ DWORD dwControlFlags);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveTasksByKind )( 
            __RPC__in ILangBuildTaskCollection * This,
            /* [in] */ LANGBLD_TASK_KIND lbtk);
        
        HRESULT ( STDMETHODCALLTYPE *GetTaskArray )( 
            __RPC__in ILangBuildTaskCollection * This,
            /* [out] */ __RPC__deref_out_opt IVsTaskItem ***pppVsTaskItem,
            /* [out] */ __RPC__out ULONG *pcActual);
        
        HRESULT ( STDMETHODCALLTYPE *Term )( 
            __RPC__in ILangBuildTaskCollection * This);
        
        END_INTERFACE
    } ILangBuildTaskCollectionVtbl;

    interface ILangBuildTaskCollection
    {
        CONST_VTBL struct ILangBuildTaskCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILangBuildTaskCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILangBuildTaskCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILangBuildTaskCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILangBuildTaskCollection_AddTask(This,dwControlFlags,pVsTaskItem)	\
    ( (This)->lpVtbl -> AddTask(This,dwControlFlags,pVsTaskItem) ) 

#define ILangBuildTaskCollection_RemoveAllTasks(This,dwControlFlags)	\
    ( (This)->lpVtbl -> RemoveAllTasks(This,dwControlFlags) ) 

#define ILangBuildTaskCollection_RemoveTasksByKind(This,lbtk)	\
    ( (This)->lpVtbl -> RemoveTasksByKind(This,lbtk) ) 

#define ILangBuildTaskCollection_GetTaskArray(This,pppVsTaskItem,pcActual)	\
    ( (This)->lpVtbl -> GetTaskArray(This,pppVsTaskItem,pcActual) ) 

#define ILangBuildTaskCollection_Term(This)	\
    ( (This)->lpVtbl -> Term(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILangBuildTaskCollection_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


