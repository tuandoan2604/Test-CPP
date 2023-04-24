#ifndef MOTOBIKE_H
#define MOTOBIKE_H

#include "Vehicle.h"

class Motobike: public Vehicle
{
private:
    /* data */
    int power;
public:
    Motobike(/* args */);
    ~Motobike();

    void display() override{
        cout<< "[CAR] ID: "<< getID()<< ", year: "<< getYear()<< ", company: "<< getManufacturer()<< ", price: "<< getPrice();
        cout<< ", color: "<< getColor()<< ", power: "<< power<< endl;
    }
};

Motobike::Motobike(/* args */)
{
    cout<< "Enter the power of motobike: ";
    cin>> power;
}

Motobike::~Motobike()
{
}


#endif