#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car: public Vehicle
{
private:
    /* data */
    int num_seat;
    string type_engine;
public:
    Car(/* args */);
    ~Car();

    void display() override{
        cout<< "[CAR] ID: "<< getID()<< ", year: "<< getYear()<< ", company: "<< getManufacturer()<< ", price: "<< getPrice();
        cout<< ", color: "<< getColor()<< ", seat number: "<< num_seat<< ", type of engine: "<< type_engine<< endl;
    }
};

Car::Car(/* args */)
{
    cout<< "Enter the number of seat: ";
    cin>> num_seat;

    cout<< "Enter the type of engine: ";
    cin.ignore();
    getline(cin, type_engine);
}

Car::~Car()
{
}


#endif