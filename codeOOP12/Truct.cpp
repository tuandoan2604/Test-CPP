#include "Truct.h"

Truct::Truct()
{
}

Truct::Truct(int ID, string manufacture, int yearOfProduce, string color, int cost, int numOfSlot, string engineType, int payLoad):  Vehicle (ID, manufacture,yearOfProduce, color,cost) 
{ 
    this->payLoad=payLoad;
}

void Truct::setPayLoad(int payLoad)
{
    this->payLoad=payLoad;
}

int Truct::getPayLoad()
{
    return payLoad;
}

void Truct::display()
{ 
    Vehicle :: display();
    cout<<"Pay load :"<<getPayLoad()<<endl;
}

Truct::~Truct()
{
}
