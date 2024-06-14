Name of Project: Programming Assignment #2 Part 2 (PA2 Part 2)

Complete Assignment in C++ using Classes

Define the EvenNumber class for representing an even number. The class contains:
  
    ▪ A data field value of the int type that represents the integer value stored in the
    object.
    ▪ A no-arg constructor that creates an EvenNumber object for the value 0.
    ▪ A constructor that constructs an EvenNumber object with the specified value.
    ▪ A function named getValue() to return an int value for this object.
    ▪ A function named getNext() to return an EvenNumber object that represents the 
    next even number after the current even number in this object.
    ▪ A function named getPrevious() to return an EvenNumber object that represents the 
    previous even number before the current even number in this object.

  
Write a C++ program that creates an EvenNumber object for a value N and invokes the 
getNext() and getPrevious() functions to obtain and display these numbers. Here, N is read 
from the user, and the user can input numbers to determine whether they are even or not. 
The program will continue to ask for input until a negative number is entered.


Note: You will have three files: mainPart2.CPP (Ask the user to enter numbers until a 
negative number, EvenNumber.h (create class to define the constructors and other member 
functions header), and EvenNumber.CPP (declare constructors and public member 
functions outside the class)

Smaple output: 

(User testing data is indicated by*)

    Enter a number:16
    The number you entered is: 16*
    The number 16 is an even number.
    The next even number is: 18
    The previous even number is: 14


    Enter a number:15
    The number you entered is: 15*
    The number 15 is a odd number.

    
    Enter a number:-2*
    Thanks for using the Test Even Class, you have a great time!!

*This was created using CLion IDE
