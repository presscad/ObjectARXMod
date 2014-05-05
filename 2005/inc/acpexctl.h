/*
   (C) Copyright 1999-2003 by Autodesk, Inc. 
  
   Permission to use, copy, modify, and distribute this software in
   object code form for any purpose and without fee is hereby granted, 
   provided that the above copyright notice appears in all copies and 
   that both that copyright notice and the limited warranty and
   restricted rights notice below appear in all supporting 
   documentation.
  
   AUTODESK PROVIDES THIS PROGRAM "AS IS" AND WITH ALL FAULTS. 
   AUTODESK SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTY OF
   MERCHANTABILITY OR FITNESS FOR A PARTICULAR USE.  AUTODESK, INC. 
   DOES NOT WARRANT THAT THE OPERATION OF THE PROGRAM WILL BE
   UNINTERRUPTED OR ERROR FREE.
  
   Use, duplication, or disclosure by the U.S. Government is subject to 
   restrictions set forth in FAR 52.227-19 (Commercial Computer
   Software - Restricted Rights) and DFAR 252.227-7013(c)(1)(ii)
   (Rights in Technical Data and Computer Software), as applicable.
  
  
*/

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0347 */
/* at Tue Feb 24 23:23:13 2004
 */
/* Compiler settings for U:\global\src\coreapps\opm\AcPEXCtl\AcPEXCtl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef ___AcPEXCtl_h__
#define ___AcPEXCtl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAcPeNumericEditor_FWD_DEFINED__
#define __IAcPeNumericEditor_FWD_DEFINED__
typedef interface IAcPeNumericEditor IAcPeNumericEditor;
#endif 	/* __IAcPeNumericEditor_FWD_DEFINED__ */


#ifndef __IAcPeVariantCtrl_FWD_DEFINED__
#define __IAcPeVariantCtrl_FWD_DEFINED__
typedef interface IAcPeVariantCtrl IAcPeVariantCtrl;
#endif 	/* __IAcPeVariantCtrl_FWD_DEFINED__ */


#ifndef __IAcPeColorCtrl_FWD_DEFINED__
#define __IAcPeColorCtrl_FWD_DEFINED__
typedef interface IAcPeColorCtrl IAcPeColorCtrl;
#endif 	/* __IAcPeColorCtrl_FWD_DEFINED__ */


#ifndef __IAcPeSpinCtrl_FWD_DEFINED__
#define __IAcPeSpinCtrl_FWD_DEFINED__
typedef interface IAcPeSpinCtrl IAcPeSpinCtrl;
#endif 	/* __IAcPeSpinCtrl_FWD_DEFINED__ */


#ifndef __IAcPeNoPickVariantRW_FWD_DEFINED__
#define __IAcPeNoPickVariantRW_FWD_DEFINED__
typedef interface IAcPeNoPickVariantRW IAcPeNoPickVariantRW;
#endif 	/* __IAcPeNoPickVariantRW_FWD_DEFINED__ */


#ifndef __IAcPeButtonEditCtrl_FWD_DEFINED__
#define __IAcPeButtonEditCtrl_FWD_DEFINED__
typedef interface IAcPeButtonEditCtrl IAcPeButtonEditCtrl;
#endif 	/* __IAcPeButtonEditCtrl_FWD_DEFINED__ */


#ifndef __IAcPePick2PointsCtrl_FWD_DEFINED__
#define __IAcPePick2PointsCtrl_FWD_DEFINED__
typedef interface IAcPePick2PointsCtrl IAcPePick2PointsCtrl;
#endif 	/* __IAcPePick2PointsCtrl_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorText_FWD_DEFINED__
#define __AcPePropertyEditorText_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorText AcPePropertyEditorText;
#else
typedef struct AcPePropertyEditorText AcPePropertyEditorText;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorText_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorLWeight_FWD_DEFINED__
#define __AcPePropertyEditorLWeight_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorLWeight AcPePropertyEditorLWeight;
#else
typedef struct AcPePropertyEditorLWeight AcPePropertyEditorLWeight;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorLWeight_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorLayer_FWD_DEFINED__
#define __AcPePropertyEditorLayer_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorLayer AcPePropertyEditorLayer;
#else
typedef struct AcPePropertyEditorLayer AcPePropertyEditorLayer;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorLayer_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorColor_FWD_DEFINED__
#define __AcPePropertyEditorColor_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorColor AcPePropertyEditorColor;
#else
typedef struct AcPePropertyEditorColor AcPePropertyEditorColor;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorColor_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorLType_FWD_DEFINED__
#define __AcPePropertyEditorLType_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorLType AcPePropertyEditorLType;
#else
typedef struct AcPePropertyEditorLType AcPePropertyEditorLType;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorLType_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorNumeric_FWD_DEFINED__
#define __AcPePropertyEditorNumeric_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorNumeric AcPePropertyEditorNumeric;
#else
typedef struct AcPePropertyEditorNumeric AcPePropertyEditorNumeric;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorNumeric_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorBool_FWD_DEFINED__
#define __AcPePropertyEditorBool_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorBool AcPePropertyEditorBool;
#else
typedef struct AcPePropertyEditorBool AcPePropertyEditorBool;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorBool_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorACADNumeric_FWD_DEFINED__
#define __AcPePropertyEditorACADNumeric_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorACADNumeric AcPePropertyEditorACADNumeric;
#else
typedef struct AcPePropertyEditorACADNumeric AcPePropertyEditorACADNumeric;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorACADNumeric_FWD_DEFINED__ */


#ifndef __AcPePick2PointsCtrl_FWD_DEFINED__
#define __AcPePick2PointsCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePick2PointsCtrl AcPePick2PointsCtrl;
#else
typedef struct AcPePick2PointsCtrl AcPePick2PointsCtrl;
#endif /* __cplusplus */

#endif 	/* __AcPePick2PointsCtrl_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorNumericArea_FWD_DEFINED__
#define __AcPePropertyEditorNumericArea_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorNumericArea AcPePropertyEditorNumericArea;
#else
typedef struct AcPePropertyEditorNumericArea AcPePropertyEditorNumericArea;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorNumericArea_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorEllipses_FWD_DEFINED__
#define __AcPePropertyEditorEllipses_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorEllipses AcPePropertyEditorEllipses;
#else
typedef struct AcPePropertyEditorEllipses AcPePropertyEditorEllipses;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorEllipses_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorEditButton_FWD_DEFINED__
#define __AcPePropertyEditorEditButton_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorEditButton AcPePropertyEditorEditButton;
#else
typedef struct AcPePropertyEditorEditButton AcPePropertyEditorEditButton;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorEditButton_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorEnum_FWD_DEFINED__
#define __AcPePropertyEditorEnum_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorEnum AcPePropertyEditorEnum;
#else
typedef struct AcPePropertyEditorEnum AcPePropertyEditorEnum;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorEnum_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorHatchEnum_FWD_DEFINED__
#define __AcPePropertyEditorHatchEnum_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorHatchEnum AcPePropertyEditorHatchEnum;
#else
typedef struct AcPePropertyEditorHatchEnum AcPePropertyEditorHatchEnum;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorHatchEnum_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorMTextDir_FWD_DEFINED__
#define __AcPePropertyEditorMTextDir_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorMTextDir AcPePropertyEditorMTextDir;
#else
typedef struct AcPePropertyEditorMTextDir AcPePropertyEditorMTextDir;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorMTextDir_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorHatchISOPenWidth_FWD_DEFINED__
#define __AcPePropertyEditorHatchISOPenWidth_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorHatchISOPenWidth AcPePropertyEditorHatchISOPenWidth;
#else
typedef struct AcPePropertyEditorHatchISOPenWidth AcPePropertyEditorHatchISOPenWidth;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorHatchISOPenWidth_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorHatchPatternName_FWD_DEFINED__
#define __AcPePropertyEditorHatchPatternName_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorHatchPatternName AcPePropertyEditorHatchPatternName;
#else
typedef struct AcPePropertyEditorHatchPatternName AcPePropertyEditorHatchPatternName;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorHatchPatternName_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorEllipsisHatchPatternType_FWD_DEFINED__
#define __AcPePropertyEditorEllipsisHatchPatternType_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorEllipsisHatchPatternType AcPePropertyEditorEllipsisHatchPatternType;
#else
typedef struct AcPePropertyEditorEllipsisHatchPatternType AcPePropertyEditorEllipsisHatchPatternType;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorEllipsisHatchPatternType_FWD_DEFINED__ */


#ifndef __AcPeDlgLaunchCtrl_FWD_DEFINED__
#define __AcPeDlgLaunchCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPeDlgLaunchCtrl AcPeDlgLaunchCtrl;
#else
typedef struct AcPeDlgLaunchCtrl AcPeDlgLaunchCtrl;
#endif /* __cplusplus */

#endif 	/* __AcPeDlgLaunchCtrl_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorVariant_FWD_DEFINED__
#define __AcPePropertyEditorVariant_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorVariant AcPePropertyEditorVariant;
#else
typedef struct AcPePropertyEditorVariant AcPePropertyEditorVariant;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorVariant_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorEllipsesHyperlinks_FWD_DEFINED__
#define __AcPePropertyEditorEllipsesHyperlinks_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorEllipsesHyperlinks AcPePropertyEditorEllipsesHyperlinks;
#else
typedef struct AcPePropertyEditorEllipsesHyperlinks AcPePropertyEditorEllipsesHyperlinks;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorEllipsesHyperlinks_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorSpin_FWD_DEFINED__
#define __AcPePropertyEditorSpin_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorSpin AcPePropertyEditorSpin;
#else
typedef struct AcPePropertyEditorSpin AcPePropertyEditorSpin;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorSpin_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorDimArrowHead_FWD_DEFINED__
#define __AcPePropertyEditorDimArrowHead_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorDimArrowHead AcPePropertyEditorDimArrowHead;
#else
typedef struct AcPePropertyEditorDimArrowHead AcPePropertyEditorDimArrowHead;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorDimArrowHead_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorGradientPattern_FWD_DEFINED__
#define __AcPePropertyEditorGradientPattern_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorGradientPattern AcPePropertyEditorGradientPattern;
#else
typedef struct AcPePropertyEditorGradientPattern AcPePropertyEditorGradientPattern;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorGradientPattern_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorPlotStyleName_FWD_DEFINED__
#define __AcPePropertyEditorPlotStyleName_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorPlotStyleName AcPePropertyEditorPlotStyleName;
#else
typedef struct AcPePropertyEditorPlotStyleName AcPePropertyEditorPlotStyleName;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorPlotStyleName_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorPlotStyleTable_FWD_DEFINED__
#define __AcPePropertyEditorPlotStyleTable_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorPlotStyleTable AcPePropertyEditorPlotStyleTable;
#else
typedef struct AcPePropertyEditorPlotStyleTable AcPePropertyEditorPlotStyleTable;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorPlotStyleTable_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorNoPickVariant_FWD_DEFINED__
#define __AcPePropertyEditorNoPickVariant_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorNoPickVariant AcPePropertyEditorNoPickVariant;
#else
typedef struct AcPePropertyEditorNoPickVariant AcPePropertyEditorNoPickVariant;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorNoPickVariant_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorRasterImageHeight_FWD_DEFINED__
#define __AcPePropertyEditorRasterImageHeight_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorRasterImageHeight AcPePropertyEditorRasterImageHeight;
#else
typedef struct AcPePropertyEditorRasterImageHeight AcPePropertyEditorRasterImageHeight;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorRasterImageHeight_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorRasterImageWidth_FWD_DEFINED__
#define __AcPePropertyEditorRasterImageWidth_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorRasterImageWidth AcPePropertyEditorRasterImageWidth;
#else
typedef struct AcPePropertyEditorRasterImageWidth AcPePropertyEditorRasterImageWidth;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorRasterImageWidth_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorTextJustify_FWD_DEFINED__
#define __AcPePropertyEditorTextJustify_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorTextJustify AcPePropertyEditorTextJustify;
#else
typedef struct AcPePropertyEditorTextJustify AcPePropertyEditorTextJustify;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorTextJustify_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorEllipseEndAngle_FWD_DEFINED__
#define __AcPePropertyEditorEllipseEndAngle_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorEllipseEndAngle AcPePropertyEditorEllipseEndAngle;
#else
typedef struct AcPePropertyEditorEllipseEndAngle AcPePropertyEditorEllipseEndAngle;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorEllipseEndAngle_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorDimStyle_FWD_DEFINED__
#define __AcPePropertyEditorDimStyle_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorDimStyle AcPePropertyEditorDimStyle;
#else
typedef struct AcPePropertyEditorDimStyle AcPePropertyEditorDimStyle;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorDimStyle_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorTextStyle_FWD_DEFINED__
#define __AcPePropertyEditorTextStyle_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorTextStyle AcPePropertyEditorTextStyle;
#else
typedef struct AcPePropertyEditorTextStyle AcPePropertyEditorTextStyle;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorTextStyle_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorMTextStyle_FWD_DEFINED__
#define __AcPePropertyEditorMTextStyle_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorMTextStyle AcPePropertyEditorMTextStyle;
#else
typedef struct AcPePropertyEditorMTextStyle AcPePropertyEditorMTextStyle;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorMTextStyle_FWD_DEFINED__ */


#ifndef __AcPePropertyEditorCustomColor_FWD_DEFINED__
#define __AcPePropertyEditorCustomColor_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcPePropertyEditorCustomColor AcPePropertyEditorCustomColor;
#else
typedef struct AcPePropertyEditorCustomColor AcPePropertyEditorCustomColor;
#endif /* __cplusplus */

#endif 	/* __AcPePropertyEditorCustomColor_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "acpi.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_AcPEXCtl_0000 */
/* [local] */ 

#define DISPID_BTNEDIT_DEF_PIC 1
#define DISPID_BTNEDIT_DIS_PIC 2


extern RPC_IF_HANDLE __MIDL_itf_AcPEXCtl_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AcPEXCtl_0000_v0_0_s_ifspec;


#ifndef __ACPEXCTLLib_LIBRARY_DEFINED__
#define __ACPEXCTLLib_LIBRARY_DEFINED__

/* library ACPEXCTLLib */
/* [custom][helpstring][version][uuid] */ 

typedef /* [v1_enum][uuid] */  DECLSPEC_UUID("70AFDEB0-099C-494e-A493-5E0ECD614004") 
enum AcPeNumericType
    {	PE_ACAD_DISTANCE	= 0,
	PE_ACAD_ANGLE	= 0x1,
	PE_ACAD_NOUNITS	= 0x2,
	PE_ACAD_OTHER	= 0x3
    } 	AcPeNumericType;

#define CLSID_PropertyEditorText CLSID_AcPePropertyEditorText
#define CLSID_PropertyEditorLWeight CLSID_AcPePropertyEditorLWeight
#define CLSID_PropertyEditorLayer CLSID_AcPePropertyEditorLayer
#define CLSID_PropertyEditorColor CLSID_AcPePropertyEditorColor
#define CLSID_PropertyEditorLType CLSID_AcPePropertyEditorLType
#define CLSID_PropertyEditorNumeric CLSID_AcPePropertyEditorNumeric
#define CLSID_PropertyEditorBool CLSID_AcPePropertyEditorBool
#define CLSID_PropertyEditorACADNumeric CLSID_AcPePropertyEditorACADNumeric
#define CLSID_PropertyEditorNumericArea CLSID_AcPePropertyEditorNumericArea
#define CLSID_PropertyEditorEllipses CLSID_AcPePropertyEditorEllipses
#define CLSID_PropertyEditorEditButton CLSID_AcPePropertyEditorEditButton
#define CLSID_PropertyEditorEnum CLSID_AcPePropertyEditorEnum
#define CLSID_PropertyEditorHatchEnum CLSID_AcPePropertyEditorHatchEnum
#define CLSID_PropertyEditorMTextDir CLSID_AcPePropertyEditorMTextDir
#define CLSID_PropertyEditorHatchISOPenWidth CLSID_AcPePropertyEditorHatchISOPenWidth
#define CLSID_PropertyEditorHatchPatternName CLSID_AcPePropertyEditorHatchPatternName
#define CLSID_PropertyEditorEllipsisHatchPatternType CLSID_AcPePropertyEditorEllipsisHatchPatternType
#define CLSID_PropertyEditorVariant CLSID_AcPePropertyEditorVariant
#define CLSID_PropertyEditorEllipsesHyperlinks CLSID_AcPePropertyEditorEllipsesHyperlinks
#define CLSID_PropertyEditorSpin CLSID_AcPePropertyEditorSpin
#define CLSID_PropertyEditorDimArrowHead CLSID_AcPePropertyEditorDimArrowHead
#define CLSID_PropertyEditorGradientPattern CLSID_AcPePropertyEditorGradientPattern
#define CLSID_PropertyEditorPlotStyleName CLSID_AcPePropertyEditorPlotStyleName
#define CLSID_PropertyEditorPlotStyleTable CLSID_AcPePropertyEditorPlotStyleTable
#define CLSID_PropertyEditorNoPickVariant CLSID_AcPePropertyEditorNoPickVariant
#define CLSID_PropertyEditorRasterImageHeight CLSID_AcPePropertyEditorRasterImageHeight
#define CLSID_PropertyEditorRasterImageWidth CLSID_AcPePropertyEditorRasterImageWidth
#define CLSID_PropertyEditorTextJustify CLSID_AcPePropertyEditorTextJustify
#define CLSID_PropertyEditorEllipseEndAngle CLSID_AcPePropertyEditorEllipseEndAngle
#define CLSID_PropertyEditorDimStyle CLSID_AcPePropertyEditorDimStyle
#define CLSID_PropertyEditorTextStyle CLSID_AcPePropertyEditorTextStyle
#define CLSID_PropertyEditorMTextStyle CLSID_AcPePropertyEditorMTextStyle

EXTERN_C const IID LIBID_ACPEXCTLLib;

#ifndef __IAcPeNumericEditor_INTERFACE_DEFINED__
#define __IAcPeNumericEditor_INTERFACE_DEFINED__

/* interface IAcPeNumericEditor */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAcPeNumericEditor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD52023A-9B0D-44c8-AD8A-B28250858222")
    IAcPeNumericEditor : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetNumericDataType( 
            /* [in] */ enum AcPeNumericType dataType) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAcPeNumericEditorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcPeNumericEditor * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcPeNumericEditor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcPeNumericEditor * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetNumericDataType )( 
            IAcPeNumericEditor * This,
            /* [in] */ enum AcPeNumericType dataType);
        
        END_INTERFACE
    } IAcPeNumericEditorVtbl;

    interface IAcPeNumericEditor
    {
        CONST_VTBL struct IAcPeNumericEditorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcPeNumericEditor_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAcPeNumericEditor_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAcPeNumericEditor_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAcPeNumericEditor_SetNumericDataType(This,dataType)	\
    (This)->lpVtbl -> SetNumericDataType(This,dataType)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAcPeNumericEditor_SetNumericDataType_Proxy( 
    IAcPeNumericEditor * This,
    /* [in] */ enum AcPeNumericType dataType);


void __RPC_STUB IAcPeNumericEditor_SetNumericDataType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAcPeNumericEditor_INTERFACE_DEFINED__ */


#ifndef __IAcPeVariantCtrl_INTERFACE_DEFINED__
#define __IAcPeVariantCtrl_INTERFACE_DEFINED__

/* interface IAcPeVariantCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAcPeVariantCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A5B57E5-7B4F-4fee-B36B-FF636468ED91")
    IAcPeVariantCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDwCookies( 
            /* [in] */ VARIANT cookieArray) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetGroupOffset( 
            /* [in] */ DWORD dwOffset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetElementCount( 
            /* [in] */ DWORD elemCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAcPeVariantCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcPeVariantCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcPeVariantCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcPeVariantCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetDwCookies )( 
            IAcPeVariantCtrl * This,
            /* [in] */ VARIANT cookieArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetGroupOffset )( 
            IAcPeVariantCtrl * This,
            /* [in] */ DWORD dwOffset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetElementCount )( 
            IAcPeVariantCtrl * This,
            /* [in] */ DWORD elemCount);
        
        END_INTERFACE
    } IAcPeVariantCtrlVtbl;

    interface IAcPeVariantCtrl
    {
        CONST_VTBL struct IAcPeVariantCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcPeVariantCtrl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAcPeVariantCtrl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAcPeVariantCtrl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAcPeVariantCtrl_SetDwCookies(This,cookieArray)	\
    (This)->lpVtbl -> SetDwCookies(This,cookieArray)

#define IAcPeVariantCtrl_SetGroupOffset(This,dwOffset)	\
    (This)->lpVtbl -> SetGroupOffset(This,dwOffset)

#define IAcPeVariantCtrl_SetElementCount(This,elemCount)	\
    (This)->lpVtbl -> SetElementCount(This,elemCount)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAcPeVariantCtrl_SetDwCookies_Proxy( 
    IAcPeVariantCtrl * This,
    /* [in] */ VARIANT cookieArray);


void __RPC_STUB IAcPeVariantCtrl_SetDwCookies_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAcPeVariantCtrl_SetGroupOffset_Proxy( 
    IAcPeVariantCtrl * This,
    /* [in] */ DWORD dwOffset);


void __RPC_STUB IAcPeVariantCtrl_SetGroupOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAcPeVariantCtrl_SetElementCount_Proxy( 
    IAcPeVariantCtrl * This,
    /* [in] */ DWORD elemCount);


void __RPC_STUB IAcPeVariantCtrl_SetElementCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAcPeVariantCtrl_INTERFACE_DEFINED__ */


#ifndef __IAcPeColorCtrl_INTERFACE_DEFINED__
#define __IAcPeColorCtrl_INTERFACE_DEFINED__

/* interface IAcPeColorCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAcPeColorCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3C308511-9949-46F3-93A5-76D23A633E11")
    IAcPeColorCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetNoMetaColor( 
            /* [in] */ VARIANT_BOOL bNoMetaColors) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAcPeColorCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcPeColorCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcPeColorCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcPeColorCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetNoMetaColor )( 
            IAcPeColorCtrl * This,
            /* [in] */ VARIANT_BOOL bNoMetaColors);
        
        END_INTERFACE
    } IAcPeColorCtrlVtbl;

    interface IAcPeColorCtrl
    {
        CONST_VTBL struct IAcPeColorCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcPeColorCtrl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAcPeColorCtrl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAcPeColorCtrl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAcPeColorCtrl_SetNoMetaColor(This,bNoMetaColors)	\
    (This)->lpVtbl -> SetNoMetaColor(This,bNoMetaColors)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAcPeColorCtrl_SetNoMetaColor_Proxy( 
    IAcPeColorCtrl * This,
    /* [in] */ VARIANT_BOOL bNoMetaColors);


void __RPC_STUB IAcPeColorCtrl_SetNoMetaColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAcPeColorCtrl_INTERFACE_DEFINED__ */


#ifndef __IAcPeSpinCtrl_INTERFACE_DEFINED__
#define __IAcPeSpinCtrl_INTERFACE_DEFINED__

/* interface IAcPeSpinCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAcPeSpinCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4132B288-9018-4690-BDFD-58A0EB2F3D27")
    IAcPeSpinCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetControls( 
            /* [in] */ VARIANT varControlsIUnkArray) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAcPeSpinCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcPeSpinCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcPeSpinCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcPeSpinCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetControls )( 
            IAcPeSpinCtrl * This,
            /* [in] */ VARIANT varControlsIUnkArray);
        
        END_INTERFACE
    } IAcPeSpinCtrlVtbl;

    interface IAcPeSpinCtrl
    {
        CONST_VTBL struct IAcPeSpinCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcPeSpinCtrl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAcPeSpinCtrl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAcPeSpinCtrl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAcPeSpinCtrl_SetControls(This,varControlsIUnkArray)	\
    (This)->lpVtbl -> SetControls(This,varControlsIUnkArray)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAcPeSpinCtrl_SetControls_Proxy( 
    IAcPeSpinCtrl * This,
    /* [in] */ VARIANT varControlsIUnkArray);


void __RPC_STUB IAcPeSpinCtrl_SetControls_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAcPeSpinCtrl_INTERFACE_DEFINED__ */


#ifndef __IAcPeNoPickVariantRW_INTERFACE_DEFINED__
#define __IAcPeNoPickVariantRW_INTERFACE_DEFINED__

/* interface IAcPeNoPickVariantRW */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAcPeNoPickVariantRW;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FFDC513D-B298-4d51-ACA7-8384F1196650")
    IAcPeNoPickVariantRW : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAlwaysRW( 
            /* [in] */ VARIANT_BOOL bIsAlwaysRW) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAcPeNoPickVariantRWVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcPeNoPickVariantRW * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcPeNoPickVariantRW * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcPeNoPickVariantRW * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAlwaysRW )( 
            IAcPeNoPickVariantRW * This,
            /* [in] */ VARIANT_BOOL bIsAlwaysRW);
        
        END_INTERFACE
    } IAcPeNoPickVariantRWVtbl;

    interface IAcPeNoPickVariantRW
    {
        CONST_VTBL struct IAcPeNoPickVariantRWVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcPeNoPickVariantRW_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAcPeNoPickVariantRW_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAcPeNoPickVariantRW_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAcPeNoPickVariantRW_SetAlwaysRW(This,bIsAlwaysRW)	\
    (This)->lpVtbl -> SetAlwaysRW(This,bIsAlwaysRW)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAcPeNoPickVariantRW_SetAlwaysRW_Proxy( 
    IAcPeNoPickVariantRW * This,
    /* [in] */ VARIANT_BOOL bIsAlwaysRW);


void __RPC_STUB IAcPeNoPickVariantRW_SetAlwaysRW_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAcPeNoPickVariantRW_INTERFACE_DEFINED__ */


#ifndef __IAcPeButtonEditCtrl_INTERFACE_DEFINED__
#define __IAcPeButtonEditCtrl_INTERFACE_DEFINED__

/* interface IAcPeButtonEditCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAcPeButtonEditCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5295B0C4-94A0-4167-BA90-1C61A868E269")
    IAcPeButtonEditCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultPicture( 
            /* [in] */ IUnknown *pIPicture) = 0;
        
        virtual /* [helpstring][id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultPicture( 
            /* [retval][out] */ IUnknown **pIPicture) = 0;
        
        virtual /* [helpstring][id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE put_DisabledPicture( 
            /* [in] */ IUnknown *pIPicture) = 0;
        
        virtual /* [helpstring][id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE get_DisabledPicture( 
            /* [retval][out] */ IUnknown **pIPicture) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAcPeButtonEditCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcPeButtonEditCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcPeButtonEditCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcPeButtonEditCtrl * This);
        
        /* [helpstring][id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultPicture )( 
            IAcPeButtonEditCtrl * This,
            /* [in] */ IUnknown *pIPicture);
        
        /* [helpstring][id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultPicture )( 
            IAcPeButtonEditCtrl * This,
            /* [retval][out] */ IUnknown **pIPicture);
        
        /* [helpstring][id][requestedit][bindable][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisabledPicture )( 
            IAcPeButtonEditCtrl * This,
            /* [in] */ IUnknown *pIPicture);
        
        /* [helpstring][id][requestedit][bindable][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisabledPicture )( 
            IAcPeButtonEditCtrl * This,
            /* [retval][out] */ IUnknown **pIPicture);
        
        END_INTERFACE
    } IAcPeButtonEditCtrlVtbl;

    interface IAcPeButtonEditCtrl
    {
        CONST_VTBL struct IAcPeButtonEditCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcPeButtonEditCtrl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAcPeButtonEditCtrl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAcPeButtonEditCtrl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAcPeButtonEditCtrl_put_DefaultPicture(This,pIPicture)	\
    (This)->lpVtbl -> put_DefaultPicture(This,pIPicture)

#define IAcPeButtonEditCtrl_get_DefaultPicture(This,pIPicture)	\
    (This)->lpVtbl -> get_DefaultPicture(This,pIPicture)

#define IAcPeButtonEditCtrl_put_DisabledPicture(This,pIPicture)	\
    (This)->lpVtbl -> put_DisabledPicture(This,pIPicture)

#define IAcPeButtonEditCtrl_get_DisabledPicture(This,pIPicture)	\
    (This)->lpVtbl -> get_DisabledPicture(This,pIPicture)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE IAcPeButtonEditCtrl_put_DefaultPicture_Proxy( 
    IAcPeButtonEditCtrl * This,
    /* [in] */ IUnknown *pIPicture);


void __RPC_STUB IAcPeButtonEditCtrl_put_DefaultPicture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE IAcPeButtonEditCtrl_get_DefaultPicture_Proxy( 
    IAcPeButtonEditCtrl * This,
    /* [retval][out] */ IUnknown **pIPicture);


void __RPC_STUB IAcPeButtonEditCtrl_get_DefaultPicture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][requestedit][bindable][propput] */ HRESULT STDMETHODCALLTYPE IAcPeButtonEditCtrl_put_DisabledPicture_Proxy( 
    IAcPeButtonEditCtrl * This,
    /* [in] */ IUnknown *pIPicture);


void __RPC_STUB IAcPeButtonEditCtrl_put_DisabledPicture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][requestedit][bindable][propget] */ HRESULT STDMETHODCALLTYPE IAcPeButtonEditCtrl_get_DisabledPicture_Proxy( 
    IAcPeButtonEditCtrl * This,
    /* [retval][out] */ IUnknown **pIPicture);


void __RPC_STUB IAcPeButtonEditCtrl_get_DisabledPicture_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAcPeButtonEditCtrl_INTERFACE_DEFINED__ */


#ifndef __IAcPePick2PointsCtrl_INTERFACE_DEFINED__
#define __IAcPePick2PointsCtrl_INTERFACE_DEFINED__

/* interface IAcPePick2PointsCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAcPePick2PointsCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01500220-9289-41be-9A2E-F300A84598B0")
    IAcPePick2PointsCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPrompts( 
            /* [in] */ BSTR prompt1,
            /* [in] */ BSTR prompt2) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IAcPePick2PointsCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcPePick2PointsCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcPePick2PointsCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcPePick2PointsCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPrompts )( 
            IAcPePick2PointsCtrl * This,
            /* [in] */ BSTR prompt1,
            /* [in] */ BSTR prompt2);
        
        END_INTERFACE
    } IAcPePick2PointsCtrlVtbl;

    interface IAcPePick2PointsCtrl
    {
        CONST_VTBL struct IAcPePick2PointsCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcPePick2PointsCtrl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IAcPePick2PointsCtrl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IAcPePick2PointsCtrl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IAcPePick2PointsCtrl_SetPrompts(This,prompt1,prompt2)	\
    (This)->lpVtbl -> SetPrompts(This,prompt1,prompt2)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IAcPePick2PointsCtrl_SetPrompts_Proxy( 
    IAcPePick2PointsCtrl * This,
    /* [in] */ BSTR prompt1,
    /* [in] */ BSTR prompt2);


void __RPC_STUB IAcPePick2PointsCtrl_SetPrompts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAcPePick2PointsCtrl_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AcPePropertyEditorText;

#ifdef __cplusplus

class DECLSPEC_UUID("E631D337-7F88-44C8-B63F-C9031292FB4E")
AcPePropertyEditorText;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorLWeight;

#ifdef __cplusplus

class DECLSPEC_UUID("7C21FF74-D9D0-4C6B-9C25-1D41B58F4776")
AcPePropertyEditorLWeight;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorLayer;

#ifdef __cplusplus

class DECLSPEC_UUID("7FFD8B60-5083-4c30-A642-AE08CD6B75E7")
AcPePropertyEditorLayer;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorColor;

#ifdef __cplusplus

class DECLSPEC_UUID("5149A9AC-E7E5-43C7-A78F-A80A53783A8D")
AcPePropertyEditorColor;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorLType;

#ifdef __cplusplus

class DECLSPEC_UUID("615F2CF0-C283-4ff9-B839-FAB43A957885")
AcPePropertyEditorLType;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorNumeric;

#ifdef __cplusplus

class DECLSPEC_UUID("50446CFC-B0CF-432a-BA08-5D1CBDF090C8")
AcPePropertyEditorNumeric;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorBool;

#ifdef __cplusplus

class DECLSPEC_UUID("6C2269DC-77B6-4908-8D0C-4E3CF1036FA7")
AcPePropertyEditorBool;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorACADNumeric;

#ifdef __cplusplus

class DECLSPEC_UUID("D621630B-0BFA-480e-94EF-2EEA1BD58D51")
AcPePropertyEditorACADNumeric;
#endif

EXTERN_C const CLSID CLSID_AcPePick2PointsCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("15CC9D07-16B4-11d6-A4C1-001083782B8E")
AcPePick2PointsCtrl;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorNumericArea;

#ifdef __cplusplus

class DECLSPEC_UUID("7E7D8243-4A38-42f5-A152-0629315D7B2B")
AcPePropertyEditorNumericArea;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorEllipses;

#ifdef __cplusplus

class DECLSPEC_UUID("DDE306CA-B5C1-4c92-AFAB-2B37D01A717F")
AcPePropertyEditorEllipses;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorEditButton;

#ifdef __cplusplus

class DECLSPEC_UUID("C504B291-944A-4828-9CFC-D3727B651AC7")
AcPePropertyEditorEditButton;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorEnum;

#ifdef __cplusplus

class DECLSPEC_UUID("4DE4AD7B-6F4A-441e-98EE-8B1DF0F8BDC4")
AcPePropertyEditorEnum;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorHatchEnum;

#ifdef __cplusplus

class DECLSPEC_UUID("8221CC89-8C65-4c50-85FE-53005DE1B3B0")
AcPePropertyEditorHatchEnum;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorMTextDir;

#ifdef __cplusplus

class DECLSPEC_UUID("E2E8A2A9-935D-4bb5-9347-717DDAEB327F")
AcPePropertyEditorMTextDir;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorHatchISOPenWidth;

#ifdef __cplusplus

class DECLSPEC_UUID("EF5A02F6-7908-407f-A945-2BCB2AE589AB")
AcPePropertyEditorHatchISOPenWidth;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorHatchPatternName;

#ifdef __cplusplus

class DECLSPEC_UUID("CD5C7ABB-9A0C-4c3a-B0C7-73296AFF7EC1")
AcPePropertyEditorHatchPatternName;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorEllipsisHatchPatternType;

#ifdef __cplusplus

class DECLSPEC_UUID("04D47EE2-EA15-41bd-A1E7-990331C7CECD")
AcPePropertyEditorEllipsisHatchPatternType;
#endif

EXTERN_C const CLSID CLSID_AcPeDlgLaunchCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("C6CB13D4-3E36-4ab8-80D2-FC202CBB0ACD")
AcPeDlgLaunchCtrl;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorVariant;

#ifdef __cplusplus

class DECLSPEC_UUID("C14AD0AE-7C2D-48e7-B8FC-2D48AD9149D1")
AcPePropertyEditorVariant;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorEllipsesHyperlinks;

#ifdef __cplusplus

class DECLSPEC_UUID("45D4C0E8-5896-420d-A27C-6A9793497065")
AcPePropertyEditorEllipsesHyperlinks;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorSpin;

#ifdef __cplusplus

class DECLSPEC_UUID("2AF455A6-9012-4d01-9E02-A8E5680E1E7E")
AcPePropertyEditorSpin;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorDimArrowHead;

#ifdef __cplusplus

class DECLSPEC_UUID("AA055959-C7F1-4cfd-A2D1-8881D547E79C")
AcPePropertyEditorDimArrowHead;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorGradientPattern;

#ifdef __cplusplus

class DECLSPEC_UUID("94684377-17FE-452E-9A51-7AABFFFE40BA")
AcPePropertyEditorGradientPattern;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorPlotStyleName;

#ifdef __cplusplus

class DECLSPEC_UUID("55CF0D68-EBD0-4d54-B138-98CCF7BCCB20")
AcPePropertyEditorPlotStyleName;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorPlotStyleTable;

#ifdef __cplusplus

class DECLSPEC_UUID("98EEC9A9-7F09-48e0-B615-984801A634CB")
AcPePropertyEditorPlotStyleTable;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorNoPickVariant;

#ifdef __cplusplus

class DECLSPEC_UUID("C64EA053-7634-4466-89CF-AFDAB92C8F1B")
AcPePropertyEditorNoPickVariant;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorRasterImageHeight;

#ifdef __cplusplus

class DECLSPEC_UUID("ED2490B2-06E6-4b7e-80D7-1ADAD6363694")
AcPePropertyEditorRasterImageHeight;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorRasterImageWidth;

#ifdef __cplusplus

class DECLSPEC_UUID("99CD9966-D002-425d-AB7A-04E500546DB6")
AcPePropertyEditorRasterImageWidth;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorTextJustify;

#ifdef __cplusplus

class DECLSPEC_UUID("CC7F3967-6919-42e6-A2ED-6FFA0697AFBB")
AcPePropertyEditorTextJustify;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorEllipseEndAngle;

#ifdef __cplusplus

class DECLSPEC_UUID("7C672133-53DB-4fbf-BA5C-E017F83D866B")
AcPePropertyEditorEllipseEndAngle;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorDimStyle;

#ifdef __cplusplus

class DECLSPEC_UUID("4D0BBBEF-B91D-46ac-A3C0-BEBB947FADE6")
AcPePropertyEditorDimStyle;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorTextStyle;

#ifdef __cplusplus

class DECLSPEC_UUID("E4A55764-4C3D-405e-BCCB-8C81AB6DBCFC")
AcPePropertyEditorTextStyle;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorMTextStyle;

#ifdef __cplusplus

class DECLSPEC_UUID("151E6750-4079-4609-9FD3-AD68B60F8B65")
AcPePropertyEditorMTextStyle;
#endif

EXTERN_C const CLSID CLSID_AcPePropertyEditorCustomColor;

#ifdef __cplusplus

class DECLSPEC_UUID("43FD41DE-D16A-44ad-847F-70C08743BDDB")
AcPePropertyEditorCustomColor;
#endif
#endif /* __ACPEXCTLLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


