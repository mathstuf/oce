// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Face_HeaderFile
#define _StepShape_Face_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_Face_HeaderFile
#include <Handle_StepShape_Face.hxx>
#endif

#ifndef _Handle_StepShape_HArray1OfFaceBound_HeaderFile
#include <Handle_StepShape_HArray1OfFaceBound.hxx>
#endif
#ifndef _StepShape_TopologicalRepresentationItem_HeaderFile
#include <StepShape_TopologicalRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepShape_FaceBound_HeaderFile
#include <Handle_StepShape_FaceBound.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepShape_HArray1OfFaceBound;
class TCollection_HAsciiString;
class StepShape_FaceBound;



class StepShape_Face : public StepShape_TopologicalRepresentationItem {

public:

  //! Returns a Face <br>
  Standard_EXPORT   StepShape_Face();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepShape_HArray1OfFaceBound)& aBounds) ;
  
  Standard_EXPORT   virtual  void SetBounds(const Handle(StepShape_HArray1OfFaceBound)& aBounds) ;
  
  Standard_EXPORT   virtual  Handle_StepShape_HArray1OfFaceBound Bounds() const;
  
  Standard_EXPORT   virtual  Handle_StepShape_FaceBound BoundsValue(const Standard_Integer num) const;
  
  Standard_EXPORT   virtual  Standard_Integer NbBounds() const;




  DEFINE_STANDARD_RTTI(StepShape_Face)

protected:




private: 


Handle_StepShape_HArray1OfFaceBound bounds;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif