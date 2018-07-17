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
	2. It then creates a dynamic array of size N + 1, containing N random lower-case alphabet letters between ‘a’ and ‘z’. Make sure the last element is a null character ‘n0’.
  	   a) Here, make sure to use dynamic memory allocation (using new command) to allocate memory space for the array, which is exactly why we call it a dynamic array.
	3. After creating the array, the program displays the entire array.
  	   a) Here, you must define and use a function showArray to display the array. This function must have the following prototype: void showArray(char *);
  	   b) Note that it does not pass the array size as a parameter (you don’t need it when you use pointer).
  	   c) You are NOT allowed to use array index or array bracket within this function to access elements. Instead, use pointer to do so.
	4. Then reverse the elements of this array. Note that the original array is changed as a result.
  	   a) Here, you must define and use a function reverseArray to reverse the array elements. This function must have the following prototype: void reverseArray(char *);
	   b) Note that it does not pass the array size as a parameter (you don’t need it when you use pointer).
  	   c) You are NOT allowed to use array index or array bracket within this function to access elements. Instead, use pointer to do so.
	5. After reversing the array, call showArray function again to display the reversed array.
	6. Ask if the user wants to continue.
  	   a) If yes, return to Step 1.
 	   b) If no, terminate the program.
       c) Before going back to Step 1 or terminating the program, make sure to release the memory space
          occupied by the dynamic array (using delete command).
*/

// System Information
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <utility>
using namespace std;

//Function Prototype(s)
void ShowArray ( char *  );
void ReverseArray ( char * );
int GetRandLetter (char randLetter);

// MAIN PROGRAM
int main() {

	// Initialize random seed
	srand (time(NULL));

	// Initialize variables
	int n = 0;
	char randLetter = 'a';

	// Initialize menu variables
	bool programStop = false;
	bool switchStop = false;
	char programContinue = 'y';
	int runCount = 0;

	// Welcome Message
	printf ("Welcome to Anthony's Array Reversal Shop.\n");

	// BEGIN PROGRAM LOOP
		while (!programStop) {

			// Prompt User Clause
			if (runCount > 0) {

				// Ask user if they want to use the program again.
				printf ("\nWould you like to reverse another array? ");
				cin >> programContinue;
				cin.ignore(10000, '\n');
				switchStop = false;
			}

			// Menu Loop
			while (!switchStop) {

				// Validate user input
				switch (programContinue) {

					// User said yes.
					case 'Y': case 'y':

						// Inquire with user about their desired array size
						cout << "\nHow big is your array? Please enter an integer number 1-100. ";
						cin >> n;

						// Validate user's array size request.
						if (cin.fail() || n > 100 || n < 0) {

							// Invalid Input
							printf ("\nPlease enter a valid integer between 1-100. Try again...\n");

						}

						// Valid Input
						else {

							// Qualify successful user input
							switchStop = true;

							// Setup array
							char * arrayLetter = nullptr;
							arrayLetter = new char[n+1]();
							arrayLetter[n+1] = '\0';

							// Navigate to letter generator
							for (int i=0; i<n; i++) {
								arrayLetter[i] = GetRandLetter (randLetter);
							}

							/*
							// Output array for testing purposes
							for (int k=0; k<n; k++) {
								printf ("Random Letter: %c \n", arrayLetter[k]);
							}
							*/

							// Navigate to array display module
							printf("\nShow me that array!\n\n");
							ShowArray ( arrayLetter );

							//Navigate to reverse function
							ReverseArray ( arrayLetter);

							// Navigate to array display module
							printf("\nReverse it!\n\n");
							ShowArray ( arrayLetter );

							/*
							// Output new array for testing purposes
							for (int z=0; z<n; z++) {
								printf ("New Order: %c \n", arrayLetter[z]);
							}
							*/

							// Delete Array
							delete arrayLetter;
						}

						// Leave case statement
						cin.clear();
						cin.ignore(10000, '\n');
						runCount++;
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

// Generate a random letter
int GetRandLetter (char randLetter) {

	// Create random character 'a'-'z'
	randLetter = 'a' + (rand()%26);

	// Navigate back to call statement
	return randLetter;
}

// Display array function
void ShowArray(char * showArray) {

	// Print array index via pointers
	for (int s=0; s > -1; s++) {
		for (int k=0; k < 5; k++) {

			// IF NULL, BREAK LOOP
			if (*(showArray + ((5*s)+k)) == '\0') {
			   s = -2;
			   k = 5;
			}

			// ELSE, DO LOOP
			else {

				// IF END OF LINE, DISPLAY w/o PIPE CHAR
				if ( k == 4) {
					printf ("%c", *(showArray + ((5*s)+k)));
				}

				// ELSE, DISPLAY w/ PIPE CHAR
				else {
					printf ("%c | ", *(showArray + ((5*s)+k)));
				}
			}
		}

		// Formating end-line
		printf ("\n");
	}

	// Navigate back to call statement
	return;
}

// Reverse the random array
void ReverseArray(char * reverseArray){

	// Initialize variables
	int topLimit = 0;
	int swapLimit = 0;

	// Find the top limit to the array
	for (int MIN = 0; *(reverseArray + MIN) != '\0'; MIN++) {
		topLimit++;
	}

	// Display top limit and start of reverse process
	printf ("\n     TOP LIMIT = %i \n********* START *********\n", topLimit);

	// Begin SWAP LOOP
	for (int MAX = topLimit-1; MAX >= 0 ; MAX--) {
		for (int bottomLimit = 0; *(reverseArray + bottomLimit) != '\0'; bottomLimit++) {

			// IF MIDDLE VALUE, BREAK LOOP
			if (((topLimit-1)/2) < swapLimit) {
				printf ("     SWAP LIMIT = %i \n", swapLimit);
				return;
			}

			// ELSE, SWAP MIN & MAX
			else {
				printf ("      MIN = %c ", *(reverseArray + bottomLimit));
				printf ("      MAX = %c \n", *(reverseArray + MAX));
				swap(*(reverseArray + bottomLimit), *(reverseArray + MAX));
				printf ("  REV MIN = %c ", *(reverseArray + bottomLimit));
				printf ("  REV MAX = %c\n********* SWAP %i *********\n", *(reverseArray + MAX), swapLimit+1) ;
			}

			// Increment counter values
			swapLimit++;
			MAX--;
		}
	}

	// Navigate back to call statement
	return;
}

