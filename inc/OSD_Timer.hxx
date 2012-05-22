// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_Timer_HeaderFile
#define _OSD_Timer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _OSD_Chronometer_HeaderFile
#include <OSD_Chronometer.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif


//! Working on heterogeneous platforms <br>
//! we need to use the system call gettimeofday. <br>
//! This function is portable and it measures ELAPSED <br>
//! time and CPU time in seconds and microseconds. <br>
//! Example: OSD_Timer aTimer; <br>
//!          aTimer.Start();   // Start  the timers (t1). <br>
//!           .....            // Do something. <br>
//!          aTimer.Stop();    // Stop the timers (t2). <br>
//!          aTimer.Show();    // Give the elapsed time between t1 and t2. <br>
//!                            // Give also the process CPU time between <br>
//!                            // t1 and t2. <br>
class OSD_Timer  : public OSD_Chronometer {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Builds a Chronometer initialized and stopped. <br>
  Standard_EXPORT   OSD_Timer();
  //! Stops and reinitializes the timer. <br>
  Standard_EXPORT   virtual  void Reset() ;
  //! Shows both the elapsed time and CPU time on the standard output <br>
//!          stream <cout>.The chronometer can be running (Lap Time) or <br>
//!          stopped. <br>
  Standard_EXPORT   virtual  void Show() ;
  //! Shows both the elapsed time and CPU  time on the <br>
//!          output stream <OS>. <br>
  Standard_EXPORT   virtual  void Show(Standard_OStream& os) ;
  //! returns both the elapsed time(seconds,minutes,hours) <br>
//!          and CPU  time. <br>
  Standard_EXPORT     void Show(Standard_Real& seconds,Standard_Integer& minutes,Standard_Integer& hours,Standard_Real& CPUtime) ;
  //! Stops the Timer. <br>
  Standard_EXPORT   virtual  void Stop() ;
  //! Starts (after Create or Reset) or restarts (after Stop) <br>
//!          the Timer. <br>
  Standard_EXPORT   virtual  void Start() ;
  //! Returns elapsed time in seconds. <br>
  Standard_EXPORT     Standard_Real ElapsedTime() ;





protected:





private:



Standard_Real TimeStart;
Standard_Real TimeCumul;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
