//
//What this class is going to do
//
/* Declare constructors
 * and public member functions outside the class
 * anything value that wants to be changed for example math formulas
 * will go into this file/
 *
 *
 */

#include "EvenNumber.h"

//remember the syntax here is very important
EvenNumber::EvenNumber()  : value(0) {}

EvenNumber::EvenNumber(int n) : value(n) {}

//Get the value
int EvenNumber::getValue() const
{
    return value;
}

//Get the next number
EvenNumber EvenNumber::getNext() const
{
    return EvenNumber(value + 2);
}

EvenNumber EvenNumber::getPrevious() const
{
    return EvenNumber(value - 2);
}