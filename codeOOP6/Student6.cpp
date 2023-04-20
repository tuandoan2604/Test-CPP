#include "Student6.h"

Student6::Student6()
{
}

Student6::Student6(string fullName, int age, string homeTown)
{
    this->fullName=fullName;
    this->age=age;
    this->homeTown=homeTown;
}

void Student6::setFullName(string fullName)
{
    this->fullName=fullName;
}

void Student6::setAge(int age)
{
    this->age=age;
}

void Student6::setHomeTown(string homeTown)
{
    this->homeTown=homeTown;
}

string Student6::getFullName()
{
    return fullName;
}

int Student6::getAge()
{
    return age;
}

string Student6::getHomeTown()
{
    return homeTown;
}

void Student6::display()
{
    cout<<"Ho va Ten :"<<getFullName()<<endl;
    cout<<"Tuoi :"<<getAge()<<endl;
    cout<<"Que quan :"<< getHomeTown()<<endl;
    cout<<"============="<<endl;
}
