// Created on: 1995-07-17
// Created by: Modelistation
// Copyright (c) 1995-1999 Matra Datavision
// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.


#include <HLRBRep_BCurveTool.ixx>
#include <GeomAbs_CurveType.hxx>
#include <GeomAbs_Shape.hxx>
#include <Handle_Geom_BezierCurve.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColgp_Array1OfPnt.hxx>


//=======================================================================
//function : NbSamples
//purpose  : 
//=======================================================================

Standard_Integer
HLRBRep_BCurveTool::NbSamples (const BRepAdaptor_Curve& C,
			       const Standard_Real U0,
			       const Standard_Real U1)
{
  GeomAbs_CurveType typC = C.GetType();
  static Standard_Real nbsOther = 10.0;
  Standard_Real nbs = nbsOther;
  
  if(typC == GeomAbs_Line) 
    nbs = 2;
  else if(typC == GeomAbs_BezierCurve) 
    nbs = 3 + C.NbPoles();
  else if(typC == GeomAbs_BSplineCurve) { 
    nbs = C.NbKnots();
    nbs*= C.Degree();
    nbs*= C.LastParameter()- C.FirstParameter();
    nbs/= U1-U0;
    if(nbs < 2.0) nbs=2;
  }
  if(nbs>50)
    nbs = 50;
  return((Standard_Integer)nbs);
}

//=======================================================================
//function : Poles
//purpose  : 
//=======================================================================

void HLRBRep_BCurveTool::Poles(const BRepAdaptor_Curve& C,
			       TColgp_Array1OfPnt& T)
{ 
  if(C.GetType() == GeomAbs_BezierCurve) 
    C.Bezier()->Poles(T);
  else if(C.GetType() == GeomAbs_BSplineCurve) 
    C.BSpline()->Poles(T);
}

//=======================================================================
//function : PolesAndWeights
//purpose  : 
//=======================================================================

void HLRBRep_BCurveTool::PolesAndWeights(const BRepAdaptor_Curve& C, 
					 TColgp_Array1OfPnt& T,
					 TColStd_Array1OfReal& W)
{ 
  if(C.GetType() == GeomAbs_BezierCurve) {
    const Handle(Geom_BezierCurve) HB = C.Bezier();
    HB->Poles(T);
    HB->Weights(W);
  }
  else if(C.GetType() == GeomAbs_BSplineCurve) {
    const Handle(Geom_BSplineCurve) HB = C.BSpline();
    HB->Poles(T);
    HB->Weights(W);
  }
}

//=======================================================================
//function : Bezier
//purpose  : 
//=======================================================================

Handle(Geom_BezierCurve)
     HLRBRep_BCurveTool::Bezier (const BRepAdaptor_Curve& C)
{ return(C.Bezier()); }

//=======================================================================
//function : BSpline
//purpose  : 
//=======================================================================

Handle(Geom_BSplineCurve)
     HLRBRep_BCurveTool::BSpline (const BRepAdaptor_Curve& C)
{ return(C.BSpline()); }
