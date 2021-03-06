// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppParCurves_HArray1OfMultiBSpCurve_HeaderFile
#define _AppParCurves_HArray1OfMultiBSpCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AppParCurves_HArray1OfMultiBSpCurve_HeaderFile
#include <Handle_AppParCurves_HArray1OfMultiBSpCurve.hxx>
#endif

#ifndef _AppParCurves_Array1OfMultiBSpCurve_HeaderFile
#include <AppParCurves_Array1OfMultiBSpCurve.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class AppParCurves_MultiBSpCurve;
class AppParCurves_Array1OfMultiBSpCurve;



class AppParCurves_HArray1OfMultiBSpCurve : public MMgt_TShared {

public:

  
      AppParCurves_HArray1OfMultiBSpCurve(const Standard_Integer Low,const Standard_Integer Up);
  
      AppParCurves_HArray1OfMultiBSpCurve(const Standard_Integer Low,const Standard_Integer Up,const AppParCurves_MultiBSpCurve& V);
  
        void Init(const AppParCurves_MultiBSpCurve& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const AppParCurves_MultiBSpCurve& Value) ;
  
       const AppParCurves_MultiBSpCurve& Value(const Standard_Integer Index) const;
  
        AppParCurves_MultiBSpCurve& ChangeValue(const Standard_Integer Index) ;
  
       const AppParCurves_Array1OfMultiBSpCurve& Array1() const;
  
        AppParCurves_Array1OfMultiBSpCurve& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(AppParCurves_HArray1OfMultiBSpCurve)

protected:




private: 


AppParCurves_Array1OfMultiBSpCurve myArray;


};

#define ItemHArray1 AppParCurves_MultiBSpCurve
#define ItemHArray1_hxx <AppParCurves_MultiBSpCurve.hxx>
#define TheArray1 AppParCurves_Array1OfMultiBSpCurve
#define TheArray1_hxx <AppParCurves_Array1OfMultiBSpCurve.hxx>
#define TCollection_HArray1 AppParCurves_HArray1OfMultiBSpCurve
#define TCollection_HArray1_hxx <AppParCurves_HArray1OfMultiBSpCurve.hxx>
#define Handle_TCollection_HArray1 Handle_AppParCurves_HArray1OfMultiBSpCurve
#define TCollection_HArray1_Type_() AppParCurves_HArray1OfMultiBSpCurve_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
