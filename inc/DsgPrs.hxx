// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_HeaderFile
#define _DsgPrs_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_DimensionAspect_HeaderFile
#include <Handle_Prs3d_DimensionAspect.hxx>
#endif
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
class Prs3d_Presentation;
class Prs3d_DimensionAspect;
class gp_Pnt;
class gp_Dir;
class gp_Pln;
class Geom_Surface;
class Geom_Curve;
class gp_Ax1;
class gp_Circ;
class gp_Elips;
class DsgPrs_EllipseRadiusPresentation;
class DsgPrs_LengthPresentation;
class DsgPrs_RadiusPresentation;
class DsgPrs_DiameterPresentation;
class DsgPrs_FilletRadiusPresentation;
class DsgPrs_AnglePresentation;
class DsgPrs_Chamf2dPresentation;
class DsgPrs_ParalPresentation;
class DsgPrs_PerpenPresentation;
class DsgPrs_SymmetricPresentation;
class DsgPrs_MidPointPresentation;
class DsgPrs_TangentPresentation;
class DsgPrs_ConcentricPresentation;
class DsgPrs_FixPresentation;
class DsgPrs_IdenticPresentation;
class DsgPrs_EqualRadiusPresentation;
class DsgPrs_EqualDistancePresentation;
class DsgPrs_SymbPresentation;
class DsgPrs_ShapeDirPresentation;
class DsgPrs_OffsetPresentation;
class DsgPrs_XYZAxisPresentation;
class DsgPrs_XYZPlanePresentation;
class DsgPrs_ShadedPlanePresentation;


//! Describes Standard Presentations for DsgIHM objects <br>
class DsgPrs  {
public:

  DEFINE_STANDARD_ALLOC

  //! draws symbols ((one or two) arrows,(one or two)points <br>
//!          at thebeginning and at the end of the dimension <br>
  Standard_EXPORT   static  void ComputeSymbol(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_DimensionAspect)& anAspect,const gp_Pnt& pt1,const gp_Pnt& pt2,const gp_Dir& dir1,const gp_Dir& dir2,const DsgPrs_ArrowSide ArrowSide,const Standard_Boolean drawFromCenter = Standard_True) ;
  
  Standard_EXPORT   static  void ComputePlanarFacesLengthPresentation(const Standard_Real FirstArrowLength,const Standard_Real SecondArrowLength,const gp_Pnt& AttachmentPoint1,const gp_Pnt& AttachmentPoint2,const gp_Dir& DirAttach,const gp_Pnt& OffsetPoint,const gp_Pln& PlaneOfFaces,gp_Pnt& EndOfArrow1,gp_Pnt& EndOfArrow2,gp_Dir& DirOfArrow1) ;
  
  Standard_EXPORT   static  void ComputeCurvilinearFacesLengthPresentation(const Standard_Real FirstArrowLength,const Standard_Real SecondArrowLength,const Handle(Geom_Surface)& SecondSurf,const gp_Pnt& AttachmentPoint1,const gp_Pnt& AttachmentPoint2,const gp_Dir& DirAttach,gp_Pnt& EndOfArrow2,gp_Dir& DirOfArrow1,Handle(Geom_Curve)& VCurve,Handle(Geom_Curve)& UCurve,Standard_Real& FirstU,Standard_Real& deltaU,Standard_Real& FirstV,Standard_Real& deltaV) ;
  
  Standard_EXPORT   static  void ComputeFacesAnglePresentation(const Standard_Real ArrowLength,const Standard_Real Value,const gp_Pnt& CenterPoint,const gp_Pnt& AttachmentPoint1,const gp_Pnt& AttachmentPoint2,const gp_Dir& dir1,const gp_Dir& dir2,const gp_Dir& axisdir,const Standard_Boolean isPlane,const gp_Ax1& AxisOfSurf,const gp_Pnt& OffsetPoint,gp_Circ& AngleCirc,Standard_Real& FirstParAngleCirc,Standard_Real& LastParAngleCirc,gp_Pnt& EndOfArrow1,gp_Pnt& EndOfArrow2,gp_Dir& DirOfArrow1,gp_Dir& DirOfArrow2,gp_Pnt& ProjAttachPoint2,gp_Circ& AttachCirc,Standard_Real& FirstParAttachCirc,Standard_Real& LastParAttachCirc) ;
  
  Standard_EXPORT   static  void ComputeRadiusLine(const gp_Pnt& aCenter,const gp_Pnt& anEndOfArrow,const gp_Pnt& aPosition,const Standard_Boolean drawFromCenter,gp_Pnt& aRadLineOrign,gp_Pnt& aRadLineEnd) ;
  //! computes Geometry for  fillet radius  presentation; <br>
//!          special case flag  SpecCase equal Standard_True if <br>
//!          radius of  fillet circle  =  0  or if  anngle between <br>
//!          Vec1(Center, FirstPoint)  and Vec2(Center,SecondPoint) equal 0 or PI <br>
  Standard_EXPORT   static  void ComputeFilletRadiusPresentation(const Standard_Real ArrowLength,const Standard_Real Value,const gp_Pnt& Position,const gp_Dir& NormalDir,const gp_Pnt& FirstPoint,const gp_Pnt& SecondPoint,const gp_Pnt& Center,const gp_Pnt& BasePnt,const Standard_Boolean drawRevers,Standard_Boolean& SpecCase,gp_Circ& FilletCirc,Standard_Real& FirstParCirc,Standard_Real& LastParCirc,gp_Pnt& EndOfArrow,gp_Dir& DirOfArrow,gp_Pnt& DrawPosition) ;
  //!  computes  length  of  ellipse  arc  in  parametric  units <br>
  Standard_EXPORT   static  Standard_Real DistanceFromApex(const gp_Elips& elips,const gp_Pnt& Apex,const Standard_Real par) ;





protected:





private:




friend class DsgPrs_EllipseRadiusPresentation;
friend class DsgPrs_LengthPresentation;
friend class DsgPrs_RadiusPresentation;
friend class DsgPrs_DiameterPresentation;
friend class DsgPrs_FilletRadiusPresentation;
friend class DsgPrs_AnglePresentation;
friend class DsgPrs_Chamf2dPresentation;
friend class DsgPrs_ParalPresentation;
friend class DsgPrs_PerpenPresentation;
friend class DsgPrs_SymmetricPresentation;
friend class DsgPrs_MidPointPresentation;
friend class DsgPrs_TangentPresentation;
friend class DsgPrs_ConcentricPresentation;
friend class DsgPrs_FixPresentation;
friend class DsgPrs_IdenticPresentation;
friend class DsgPrs_EqualRadiusPresentation;
friend class DsgPrs_EqualDistancePresentation;
friend class DsgPrs_SymbPresentation;
friend class DsgPrs_ShapeDirPresentation;
friend class DsgPrs_OffsetPresentation;
friend class DsgPrs_XYZAxisPresentation;
friend class DsgPrs_XYZPlanePresentation;
friend class DsgPrs_ShadedPlanePresentation;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
