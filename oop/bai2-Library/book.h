#ifndef BOOK
#define BOOK

#include "document.h"

using namespace std;

class Book : public Document
{
    string author;
    int numPages;
public:
    Book() 
    {
        cout << "Author: ";
        getline(cin, author);
        cout << "Number pages: " ;
        cin >> numPages;
        cin.ignore();
    }

    void displayInfo()
    {
        cout << endl << "Information of BOOK" <<endl;
        Document::displayInfo();
        cout << "Author: " << author << endl;
        cout << "Number pages: " << numPages << endl;
    }

    ~Book(){}
};

#endif