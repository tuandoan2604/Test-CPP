#ifndef MAGAZINE
#define MAGAZINE

#include "document.h"

using namespace std;

class Magazine : public Document
{
    int issueNum;
    int monthRelease;
public:
    Magazine(int id, string publisher, int numCopies , int issueNum, int monthRelease) : Document(id, publisher, numCopies)
    {
        this->issueNum = issueNum;
        this->monthRelease = monthRelease;
    }

    Magazine()
    {
        cout << "Enter issueNum: ";
        cin >> issueNum;
        cin.ignore();
        cout << "Enter month release: ";
        cin >> monthRelease;
        cin.ignore();
    }

    void displayInfo()
    {
        cout << endl << "Thong tin cua MAGAZINE" <<endl;
        Document::displayInfo();
        cout << "So phat hanh: " << issueNum << endl;
        cout << "Thang phat hanh: " << monthRelease << endl;
    }

    ~Magazine(){}
};

#endif