//============================================================================
// Name        : Project 5.cpp
// Author      : Anthony Huber-Winkler
// Version     : Linked Lists
// Copyright   : COMP SCI Section: 2250
// Description : SEE BELOW FOR MORE INFORMATION
//============================================================================

// hw5.cpp

/*
### Project 5:
* **Linked Lists**
* Due: 7/19 (11:59PM)
* Let us develop a C++ program with the following requirements between three files:

1. [ ] StringList.h
  1) In this file, you declare a class named StringList.
  1) StringList is a modified version of NumberList class (Chapter 17), that is designed to store C++ strings in a linked list.
  1) Therefore, each node must store a string, not a number.
  1) The node structure must be declared within class, and a private attribute head points to the starting node.
  1) The class provides a default constructor that creates an empty linked list, and a destructor that releases all the nodes.
  1) The class also provides public member functions for inserting and deleting a node (see below for details).
  1) It also provides a public member function for displaying the list.

1. [ ] StringList.cpp
  1) In this file, you provide definitions for the default constructor and the destructor for StringList.
  1) Make sure the destructor visits every node in the list and deletes every one of them from the heap.
  1) Define insertFront function to insert a new node into the front of the list. Therefore, the new node will be the new first node in the list. This function takes a string as a parameter.
  1) Define insertBack function to insert a new node into the back of the list. Therefore, the new node will be the new last node in the list. This function takes a string as a parameter.
  1) Define deleteFront function to delete the first node from the list. This function takes no parameter.
  1) Define deleteBack function to delete the last node from the list. This function takes no parameter.
  1) Define display function that displays the current contents (strings) of the list (display strings in a single line, separated by a space). This function takes no parameter.

1. [ ] hw5.cpp
  1) In this file, you define main function that tests StringList class.
  1) You must first create a StringList object.
  1) Then start inserting new nodes, one at a time. Alternate between inserting into the front and into the back. Make sure to add at least 6 nodes.
  1) Then start deleting nodes, one at a time. Alternate between deleting from the front and from the back.
  1) Make sure all the nodes are deleted before terminating the program.
  1) After each insertion or deletion, call display member function to display the updated list.
  1) Make sure all the member functions are tested and shown to work properly, without missing any of them.
  1) Note that the display function must be called pretty much every time a node is inserted or deleted.
  1) Otherwise the respective functionality will not be properly demonstrated and could lead to loss of points.
  1) Also note that each member function should properly work regardless of the current list configuration (empty list, one-node list, or multiple-node list).


*/

// Source File Information
#include "StringList.h"

// System Information
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

// MAIN Program
int main() {

	// Declare object
	StringList StringObj;

	// Formatting
	cout << "=================";
	cout << "= START =";
	cout << "=================";
	cout << endl;

	// FIRST TEST
	StringObj.insertFrontNode("FIRST");
	StringObj.displayList();
	cout << endl;
	StringObj.insertBackNode("SECOND");
	StringObj.displayList();
	cout << endl;
	StringObj.insertFrontNode("THIRD");
	StringObj.displayList();
	cout << endl;
	StringObj.insertBackNode("FOURTH");
	StringObj.displayList();
	cout << endl;
	StringObj.insertFrontNode("FIFTH");
	StringObj.displayList();
	cout << endl;
	StringObj.insertBackNode("SIXTH");
	StringObj.displayList();
	cout << endl;

	// Formatting
	cout << "=================";
	cout << " RESULTS ";
	cout << "=================";
	cout << endl;

	// Display Results
	cout << "LIST: ";
	StringObj.displayList();
	cout << endl;

	// Formatting
	cout << "=================";
	cout << "= AGAIN =";
	cout << "=================";
	cout << endl;

	// SECOND TEST
	StringObj.deleteFrontNode();
	StringObj.displayList();
	cout << endl;
	StringObj.deleteBackNode();;
	StringObj.displayList();
	cout << endl;
	StringObj.deleteFrontNode();
	StringObj.displayList();
	cout << endl;
	StringObj.deleteBackNode();;
	StringObj.displayList();
	cout << endl;
	StringObj.deleteFrontNode();
	StringObj.displayList();
	cout << endl;
	StringObj.deleteBackNode();
	StringObj.displayList();
	cout << endl;

	// Formatting
	cout << "=================";
	cout << " RESULTS ";
	cout << "=================";
	cout << endl;

	// Display Results
	cout << "LIST: ";
	StringObj.displayList();
	cout << endl;

	// Formatting
	cout << "=================";
	cout << " BYE BYE ";
	cout << "=================";
	cout << endl;

	return 0;
}
