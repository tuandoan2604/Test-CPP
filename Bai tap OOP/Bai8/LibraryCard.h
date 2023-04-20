#ifndef LIBRARY_CARD_H
#define LIBRARY_CARD_H

#include "Student.h"

class LibraryCard: public Student
{
private:
    /* data */
    int IDcard;
    int borrowed_date;
    int return_date;
public:
    LibraryCard(/* args */);
    ~LibraryCard();

    int getID(){return IDcard;}
    int getBorrowDate(){return borrowed_date;}
    int getReturnDate(){return return_date;}

    void displayLib();
};

LibraryCard::LibraryCard(/* args */)
{
    cout<< "Enter the ID of the card: ";
    cin>> IDcard;

    cout<< "Enter the borrowed date: ";
    cin>> borrowed_date;

    cout<< "Enter the return date: ";
    cin>> return_date;
}

LibraryCard::~LibraryCard()
{
}

void LibraryCard::displayLib()
{
    cout<< "[CARD] ID: "<< IDcard<< ", student name: "<< name<<", age: "<< age<< ", class: "<< stuClass;
    cout<< ", borrow date: "<< borrowed_date<< ", return date: "<< return_date<< endl;
}


#endif