#ifndef MOT0RBIKE_H
#define MOTORBIKE_H

#include "transport.h"

using namespace std;

class Motorbike :public Transport
{
    double wattage;
public: 
    Motorbike(string id, string manufacturer, int year, double price, string color, double wattage) : Transport(id, manufacturer, year, price, color)
    {
        this->wattage = wattage;
    }

    void setWattage(double wattage) {this->wattage = wattage;}
    double getWattage() {return wattage;}

    void displayInfo() 
    {
        cout<< "Information motorbike\n";
        Transport::displayInfo();
        cout << "Wattage: " << wattage << endl;
    }
    ~Motorbike() {}
};

#endif