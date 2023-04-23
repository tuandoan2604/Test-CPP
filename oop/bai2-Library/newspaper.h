#ifndef NEWSPAPER
#define NEWSPAPER

#include "document.h"

using namespace std;

class Newspaper : public Document
{
    string timeRelease;
public: 
    Newspaper(int id, string publisher, int numPages, int timeRelease) : Document(id, publisher, numPages)
    {
        this->timeRelease = timeRelease;
    }

    Newspaper()
    {
        cout << "Enter time release: ";
        getline(cin, timeRelease);
    } 

    void displayInfo()
    {
        cout << endl << "Thong tin cua MAGAZINE" <<endl;
        Document::displayInfo();
        cout << "ngay phat hanh: " << timeRelease << endl;
    }

    ~Newspaper(){}
};

#endif