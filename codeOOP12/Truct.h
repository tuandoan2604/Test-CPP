#include "Vehicle.h"
#pragma once
#include <iostream>
class Truct : public Vehicle
{
private:
    int payLoad;
    
public:
    
    Truct(/* args */);
    Truct(int ID, string manufacture, int yearOfProduce, string color, int cost, int numOfSlot, string engineType, int payLoad);
    void setPayLoad(int payLoad);
    int getPayLoad();
    void display();
    ~Truct();
};

