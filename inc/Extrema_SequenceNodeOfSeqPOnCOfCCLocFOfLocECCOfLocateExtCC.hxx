// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC_HeaderFile
#define _Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC_HeaderFile
#include <Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC.hxx>
#endif

#ifndef _Extrema_POnCurv_HeaderFile
#include <Extrema_POnCurv.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Extrema_POnCurv;
class Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC;



class Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC : public TCollection_SeqNode {

public:

  
      Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC(const Extrema_POnCurv& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Extrema_POnCurv& Value() const;




  DEFINE_STANDARD_RTTI(Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC)

protected:




private: 


Extrema_POnCurv myValue;


};

#define SeqItem Extrema_POnCurv
#define SeqItem_hxx <Extrema_POnCurv.hxx>
#define TCollection_SequenceNode Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC
#define TCollection_SequenceNode_hxx <Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC.hxx>
#define Handle_TCollection_SequenceNode Handle_Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC
#define TCollection_SequenceNode_Type_() Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC_Type_()
#define TCollection_Sequence Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC
#define TCollection_Sequence_hxx <Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif