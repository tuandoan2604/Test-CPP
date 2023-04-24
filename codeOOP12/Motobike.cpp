#include "Motobike.h"
#pragma once

Motobike::Motobike()
{
}

Motobike::Motobike(int ID, string manufacture, int yearOfProduce, string color, int cost, int numOfSlot, string engineType, int wattage) : Vehicle (ID, manufacture,yearOfProduce, color,cost) 

{
    this->wattage=wattage;
}

void Motobike::setWattage(int wattage)
{
    this->wattage=wattage;
}

int Motobike::getWattge()
{
    return wattage;
}

void Motobike::display()
{
    Vehicle :: display();
    cout<<"Wattage : "<<getWattge()<<endl;
}

Motobike::~Motobike()
{
}
