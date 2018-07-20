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
   ListNode *nodePtr;   // To traverse the list
   ListNode *nextNode;  // To point to the next node

   // Position nodePtr at the head of the list.
   nodePtr = head;

   // While nodePtr is not at the end of the list...
   while (nodePtr != nullptr) {
      // Save a pointer to the next node.
      nextNode = nodePtr->next;

      // Delete the current node.
      delete nodePtr;

      // Position nodePtr at the next node.
      nodePtr = nextNode;
   }
}

void StringList::insertFrontNode(string mstring) {
   ListNode *newNode;					// A new node
   ListNode *nodePtr;					// To traverse the list
   ListNode *previousNode = nullptr;	// The previous node

   // Allocate a new node and store mstring there.
   newNode = new ListNode;
   newNode->str = mstring;

   // If there are no nodes in the list, make newNode the first node
   if (!head) {
      head = newNode;
      newNode->next = nullptr;
   }

   // Otherwise, insert newNode
   else {

      // Position nodePtr at the head of list.
      nodePtr = head;

      // Initialize previousNode to nullptr.
      previousNode = nullptr;

      // If the new node is to be the 1st in the list,
      // insert it before all other nodes.
      if (previousNode == nullptr) {
         head = newNode;
         newNode->next = nodePtr;
      }
   }
}

void StringList::insertBackNode(string mstring) {
   ListNode *newNode;					// A new node
   ListNode *nodePtr;					// To traverse the list

   // Allocate a new node and store mstring there.
   newNode = new ListNode;
   newNode->str = mstring;
   newNode->next = nullptr;

   // If there are no nodes in the list
   // make newNode the first node
   if (!head) {
      head = newNode;
   }

   // Otherwise, insert newNode at the end
   else {
      // Position nodePtr at the head of list.
      nodePtr = head;

      // Find the last node in the list.
      while (nodePtr->next) {
		 nodePtr = nodePtr->next;
	  }

      // Insert newNode as the last node.
      nodePtr->next = newNode;
   }
}

void StringList::deleteFrontNode() {
	ListNode *nodePtr;       // To traverse the list

	// If the list is empty, do nothing.
	if (!head)
		return;

	else {
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
}

void StringList::deleteBackNode() {
	ListNode *nodePtr;       // To traverse the list
	ListNode *previousNode;  // To point to the previous node

	// If the list is empty, do nothing.
	if (!head)
		return;

	else {

		// Position nodePtr at the head of list.
		nodePtr = head;

		// Find the last node in the list.
		while (nodePtr->next) {
			nodePtr = nodePtr->next;
		}

		previousNode = nodePtr;
		delete nodePtr;
		previousNode->next = nullptr;
	}
}

// Display Function
void StringList::displayList() const {
   ListNode *nodePtr;  // To move through the list

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


