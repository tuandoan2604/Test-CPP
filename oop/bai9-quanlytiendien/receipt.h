#ifndef RECEIPT_H
#define RECEIPT_H

#include <iostream>

using namespace std;

class Receipt
{
private:
    double oldIndicator;
    double newIndicator;
    double moneyPay;
public:
    Receipt() {}

    Receipt(double oldIndicator, double newIndicator, double moneyPay)
    {
        this->oldIndicator = oldIndicator;
        this->newIndicator = newIndicator;
        this->moneyPay = moneyPay;
    }

    Receipt(double oldIndicator, double newIndicator)
    {
        this->oldIndicator = oldIndicator;
        this->newIndicator = newIndicator;
        moneyPay =( newIndicator - oldIndicator) * 5;
    }

    void setOldIndicator (double oldIndicator) {this->oldIndicator = oldIndicator;}
    void setNewIndicator (double newIndicator) {this->newIndicator = newIndicator;}
    void setMoneyPay (double moneyPay) {this->moneyPay = moneyPay;}

    double getOldIndicator () {return oldIndicator;}
    double getNewIndicator () {return newIndicator;}
    double getMoneyPay () {return moneyPay;}

    void displayReceipt()
    {
        cout << "Old indicator: " << oldIndicator << "\t";
        cout << "New indicator: " << newIndicator << "\t";
        cout << "Money pay: "<< moneyPay << "\n";
    }

    ~Receipt(){}

};

#endif