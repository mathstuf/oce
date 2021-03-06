// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_HShape_HeaderFile
#define _TopoDS_HShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopoDS_HShape_HeaderFile
#include <Handle_TopoDS_HShape.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TopoDS_Shape;


//!Class to manipulate a Shape with  handle. <br>
class TopoDS_HShape : public MMgt_TShared {

public:

  //! Constructs an empty shape object <br>
      TopoDS_HShape();
  //! Constructs a shape object defined by the shape aShape. <br>
      TopoDS_HShape(const TopoDS_Shape& aShape);
  //! Loads this shape with the shape aShape <br>
        void Shape(const TopoDS_Shape& aShape) ;
  //! Returns a reference to a constant TopoDS_Shape based on this shape. <br>
       const TopoDS_Shape& Shape() const;
  
//! Exchanges the TopoDS_Shape object defining this <br>
//! shape for another one referencing the same underlying shape <br>
//! Accesses the list of shapes within the underlying <br>
//! shape referenced by the TopoDS_Shape object. <br>
//! Returns a reference to a TopoDS_Shape based on <br>
//! this shape. The TopoDS_Shape can be modified. <br>
        TopoDS_Shape& ChangeShape() ;




  DEFINE_STANDARD_RTTI(TopoDS_HShape)

protected:




private: 


TopoDS_Shape myShape;


};


#include <TopoDS_HShape.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
