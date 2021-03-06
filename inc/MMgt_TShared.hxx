// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MMgt_TShared_HeaderFile
#define _MMgt_TShared_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MMgt_TShared_HeaderFile
#include <Handle_MMgt_TShared.hxx>
#endif

#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
class Standard_OutOfMemory;



//! The abstract class TShared is the root class of <br>
//! managed objects. TShared objects are managed <br>
//! by a memory manager based on reference <br>
//! counting. They have handle semantics. In other <br>
//! words, the reference counter is transparently <br>
//! incremented and decremented according to the <br>
//! scope of handles. When all handles, which <br>
//! reference a single object are out of scope, the <br>
//! reference counter becomes null and the object is <br>
//! automatically deleted. The deallocated memory is <br>
//! not given back to the system though. It is <br>
//! reclaimed for new objects of the same size. <br>
//! Warning <br>
//! This memory management scheme does not <br>
//! work for cyclic data structures. In such cases <br>
//! (with back pointers for example), you should <br>
//! interrupt the cycle in a class by using a full C++ <br>
//! pointer instead of a handle. <br>
class MMgt_TShared : public Standard_Transient {

public:

  
  Standard_EXPORT   virtual  void Delete() const;




  DEFINE_STANDARD_RTTI(MMgt_TShared)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
