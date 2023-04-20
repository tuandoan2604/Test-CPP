#include "Student8.h"
#pragma once

Student8::Student8()
{
}

Student8::Student8(string fullName, int age, int numClass)
{
    this->fullName=fullName;
    this->age=age;
    this->numClass=numClass;
    
}

void Student8::setFullName(string fullName)
{
    this->fullName = fullName;
}

void Student8::setAge(int age)
{
    this->age=age;
}

void Student8::setNumClassRoom( int numClass)
{
    this->numClass=numClass;
}

string Student8::getFullName()
{
    return fullName;
}

int Student8::getAge()
{
    return age;
}

int Student8::getNumClass()
{
    return numClass;
}

Student8::~Student8()
{
}
