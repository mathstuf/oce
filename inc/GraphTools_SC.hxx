// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GraphTools_SC_HeaderFile
#define _GraphTools_SC_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GraphTools_SC_HeaderFile
#include <Handle_GraphTools_SC.hxx>
#endif

#ifndef _GraphTools_SCList_HeaderFile
#include <GraphTools_SCList.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;
class Standard_NoSuchObject;
class GraphTools_SCList;


//! This  class is used  to  identify a  Strong Component. <br>
//!          The user has not to used its methods. <br>
class GraphTools_SC : public MMgt_TShared {

public:

  
  Standard_EXPORT   GraphTools_SC();
  
  Standard_EXPORT     void Reset() ;
  
  Standard_EXPORT     void AddVertex(const Standard_Integer V) ;
  
  Standard_EXPORT     Standard_Integer NbVertices() const;
  
  Standard_EXPORT     Standard_Integer GetVertex(const Standard_Integer index) const;
  
  Standard_EXPORT     void AddFrontSC(const Handle(GraphTools_SC)& SC) ;
  
  Standard_EXPORT    const GraphTools_SCList& GetFrontSC() const;
  
  Standard_EXPORT     void AddBackSC(const Handle(GraphTools_SC)& SC) ;
  
  Standard_EXPORT    const GraphTools_SCList& GetBackSC() const;




  DEFINE_STANDARD_RTTI(GraphTools_SC)

protected:




private: 


GraphTools_SCList myBackSC;
TColStd_SequenceOfInteger myVertices;
GraphTools_SCList myFrontSC;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
