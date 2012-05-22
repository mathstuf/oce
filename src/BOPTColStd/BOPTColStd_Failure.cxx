// Created on: 2001-05-25
// Created by: Peter KURNEV
// Copyright (c) 2001-2012 OPEN CASCADE SAS
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



#include <BOPTColStd_Failure.ixx>

//=======================================================================
// function: BOPErrors_Failure::BOPErrors_Failure
// purpose: 
//=======================================================================
BOPTColStd_Failure::BOPTColStd_Failure (const Standard_CString AString)
{
  if(AString) {
     myMessage = new Standard_Character[strlen(AString) + 1];
     strcpy(myMessage,AString);
  }
}

//=======================================================================
// function: Message
// purpose: 
//=======================================================================
  Standard_CString BOPTColStd_Failure::Message() const
{
  return myMessage;
}
