#include "Vehicle.h"
#pragma once
#include <iostream>
using namespace std;
class Car : public Vehicle
{
private:
    int numOfSlot;
    string engineType;

public:
    Car(/* args */);
    Car(int ID, string manufacture, int yearOfProduce, string color, int cost, int numOfSlot, string engineType);
    void setNumOfSlost(int numOfSlot);
    void setEngineType(string engineType);
    int getNumOfSlot();
    string getEngineType();
    void display();
    ~Car();
};


