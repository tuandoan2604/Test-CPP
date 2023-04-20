#include "Megazine.h"

#define MEGAZINE 2

Megazine::Megazine()
{
}

Megazine::Megazine(string documentId, string publisher, int numRelease, int numOfRelease, int monthRelease): Document(documentId, publisher, numRelease)
{
    this->numOfRelease = numOfRelease;
        this->monthRelease = monthRelease;
}

void Megazine::setNumOFRelease(int numOfRelease)
{
    this->numOfRelease = numOfRelease;
}

void Megazine::setMonthRelease(int monthRelease)
{
     this->monthRelease = monthRelease;
}

int Megazine::getNumOfRelease()
{
    return numOfRelease;
}

int Megazine::getMonthRelease()
{
    return monthRelease;
}

void Megazine::display()
{
    Document ::display();
        cout << "So phat hanh: " << getNumOfRelease() << endl;
        cout << "Thang phat hanh: " << getMonthRelease() << endl;
}

int Megazine::type()
{
    return MEGAZINE;
}

Megazine::~Megazine()
{
}
