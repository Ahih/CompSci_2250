//============================================================================
// Name        : Project Three.cpp
// Author      : Anthony Huber-Winkler
// Version     : Source Files and Constructors
// Copyright   : COMP SCI Section: 2250
// Description : SEE hw3.cpp FOR MORE INFORMATION
//============================================================================

// Student.h

/*
1. [ ] Student.h
  1) In this file, you declare a class named Student.
  1) This class contains 4 private attributes, name, idNumber, department, and year.
  1) name is a struct that contains two strings: firstName and lastName.
  1) idNumber is an integer and department is a string.
  1) year is an enum that contains four possible values: FRESHMAN, SOPHOMORE, JUNIOR, SENIOR.
  1) Note that struct and enum declarations should be placed before the class declaration.
  1) Define public getter functions and setter functions for all 4 attributes, that is, 4 getters and 4 setters.
*/

// Header File Information
#ifndef STUDENT_H_
#define STUDENT_H_

	// System Information
	#include <iostream>
	using namespace std;

	// Prior Class Declaration
	struct name { string firstName; string lastName; } name[2];
	enum year {	FRESHMAN, SOPHOMORE, JUNIOR, SENIOR	} year[4];

	// Student Class Declaration
	class Student {

		// Private Variables
		private:
			int idNumber;
			string department;

		// Public Functions
		public:

			// Setter Functions
			void setName(string fn, string ln)
				{ name[0] = fn; name[1] = ln; }
			void setidNumber (int idn)
				{ idNumber = idn; }
			void setDepartment (string dpt)
				{ department = dpt; }
			void setYear ( enum mYear )
				{ year[] = mYear; }

			// Getter Functions
			string getName() const
				{ return name; }
			int getidNumber() const
				{ return idNumber; }
			string getDepartment() const
				{ return department; }
			enum year mYear() const;

	};

#endif /* STUDENT_H_ */
