// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Convert_ConicToBSplineCurve_HeaderFile
#define _Convert_ConicToBSplineCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TColgp_HArray1OfPnt2d_HeaderFile
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Convert_ParameterisationType_HeaderFile
#include <Convert_ParameterisationType.hxx>
#endif
class TColgp_HArray1OfPnt2d;
class TColStd_HArray1OfReal;
class TColStd_HArray1OfInteger;
class Standard_OutOfRange;
class Standard_ConstructionError;
class gp_Pnt2d;


//! Root class for algorithms which convert a conic curve into <br>
//!  a BSpline curve (CircleToBSplineCurve, EllipseToBSplineCurve, <br>
//!  HyperbolaToBSplineCurve, ParabolaToBSplineCurve). <br>
//! These algorithms all work on 2D curves from the gp <br>
//! package and compute all the data needed to construct a <br>
//! BSpline curve equivalent to the conic curve. This data consists of: <br>
//! -   the degree of the curve, <br>
//! -   the periodic characteristics of the curve, <br>
//! -   a poles table with associated weights, <br>
//! -   a knots table with associated multiplicities. <br>
//! The abstract class ConicToBSplineCurve provides a <br>
//! framework for storing and consulting this computed data. <br>
//! The data may then be used to construct a <br>
//! Geom2d_BSplineCurve curvSuper class of the following classes : <br>
//!  This abstract class implements the methods to get the geometric <br>
//!  representation of the B-spline curve equivalent to the conic. <br>
//!  The B-spline is computed at the creation time in the sub classes. <br>
//!  The B-spline curve is defined with its degree, its control points <br>
//!  (Poles), its weights, its knots and their multiplicity. <br>
//!  All the geometric entities used in this package are defined in 2D <br>
//!  space. <br>
//!  KeyWords : <br>
//!  Convert, Conic, BSplineCurve, 2D. <br>
class Convert_ConicToBSplineCurve  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns the degree of the BSpline curve whose data is <br>
//! computed in this framework. <br>
  Standard_EXPORT     Standard_Integer Degree() const;
  //! Returns the number of poles of the BSpline curve whose <br>
//! data is computed in this framework. <br>
  Standard_EXPORT     Standard_Integer NbPoles() const;
  //! Returns the number of knots of the BSpline curve whose <br>
//! data is computed in this framework. <br>
  Standard_EXPORT     Standard_Integer NbKnots() const;
  //! Returns true if the BSpline curve whose data is computed in <br>
//! this framework is periodic. <br>
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  //! Returns the pole of index Index to the poles table of the <br>
//! BSpline curve whose data is computed in this framework. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is outside the bounds of <br>
//! the poles table of the BSpline curve whose data is computed in this framework. <br>
  Standard_EXPORT     gp_Pnt2d Pole(const Standard_Integer Index) const;
  //! Returns the weight of the pole of index Index to the poles <br>
//! table of the BSpline curve whose data is computed in this framework. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is outside the bounds of <br>
//! the poles table of the BSpline curve whose data is computed in this framework. <br>
  Standard_EXPORT     Standard_Real Weight(const Standard_Integer Index) const;
  //! Returns the knot of index Index to the knots table of the <br>
//! BSpline curve whose data is computed in this framework. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is outside the bounds of <br>
//! the knots table of the BSpline curve whose data is computed in this framework. <br>
  Standard_EXPORT     Standard_Real Knot(const Standard_Integer Index) const;
  //! Returns the multiplicity of the knot of index Index to the <br>
//! knots table of the BSpline curve whose data is computed in this framework. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is outside the bounds of <br>
//! the knots table of the BSpline curve whose data is computed in this framework. <br>
  Standard_EXPORT     Standard_Integer Multiplicity(const Standard_Integer Index) const;
  
  Standard_EXPORT     void BuildCosAndSin(const Convert_ParameterisationType Parametrisation,Handle(TColStd_HArray1OfReal)& CosNumerator,Handle(TColStd_HArray1OfReal)& SinNumerator,Handle(TColStd_HArray1OfReal)& Denominator,Standard_Integer& Degree,Handle(TColStd_HArray1OfReal)& Knots,Handle(TColStd_HArray1OfInteger)& Mults) const;
  
  Standard_EXPORT     void BuildCosAndSin(const Convert_ParameterisationType Parametrisation,const Standard_Real UFirst,const Standard_Real ULast,Handle(TColStd_HArray1OfReal)& CosNumerator,Handle(TColStd_HArray1OfReal)& SinNumerator,Handle(TColStd_HArray1OfReal)& Denominator,Standard_Integer& Degree,Handle(TColStd_HArray1OfReal)& Knots,Handle(TColStd_HArray1OfInteger)& Mults) const;





protected:

  
  Standard_EXPORT   Convert_ConicToBSplineCurve(const Standard_Integer NumberOfPoles,const Standard_Integer NumberOfKnots,const Standard_Integer Degree);


Handle_TColgp_HArray1OfPnt2d poles;
Handle_TColStd_HArray1OfReal weights;
Handle_TColStd_HArray1OfReal knots;
Handle_TColStd_HArray1OfInteger mults;
Standard_Integer degree;
Standard_Integer nbPoles;
Standard_Integer nbKnots;
Standard_Boolean isperiodic;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
