//============================================================================
// Name        : Project 4.cpp
// Author      : Anthony Huber-Winkler
// Version     : More "CLASS" Work
// Copyright   : COMP SCI Section: 2250
// Description : SEE BELOW FOR MORE INFORMATION
//============================================================================

// MyString.h

/*
1. [ ] MyString.h
  1) In this file, you declare a class named MyString.
  1) This class contains 3 private attributes, str, size, and strCount.
  1) str is a char* that points to a dynamic array of characters.
  1) size is an integer that contains the current size of the string.
  1) strCount is a static member variable that keeps track of the number of MyString
		objects that currently exist in memory. Its value is initially 0 before any MyString object is created.
  1) Define public getters and setters for the 2 instance variables, as well as a getter for the static variable.

*/

// Header File Information
#ifndef MYSTRING_H_
#define MYSTRING_H_

	// System Information
	#include <iostream>
	using namespace std;

	// Prior Class Declaration

	// Student Class Declaration
	class MyString {

		// Public Functions
		public:

			// Constructor
			MyString();




			// Increment strCount
			//strCount++;

			// Setter Functions
			void setSTR(char* mstr) { str = mstr; }
			void setSIZE(int msize) { size = msize; }

			// Getter Functions
			char* getSTR() { return str; }
			int getSIZE() { return strCount; }
			static int getSTRCOUNT() { return strCount; }

		// Private Variables
		private:
			char* str;
			int size;
			static int strCount;

	};

// END Header File Definition
#endif /* MYSTRING_H_ */
