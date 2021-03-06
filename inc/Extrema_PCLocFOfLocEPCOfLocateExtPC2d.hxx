// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_PCLocFOfLocEPCOfLocateExtPC2d_HeaderFile
#define _Extrema_PCLocFOfLocEPCOfLocateExtPC2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _Extrema_SeqPCOfPCLocFOfLocEPCOfLocateExtPC2d_HeaderFile
#include <Extrema_SeqPCOfPCLocFOfLocEPCOfLocateExtPC2d.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_FunctionWithDerivative_HeaderFile
#include <math_FunctionWithDerivative.hxx>
#endif
#ifndef _Handle_Extrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC2d_HeaderFile
#include <Handle_Extrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC2d.hxx>
#endif
class Standard_OutOfRange;
class Standard_TypeMismatch;
class Adaptor2d_Curve2d;
class Extrema_Curve2dTool;
class Extrema_POnCurv2d;
class gp_Pnt2d;
class gp_Vec2d;
class Extrema_SeqPCOfPCLocFOfLocEPCOfLocateExtPC2d;
class Extrema_SequenceNodeOfSeqPCOfPCLocFOfLocEPCOfLocateExtPC2d;



class Extrema_PCLocFOfLocEPCOfLocateExtPC2d  : public math_FunctionWithDerivative {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Extrema_PCLocFOfLocEPCOfLocateExtPC2d();
  
  Standard_EXPORT   Extrema_PCLocFOfLocEPCOfLocateExtPC2d(const gp_Pnt2d& P,const Adaptor2d_Curve2d& C);
  
  Standard_EXPORT     void Initialize(const Adaptor2d_Curve2d& C) ;
  
  Standard_EXPORT     void SetPoint(const gp_Pnt2d& P) ;
  
  Standard_EXPORT     Standard_Boolean Value(const Standard_Real U,Standard_Real& F) ;
  
  Standard_EXPORT     Standard_Boolean Derivative(const Standard_Real U,Standard_Real& DF) ;
  
  Standard_EXPORT     Standard_Boolean Values(const Standard_Real U,Standard_Real& F,Standard_Real& DF) ;
  
  Standard_EXPORT   virtual  Standard_Integer GetStateNumber() ;
  
  Standard_EXPORT     Standard_Integer NbExt() const;
  
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N) const;
  
  Standard_EXPORT     Standard_Boolean IsMin(const Standard_Integer N) const;
  
  Standard_EXPORT    const Extrema_POnCurv2d& Point(const Standard_Integer N) const;
  
  Standard_EXPORT     void SubIntervalInitialize(const Standard_Real theUfirst,const Standard_Real theUlast) ;
  
  Standard_EXPORT     Standard_Real SearchOfTolerance() ;





protected:





private:



gp_Pnt2d myP;
Standard_Address myC;
Standard_Real myU;
gp_Pnt2d myPc;
Standard_Real myD1f;
TColStd_SequenceOfReal mySqDist;
TColStd_SequenceOfInteger myIsMin;
Extrema_SeqPCOfPCLocFOfLocEPCOfLocateExtPC2d myPoint;
Standard_Boolean myPinit;
Standard_Boolean myCinit;
Standard_Boolean myD1Init;
Standard_Real myTol;
Standard_Integer myMaxDerivOrder;
Standard_Real myUinfium;
Standard_Real myUsupremum;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
