#ifndef CAR_H
#define CAR_H

#include "transport.h"

using namespace std;

class Car : public Transport
{
private:
    int numSeat;
    string engineType;
public:
    Car() {}
    
    Car(string id, string manufacturer, int year, double price, string color, int numSeat, string engineType) : Transport(id, manufacturer, year, price, color)
    {
        this->engineType = engineType;
        this->numSeat = numSeat;
    }

    void setNumSeat(int numSeat) {this->numSeat = numSeat;}
    void setEngineType (string engineType) {this->engineType = engineType;}

    int getNumSeat() {return numSeat;}
    string getEngineType() {return engineType;}

    void displayInfo()
    {
        cout << "Information car\n";
        Transport::displayInfo();
        cout << "Number seat: " << numSeat << "\t";
        cout << "Engine Type: " << engineType << "\n";
    }

    ~Car() {}
};

#endif