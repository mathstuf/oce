// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinXCAFDrivers_DocumentRetrievalDriver_HeaderFile
#define _BinXCAFDrivers_DocumentRetrievalDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BinXCAFDrivers_DocumentRetrievalDriver_HeaderFile
#include <Handle_BinXCAFDrivers_DocumentRetrievalDriver.hxx>
#endif

#ifndef _BinDrivers_DocumentRetrievalDriver_HeaderFile
#include <BinDrivers_DocumentRetrievalDriver.hxx>
#endif
#ifndef _Handle_BinMDF_ADriverTable_HeaderFile
#include <Handle_BinMDF_ADriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
class BinMDF_ADriverTable;
class CDM_MessageDriver;



class BinXCAFDrivers_DocumentRetrievalDriver : public BinDrivers_DocumentRetrievalDriver {

public:

  //! Constructor <br>
  Standard_EXPORT   BinXCAFDrivers_DocumentRetrievalDriver();
  
  Standard_EXPORT   virtual  Handle_BinMDF_ADriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& theMsgDriver) ;




  DEFINE_STANDARD_RTTI(BinXCAFDrivers_DocumentRetrievalDriver)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
