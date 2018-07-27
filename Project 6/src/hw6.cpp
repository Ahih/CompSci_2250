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
#include <vector>
#include <stack>
using namespace std;

// MAIN Program
int main() {

	// Declare variables
	int MAX;
	char tmp;
	//bool programStop = false;

	// Formatting
	cout << "=================";
	cout << "===== START =====";
	cout << "=================\n";

	// Define the STL stack
	stack< char, vector<char> > myStack;

	// User Input
	cout << "Please enter how big is this stack: ";
	cin >> MAX;
	cout << "Enter parentheses and/or braces: ";
	//while (!programStop) {
		for ( int count = 0; count < MAX; count++) {

			// Validate User Input
			cin >> tmp;
			switch (tmp) {

				// VALID
				case '(': case '{':
					myStack.push(tmp);
					break;

				case '}': case ')':
					//myStack.pop();
					myStack.push(tmp);



					break;

				// INVALID
				default:
					cin.clear();
					count--;
					break;
			}
		}

	//}

	// Formatting
	cout << "=================";
	cout << "==== DISPLAY ====";
	cout << "=================\n";

	// Program Output
	for ( int count = 0; count < MAX; count++) {
		cout << myStack.top();
		myStack.pop();

		if (count == MAX) {
			cout << "\nEND of DISPLAY\n";
		}
	}

	return 0;
}

/*
 * 	//while (!programStop) {
		for ( int count = 0; count < MAX; count++) {
			cin >> tmp;
			myStack.push(tmp);

			//if (count == MAX) {
				//cout << "END of INPUT\n";
				//programStop = true;

			//}
		}

	//}
 *
 */
