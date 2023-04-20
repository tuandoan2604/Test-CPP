#pragma one
#include "Engineer.h"
Engineer ::Engineer() {}
Engineer ::Engineer(string fullName, int age, string gender, string address, string specialized) : Cadres(fullName, age, gender, address)
{
    
    this->specialized = specialized;
}
void Engineer::setSpecialized(string specialized)
{
    this->specialized = specialized;
}
string Engineer::getSpecialized()
{
    return specialized;
}
void Engineer ::display()
{
    Cadres::display();
    cout << "Chuyen nghanh :" << specialized << endl;
}
Engineer ::~Engineer() {}