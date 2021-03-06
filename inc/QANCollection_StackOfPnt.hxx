// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANCollection_StackOfPnt_HeaderFile
#define _QANCollection_StackOfPnt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_QANCollection_StackNodeOfStackOfPnt_HeaderFile
#include <Handle_QANCollection_StackNodeOfStackOfPnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class QANCollection_StackIteratorOfStackOfPnt;
class gp_Pnt;
class QANCollection_StackNodeOfStackOfPnt;



class QANCollection_StackOfPnt  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   QANCollection_StackOfPnt();
  
  Standard_EXPORT    const QANCollection_StackOfPnt& Assign(const QANCollection_StackOfPnt& Other) ;
   const QANCollection_StackOfPnt& operator =(const QANCollection_StackOfPnt& Other) 
{
  return Assign(Other);
}
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Depth() const;
  
  Standard_EXPORT    const gp_Pnt& Top() const;
  
  Standard_EXPORT     void Push(const gp_Pnt& I) ;
  
  Standard_EXPORT     void Pop() ;
  
  Standard_EXPORT     void Clear() ;
~QANCollection_StackOfPnt()
{
  Clear();
}
  
  Standard_EXPORT     gp_Pnt& ChangeTop() ;


friend class QANCollection_StackIteratorOfStackOfPnt;



protected:





private:

  
  Standard_EXPORT   QANCollection_StackOfPnt(const QANCollection_StackOfPnt& Other);


Standard_Address myTop;
Standard_Integer myDepth;


};

#define Item gp_Pnt
#define Item_hxx <gp_Pnt.hxx>
#define TCollection_StackNode QANCollection_StackNodeOfStackOfPnt
#define TCollection_StackNode_hxx <QANCollection_StackNodeOfStackOfPnt.hxx>
#define TCollection_StackIterator QANCollection_StackIteratorOfStackOfPnt
#define TCollection_StackIterator_hxx <QANCollection_StackIteratorOfStackOfPnt.hxx>
#define Handle_TCollection_StackNode Handle_QANCollection_StackNodeOfStackOfPnt
#define TCollection_StackNode_Type_() QANCollection_StackNodeOfStackOfPnt_Type_()
#define TCollection_Stack QANCollection_StackOfPnt
#define TCollection_Stack_hxx <QANCollection_StackOfPnt.hxx>

#include <TCollection_Stack.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_StackNode
#undef TCollection_StackNode_hxx
#undef TCollection_StackIterator
#undef TCollection_StackIterator_hxx
#undef Handle_TCollection_StackNode
#undef TCollection_StackNode_Type_
#undef TCollection_Stack
#undef TCollection_Stack_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
