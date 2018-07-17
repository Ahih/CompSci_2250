//============================================================================
// Name        : Project 5.cpp
// Author      : Anthony Huber-Winkler
// Version     : Linked Lists
// Copyright   : COMP SCI Section: 2250
// Description : SEE BELOW FOR MORE INFORMATION
//============================================================================

// StringList.cpp

/*
1. [ ] StringList.cpp
  1) In this file, you provide definitions for the default constructor and the destructor for StringList.
  1) Make sure the destructor visits every node in the list and deletes every one of them from the heap.
  1) Define insertFront function to insert a new node into the front of the list. Therefore, the new node will be the new first node in the list. This function takes a string as a parameter.
  1) Define insertBack function to insert a new node into the back of the list. Therefore, the new node will be the new last node in the list. This function takes a string as a parameter.
  1) Define deleteFront function to delete the first node from the list. This function takes no parameter.
  1) Define deleteBack function to delete the last node from the list. This function takes no parameter.
  1) Define display function that displays the current contents (strings) of the list (display strings in a single line, separated by a space). This function takes no parameter.

*/

/*

// Source File Information
#include "MyString.h"

// System Information
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


// Constructor 1
MyString::MyString(string stringInput)
{
	// Set Size of String Input
	setSIZE(stringInput.size());

	// Create Dynamic Array
	setSTR(stringInput);

	// Increment strCount
	strCount++;

	cout << "==== CONSTRUCT 1 =====" << endl;
	cout << "STR: " << getSTR() << endl;
	cout << "SIZE: " << getSIZE() << endl;
	cout << "STRCOUNT: " << getSTRCOUNT() << endl;
	cout << "======================" << endl;
	cout << endl;

}

// Constructor 2
MyString::MyString()
{
	// Initialize Variables
	str = NULL;
	size = 0;

	// Increment strCount
	strCount++;

	cout << "==== CONSTRUCT 2 =====" << endl;
	cout << "STR: " << getSTR() << endl;
	cout << "SIZE: " << getSIZE() << endl;
	cout << "STRCOUNT: " << getSTRCOUNT() << endl;
	cout << "======================" << endl;
	cout << endl;
}

// Constructor 3
MyString::MyString(const MyString &s2)
{
	// Copy Variables
	setSTR(s2.str);
	setSIZE(s2.size);

	// Increment strCount
	strCount++;

	cout << "==== CONSTRUCT 3 =====" << endl;
	cout << "STR: " << getSTR() << endl;
	cout << "SIZE: " << getSIZE() << endl;
	cout << "STRCOUNT: " << getSTRCOUNT() << endl;
	cout << "======================" << endl;
	cout << endl;
}

// Destructor
MyString::~MyString()
{
	// Releases of Dynamic Array
	delete []str;

	// Increment strCount
	strCount--;

	cout << "======================" << endl;
	cout << "=== DECONSTRUCTED ====" << endl;
	cout << "======================" << endl;
	cout << endl;
}



// Operator '='
MyString MyString::operator= (MyString const &obj) {

	MyString s3;
	s3.str = obj.str;
	s3.size = obj.size;
	return s3;
}

// Operator '+='
MyString MyString::operator+= (MyString const &obj) {

	MyString s4;
	s4.size += obj.size;

	char * newArray = new char [s4.size];

	strcpy(newArray, str);
	strcpy(newArray, obj.str);

	s4.str = newArray;
	delete [] newArray;

	return s4;
}

*/


