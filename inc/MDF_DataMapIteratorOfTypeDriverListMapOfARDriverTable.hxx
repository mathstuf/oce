// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable_HeaderFile
#define _MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Handle_MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable_HeaderFile
#include <Handle_MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable.hxx>
#endif
class Standard_NoSuchObject;
class Standard_Type;
class MDF_DriverListOfARDriverTable;
class TColStd_MapTransientHasher;
class MDF_TypeDriverListMapOfARDriverTable;
class MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable;



class MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable();
  
  Standard_EXPORT   MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable(const MDF_TypeDriverListMapOfARDriverTable& aMap);
  
  Standard_EXPORT     void Initialize(const MDF_TypeDriverListMapOfARDriverTable& aMap) ;
  
  Standard_EXPORT    const Handle_Standard_Type& Key() const;
  
  Standard_EXPORT    const MDF_DriverListOfARDriverTable& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
