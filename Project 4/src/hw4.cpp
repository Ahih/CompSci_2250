//============================================================================
// Name        : Project 4.cpp
// Author      : Anthony Huber-Winkler
// Version     : More "CLASS" Work
// Copyright   : COMP SCI Section: 2250
// Description : SEE BELOW FOR MORE INFORMATION
//============================================================================

// hw4.cpp

/*
// Project 4:
// More "Class" Work
// Due: 7/12 (11:59PM)
// Let us develop a C++ program with the following requirements between three files:

1. [ ] MyString.h
  1) In this file, you declare a class named MyString.
  1) This class contains 3 private attributes, str, size, and strCount.
  1) str is a char* that points to a dynamic array of characters.
  1) size is an integer that contains the current size of the string.
  1) strCount is a static member variable that keeps track of the number of MyString
		objects that currently exist in memory. Its value is initially 0 before any MyString object is created.
  1) Define public getters and setters for the 2 instance variables, as well as a getter for the static variable.

1. [ ] MyString.cpp
  1) In this file, you provide definitions for 3 constructors and a destructor for MyString.
  1) The first constructor takes a string parameter, then creates a dynamic char array in the heap
		and copies the input string content into the array. Note that the size of the dynamic array should match
		the length of the input string. Also, strCount should be incremented by 1 since a new string has been created.
  1) The second constructor is a default constructor that takes no parameters. Here, the 2 instance attributes
		are initialized as “” (empty string) and 0, respectively. Again, strCount should be incremented by 1.
  1) The third constructor is a copy constructor that allows the following statement:

	MyString y = x; // at declaration

  1) so that the MyString y is initialized as the same string as x. However, make sure their respective
		arrays are separately created in the heap (even though their contents are the same).
		Again, strCount should be incremented by 1.
  1) Also define a destructor function for the class that releases the dynamic array.
		The destructor must also decrement strCount by 1.
  1) Add a display function that displays the current contents of the string on the screen.
  1) Overload operator = to allow assignment (away from declaration statement) as follows:

	x = y; // where x and y are both MyString objects

  1) Note that this assignment must perform deep copy, which means the entire source dynamic
		array must be copied to the target dynamic array, not just the pointer.
  1) Overload operator += to allow a statement like:

	x += y; // where x and y are both MyString objects

  1) This operator must append MyString y at the end of x, so that x becomes a merged string.
		Note that the previous dynamic array of x must be destroyed and a new dynamic array must be created
		with an updated size.

1. [ ] hw4.cpp
  1) In this file, you define main function that tests MyString class. You must create at least 3 MyString objects.
  1) Show that the first constructor properly works via a statement like: MyString s1(‘‘abc’’);
  1) Show that the default constructor properly works via a statement like: MyString s1;
  1) Show that the copy constructor properly works via a statement like: MyString s2 = s1;
  1) Show that the overloaded operator = properly works via a statement like: s2 = s1;
  1) Show that the overloaded operator += properly works via a statement like: s1 += s1;
  1) Show that the strCount is properly updated via a statement like: cout << s1.getStrCount();
  1) Show that the display function properly works via a statement like: s1.display();
  1) Note that the display function must be called every time a MyString object is created or updated.
		Otherwise the respective functionality will not be properly demonstrated and could lead to loss of points.
*/

// Source File Information
#include "MyString.h"

// System Information
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

//Function Prototype(s)

// Initialize static member

// MAIN Program
int main() {

	// Declare objects
	//Student student3;

	// Set Information Object 1
	//student2.setDepartment("Computer Science");
	//student2.setYear(JUNIOR);

	// Set Information Object 2
	//student2.setDepartment("Computer Science");
	//student2.setYear(JUNIOR);

	// Set Information Object 3
	//student3.setName("Novak", "Djokovic");
	//student3.setidNumber(13579);
	//student3.setDepartment("Physics");
	//student3.setYear(FRESHMAN);

	//displayStudent(student1);
	//displayStudent(student2);
	//displayStudent(student3);

	return 0;
}
