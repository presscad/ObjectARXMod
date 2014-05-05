// 
// (C) Copyright 1997 by Autodesk, Inc. 
//
// Permission to use, copy, modify, and distribute this software in
// object code form for any purpose and without fee is hereby granted, 
// provided that the above copyright notice appears in all copies and 
// that both that copyright notice and the limited warranty and
// restricted rights notice below appear in all supporting 
// documentation.
//
// AUTODESK PROVIDES THIS PROGRAM "AS IS" AND WITH ALL FAULTS. 
// AUTODESK SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTY OF
// MERCHANTABILITY OR FITNESS FOR A PARTICULAR USE.  AUTODESK, INC. 
// DOES NOT WARRANT THAT THE OPERATION OF THE PROGRAM WILL BE
// UNINTERRUPTED OR ERROR FREE.
//
// Use, duplication, or disclosure by the U.S. Government is subject to 
// restrictions set forth in FAR 52.227-19 (Commercial Computer
// Software - Restricted Rights) and DFAR 252.227-7013(c)(1)(ii)
// (Rights in Technical Data and Computer Software), as applicable.
//

////////////////////////////////////////////////////////////////////////////////
// template.cpp
//
// This file contains all of the source code for a skeleton ARX application that
// uses the AVLib interface to Render.arx.
//
// This template follows the form of an ADS application migrated to ARX.
// (See Appendix A of the ARX Developer's Guide.)  It uses acedDefun(), rather
// than acedRegCmds->addCommand(), so functions are callable from AutoLISP.
// (Using acedRegCmds->addCommand() for apps that use AVLib is not recommended.)
// 
// Code added to the skeletal ADS->ARX application that is special to AVLib
// is commented.  Search for "AVLIB" to quickly identify them.
//
////////////////////////////////////////////////////////////////////////////////

#pragma warning( disable : 4514 ) // unreferenced inline function
                                  // (warning generated by math.h)

#include "rxdlinkr.h"
#include "rxregsvc.h"
#include "rxdefs.h"
#include "avlib.h" // include AVLIB header

#define ELEMENTS(array) (sizeof(array) / sizeof((array)[0]))
#define RENDER_SERVICES /*MSG0*/"RENDER_SERVICES"

extern "C" AcRx::AppRetCode acrxEntryPoint(AcRx::AppMsgCode msg, void* );

////////////////////////////////////////////////////////////////////////////////
// ADS Function Table
////////////////////////////////////////////////////////////////////////////////

typedef struct {
    char        *name;
    AvErrorCode (*fptr)(struct resbuf *);
} FunctionTableEntry;

// Declare all functions refered to in the ADS Function Table here
//
AvErrorCode sample1(struct resbuf *);
AvErrorCode sample2(struct resbuf *);

FunctionTableEntry gFunctionTable[] = {
            {"C:SAMPLE1",    sample1}, // <--- Replace with entries
			{"C:SAMPLE2",    sample2}, // <--- for your functions
        };


////////////////////////////////////////////////////////////////////////////////
// Static function declarations
////////////////////////////////////////////////////////////////////////////////

static int dofun();
static int funcload();


////////////////////////////////////////////////////////////////////////////////
// Rx Module Interface Functions
////////////////////////////////////////////////////////////////////////////////

extern "C" AcRx::AppRetCode
acrxEntryPoint(AcRx::AppMsgCode msg, void* ptr)
{
	if (ptr != NULL) 
	{
        // We have been handed some kind of object
        // but we aren't going to do anything with it.
	}

    switch(msg) {
        case AcRx::kInitAppMsg:
            acrxDynamicLinker->registerAppMDIAware(ptr);
            acrxDynamicLinker->unlockApplication(ptr);
            break;
        case AcRx::kInvkSubrMsg:
            dofun();
            break;
        case AcRx::kLoadADSMsg:
            funcload();
            break;
        default:
            break;
    }
    return AcRx::kRetOK;
}


////////////////////////////////////////////////////////////////////////////////
// funcload()
//
// This function is called to define all function names in the ADS
// function table.  Each named function will be callable from lisp or
// invokable from another ADS application.
//
static int
funcload()
{
    unsigned short i;
    AvErrorCode retval;
    static int sbInitialized = FALSE;

	// AVLIB: we must call av_loadlib() to assure that Render.arx
	// is loaded.
	//
    if (!sbInitialized) {
        retval = av_loadlib();
        if (retval != AvRetNorm) {
            acdbFail("Library initialization failed.\n");
            return RTERROR;
        }
        sbInitialized = TRUE;
    }
	
	// call acedDefun() for each function name 
	// in gFunctionTable

    for (i = 0; i < ELEMENTS(gFunctionTable); i++) {
        if (acedDefun(gFunctionTable[i].name, (short)i) != RTNORM)
            return RTERROR;
    }

    return RTNORM;
}


////////////////////////////////////////////////////////////////////////////////
// dofun()
//
// This function calls the function in gGunctionTable that is indexed by
// the ADS function code.
//
static int
dofun()
{
	struct resbuf *rb;
	AvErrorCode retval;
	unsigned short func;

	// Reload Render.arx if it has been unloaded
	//
	if (! acrxServiceDictionary->at(RENDER_SERVICES))
	{
		retval = av_loadlib();
        if (retval != AvRetNorm) {
            acdbFail("Library initialization failed.\n");
            return RTERROR;
        }
	}

    func = (unsigned short)acedGetFunCode();
	if (func >= ELEMENTS(gFunctionTable))
	{
		acdbFail("Received nonexistent function code.");
		return RTERROR;
	}

    rb =  acedGetArgs();

	// AVLib: here, we call av_initialize, which issues
	// the "renderupdate" command
	//
    av_initialize();

    retval = (*gFunctionTable[func].fptr)(rb);

	acutRelRb(rb);

	if (retval == AvRetNorm)
		return RTNORM;
	else
		return RTERROR;
}


////////////////////////////////////////////////////////////////////////////////
// Functions added to Template
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Replace the sample functions with your functions.
// Remember to create entries for your functions in the gFunctionTable.
////////////////////////////////////////////////////////////////////////////////

AvErrorCode
sample1(struct resbuf *rb)
{
	acutPrintf("Called Sample1 function. Resbuf address = %x\n", rb);
    return AvRetNorm; // return codes defined in avlib\inc\averror.h
}


AvErrorCode
sample2(struct resbuf *rb)
{
	acutPrintf("Called Sample2 function. Resbuf address = %x\n", rb);
    return AvRetNorm; // return codes defined in avlib\inc\averror.h
}