#include "Document.h"

#ifndef BOOK_H
#define BOOK_H

class Book: public Document
{
private:
    /* data */
    string author;
    int num_page;
public:
    Book(/* args */);
    ~Book();

    void display() override;

    int type(){return 1;}
};

Book::Book(/* args */)
{
    cout<< "Enter the name of book's author: \n";
    cin.ignore();
    getline(cin, author);

    cout<< "Enter the number of book's page: \n";
    cin>> num_page;
}

Book::~Book()
{
    cout<< "Destructor of Book \n";
}

void Book:: display()
{
    cout<< "[BOOK] ID: "<< getID()<< ", Publishing company: "<< getPSC()<< ", Quantity: "<< getQuan();
    cout<< ", Author: "<< author<< ", Page number: "<< num_page<< endl;
}

#endif