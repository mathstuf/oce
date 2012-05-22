// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSelect_BRepOwner_HeaderFile
#define _StdSelect_BRepOwner_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StdSelect_BRepOwner_HeaderFile
#include <Handle_StdSelect_BRepOwner.hxx>
#endif

#ifndef _Handle_StdSelect_Shape_HeaderFile
#include <Handle_StdSelect_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _SelectMgr_EntityOwner_HeaderFile
#include <SelectMgr_EntityOwner.hxx>
#endif
#ifndef _Handle_SelectMgr_SelectableObject_HeaderFile
#include <Handle_SelectMgr_SelectableObject.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager_HeaderFile
#include <Handle_PrsMgr_PresentationManager.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
class StdSelect_Shape;
class TopoDS_Shape;
class SelectMgr_SelectableObject;
class PrsMgr_PresentationManager;
class PrsMgr_PresentationManager3d;
class TopLoc_Location;


//! Defines Specific Owners for Sensitive Primitives <br>
//!          (Sensitive Segments,Circles...). <br>
//!          Used in Dynamic Selection Mechanism. <br>
//!          A BRepOwner has an Owner (the shape it represents) <br>
//!          and Users (One or More Transient entities). <br>
class StdSelect_BRepOwner : public SelectMgr_EntityOwner {

public:

  //! Constructs an owner specification framework defined <br>
//! by the priority aPriority. <br>
  Standard_EXPORT   StdSelect_BRepOwner(const Standard_Integer aPriority);
  //! Constructs an owner specification framework defined <br>
//! by the shape aShape and the priority aPriority. <br>
//! aShape and aPriority are stored in this framework. If <br>
//! more than one owner are detected during dynamic <br>
//! selection, the one with the highest priority is the one stored. <br>
  Standard_EXPORT   StdSelect_BRepOwner(const TopoDS_Shape& aShape,const Standard_Integer aPriority = 0,const Standard_Boolean ComesFromDecomposition = Standard_False);
  //! Constructs an owner specification framework defined <br>
//! by the shape aShape, the selectable object theOrigin <br>
//! and the priority aPriority. <br>
//! aShape, theOrigin and aPriority are stored in this <br>
//! framework. If more than one owner are detected <br>
//! during dynamic selection, the one with the highest <br>
//! priority is the one stored. <br>
  Standard_EXPORT   StdSelect_BRepOwner(const TopoDS_Shape& aShape,const Handle(SelectMgr_SelectableObject)& theOrigin,const Standard_Integer aPriority = 0,const Standard_Boolean FromDecomposition = Standard_False);
  //! returns False if no shape was set <br>
//! <br>
        Standard_Boolean HasShape() const;
  //! <FromDecomposition> indicates whether <aShape> <br>
//!          comes from decomposition of a bigger shape. <br>
  Standard_EXPORT     void Set(const TopoDS_Shape& aShape,const Standard_Boolean FromDecomposition = Standard_False) ;
  
        Standard_Boolean ComesFromDecomposition() const;
  
       const TopoDS_Shape& Shape() const;
  
//! Returns true if this framework has a highlight mode defined for it. <br>
        Standard_Boolean HasHilightMode() const;
  //! Sets the highlight mode for this framework. <br>
//! This defines the type of display used to highlight the <br>
//! owner of the shape when it is detected by the selector. <br>
//! The default type of display is wireframe, defined by the index 0. <br>
        void SetHilightMode(const Standard_Integer aMode) ;
  //! Resets the higlight mode for this framework. <br>
//! This defines the type of display used to highlight the <br>
//! owner of the shape when it is detected by the selector. <br>
//! The default type of display is wireframe, defined by the index 0. <br>
        void ResetHilightMode() ;
  //! Returns the highlight mode for this framework. <br>
//! This defines the type of display used to highlight the <br>
//! owner of the shape when it is detected by the selector. <br>
//! The default type of display is wireframe, defined by the index 0. <br>
        Standard_Integer HilightMode() const;
  //! Returns true if an object with the selection mode <br>
//! aMode is highlighted in the presentation manager aPM. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsHilighted(const Handle(PrsMgr_PresentationManager)& aPM,const Standard_Integer aMode = 0) const;
  
  Standard_EXPORT   virtual  void Hilight() ;
  //! Returns the selection mode aMode defining the type <br>
//! of shape highlighted in the presentation manager aPM. <br>
  Standard_EXPORT   virtual  void Hilight(const Handle(PrsMgr_PresentationManager)& aPM,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   virtual  void HilightWithColor(const Handle(PrsMgr_PresentationManager3d)& aPM,const Quantity_NameOfColor aCol,const Standard_Integer aMode = 0) ;
  //! Removes highlighting from the type of shape <br>
//! identified the selection mode aMode in the presentation manager aPM. <br>
  Standard_EXPORT   virtual  void Unhilight(const Handle(PrsMgr_PresentationManager)& aPM,const Standard_Integer aMode = 0) ;
  //! Clears the presentation manager object aPM of all <br>
//! shapes with the selection mode aMode. <br>
  Standard_EXPORT   virtual  void Clear(const Handle(PrsMgr_PresentationManager)& aPM,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   virtual  void SetLocation(const TopLoc_Location& aLoc) ;
  
  Standard_EXPORT   virtual  void ResetLocation() ;
  //! Set Z layer ID and update all presentations. <br>
  Standard_EXPORT   virtual  void SetZLayer(const Handle(PrsMgr_PresentationManager)& thePrsMgr,const Standard_Integer theLayerId) ;




  DEFINE_STANDARD_RTTI(StdSelect_BRepOwner)

protected:


Standard_Boolean myFromDecomposition;
TopoDS_Shape myShape;


private: 


Handle_StdSelect_Shape myPrsSh;
Standard_Integer myCurMode;


};


#include <StdSelect_BRepOwner.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
