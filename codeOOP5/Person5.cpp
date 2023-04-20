#include "Person5.h"
#pragma once


Person5::Person5()
{
}

Person5::Person5(string fullName5, int age5, int idNumber5, int costRoom, int numOfRentDay)
{
    this->fullName5=fullName5;
    this->age5=age5;
    this->idNumber5=idNumber5;
    this->costRoom=costRoom;
    this->numOfRentDay=numOfRentDay;
}

void Person5::setFullName5(string fullName5)
{
    this->fullName5=fullName5;
}

void Person5::setAge5(int age5)
{
    this->age5=age5;
}

void Person5::setIdNumber5(int idNumber5)
{
    this->idNumber5=idNumber5;
}

void Person5::setCostRoom(int costRoom)
{
    this->costRoom=costRoom;
}

void Person5::setNumOfRentDay(int numOfRentDay)
{
    this->numOfRentDay=numOfRentDay;

}

string Person5::getFullName5()
{
    return fullName5;
}

int Person5::getAge5()
{
    return age5;
}

int Person5::getIdNumber5()
{
    return idNumber5;
}

int Person5::getCostRoom()
{
    return costRoom;
}

int Person5::getNumOfRentDay()
{
    return numOfRentDay;
}
