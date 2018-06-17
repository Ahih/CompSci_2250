//============================================================================
// Name        : Project One.cpp
// Author      : Anthony Huber-Winkler
// Version     : BUBBLE SORT AND BINARY SEARCH
// Copyright   : COMP SCI Section: 2250
// Description : SEE BELOW FOR MORE INFORMATION
//============================================================================

/*
// Bubble Sort and Binary Search
// Due: 6/21 (11:59PM)
// Let us develop a C++ program with the following requirements:
	1. The program first creates an array of 20 random positive numbers between 1 and 100. Make sure there are no duplicates in the array.
	2. Then apply bubble sort to sort the array in ascending order, then display the entire array.
	3. Now, ask user to enter any number between 1 and 100.
	4. Use binary search to check if the user’s number is contained in the array.
		4a. If yes, display ‘yes’ with the index of the matching element.
		4b. If no, display ‘no’.
	5. Ask if the user wants to continue.
		5a. If yes, return to Step 3.
		5b. If no, terminate program.
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generate a random number
int GetRandNumber(int randNumber) {

	// Create random number 1-100
	randNumber = (rand()%100)+1;

	// Navigate back to MAIN with valid number
	return randNumber;
}

// Validate number
int GetRandArray(int randNumber, int validArray[20]) {

	// Initialize array for duplicate checking
	int checkArray [100] = { };

	// Array creation loop
	for(int i=0; i<20; i++) {

		// START LOOP CONDITON
		bool validNumber = false;

		// Check value for duplicates
		while (validNumber == false) {

			// Navigate to random number module
			randNumber = GetRandNumber(randNumber);

			// Testing Output
			//printf ("Random Number: %d\n", randNumber);

			// Bad number, START OVER
			if (checkArray[randNumber] == 1) {
				validNumber = false;
			}

			// Increment duplicate counter array and assign value
			else {
				checkArray[randNumber] = 1;
				validArray[i] = randNumber;
				validNumber = true;
			}
		}
	}

	// Navigate back to MAIN with VALID ARRAY
	return validArray[20];
}

// Sort numbers into increasing order
int BubbleSort (int validArray[20]) {

	// Initialize variables
	int tempValue = 0;

	// START SORT LOOP
	for(int i=0; i<20; i++) {
		for(int j=0; j<19; j++) {

			// Compare number in array with neighbor
			if (validArray[j] > validArray[j+1]) {
				tempValue = validArray[j];
				validArray[j] = validArray[j+1];
				validArray[j+1] = tempValue;
			}
		}
	}

	// Navigate back to MAIN with VALID SORTED ARRAY
	return validArray[20];
}

// Search array for user's number
int BinarySearch (int validArray[20], int leftLimit, int rightLimit, int userNumber) {

	// START SEARCH LOOP
	if (rightLimit >= leftLimit) {

		// Determine middle indexed value
		int midValue = leftLimit + (rightLimit - leftLimit)/2;

		// Is there number the middle index?
		if (validArray[midValue] == userNumber){
			return midValue;
		}

		// Is the number less than the middle index?
		else if (validArray[midValue] > userNumber) {
			BinarySearch(validArray, leftLimit, midValue-1, userNumber);
		}

		// Is the number more than the middle index?
		else {
			BinarySearch(validArray, leftLimit, midValue+1, userNumber);
		}
	}

	// Return negative search results
	return -1;
}


int main() {

	// Initialize random seed
	srand (time(NULL));

	// Initialize variables
	int randNumber = 0;
	int validArray [20] = { };
	int userNumber = 0;
	int storeSearch = 0;

	// Welcome Message
	printf ("Welcome to Anthony's Number Store. \n");

	// Navigate to the array creation module
	validArray[20] = GetRandArray(randNumber, validArray);

	// Testing Output
	for(int i=0; i<20; i++) {
		cout << "Array Value of " << i << " = " << validArray[i] << endl;
	};

	// Navigate to bubble sorter module
	validArray[20] = BubbleSort(validArray);

	// Testing Output
	for(int i=0; i<20; i++) {
		cout << "SORTED Array Value of " << i <<" = " << validArray[i] << endl;
	};

	// Inquire with user about their desired number
	printf ("Please enter an integer number 1-100. Let me check if it's in stock. \n");
	scanf ("%d", &userNumber);

	// Setup search variables
	int arraySize = sizeof(validArray)/sizeof(validArray[0]);

	// Navigate to binary search module
	storeSearch = BinarySearch(validArray, 0, arraySize-1, userNumber);

	if (storeSearch == -1) {
		printf ("Sorry friend. No luck today. \n");
	}

	else {
		cout << "We do have it in stock! It's in aisle " << storeSearch + 1 << ". \n";
	}


	// EXIT PROGRAM
	return 0;
}
