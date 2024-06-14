//
// This is the creation a class file
//

/*
 *Create a class to define the constructors
 * and member functions headers.
 *
 *
 */

#ifndef PA2_PART2_EVENNUMBER_H
#define PA2_PART2_EVENNUMBER_H


class EvenNumber
{
private:
    EvenNumber();

    int value;
public:
    EvenNumber(int n);

    int getValue() const;

    EvenNumber getNext() const;

    EvenNumber getPrevious() const;
};


#endif //PA2_PART2_EVENNUMBER_H
