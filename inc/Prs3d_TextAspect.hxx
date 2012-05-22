// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_TextAspect_HeaderFile
#define _Prs3d_TextAspect_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs3d_TextAspect_HeaderFile
#include <Handle_Prs3d_TextAspect.hxx>
#endif

#ifndef _Handle_Graphic3d_AspectText3d_HeaderFile
#include <Handle_Graphic3d_AspectText3d.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Graphic3d_HorizontalTextAlignment_HeaderFile
#include <Graphic3d_HorizontalTextAlignment.hxx>
#endif
#ifndef _Graphic3d_VerticalTextAlignment_HeaderFile
#include <Graphic3d_VerticalTextAlignment.hxx>
#endif
#ifndef _Graphic3d_TextPath_HeaderFile
#include <Graphic3d_TextPath.hxx>
#endif
#ifndef _Prs3d_BasicAspect_HeaderFile
#include <Prs3d_BasicAspect.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
class Graphic3d_AspectText3d;
class Quantity_Color;


//! Defines the attributes when displaying a text. <br>
class Prs3d_TextAspect : public Prs3d_BasicAspect {

public:

  //! Constructs an empty framework for defining display attributes of text. <br>
  Standard_EXPORT   Prs3d_TextAspect();
  
  Standard_EXPORT     void SetColor(const Quantity_Color& aColor) ;
  //! Sets the color of the type used in text display. <br>
  Standard_EXPORT     void SetColor(const Quantity_NameOfColor aColor) ;
  //! Sets the font used in text display. <br>
  Standard_EXPORT     void SetFont(const Standard_CString aFont) ;
  //! Returns the height-width ratio, also known as the expansion factor. <br>
  Standard_EXPORT     void SetHeightWidthRatio(const Standard_Real aRatio) ;
  //! Sets the length of the box which text will occupy. <br>
  Standard_EXPORT     void SetSpace(const Quantity_Length aSpace) ;
  //! Sets the height of the text. <br>
  Standard_EXPORT     void SetHeight(const Standard_Real aHeight) ;
  //! Sets the angle <br>
  Standard_EXPORT     void SetAngle(const Quantity_PlaneAngle anAngle) ;
  //! Returns the height of the text box. <br>
  Standard_EXPORT     Standard_Real Height() const;
  //! Returns the angle <br>
  Standard_EXPORT     Quantity_PlaneAngle Angle() const;
  //! Sets horizontal alignment of text. <br>
  Standard_EXPORT     void SetHorizontalJustification(const Graphic3d_HorizontalTextAlignment aJustification) ;
  //! Sets the vertical alignment of text. <br>
  Standard_EXPORT     void SetVerticalJustification(const Graphic3d_VerticalTextAlignment aJustification) ;
  //! Sets the orientation of text. <br>
  Standard_EXPORT     void SetOrientation(const Graphic3d_TextPath anOrientation) ;
  //! Returns the horizontal alignment of the text. <br>
//! The range of values includes: <br>
//! -   left <br>
//! -   center <br>
//! -   right, and <br>
//! -   normal (justified). <br>
  Standard_EXPORT     Graphic3d_HorizontalTextAlignment HorizontalJustification() const;
  //! Returns the vertical alignment of the text. <br>
//! The range of values includes: <br>
//! -   normal <br>
//! -   top <br>
//! -   cap <br>
//! -   half <br>
//! -   base <br>
//! -   bottom <br>
  Standard_EXPORT     Graphic3d_VerticalTextAlignment VerticalJustification() const;
  //! Returns the orientation of the text. <br>
//! Text can be displayed in the following directions: <br>
//! -   up <br>
//! -   down <br>
//! -   left, or <br>
//! -   right <br>
  Standard_EXPORT     Graphic3d_TextPath Orientation() const;
  //! Returns the purely textual attributes used in the display of text. <br>
//! These include: <br>
//! -   color <br>
//! -   font <br>
//! -   height/width ratio, that is, the expansion factor, and <br>
//! -   space between characters. <br>
  Standard_EXPORT     Handle_Graphic3d_AspectText3d Aspect() const;




  DEFINE_STANDARD_RTTI(Prs3d_TextAspect)

protected:




private: 


Handle_Graphic3d_AspectText3d myTextAspect;
Quantity_PlaneAngle myAngle;
Standard_Real myHeight;
Graphic3d_HorizontalTextAlignment myHorizontalJustification;
Graphic3d_VerticalTextAlignment myVerticalJustification;
Graphic3d_TextPath myOrientation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
