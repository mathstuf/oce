// Copyright (c) 1998-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <Handle_Standard_Persistent.hxx>



Handle(Standard_Persistent)& Handle(Standard_Persistent)::operator=
	(const Handle(Standard_Persistent)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }



Handle(Standard_Persistent)& Handle(Standard_Persistent)::operator=
(const Standard_Persistent* anItem)
     {
      Assign((const Standard_Persistent *)anItem);
      return *this;
     }

