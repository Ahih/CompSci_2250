// Author      : Anthony Huber-Winkler
// Version     : More "CLASS" Work
// Copyright   : COMP SCI Section: 2250
// Description : SEE BELOW FOR MORE INFORMATION
//============================================================================

// MyString.cpp

/*
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
*/

// Source File Information
#include "MyString.h"

// System Information
#include <iostream>
#include <cstdlib>
using namespace std;

MyString::MyString()
{

}































