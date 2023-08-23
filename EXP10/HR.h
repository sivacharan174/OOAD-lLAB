
#ifndef HR_H
#define HR_H

#include <string>

/**
  * class HR
  * 
  */

class HR
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  HR ();

  /**
   * Empty Destructor
   */
  virtual ~HR ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void Verification;
  void Resume;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Verification
   * @param new_var the new value of Verification
   */
  void setVerification (void new_var)   {
      Verification = new_var;
  }

  /**
   * Get the value of Verification
   * @return the value of Verification
   */
  void getVerification ()   {
    return Verification;
  }

  /**
   * Set the value of Resume
   * @param new_var the new value of Resume
   */
  void setResume (void new_var)   {
      Resume = new_var;
  }

  /**
   * Get the value of Resume
   * @return the value of Resume
   */
  void getResume ()   {
    return Resume;
  }
private:


  void initAttributes () ;

};

#endif // HR_H
