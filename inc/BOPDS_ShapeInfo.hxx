// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPDS_ShapeInfo_HeaderFile
#define _BOPDS_ShapeInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Bnd_Box_HeaderFile
#include <Bnd_Box.hxx>
#endif
#ifndef _BOPCol_ListOfInteger_HeaderFile
#include <BOPCol_ListOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BOPCol_BaseAllocator_HeaderFile
#include <BOPCol_BaseAllocator.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Shape;
class Bnd_Box;



//! The class BOPDS_ShapeInfo is to store <br>
//! handy information about shape <br>
class BOPDS_ShapeInfo  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty contructor <br>
//! <br>
      BOPDS_ShapeInfo();
virtual ~BOPDS_ShapeInfo();
  
//!  Contructor <br>
//!  theAllocator - the allocator to manage the memory <br>
//! <br>
      BOPDS_ShapeInfo(const BOPCol_BaseAllocator& theAllocator);
  
//! Modifier <br>
//! Sets the shape <theS> <br>
        void SetShape(const TopoDS_Shape& theS) ;
  
//! Selector <br>
//! Returns the shape <br>
       const TopoDS_Shape& Shape() const;
  
//! Modifier <br>
//! Sets the type of shape theType <br>
        void SetShapeType(const TopAbs_ShapeEnum theType) ;
  
//! Selector <br>
//! Returns the type of shape <br>
        TopAbs_ShapeEnum ShapeType() const;
  
//! Modifier <br>
//! Sets the boundung box of the shape theBox <br>
        void SetBox(const Bnd_Box& theBox) ;
  
//! Selector <br>
//! Returns the boundung box of the shape <br>
       const Bnd_Box& Box() const;
  
//! Selector/Modifier <br>
//! Returns the boundung box of the shape <br>
        Bnd_Box& ChangeBox() ;
  
//! Selector <br>
//! Returns the list of indices of sub-shapes <br>
       const BOPCol_ListOfInteger& SubShapes() const;
  
//! Selector/ Modifier <br>
//! Returns the list of indices of sub-shapes <br>
        BOPCol_ListOfInteger& ChangeSubShapes() ;
  
//! Query <br>
//! Returns true if the shape has sub-shape with <br>
//! index theI <br>
        Standard_Boolean HasSubShape(const Standard_Integer theI) const;
  
        Standard_Boolean HasReference() const;
  
//! Modifier <br>
//! Sets the index of a reference information <br>
        void SetReference(const Standard_Integer theI) ;
  
//! Selector <br>
//! Returns the index of a reference information <br>
        Standard_Integer Reference() const;
  
//! Query <br>
//! Returns true if the shape has boundary representation <br>
        Standard_Boolean HasBRep() const;
  
//! Returns true if the shape can be participant of <br>
//! an interference <br>
//! <br>
//!  Flag <br>
//! <br>
        Standard_Boolean IsInterfering() const;
  
//! Query <br>
//! Returns true if there is flag. <br>
        Standard_Boolean HasFlag() const;
  
//! Query <br>
//! Returns true if there is flag. <br>
//! Returns the the  flag theFlag <br>
        Standard_Boolean HasFlag(Standard_Integer& theFlag) const;
  
//! Modifier <br>
//! Sets the flag <br>
        void SetFlag(const Standard_Integer theI) ;
  
//! Returns the flag <br>
        Standard_Integer Flag() const;
  
  Standard_EXPORT     void Dump() const;





protected:



TopoDS_Shape myShape;
TopAbs_ShapeEnum myType;
Bnd_Box myBox;
BOPCol_ListOfInteger mySubShapes;
Standard_Integer myReference;
Standard_Integer myFlag;


private:





};


#include <BOPDS_ShapeInfo.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
