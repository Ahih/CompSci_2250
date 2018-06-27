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
using namespace std;

//Function Prototype(s)
void ShowArray ( char *  );
void ReverseArray ( char * );

// Generate a random letter
int GetRandLetter (char randLetter) {

	// Create random character 'a'-'z'
	randLetter = 'a' + (rand()%26);

	// Navigate back to call statement
	return randLetter;
}

// Display array function
void ShowArray(char *showArray) {

	// Print array index via pointers
	for (int s=0; *(showArray + s) != '\0'; s++){
		printf ("Index Value %i is %c \n", s+1, *(showArray + s));

	}

	//Navigate back to call statement
	return;
}

void ReverseArray(char * reverseArray){

	// Initialize variables
	*reverseArray *= *reverseArray;
	int MAX = 5;
	char tempValue;

	// Reverse array loop
	for (int j = 0; *(reverseArray + j) != '\0'; j++) {


		// FIX THIS.... NO INDEX []
		// Have to use two for loops, one that finds the null character and then the swap mechanic
		// Make sure to use pointers and stuff







		// Swap first and last index values
		tempValue = reverseArray[j];
		reverseArray[j] = reverseArray[MAX-1];
		reverseArray[MAX-1] = tempValue;

		// Decrement Top Limit
		MAX--;

	}

	//Navigate back to call statement
	return;
}

int main() {

	// Initialize random seed
	srand (time(NULL));

	// Initialize variables
	int n = 0;
	char randLetter = 'a';

	// Initialize menu variables
	bool programStop = false;
	bool switchStop = false;
	char programContinue;


	// Welcome Message
	printf ("Welcome to Anthony's Array Reversal Shop. \n\n");

	// BEGIN PROGRAM LOOP
		while (!programStop) {

			// Ask user if they want to use the program.
			printf ("\nWould you like to reverse an array? ");
			cin >> programContinue;
			cin.ignore(10000, '\n');
			switchStop = false;

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
							printf("\nShow me that array!\n");
							ShowArray ( arrayLetter );

							//Navigate to reverse function
							ReverseArray ( arrayLetter);

							// Navigate to array display module
							printf("\nReverse it!\n");
							ShowArray ( arrayLetter );

							/*
							// Output new array for testing purposes
							for (int z=0; z<n; z++) {
								printf ("New Order: %c \n", arrayLetter[z]);
							}
							*/


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


























