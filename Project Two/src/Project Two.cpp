//============================================================================
// Name        : Project Two.cpp
// Author      : Anthony Huber-Winkler
// Version     : BUBBLE SORT AND BINARY SEARCH
// Copyright   : COMP SCI Section: 2250
// Description : SEE BELOW FOR MORE INFORMATION
//============================================================================

/*
// Project 2:
// Reversing a Dynamic Array of Characters**
// Due: 6/28 (11:59PM)
// Let us develop a C++ program with the following requirements:
	1. The program first asks user to enter the number of elements for an array. (Number N)
	2. It then creates a dynamic array of size N + 1, containing N random lower-case alphabet letters 	   	   between ‘a’ and ‘z’. Make sure the last element is a null character ‘n0’.
  	   a) Here, make sure to use dynamic memory allocation (using new command) to allocate memory space 		  	      for the array, which is exactly why we call it a dynamic array.
	3. After creating the array, the program displays the entire array.
  	   a) Here, you must define and use a function showArray to display the array. This function must
  	      have the following prototype: **void showArray(char *);**
  	   b) Note that it does not pass the array size as a parameter (you don’t need it when you use
  	      pointer).
  	   c) You are NOT allowed to use array index or array bracket within this function to access
  	      elements. Instead, use pointer to do so.
	4. Then reverse the elements of this array. Note that the original array is changed as a result.
  	   a) Here, you must define and use a function reverseArray to reverse the array elements. This
  	      function must have the following prototype: **void reverseArray(char *);**
	   b) Note that it does not pass the array size as a parameter (you don’t need it when you use
	   	  pointer).
  	   c) You are NOT allowed to use array index or array bracket within this function to access
  	      elements.Instead, use pointer to do so.
	5. After reversing the array, call showArray function again to display the reversed array.
	6. Ask if the user wants to continue.
  	   a) If yes, return to Step 1.
 	   b) If no, terminate the program.
       c) Before going back to Step 1 or terminating the program, make sure to release the memory space
          occupied by the dynamic array (using delete command).
*/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generate a random number
int GetRandNumber(int randNumber) {

	// Create random number 1-100
	randNumber = (rand()%26)+1;

	// Navigate back to MAIN with valid number
	return randNumber;
}

int main() {

	// Initialize random seed
	srand (time(NULL));

	// Initialize variables
	int randNumber = 0;
	int validArray [20] = { };
	int arrayMAX = sizeof(validArray)/sizeof(validArray[0]);
	int userNumber = 0;
	int storeSearch = 0;
	bool programStop = false;
	bool switchStop = false;
	char programContinue;

	// Welcome Message
	printf ("Welcome to Anthony's Number Store. \n\n");

	// Navigate to the array creation module
	validArray[20] = GetRandArray(randNumber, validArray);


	// EXIT PROGRAM
		return 0;

}


























