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
#include <cstdio>
#include <cstdlib>
using namespace std;

// MAIN Program
int main() {

	// Declare object
	//StringList StringObj;

	// Formatting
	cout << "=================";
	cout << "===== START =====";
	cout << "=================";

	// FIRST TEST
	//StringObj.insertFrontNode("First");
	//StringObj.insertBackNode("Second");
	//StringObj.insertFrontNode("Third");
	//StringObj.insertBackNode("Fourth");
	//StringObj.insertFrontNode("Fifth");
	//StringObj.insertBackNode("Sixth");

	// Formatting
	cout << "=================";
	cout << "==== DISPLAY ====";
	cout << "=================";

	// SECOND TEST
	//StringObj.displayList();
	cout << endl;

	// THIRD TEST
	//MyString s2 = s1;


	return 0;
}
