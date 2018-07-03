**Name        : COMPSCI_2250 - REPO**

**Author      : Anthony Huber-Winkler**

**Class Name  : Computer Science - Section: 2250**

**Description : This is a collection for all of my college work in my latest programming class.**


## **Important Links**
* https://ahih.github.io/CompSci_2250/
* https://umsl.instructure.com/courses/39605
* https://guides.github.com/features/mastering-markdown/
* http://www.cplusplus.com/
* https://stackoverflow.com

## **All Project Requirements**
### What to submit:
* All source files (.cpp, .h) needed for compilation

### How to submit:
* Use Canvas Assignment Submission menu to submit the assignment electronically at Canvas.
* Make sure to compress your entire project into a .zip, then submit the .zip as a single file.

### Policies:
* Make sure all your C++ programs properly compile and run on Eclipse C++.
* Projects will be graded 20% on style/standards and 80% on proper execution. Make sure to follow the coding standards posted on the course webpage.
* At the beginning of each file (.cpp, .h), provide comments specifying the author, date, and a brief description of the file.
* Each source file (.cpp, .h) must contain enough comments here and there to make it easy to follow your code.
* Insufficient comments could lead to loss of points.

## Class Projects:
### Project 1: 
* **Bubble Sort and Binary Search** 
* Due: 6/21 (11:59PM)
* Let us develop a C++ program with the following requirements:
1. [x] The program first creates an array of 20 random positive numbers between 1 and 100. Make sure there are no duplicates in the array.
1. [x] Then apply bubble sort to sort the array in ascending order, then display the entire array.
1. [x] Now, ask user to enter any number between 1 and 100.
1. [x] Use binary search to check if the user’s number is contained in the array. 
  1) If yes, display ‘yes’ with the index of the matching element. 
  1) If not, display ‘no’.
1. [x] Ask if the user wants to continue. 
  1) If yes, return to Step 3. 
  1) If no, terminate program.
  
### Project 2:
* **Reversing a Dynamic Array of Characters**
* Due: 6/28 (11:59PM)
* Let us develop a C++ program with the following requirements:
1. [x] The program first asks user to enter the number of elements for an array. Let’s call this number N.
1. [x] Then creates a dynamic array of size N + 1, containing N random lowercase alphabet letters between ‘a’ and ‘z’. Make sure the last element is a null character ‘n0’.
  1) Here, make sure to use dynamic memory allocation (using new command) to allocate memory space for the array, which is exactly why we call it a dynamic array.
1. [x] After creating the array, the program displays the entire array.
  1) Here, you must define and use a function showArray to display the array. This function must have the following prototype: **void showArray(char ptr);**
  1) Note that it does not pass the array size as a parameter (you don’t need it when you use pointer).
  1) You are NOT allowed to use array index or array bracket within this function to access elements. Instead, use pointer to do so.
1. [x] Then reverse the elements of this array. Note that the original array is changed as a result.
  1) Here, you must define and use a function reverseArray to reverse the array elements. This function must have the following prototype: **void reverseArray(char ptr);**
  1) Note that it does not pass the array size as a parameter (you don’t need it when you use pointer).
  1) You are NOT allowed to use array index or array bracket within this function to access elements.Instead, use pointer to do so.
1. [x] After reversing the array, call showArray function again to display the reversed array.
1. [x] Ask if the user wants to continue. 
  1) If yes, return to Step 1. 
  1) If no, terminate the program. 
  1) Before going back to Step 1 or terminating the program, make sure to release the memory space occupied by the dynamic array (using delete command).  
  
### Project 3:
* **Source Files and Constructors**
* Due: 7/6 (11:59PM)
* Let us develop a C++ program with the following requirements between three files:
1. [ ] Student.h
  1) In this file, you declare a class named Student.
  1) This class contains 4 private attributes, name, idNumber, department, and year.
  1) name is a struct that contains two strings: firstName and lastName.
  1) idNumber is an integer and department is a string.
  1) year is an enum that contains four possible values: FRESHMAN, SOPHOMORE, JUNIOR, SENIOR.
  1) Note that struct and enum declarations should be placed before the class declaration.
  1) Define public getter functions and setter functions for all 4 attributes, that is, 4 getters and 4 setters.  
1. [ ] Student.cpp
  1) In this file, you provide definitions for 3 constructors of Student.
  1) The first constructor takes 4 parameters, one for each attribute, then initializes the attributes accordingly.
  1) The second constructor takes 2 parameters, one for name and one for idNumber, then initializes those attributes accordingly. The remaining 2 attributes are initialized as “” (empty string) and FRESHMAN, respectively.
  1) The third constructor is a default constructor that takes no parameters. Here, the 4 attributes are initialized as “” (firstName), “” (lastName), 0 (idNumber), “” (department) and FRESHMAN (year), respectively.  
1. [ ] hw3.cpp
  1) In this file, you define main function.
  1) In the main function, first create at least 3 Student objects.
  1) The first object must be created using the first constructor (4 parameters).
  1) The second object must be created using the second constructor (2 parameters).
  1) Since the second constructor does not provide proper information for department and year, set those values by calling their associated setter functions.
  1) The third object must be created using the default constructor.
  1) Since the default constructor does not provide proper information for any attributes, set all 4 values by calling their associated 4 setter functions.
  1) After creating all the objects, call a function named displayStudent for each student to print all the information (all 4 attributes) about the student. Note that this function must be called at least 3 times to print all objects. You must define this displayStudent function (next to main) with the following prototype: void displayStudent(Student);
  1) When displaying year, make sure the freshman year starts at 1, not 0.
  
* Example run:
> Name: Roger Federer
> ID Number: 12345
> Department: Art
> Year: 4

> Name: Rafael Nadal
> ID Number: 56789
> Department: Computer Science
> Year: 3

> Name: Novak Djokovic
> ID Number: 13579
> Department: Physics
> Year: 1
