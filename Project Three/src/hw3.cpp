//============================================================================
// Name        : Project Three.cpp
// Author      : Anthony Huber-Winkler
// Version     : Source Files and Constructors
// Copyright   : COMP SCI Section: 2250
// Description : SEE BELOW FOR MORE INFORMATION
//============================================================================

// hw3.cpp

/*
// Project 3:
// Source Files and Constructors
// Due: 7/6 (11:59PM)
// Let us develop a C++ program with the following requirements between three files:
 *
1. [ ] Student.h
  1) In this file, you declare a class named Student.
  1) This class contains 4 private attributes, name, idNumber, department, and year.
  1) name is a struct that contains two strings: firstName and lastName.
  1) idNumber is an integer and department is a string.
  1) year is an enum that contains four possible values: FRESHMAN, SOPHOMORE, JUNIOR, SENIOR.
  1) Note that struct and enum declarations should be placed before the class declaration.
  1) Define public getter functions and setter functions for all 4 attributes, that is, 4 getters and 4 setters.

1. [ ] Student.cpp
  1) In this file, you provide definitions for 3 constructors of Student.
  1) The first constructor takes 4 parameters, one for each attribute, then initializes the attributes accordingly.
  1) The second constructor takes 2 parameters, one for name and one for idNumber, then initializes those attributes accordingly.
  	 The remaining 2 attributes are initialized as “” (empty string) and FRESHMAN, respectively.
  1) The third constructor is a default constructor that takes no parameters. Here, the 4 attributes are initialized as “” (firstName),
  	 “” (lastName), 0 (idNumber), “” (department) and FRESHMAN (year), respectively.

1. [ ] hw3.cpp
  1) In this file, you define main function.
  1) In the main function, first create at least 3 Student objects.
  1) The first object must be created using the first constructor (4 parameters).
  1) The second object must be created using the second constructor (2 parameters).
  1) Since the second constructor does not provide proper information for department and year,
  	 set those values by calling their associated setter functions.
  1) The third object must be created using the default constructor.
  1) Since the default constructor does not provide proper information for any attributes,
  	 set all 4 values by calling their associated 4 setter functions.
  1) After creating all the objects, call a function named displayStudent for each student to print all the information
  	 (all 4 attributes) about the student. Note that this function must be called at least 3 times to print all objects.
  	 You must define this displayStudent function (next to main) with the following prototype: void displayStudent(Student);
  1) When displaying year, make sure the freshman year starts at 1, not 0.

* Example run:
> Name: Roger Federer
> ID Number: 12345
> Department: Art
> Year: 4

> Name: Rafael Nadal
> ID Number: 56789
> Department: Computer Science
> Year: 3

> Name: Novak Djokovic
> ID Number: 13579
> Department: Physics
> Year: 1

*/

// Source File Information
#include "Student.h"
#include "Student.cpp"

// System Information
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

//Function Prototype(s)

// MAIN PROGRAM
int main() {

	// Declare objects
	Student student1;
	Student student2;
	Student student3;

	student1.Student::Student_1();
	student2.Student::Student_2();
	student3.Student::Student_3();

	return 0;
}
