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
	struct name { string firstName; string lastName; };
	enum year {	FRESHMAN, SOPHOMORE, JUNIOR, SENIOR	};

	// Student Class Declaration
	class Student {

		// Private Variables
		private:
			name sName;
			int idNumber;
			string department;
			year sYear;

		// Public Functions
		public:

			// Setter Functions
			void setName(string fn, string ln)
				{ sName.firstName = fn; sName.lastName = ln; }
			void setidNumber(int idn)
			    { idNumber = idn; }
			void setDepartment(string dpt)
				{ department = dpt; }
			void setYear ( year yr )
				{ sYear = yr; }

			// Getter Functions
			name getName() const
				{ return sName; }
			int getidNumber() const
				{ return idNumber; }
			string getDepartment() const
				{ return department; }
			year getYear() const
				{ return sYear; }

	};

// END Header File Definition
#endif /* STUDENT_H_ */
