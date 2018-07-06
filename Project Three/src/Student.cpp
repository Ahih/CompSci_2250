//============================================================================
// Name        : Project Three.cpp
// Author      : Anthony Huber-Winkler
// Version     : Source Files and Constructors
// Copyright   : COMP SCI Section: 2250
// Description : SEE hw3.cpp FOR MORE INFORMATION
//============================================================================

// Student.cpp

/*
1. [ ] Student.cpp
  1) In this file, you will provide definitions for 3 constructors of Student.
  1) The first constructor takes 4 parameters, one for each attribute,
  	  	  then initializes the attributes accordingly.
  1) The second constructor takes 2 parameters, one for name and one for idNumber,
  	  	  then initializes those attributes accordingly.
  	 The remaining 2 attributes are initialized as “” (empty string) and FRESHMAN, respectively.
  1) The third constructor is a default constructor that takes no parameters.
  	  	  Here, the 4 attributes are initialized as “” (firstName), “” (lastName), 0 (idNumber),
  	  	  “” (department) and FRESHMAN (year), respectively.
*/

// Source File Information
#include "Student.h"

// System Information
#include <iostream>
#include <cstdlib>
using namespace std;

Student::Attributes()
{
	sName = {'\0', '\0'};
	idNumber = 0;
	department = '\0';
	sYear = 0;
}
