#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck: public Vehicle
{
private:
    /* data */
    int tonnage;
public:
    Truck(/* args */);
    ~Truck();

    void display() override{
        cout<< "[CAR] ID: "<< getID()<< ", year: "<< getYear()<< ", company: "<< getManufacturer()<< ", price: "<< getPrice();
        cout<< ", color: "<< getColor()<< ", tonnage: "<< tonnage<< endl;
    }
};

Truck::Truck(/* args */)
{
    cout<< "Enter the tonnage of truck: ";
    cin>> tonnage;
}

Truck::~Truck()
{
}


#endif