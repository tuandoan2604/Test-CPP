#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "receipt.h"
#include <string>

using namespace std;

class Customer
{
private:
    string name;
    int houseNum;
    string electricNum;
    Receipt receipt;
public:

    Customer() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter House Number: ";
        cin >> houseNum;
        cin.ignore();
        cout << "Enter electric number: ";
        getline(cin, electricNum);
        int oldIndicator;
        cout <<"Enter oldIndicator: ";
        cin >> oldIndicator;
        int newIndicator;
        cout  << "enter newIndicator: ";
        cin >> newIndicator;
        cin.ignore();
        this->receipt = Receipt(oldIndicator, newIndicator);
    }

    Customer(Receipt receipt, string name, int houseNum, string electricNum)
    {
        this->receipt = receipt;
        this->name = name;
        this->houseNum = houseNum;
        this->electricNum = electricNum;
    }

    string getName() { return name;}
    int getHouseNum() {return houseNum;}
    string getElectricNum() { return electricNum;}

    void setName(string name) { this->name = name;}
    void setHouseNum(int houseNum) { this->houseNum = houseNum;}
    void setElectricNum(int electricNum) { this->electricNum = electricNum;}
    
    void displayCustomer()
    {
        cout << "Electric number: " << electricNum << "\t";
        cout << "Name customer: " << name << "\t";
        cout << "House number: " << houseNum << "\n";
        receipt.displayReceipt();
    }

    ~Customer(){}
};

#endif