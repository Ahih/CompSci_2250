//============================================================================
// Name        : Project 5.cpp
// Author      : Anthony Huber-Winkler
// Version     : Linked Lists
// Copyright   : COMP SCI Section: 2250
// Description : SEE BELOW FOR MORE INFORMATION
//============================================================================

// StringList.h

/*
 1. [ ] StringList.h
  1) In this file, you declare a class named StringList.
  1) StringList is a modified version of NumberList class (Chapter 17), that is designed to store C++ strings in a linked list.
  1) Therefore, each node must store a string, not a number.
  1) The node structure must be declared within class, and a private attribute head points to the starting node.
  1) The class provides a default constructor that creates an empty linked list, and a destructor that releases all the nodes.
  1) The class also provides public member functions for inserting and deleting a node (see below for details).
  1) It also provides a public member function for displaying the list.

*/

// Header File Information
#ifndef STRINGLIST_H_
#define STRINGLIST_H_

	// System Information
	#include <iostream>
	using namespace std;

	// Prior Class Declaration

	// Student Class Declaration
	class MyString {

		// Private Variables
		private:
			char* str;
			int size;
			static int strCount;

		// Public Functions
		public:

			// Constructors
			MyString(string);
			MyString();
			MyString(const MyString &obj2);
			~MyString();
			MyString operator= (MyString const &obj);
			MyString operator+= (MyString const &obj);


			// Setter Functions
			void setSTR(string mstr) {
				new char[size+1];
				mstr.copy(str, size, 0);
				str[size] = '\0';
			}
			void setSIZE(int msize) { size = msize; }

			// Getter Functions
			char* getSTR() { return str; }
			int getSIZE() { return size; }
			int getSTRCOUNT() { return strCount; }

			// Display Function
			void displayString() {
				cout << "======= OUTPUT =======" << endl;
				cout << "Array: " << str << endl;
				cout << "Length: " << size << endl;
				cout << "Count: " << strCount << endl;
				cout << "======================" << endl;
				cout << endl;
			}

	};

// END Header File Definition



#endif /* STRINGLIST_H_ */
