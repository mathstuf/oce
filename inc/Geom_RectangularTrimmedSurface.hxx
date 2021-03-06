// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_RectangularTrimmedSurface_HeaderFile
#define _Geom_RectangularTrimmedSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom_RectangularTrimmedSurface_HeaderFile
#include <Handle_Geom_RectangularTrimmedSurface.hxx>
#endif

#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Geom_BoundedSurface_HeaderFile
#include <Geom_BoundedSurface.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom_Geometry_HeaderFile
#include <Handle_Geom_Geometry.hxx>
#endif
class Geom_Surface;
class Standard_ConstructionError;
class Standard_RangeError;
class Standard_NoSuchObject;
class Geom_UndefinedDerivative;
class Geom_UndefinedValue;
class Geom_Curve;
class gp_Pnt;
class gp_Vec;
class gp_Trsf;
class gp_GTrsf2d;
class Geom_Geometry;


//! Describes a portion of a surface (a patch) limited <br>
//! by two values of the u parameter in the u <br>
//! parametric direction, and two values of the v <br>
//! parameter in the v parametric direction. The <br>
//! domain of the trimmed surface must be within the <br>
//! domain of the surface being trimmed. <br>
//! The trimmed surface is defined by: <br>
//! - the basis surface, and <br>
//! - the values (umin, umax) and (vmin, vmax) <br>
//!   which limit it in the u and v parametric directions. <br>
//!   The trimmed surface is built from a copy of the basis <br>
//! surface. Therefore, when the basis surface is <br>
//! modified the trimmed surface is not changed. <br>
//! Consequently, the trimmed surface does not <br>
//! necessarily have the same orientation as the basis surface. <br>
//!  Warning:  The  case of surface   being trimmed is  periodic and <br>
//!          parametrics values are outside the domain is possible. <br>
//!          But, domain of the  trimmed surface can be translated <br>
//!          by (n X) the period. <br>
class Geom_RectangularTrimmedSurface : public Geom_BoundedSurface {

public:

  
//!  The U parametric direction of the surface is oriented from U1 <br>
//!  to U2. The V parametric direction of the surface is oriented <br>
//!  from V1 to V2. <br>
//!  These two directions define the orientation of the surface <br>
//!  (normal). If the surface is not periodic USense and VSense are <br>
//!  not used for the construction. If the surface S is periodic in <br>
//!  one direction USense and VSense give the available part of the <br>
//!  surface. By default in this case the surface has the same <br>
//!  orientation as the basis surface S. <br>
//!  The returned surface is not closed and not periodic. <br>
//!  ConstructionError   Raised if <br>
//!  S is not periodic in the UDirection and U1 or U2 are out of the <br>
//!  bounds of S. <br>
//!  S is not periodic in the VDirection and V1 or V2 are out of the <br>
//!  bounds of S. <br>
//!  U1 = U2 or V1 = V2 <br>
  Standard_EXPORT   Geom_RectangularTrimmedSurface(const Handle(Geom_Surface)& S,const Standard_Real U1,const Standard_Real U2,const Standard_Real V1,const Standard_Real V2,const Standard_Boolean USense = Standard_True,const Standard_Boolean VSense = Standard_True);
  
//!  The basis surface S is only trim in one parametric direction. <br>
//!  If UTrim = True the surface is trimmed in the U parametric <br>
//!  direction else the surface is trimmed in the V parametric <br>
//!  direction. <br>
//!  In the considered parametric direction the resulting surface is <br>
//!  oriented from Param1 to Param2. If S is periodic Sense gives the <br>
//!  available part of the surface. By default the trimmed surface has <br>
//!  the same orientation as the basis surface S in the considered <br>
//!  parametric direction (Sense = True). <br>
//!  If the basis surface S is closed or periodic in the parametric <br>
//!  direction opposite to the trimming direction the trimmed surface <br>
//!  has the same characteristics as the surface S in this direction. <br>
//! Warnings : <br>
//!  In this package the entities are not shared. <br>
//!  The RectangularTrimmedSurface is built with a copy of the <br>
//!  surface S. So when S is modified the RectangularTrimmedSurface <br>
//!  is not modified <br>//! Raised if <br>
//!  S is not periodic in the considered parametric direction and <br>
//!  Param1 or Param2 are out of the bounds of S. <br>
//!  Param1 = Param2 <br>
  Standard_EXPORT   Geom_RectangularTrimmedSurface(const Handle(Geom_Surface)& S,const Standard_Real Param1,const Standard_Real Param2,const Standard_Boolean UTrim,const Standard_Boolean Sense = Standard_True);
  //! Modifies this patch by changing the trim values <br>
//! applied to the original surface <br>
//!        The u parametric direction of <br>
//!   this patch is oriented from U1 to U2. The v <br>
//!   parametric direction of this patch is oriented <br>
//!   from V1 to V2. USense and VSense are used <br>
//!   for the construction only if the surface is periodic <br>
//!   in the corresponding parametric direction, and <br>
//!   define the available part of the surface; by default <br>
//!   in this case, this patch has the same orientation <br>
//!   as the basis surface. <br>//! Raised if <br>
//!  The BasisSurface is not periodic in the UDirection and U1 or U2 <br>
//!    are out of the bounds of the BasisSurface. <br>
//!  The BasisSurface is not periodic in the VDirection and V1 or V2 <br>
//!    are out of the bounds of the BasisSurface. <br>
//!  U1 = U2 or V1 = V2 <br>
  Standard_EXPORT     void SetTrim(const Standard_Real U1,const Standard_Real U2,const Standard_Real V1,const Standard_Real V2,const Standard_Boolean USense = Standard_True,const Standard_Boolean VSense = Standard_True) ;
  //! Modifies this patch by changing the trim values <br>
//! applied to the original surface <br>
//! The basis surface is trimmed only in one parametric direction: if UTrim <br>
//!   is true, the surface is trimmed in the u parametric <br>
//!   direction; if it is false, it is trimmed in the v <br>
//!   parametric direction. In the "trimmed" direction, <br>
//!   this patch is oriented from Param1 to Param2. If <br>
//!   the basis surface is periodic in the "trimmed" <br>
//!   direction, Sense defines its available part. By <br>
//!   default in this case, this patch has the same <br>
//!   orientation as the basis surface in this parametric <br>
//!   direction. If the basis surface is closed or periodic <br>
//!   in the other parametric direction (i.e. not the <br>
//!   "trimmed" direction), this patch has the same <br>
//!  characteristics as the basis surface in that parametric direction. <br>//! Raised if <br>
//!  The BasisSurface is not periodic in the considered direction and <br>
//!    Param1 or Param2 are out of the bounds of the BasisSurface. <br>
//!  Param1 = Param2 <br>
  Standard_EXPORT     void SetTrim(const Standard_Real Param1,const Standard_Real Param2,const Standard_Boolean UTrim,const Standard_Boolean Sense = Standard_True) ;
  //! Returns the Basis surface of <me>. <br>
  Standard_EXPORT     Handle_Geom_Surface BasisSurface() const;
  //! Changes the orientation of this patch in the u <br>
//! parametric direction. The bounds of the surface are <br>
//! not changed, but the given parametric direction is <br>
//! reversed. Hence the orientation of the surface is reversed. <br>
  Standard_EXPORT     void UReverse() ;
  //! Computes the u  parameter on the modified <br>
//! surface, produced by when reversing its u <br>
//! parametric direction, for any point of u parameter U on this patch. <br>
  Standard_EXPORT     Standard_Real UReversedParameter(const Standard_Real U) const;
  //! Changes the orientation of this patch in the v <br>
//! parametric direction. The bounds of the surface are <br>
//! not changed, but the given parametric direction is <br>
//! reversed. Hence the orientation of the surface is reversed. <br>
  Standard_EXPORT     void VReverse() ;
  //! Computes the v  parameter on the modified <br>
//! surface, produced by when reversing its v <br>
//! parametric direction, for any point of v parameter V on this patch. <br>
  Standard_EXPORT     Standard_Real VReversedParameter(const Standard_Real V) const;
  //! Returns the parametric bounds U1, U2, V1 and V2 of this patch. <br>
  Standard_EXPORT     void Bounds(Standard_Real& U1,Standard_Real& U2,Standard_Real& V1,Standard_Real& V2) const;
  
//!  Returns  the continuity of the surface : <br>
//!  C0 : only geometric continuity, <br>
//!  C1 : continuity of the first derivative all along the Surface, <br>
//!  C2 : continuity of the second derivative all along the Surface, <br>
//!  C3 : continuity of the third derivative all along the Surface, <br>
//!  CN : the order of continuity is infinite. <br>
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  //! Returns true if this patch is closed in the given parametric direction. <br>
  Standard_EXPORT     Standard_Boolean IsUClosed() const;
  //! Returns true if this patch is closed in the given parametric direction. <br>
  Standard_EXPORT     Standard_Boolean IsVClosed() const;
  
//!  Returns true if the order of derivation in the U parametric <br>
//!  direction is N. <br>//! Raised if N < 0. <br>
  Standard_EXPORT     Standard_Boolean IsCNu(const Standard_Integer N) const;
  
//!  Returns true if the order of derivation in the V parametric <br>
//!  direction is N. <br>//! Raised if N < 0. <br>
  Standard_EXPORT     Standard_Boolean IsCNv(const Standard_Integer N) const;
  //! Returns true if this patch is periodic in the given <br>
//! parametric direction. <br>
  Standard_EXPORT     Standard_Boolean IsUPeriodic() const;
  //! Returns the period of this patch in the u <br>
//! parametric direction. <br>//! raises if the surface is not uperiodic. <br>
  Standard_EXPORT   virtual  Standard_Real UPeriod() const;
  
//! Returns true if this patch is periodic in the given <br>
//! parametric direction. <br>
  Standard_EXPORT     Standard_Boolean IsVPeriodic() const;
  //! Returns the period of this patch in the v <br>
//! parametric direction. <br>//! raises if the surface is not vperiodic. <br>//! value and derivatives <br>
  Standard_EXPORT   virtual  Standard_Real VPeriod() const;
  //! computes the U isoparametric curve. <br>
  Standard_EXPORT     Handle_Geom_Curve UIso(const Standard_Real U) const;
  //! Computes the V isoparametric curve. <br>
  Standard_EXPORT     Handle_Geom_Curve VIso(const Standard_Real V) const;
  
//!  Can be raised if the basis surface is an OffsetSurface. <br>
  Standard_EXPORT     void D0(const Standard_Real U,const Standard_Real V,gp_Pnt& P) const;
  
//!  The returned derivatives have the same orientation as the <br>
//!  derivatives of the basis surface even if the trimmed surface <br>
//!  has not the same parametric orientation. <br>
//!  Warning!  UndefinedDerivative  raised if the continuity of the surface is not C1. <br>
  Standard_EXPORT     void D1(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V) const;
  
//!  The returned derivatives have the same orientation as the <br>
//!  derivatives of the basis surface even if the trimmed surface <br>
//!  has not the same parametric orientation. <br>
//! Warning! UndefinedDerivative raised if the continuity of the surface is not C2. <br>
  Standard_EXPORT     void D2(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V,gp_Vec& D2U,gp_Vec& D2V,gp_Vec& D2UV) const;
  //! The returned derivatives have the same orientation as the <br>
//!  derivatives of the basis surface even if the trimmed surface <br>
//!  has not the same parametric orientation. <br>
//!  Warning UndefinedDerivative raised if the continuity of the surface is not C3. <br>
  Standard_EXPORT     void D3(const Standard_Real U,const Standard_Real V,gp_Pnt& P,gp_Vec& D1U,gp_Vec& D1V,gp_Vec& D2U,gp_Vec& D2V,gp_Vec& D2UV,gp_Vec& D3U,gp_Vec& D3V,gp_Vec& D3UUV,gp_Vec& D3UVV) const;
  //! The returned derivative has the same orientation as the <br>
//!  derivative of the basis surface even if the trimmed surface <br>
//!  has not the same parametric orientation. <br>
//!   Warning!  UndefinedDerivative raised if the continuity of the surface is not CNu in the U <br>
//!  parametric direction and CNv in the V parametric direction. <br>
//!  RangeError Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0. <br>
  Standard_EXPORT     gp_Vec DN(const Standard_Real U,const Standard_Real V,const Standard_Integer Nu,const Standard_Integer Nv) const;
  //! Applies the transformation T to this patch. <br>
//! Warning <br>
//! As a consequence, the basis surface included in the <br>
//! data structure of this patch is also modified. <br>
  Standard_EXPORT     void Transform(const gp_Trsf& T) ;
  //! Computes the  parameters on the  transformed  surface for <br>
//!          the transform of the point of parameters U,V on <me>. <br>
//! <br>
//!          me->Transformed(T)->Value(U',V') <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          me->Value(U,V).Transformed(T) <br>
//! <br>
//!          Where U',V' are the new values of U,V after calling <br>
//! <br>
//!          me->TranformParameters(U,V,T) <br>
//! <br>
//!          This methods calls the basis surface method. <br>
  Standard_EXPORT   virtual  void TransformParameters(Standard_Real& U,Standard_Real& V,const gp_Trsf& T) const;
  //! Returns a 2d transformation  used to find the  new <br>
//!          parameters of a point on the transformed surface. <br>
//! <br>
//!          me->Transformed(T)->Value(U',V') <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          me->Value(U,V).Transformed(T) <br>
//! <br>
//!          Where U',V' are  obtained by transforming U,V with <br>
//!          th 2d transformation returned by <br>
//! <br>
//!          me->ParametricTransformation(T) <br>
//! <br>
//!          This methods calls the basis surface method. <br>
  Standard_EXPORT   virtual  gp_GTrsf2d ParametricTransformation(const gp_Trsf& T) const;
  //! Creates a new object which is a copy of this patch. <br>
  Standard_EXPORT     Handle_Geom_Geometry Copy() const;




  DEFINE_STANDARD_RTTI(Geom_RectangularTrimmedSurface)

protected:




private: 

  //!  General set trim,  to implement constructors and <br>
//!         others set trim. <br>
  Standard_EXPORT     void SetTrim(const Standard_Real U1,const Standard_Real U2,const Standard_Real V1,const Standard_Real V2,const Standard_Boolean UTrim,const Standard_Boolean VTrim,const Standard_Boolean USense,const Standard_Boolean VSense) ;

Handle_Geom_Surface basisSurf;
Standard_Real utrim1;
Standard_Real vtrim1;
Standard_Real utrim2;
Standard_Real vtrim2;
Standard_Boolean isutrimmed;
Standard_Boolean isvtrimmed;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
