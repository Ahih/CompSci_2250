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
			printf ("Random Number: %d\n", randNumber);

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


int main() {

	// Initialize random seed
	srand (time(NULL));

	// Initialize variables
	int randNumber = 0;
	int validArray [20] = { };

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



	// EXIT PROGRAM
	return 0;
}
