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

// Source File Information
#include "StringList.h"

// System Information
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

// Default Constructor
StringList::StringList() {
	head = nullptr;
}

// Destructor
StringList::~StringList() {

	// Establish Node Variables
	ListNode *nodePtr;
	ListNode *nextNode;

	// Position nodePtr at the head of the list
	nodePtr = head;

	// Navigate through list
	while (nodePtr != nullptr) {

		// Save the pointer to the next node
		nextNode = nodePtr->next;

		// Delete the current node
		delete nodePtr;

		// Position nodePtr at the next node
		nodePtr = nextNode;
	}
}

// Insert String to Beginning of List
void StringList::insertFrontNode(string mstring) {

	// Establish Node Variables
	ListNode *newNode;
	ListNode *nodePtr;
	ListNode *previousNode = nullptr;

	// Create New Node and Store mstring
	newNode = new ListNode;
	newNode->str = mstring;

	// If the list is empty, save newNode.
	if (!head) {
		head = newNode;
		newNode->next = nullptr;
	}

	// Otherwise...
	else {

		// Position nodePtr at the head of list
		nodePtr = head;

		// Initialize previousNode to nullptr
		previousNode = nullptr;

		// Save newNode at the front of the list
		if (previousNode == nullptr) {
			head = newNode;
			newNode->next = nodePtr;
      }
   }
}

// Append String to Back of List
void StringList::insertBackNode(string mstring) {

	// Establish Node Variables
	ListNode *newNode;					// A new node
	ListNode *nodePtr;					// To traverse the list

	// Create New Node and Store mstring
	newNode = new ListNode;
	newNode->str = mstring;
	newNode->next = nullptr;

	// If the list is empty, save newNode.
	if (!head) {
		head = newNode;
	}

	// Otherwise...
	else {

		// Position nodePtr at the head of list
		nodePtr = head;

		// Navigate to last node in the list
		while (nodePtr->next) {
			nodePtr = nodePtr->next;
		}

		// Save newNode as the last item
		nodePtr->next = newNode;
   }
}

// Delete First Node
void StringList::deleteFrontNode() {

	// Establish Node Variables
	ListNode *nodePtr;

	// If the list is empty, do nothing
	if (!head)
		return;

	// Otherwise...
	else {

		// Delete first node
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
}

// Delete Last Node
void StringList::deleteBackNode() {

	// Establish Node Variables
	ListNode *nodePtr;

	// If the list is empty, do nothing
	if (!head) {
		return;
	}

	// If the second item is the end, delete first item
	if (head->next == NULL) {
		delete head;
		head = nullptr;
		return;
	}

	// Position nodePtr at the head of list.
	nodePtr = head;

	// Find the last node in the list.
	while (nodePtr->next && nodePtr->next->next != nullptr) {
		nodePtr = nodePtr->next;
	}

	// Delete last item
	delete nodePtr->next;
	nodePtr->next = nullptr;

}

// Display Function
void StringList::displayList() const {

	// Establish Node Variables
	ListNode *nodePtr;

	// Position nodePtr at the head of the list.
	nodePtr = head;

	// While nodePtr points to a node, traverse the list.
	while (nodePtr) {

		// Display the value in this node.
		cout << nodePtr->str << " ";

		// Move to the next node.
		nodePtr = nodePtr->next;
   }
}
