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

			// Testing Output for Number Generator
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
	int MAX = 20;

	// START SORT LOOP
	for (int i=0; i < MAX-1; i++) {
		for (int j=0; j < MAX-i-1; j++) {

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
			return BinarySearch(validArray, leftLimit, midValue-1, userNumber);
		}

		// Is the number more than the middle index?
		else if (validArray[midValue] < userNumber) {
			return BinarySearch(validArray, midValue+1, rightLimit, userNumber);
		}

	}

	// Navigate back to the MAIN with a negative search result
	return -1;
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
	printf ("Welcome to Anthony's Number Store. \n");

	// Navigate to the array creation module
	validArray[20] = GetRandArray(randNumber, validArray);

	// Testing output for Random Array
	printf ("\nRandom Array: \n");
	for(int i=0; i<20; i++) {
		printf ("%i | ",validArray[i]);
	};

	// Navigate to bubble sorter module
	printf ("\n\nPROCESSING...\n");
	validArray[20] = BubbleSort(validArray);

	// Testing Output for Sorted Array
	printf ("\nSorted Array: \n");
	for(int i=0; i<20; i++) {
		printf ("%i | ", validArray[i]);
	};

	// BEGIN PROGRAM LOOP
	while (!programStop) {

		// Ask user if they want to use the program.
		printf ("\n\nWould you like to search the store for a number? Please enter 'Y' or 'N'. ");
		cin >> programContinue;
		cin.ignore(10000, '\n');
		switchStop = false;

		// Menu Loop
		while (!switchStop) {

			// Validate user input
			switch (programContinue) {

				// User said yes.
				case 'Y': case 'y':

					// Inquire with user about their desired number
					cout << "\nPlease enter an integer number 1-100. Let me check if it's in stock. ";
					cin >> userNumber;

					// Validate user's stock request.
					if (cin.fail() || userNumber > 100 || userNumber < 0) {

						// Invalid Input
						printf ("\nPlease enter a valid integer between 1-100. Try again...\n");

					}

					else {
						// Navigate to binary search module
						storeSearch = BinarySearch(validArray, 0, arrayMAX-1, userNumber);
						switchStop = true;

						// Negative results
						if (storeSearch == -1) {
							printf ("\nSorry friend, no luck today.");
						}

						// Positive results
						else {
							printf ("\nWe do have it in stock! It's in aisle %i.", storeSearch+1);
						}
					}

					// Leave case statement
					cin.clear();
					cin.ignore(10000, '\n');
					break;

				// User said no.
				case 'N': case 'n':

					// Farewell Message
					printf ("\nWell then, thank you for stopping by anyway! See you soon...\n");
					return 0;

				// User failed to enter anything correct.
				default:

					// Invalid Input
					printf ("\nPlease enter ONLY Y or N. Try again...\n");
					switchStop = true;
					break;

			}
		}
	}

	// EXIT PROGRAM
	return 0;
}
