#ifndef VEHICLE_H
#define VEHICLE_H

#include "Header.h"

class Vehicle
{
private:
    int ID;
    string manufacturer;
    int  manu_year;
    int price;
    string color;
public:
    Vehicle(/* args */);
    ~Vehicle();

    int getID(){return ID;}
    string getManufacturer(){return manufacturer;}
    int getYear(){return manu_year;}
    int getPrice(){return price;}
    string getColor(){return color;}

    virtual void display() = 0;
};

Vehicle::Vehicle(/* args */)
{
    cout<< "Enter the ID: ";
    cin>> ID;

    cout<< "Enter the Manufacturer: ";
    cin.ignore();
    getline(cin, manufacturer);
    standalize(manufacturer);

    cout<< "Enter the manufacture year: ";
    cin>> manu_year;

    cout<< "Enter the price: ";
    cin>> price;

    cout<< "Enter the color: ";
    cin.ignore();
    getline(cin, color);
    standalize(color);
}

Vehicle::~Vehicle()
{
}

#endif