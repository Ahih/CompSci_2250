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

### Project 4:
* **More "Class" Work**
* Due: 7/12 (11:59PM)
* Let us develop a C++ program with the following requirements between three files:

1. [ ] MyString.h
  1) In this file, you declare a class named MyString.
  1) This class contains 3 private attributes, str, size, and strCount.
  1) str is a char* that points to a dynamic array of characters.
  1) size is an integer that contains the current size of the string.
  1) strCount is a static member variable that keeps track of the number of MyString objects that currently exist in memory. Its value is initially 0 before any MyString object is created.
  1) Define public getters and setters for the 2 instance variables, as well as a getter for the static variable.
  
1. [ ] MyString.cpp  
  1) In this file, you provide definitions for 3 constructors and a destructor for MyString.
  1) The first constructor takes a string parameter, then creates a dynamic char array in the heap and copies the input string content into the array. Note that the size of the dynamic array should match the length of the input string. Also, strCount should be incremented by 1 since a new string has been created.
  1) The second constructor is a default constructor that takes no parameters. Here, the 2 instance attributes are initialized as “” (empty string) and 0, respectively. Again, strCount should be incremented by 1.
  1) The third constructor is a copy constructor that allows the following statement:

> MyString y = x; // at declaration

  1) so that the MyString y is initialized as the same string as x. However, make sure their respective arrays are separately created in the heap (even though their contents are the same). Again, strCount should be incremented by 1.
  1) Also define a destructor function for the class that releases the dynamic array. The destructor must also decrement strCount by 1.
  1) Add a display function that displays the current contents of the string on the screen.
  1) Overload operator = to allow assignment (away from declaration statement) as follows:

> x = y; // where x and y are both MyString objects
  
  1) Note that this assignment must perform deep copy, which means the entire source dynamic array must be copied to the target dynamic array, not just the pointer.
  1) Overload operator += to allow a statement like:

> x += y; // where x and y are both MyString objects

  1) This operator must append MyString y at the end of x, so that x becomes a merged string. Note that the previous dynamic array of x must be destroyed and a new dynamic array must be created with an updated size.

1. [ ] hw4.cpp    
  1) In this file, you define main function that tests MyString class. You must create at least 3 MyString objects.
  1) Show that the first constructor properly works via a statement like: MyString s1(‘‘abc’’);
  1) Show that the default constructor properly works via a statement like: MyString s1;
  1) Show that the copy constructor properly works via a statement like: MyString s2 = s1;
  1) Show that the overloaded operator = properly works via a statement like: s2 = s1;
  1) Show that the overloaded operator += properly works via a statement like: s1 += s1;
  1) Show that the strCount is properly updated via a statement like: cout << s1.getStrCount();
  1) Show that the display function properly works via a statement like: s1.display();
  1) Note that the display function must be called every time a MyString object is created or updated. Otherwise the respective functionality will not be properly demonstrated and could lead to loss of points.  
  
### Project 5:
* **Linked Lists**
* Due: 7/19 (11:59PM)
* Let us develop a C++ program with the following requirements between three files:

1. [ ] StringList.h
  1) In this file, you declare a class named StringList.
  1) StringList is a modified version of NumberList class (Chapter 17), that is designed to store C++ strings in a linked list.
  1) Therefore, each node must store a string, not a number.
  1) The node structure must be declared within class, and a private attribute head points to the starting node.
  1) The class provides a default constructor that creates an empty linked list, and a destructor that releases all the nodes.
  1) The class also provides public member functions for inserting and deleting a node (see below for details).
  1) It also provides a public member function for displaying the list.

1. [ ] StringList.cpp
  1) In this file, you provide definitions for the default constructor and the destructor for StringList.
  1) Make sure the destructor visits every node in the list and deletes every one of them from the heap.
  1) Define insertFront function to insert a new node into the front of the list. Therefore, the new node will be the new first node in the list. This function takes a string as a parameter.
  1) Define insertBack function to insert a new node into the back of the list. Therefore, the new node will be the new last node in the list. This function takes a string as a parameter.
  1) Define deleteFront function to delete the first node from the list. This function takes no parameter.
  1) Define deleteBack function to delete the last node from the list. This function takes no parameter.
  1) Define display function that displays the current contents (strings) of the list (display strings in a single line, separated by a space). This function takes no parameter.

1. [ ] hw5.cpp
  1) In this file, you define main function that tests StringList class.
  1) You must first create a StringList object.
  1) Then start inserting new nodes, one at a time. Alternate between inserting into the front and into the back. Make sure to add at least 6 nodes.
  1) Then start deleting nodes, one at a time. Alternate between deleting from the front and from the back.
  1) Make sure all the nodes are deleted before terminating the program.
  1) After each insertion or deletion, call display member function to display the updated list.
  1) Make sure all the member functions are tested and shown to work properly, without missing any of them.
  1) Note that the display function must be called pretty much every time a node is inserted or deleted.
  1) Otherwise the respective functionality will not be properly demonstrated and could lead to loss of points.
  1) Also note that each member function should properly work regardless of the current list configuration (empty list, one-node list, or multiple-node list).

### Project 6:
* **STL Stack**
* Due: 7/26 (11:59PM)
* Let us develop a C++ program with the following requirements:

1. [ ] hw6.cpp
  1) The program first creates an STL stack that stores char data.
  1) Then ask user to enter a series of parentheses and/or braces, then report whether or not they’re properly nested:
  
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

  1) After each round, ask user if he/she wants to continue. If yes, go back to the previous step and take another string of parentheses/braces. If no, terminate program.
  1) Hint: As the program reads characters, have it push each left parenthesis or left brace into the STL stack. When it reads a right parenthesis or brace, have it pop the stack and check if the popped item is a matching parenthesis or brace (If not, the parentheses/braces aren’t nested properly). When there is no more character to read, check if the stack is empty; if so, the parentheses/braces are matched.
  1) If the user enters any character other than parenthesis or brace, simply ignore it. Therefore, entering a wrong character shouldn’t lead to program malfunction.
  1) Note: If you implement it without using STL stack, there will be a huge loss of points (even if the program works).
  