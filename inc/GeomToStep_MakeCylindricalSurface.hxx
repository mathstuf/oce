// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeCylindricalSurface_HeaderFile
#define _GeomToStep_MakeCylindricalSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepGeom_CylindricalSurface_HeaderFile
#include <Handle_StepGeom_CylindricalSurface.hxx>
#endif
#ifndef _GeomToStep_Root_HeaderFile
#include <GeomToStep_Root.hxx>
#endif
#ifndef _Handle_Geom_CylindricalSurface_HeaderFile
#include <Handle_Geom_CylindricalSurface.hxx>
#endif
class StepGeom_CylindricalSurface;
class StdFail_NotDone;
class Geom_CylindricalSurface;


//! This class implements the mapping between class <br>
//!          CylindricalSurface from Geom and the class <br>
//!          CylindricalSurface from StepGeom which describes a <br>
//!          cylindrical_surface from Prostep <br>
class GeomToStep_MakeCylindricalSurface  : public GeomToStep_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomToStep_MakeCylindricalSurface(const Handle(Geom_CylindricalSurface)& CSurf);
  
  Standard_EXPORT    const Handle_StepGeom_CylindricalSurface& Value() const;





protected:





private:



Handle_StepGeom_CylindricalSurface theCylindricalSurface;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
