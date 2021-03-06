// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_Drawing_HeaderFile
#define _IGESDraw_Drawing_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDraw_Drawing_HeaderFile
#include <Handle_IGESDraw_Drawing.hxx>
#endif

#ifndef _Handle_IGESDraw_HArray1OfViewKindEntity_HeaderFile
#include <Handle_IGESDraw_HArray1OfViewKindEntity.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfXY_HeaderFile
#include <Handle_TColgp_HArray1OfXY.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IGESData_ViewKindEntity_HeaderFile
#include <Handle_IGESData_ViewKindEntity.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class IGESDraw_HArray1OfViewKindEntity;
class TColgp_HArray1OfXY;
class IGESData_HArray1OfIGESEntity;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class IGESData_ViewKindEntity;
class gp_Pnt2d;
class IGESData_IGESEntity;
class gp_XY;
class gp_XYZ;


//! defines IGESDrawing, Type <404> Form <0> <br>
//!          in package IGESDraw <br>
//! <br>
//!          Specifies a drawing as a collection of annotation entities <br>
//!          defined in drawing space, and views which together <br>
//!          constitute a single representation of a part <br>
class IGESDraw_Drawing : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDraw_Drawing();
  //! This method is used to set the fields of the class <br>
//!           Drawing <br>
//!     - allViews       : Pointers to DEs of View entities <br>
//!     - allViewOrigins : Origin coordinates of transformed Views <br>
//!     - allAnnotations : Pointers to DEs of Annotation entities <br>
//! raises exception if Lengths of allViews and allViewOrigins are <br>
//! not same. <br>
  Standard_EXPORT     void Init(const Handle(IGESDraw_HArray1OfViewKindEntity)& allViews,const Handle(TColgp_HArray1OfXY)& allViewOrigins,const Handle(IGESData_HArray1OfIGESEntity)& allAnnotations) ;
  //! returns the number of view pointers in <me> <br>
  Standard_EXPORT     Standard_Integer NbViews() const;
  //! returns the ViewKindEntity indicated by ViewIndex <br>
//! raises an exception if ViewIndex <= 0 or ViewIndex > NbViews(). <br>
  Standard_EXPORT     Handle_IGESData_ViewKindEntity ViewItem(const Standard_Integer ViewIndex) const;
  //! returns the Drawing space coordinates of the origin of the <br>
//! Transformed view indicated by TViewIndex <br>
//! raises an exception if TViewIndex <= 0 or TViewIndex > NbViews(). <br>
  Standard_EXPORT     gp_Pnt2d ViewOrigin(const Standard_Integer TViewIndex) const;
  //! returns the number of Annotation entities in <me> <br>
  Standard_EXPORT     Standard_Integer NbAnnotations() const;
  //! returns the Annotation entity in this Drawing, indicated by the <br>
//! AnnotationIndex <br>
//! raises an exception if AnnotationIndex <= 0 or <br>
//! AnnotationIndex > NbAnnotations(). <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity Annotation(const Standard_Integer AnnotationIndex) const;
  
  Standard_EXPORT     gp_XY ViewToDrawing(const Standard_Integer NumView,const gp_XYZ& ViewCoords) const;
  //! Returns the Drawing Unit Value if it is specified (by a <br>
//!           specific property entity) <br>
//!           If not specified, returns False, and val as zero : <br>
//!           unit to consider is then the model unit in GlobalSection <br>
  Standard_EXPORT     Standard_Boolean DrawingUnit(Standard_Real& value) const;
  //! Returns the Drawing Size if it is specified (by a <br>
//!           specific property entity) <br>
//!           If not specified, returns False, and X,Y as zero : <br>
//!           unit to consider is then the model unit in GlobalSection <br>
  Standard_EXPORT     Standard_Boolean DrawingSize(Standard_Real& X,Standard_Real& Y) const;




  DEFINE_STANDARD_RTTI(IGESDraw_Drawing)

protected:




private: 


Handle_IGESDraw_HArray1OfViewKindEntity theViews;
Handle_TColgp_HArray1OfXY theViewOrigins;
Handle_IGESData_HArray1OfIGESEntity theAnnotations;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
