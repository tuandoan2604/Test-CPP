#include "Candidates.h"

Candidates::Candidates()
{
}

Candidates::Candidates(int idNumber, string fullName, string address, int priority)
{
    this->idNumber=idNumber;
    this->fullName = fullName;
    this-> address=address;
    this -> priority=priority;
}


void Candidates::setIdNumber(int idNumber)
{
    this-> idNumber=idNumber;
}

void Candidates::setFullName(string fullName)
{
    this->fullName=fullName;
}

void Candidates::setAddress(string address)
{
}

void Candidates::setPriority(int priority)
{
}

int Candidates::getIdNumber()
{
    return idNumber;
}

string Candidates::getFullName()
{
    return fullName;
}

string Candidates::getAddress()
{
    return address;
}

int Candidates::getPriority()
{
    return priority;
}

void Candidates::display()
{ 
    cout<<"So bao danh : "<< getIdNumber()<<endl;
    cout<<"Ten thi sinh :"<< getFullName()<<endl;
    cout<<"Muc do uu tien :"<<getPriority()<<endl;
}

int Candidates::block()
{
    return 0;
}

Candidates::~Candidates()
{
}
