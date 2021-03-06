// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_HSeqOfSelection_HeaderFile
#define _IFSelect_HSeqOfSelection_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_HSeqOfSelection_HeaderFile
#include <Handle_IFSelect_HSeqOfSelection.hxx>
#endif

#ifndef _IFSelect_TSeqOfSelection_HeaderFile
#include <IFSelect_TSeqOfSelection.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_IFSelect_Selection_HeaderFile
#include <Handle_IFSelect_Selection.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IFSelect_Selection;
class IFSelect_TSeqOfSelection;



class IFSelect_HSeqOfSelection : public MMgt_TShared {

public:

  
      IFSelect_HSeqOfSelection();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(IFSelect_Selection)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(IFSelect_HSeqOfSelection)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(IFSelect_Selection)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(IFSelect_HSeqOfSelection)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(IFSelect_Selection)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(IFSelect_HSeqOfSelection)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(IFSelect_Selection)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(IFSelect_HSeqOfSelection)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_IFSelect_HSeqOfSelection Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(IFSelect_Selection)& anItem) ;
  
  Standard_EXPORT    const Handle_IFSelect_Selection& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_IFSelect_Selection& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const IFSelect_TSeqOfSelection& Sequence() const;
  
        IFSelect_TSeqOfSelection& ChangeSequence() ;
  
  Standard_EXPORT     Handle_IFSelect_HSeqOfSelection ShallowCopy() const;




  DEFINE_STANDARD_RTTI(IFSelect_HSeqOfSelection)

protected:




private: 


IFSelect_TSeqOfSelection mySequence;


};

#define Item Handle_IFSelect_Selection
#define Item_hxx <IFSelect_Selection.hxx>
#define TheSequence IFSelect_TSeqOfSelection
#define TheSequence_hxx <IFSelect_TSeqOfSelection.hxx>
#define TCollection_HSequence IFSelect_HSeqOfSelection
#define TCollection_HSequence_hxx <IFSelect_HSeqOfSelection.hxx>
#define Handle_TCollection_HSequence Handle_IFSelect_HSeqOfSelection
#define TCollection_HSequence_Type_() IFSelect_HSeqOfSelection_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_IFSelect_HSeqOfSelection ShallowCopy(const Handle_IFSelect_HSeqOfSelection& me) {
 return me->ShallowCopy();
}



#endif
