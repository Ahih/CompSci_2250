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
	class StringList {

		// Private Variables
		private:

			// Declaration of the list structure
			struct ListNode {
				string str;
				struct ListNode *next;
			};

			// Starting Node
			ListNode *head;

		// Public Functions
		public:

			// Constructors
			StringList();

			// Destructors
			~StringList();

			// Linked List Operations
			void appendNode (string);
			void insertFrontNode (string);
			void insertBackNode (string);
			void deleteFrontNode (string);
			void deleteBackNode (string);
			void displayList () const;

	};

// END Header File Definition
#endif /* STRINGLIST_H_ */
