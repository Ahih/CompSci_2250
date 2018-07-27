//============================================================================
// Name        : Project 6.cpp
// Author      : Anthony Huber-Winkler
// Version     : STL Stack
// Copyright   : COMP SCI Section: 2250
// Description : SEE BELOW FOR MORE INFORMATION
//============================================================================

// hw6.cpp

/*
### Project 6:
* **STL Stack**
* Due: 7/26 (11:59PM)
* Let us develop a C++ program with the following requirements:

1. [ ] hw6.cpp
  1) The program first creates an STL stack that stores char data.
  1) Then ask user to enter a series of parentheses and/or braces, then report whether or not
  	  they’re properly nested:

  1) Example run:

> Enter parentheses and/or braces: ((){}{()})
> Parentheses/braces are nested properly
> Continue? (y/n)

> Enter parentheses and/or braces: {{{()}}
> Parentheses/braces are NOT nested properly
> Continue? (y/n)

> Enter parentheses and/or braces: {({{()(){}}))}
> Parentheses/braces are NOT nested properly
> Continue? (y/n)

  1) After each round, ask user if he/she wants to continue. If yes, go back to the previous step
  	  and take another string of parentheses/braces. If no, terminate program.
  1) Hint: As the program reads characters, have it push each left parenthesis or left brace into
  	  the STL stack. When it reads a right parenthesis or brace, have it pop the stack and check
  	  if the popped item is a matching parenthesis or brace (If not, the parentheses/braces
  	  aren’t nested properly). When there is no more character to read, check if the stack is
  	  empty; if so, the parentheses/braces are matched.
  1) If the user enters any character other than parenthesis or brace, simply ignore it. Therefore,
  	  entering a wrong character shouldn’t lead to program malfunction.
  1) Note: If you implement it without using STL stack, there will be a huge loss of points (even
  	  if the program works).

*/

// Source File Information
//#include "StringList.h"

// System Information
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
using namespace std;

// Prototypes
void stackConverter (string myString, stack <char> myStack);

// MAIN Program
int main() {

	// Declare variables
	string myString;
	bool programStop = false;
	bool switchStop = false;
	char programContinue = '\0';
	int programCount = 0;

	// Define the STL stack
	stack <char> myStack;

	// Formatting
	cout << "=================";
	cout << "===== START =====";
	cout << "=================\n";

	// START LOOP
	while (!programStop) {

		// Always run at least once.
		if (programCount == 0) {
			programCount++;
			programContinue = 'Y';
		}

		// Inquire every other time.
		else {

			// Ask user if they want to continue.
			cout << "\nWould you like to continue? Please enter 'Y' or 'N'. ";
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

					// User Input
					cout << "Enter parentheses and/or braces: ";
					cin >> myString;
					cin.clear();
					cin.ignore(10000, '\n');

					cout << "BEFORE ";
					stackConverter (myString, myStack);
					cout << "AFTER ";

					// Leave case statement
					cin.clear();
					cin.ignore(10000, '\n');
					switchStop = true;
					break;

				// User said no.
				case 'N': case 'n':

					// Farewell Message
					printf ("\nThank you for using my program! See you soon...\n");
					return 0;

				// User failed to enter anything correct.
				default:

					// Invalid Input
					cin.clear();
					printf ("\nPlease enter ONLY Y or N. Try again...\n");
					switchStop = true;
					break;

			} // END PROGRAMCONTINUE

		} // END SWITCHSTOP

	} // END PROGRAMSTOP

	return 0; // DEFAULT EXIT PROGRAM

} // END MAIN

// STRING TO STACK FUNCTION
void stackConverter ( string myString, stack <char> myStack ) {

	// Declare variables
	int MAX = myString.length();
	char tmp;

	// Convert STR to CHAR STACK
	for ( int count = 0; count < MAX; count++) {

		cout << "Anything";

		// Assign STR at COUNT to a temporary CHAR
		tmp = myString.at(count);

		// Validate CHAR value
		switch (tmp) {

				// VALID LEFT
				case '(': case '{':
					myStack.push(tmp);
					break;

				// VALID RIGHT
				case '}': case ')':
					//myStack.pop();
					myStack.push(tmp);
					break;

				// INVALID
				default:
					count--;
					break;

		} // END SWITCH

	} // END FOR LOOP

} // END FUNCTION
