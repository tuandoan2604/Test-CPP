#pragma once
#include <iostream>
using namespace std;
class Vehicle
{
private:
    int ID;
    string manufacture;
    int yearOfProduce;
    string color;
    int cost;

public:
    Vehicle(/* args */);
    Vehicle(int ID, string manufacture, int yearOfProduce, string color, int cost);
    void setID(int ID);
    void setManufacture(string manufacture);
    void setYearOfProduce(int yearOfProduce);
    void setColor(string color);
    void setCost(int cost);
    int getID();
    string getManufacture();
    int getYearOfProduct();
    string getColor();
    int  getCost();
    virtual void display();
    virtual ~Vehicle();
};
