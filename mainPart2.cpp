/*
//# Author: Paige Su
//# BannerID: 001395655
//# Course: CS 181
//# Assignment: PA2
//# Date Assigned: Friday, January 26, 2024
//# Date/Time Due: Friday, February 9, 2024 -- 11:55 pm
//# Description: This program will exercise Object-Oriented concepts with C++.
//# Certification of Authenticity:
// I certify that this assignment is entirely my own work.
*/

/* Planing notes
 *
 * This main will be used to askUser of userInput in the forms of numbers
 * program will continue to run until a negative number has been reached
 *
 *
 */

#include <iostream>
#include "EvenNumber.h"
using namespace std;

int main()
{
    int userInput;

    do {
        cout << "\n" << "Enter a number:" << endl;
        cin >> userInput;

        if (userInput >= 0) {
            if (userInput % 2 == 0) {
                EvenNumber evenNum(userInput);

                cout << "The number you entered is: " << evenNum.getValue() << endl;
                cout << evenNum.getValue() << " is an even number." << endl;

                cout << "The next even number is: " << evenNum.getNext().getValue() << endl;
                cout << "The previous even number is: " << evenNum.getPrevious().getValue() << endl;
            } else {
                cout << "The number you entered is: " << userInput << endl;
                cout << userInput << " is an odd number." << endl;
            }
        }

    } while (userInput >= 0);

    return 0;
}
