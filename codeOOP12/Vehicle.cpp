#include "Vehicle.h"

Vehicle::Vehicle()
{
}

Vehicle::Vehicle(int ID, string manufacture, int yearOfProduce, string color, int cost)
{
    this->ID=ID;
    this->manufacture=manufacture;
    this->yearOfProduce=yearOfProduce;
    this->color=color;
    this->cost=cost;
}

void Vehicle::setID(int ID)
{ this->ID=ID;
}

void Vehicle::setManufacture(string manufacture)
{
    this->manufacture=manufacture;
}

void Vehicle::setYearOfProduce(int yearOfProduce)
{
    this->yearOfProduce=yearOfProduce;
}

void Vehicle::setColor(string color)
{
    this->color=color;
}

void Vehicle::setCost(int cost)
{
    this->cost=cost;
}

int Vehicle::getID()
{
    return ID;
}

string Vehicle::getManufacture()
{
    return manufacture;
}

int Vehicle::getYearOfProduct()
{
    return yearOfProduce;
}

string Vehicle::getColor()
{
    return color;
}

int Vehicle::getCost()
{
    return cost;
}

void Vehicle::display()
{
    cout<<"ID :"<<getID()<<endl;
    cout<<"Manfacture :"<<getManufacture()<<endl;
    cout<<"YearOfProduct :"<<getYearOfProduct()<<endl;
    cout<<"Color :"<<getColor()<<endl;
    cout<<"Cost :"<<getCost()<<endl;
}

Vehicle::~Vehicle()
{
}
