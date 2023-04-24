#include "Car.h"
#pragma once

Car::Car()
{
}





Car::Car(int ID, string manufacture, int yearOfProduce, string color, int cost, int numOfSlot, string engineType) : Vehicle(ID, manufacture,yearOfProduce, color,cost)
{
    this->engineType=engineType;
    this->numOfSlot=numOfSlot;
}

void Car::setNumOfSlost(int numOfSlot)
{
    this->numOfSlot=numOfSlot;
}

void Car::setEngineType(string engineType)
{
    this->engineType=engineType;
}

int Car::getNumOfSlot()
{
    return numOfSlot;
}

string Car::getEngineType()
{
    return engineType;
}

void Car::display()
{
    Vehicle :: display();
    cout<<"Number of slost :"<<getNumOfSlot()<<endl;
    cout<<"Type of engine :"<<getEngineType()<<endl;

}

Car::~Car()
{
}
