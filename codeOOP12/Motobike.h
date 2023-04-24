#include "Vehicle.h"
#pragma once
#include <iostream>
using namespace std;

class Motobike : public Vehicle
{
private:
    int wattage;
public:
    Motobike(/* args */);
    Motobike(int ID, string manufacture, int yearOfProduce, string color, int cost, int numOfSlot, string engineType, int wattage);
    void setWattage( int wattage);
    int getWattge();
    void display();
    ~Motobike();
};


