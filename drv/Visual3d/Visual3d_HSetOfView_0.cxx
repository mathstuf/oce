// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Visual3d_HSetOfView.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _Visual3d_View_HeaderFile
#include <Visual3d_View.hxx>
#endif
#ifndef _Visual3d_SetOfView_HeaderFile
#include <Visual3d_SetOfView.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(Visual3d_HSetOfView)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Visual3d_HSetOfView)


IMPLEMENT_DOWNCAST(Visual3d_HSetOfView,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Visual3d_HSetOfView)


#define Item Handle_Visual3d_View
#define Item_hxx <Visual3d_View.hxx>
#define TheSet Visual3d_SetOfView
#define TheSet_hxx <Visual3d_SetOfView.hxx>
#define TCollection_HSet Visual3d_HSetOfView
#define TCollection_HSet_hxx <Visual3d_HSetOfView.hxx>
#define Handle_TCollection_HSet Handle_Visual3d_HSetOfView
#define TCollection_HSet_Type_() Visual3d_HSetOfView_Type_()
#include <TCollection_HSet.gxx>

