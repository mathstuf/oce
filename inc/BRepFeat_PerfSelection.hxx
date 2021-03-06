// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFeat_PerfSelection_HeaderFile
#define _BRepFeat_PerfSelection_HeaderFile

//! To declare the type of selection semantics for local operation Perform methods <br>
//! -   NoSelection <br>
//! -   SelectionFU - selection of a face up to which a <br>
//!   local operation will be performed <br>
//! -   SelectionU - selection of a point up to which a <br>
//!   local operation will be performed <br>
//! -   SelectionSh - selection of a shape on which a <br>
//!   local operation will be performed <br>
//! -   SelectionShU - selection of a shape up to which a <br>
//!   local operation will be performed. <br>
enum BRepFeat_PerfSelection {
BRepFeat_NoSelection,
BRepFeat_SelectionFU,
BRepFeat_SelectionU,
BRepFeat_SelectionSh,
BRepFeat_SelectionShU
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
