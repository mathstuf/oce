// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_SectionPlacement_HeaderFile
#define _BRepFill_SectionPlacement_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_BRepFill_LocationLaw_HeaderFile
#include <Handle_BRepFill_LocationLaw.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _gp_Trsf_HeaderFile
#include <gp_Trsf.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class BRepFill_LocationLaw;
class TopoDS_Shape;
class gp_Trsf;


//! Place a shape in a local axis coordinate <br>
class BRepFill_SectionPlacement  {
public:

  DEFINE_STANDARD_ALLOC

  //! Automatic placement <br>
  Standard_EXPORT   BRepFill_SectionPlacement(const Handle(BRepFill_LocationLaw)& Law,const TopoDS_Shape& Section,const Standard_Boolean WithContact = Standard_False,const Standard_Boolean WithCorrection = Standard_False);
  //! Placement on vertex <br>
  Standard_EXPORT   BRepFill_SectionPlacement(const Handle(BRepFill_LocationLaw)& Law,const TopoDS_Shape& Section,const TopoDS_Shape& Vertex,const Standard_Boolean WithContact = Standard_False,const Standard_Boolean WithCorrection = Standard_False);
  
  Standard_EXPORT    const gp_Trsf& Transformation() const;
  
  Standard_EXPORT     Standard_Real AbscissaOnPath() ;





protected:





private:

  
  Standard_EXPORT     void Perform(const Standard_Boolean WithContact,const Standard_Boolean WithCorrection,const TopoDS_Shape& Vertex) ;


Handle_BRepFill_LocationLaw myLaw;
TopoDS_Shape mySection;
gp_Trsf myTrsf;
Standard_Real myParam;
Standard_Integer myIndex;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
