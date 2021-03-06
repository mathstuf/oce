#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_Macros_HeaderFile
#include <Storage_Macros.hxx>
#endif
class Handle(PXCAFDoc_Location);
class Handle(PXCAFDoc_Color);
class Handle(PXCAFDoc_Volume);
class Handle(PXCAFDoc_Area);
class Handle(PXCAFDoc_Centroid);
class Handle(PXCAFDoc_ColorTool);
class Handle(PXCAFDoc_ShapeTool);
class Handle(PXCAFDoc_DocumentTool);
class Handle(PXCAFDoc_LayerTool);
class Handle(PXCAFDoc_GraphNode);
class Handle(PXCAFDoc_GraphNodeSequence);
class Handle(PXCAFDoc_SeqNodeOfGraphNodeSequence);
class Handle(PXCAFDoc_Datum);
class Handle(PXCAFDoc_DimTol);
class Handle(PXCAFDoc_DimTolTool);
class Handle(PXCAFDoc_Material);
class Handle(PXCAFDoc_MaterialTool);
class Handle(PDF_Attribute);
class Handle(Standard_Persistent);
class Standard_Storable;
class PTopLoc_Location;
class Quantity_Color;
class gp_Pnt;
class Standard_GUID;
class Handle(PMMgt_PManaged);
class Handle(PCollection_HAsciiString);
class Handle(PColStd_HArray1OfReal);
class Handle(PTopLoc_Datum3D);
class Handle(PTopLoc_ItemLocation);
class gp_Ax1;
class gp_Ax2;
class gp_Trsf;
class gp_Vec;
class gp_XYZ;
class DBC_VArrayOfCharacter;
class Handle(PCollection_HExtendedString);
class PColStd_FieldOfHArray1OfReal;
class gp_Dir;
class gp_Ax3;
class gp_Mat;
class gp_Trsf2d;
class DBC_VArrayOfExtCharacter;
class gp_Ax2d;
class gp_Mat2d;
class gp_Pnt2d;
class gp_Vec2d;
class gp_XY;
class gp_Dir2d;
// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFSchema_HeaderFile
#define _XCAFSchema_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Storage_Macros_HeaderFile
#include <Storage_Macros.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Storage_stCONSTclCOM.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif

DEFINE_STANDARD_HANDLE(XCAFSchema,Storage_Schema)

//! Schema <br>
class XCAFSchema : public Storage_Schema {
public:

  Storage_DECLARE_SCHEMA_METHODS(XCAFSchema)

  DEFINE_STANDARD_RTTI(XCAFSchema)
};

#endif
