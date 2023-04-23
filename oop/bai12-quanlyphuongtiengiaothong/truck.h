#ifndef TRUCK_H
#define TRUCK_H

#include "transport.h"

using namespace std;

class Truck : public Transport
{
    double tonnage;
public: 
    Truck(string id, string manufacturer, int year, double price, string color, double tonnage) : Transport(id, manufacturer, year, price, color)
    {
        this->tonnage = tonnage;
    }

    void setTonnage(double tonnage) {this->tonnage = tonnage;}

    double getTonnage() {return tonnage;}

    void displayInfo()
    {
        cout<< "Information truck\n";
        Transport::displayInfo();
        cout << "Tonnage: " << tonnage << endl;
    }

    ~Truck(){}
};

#endif