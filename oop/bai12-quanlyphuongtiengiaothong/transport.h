#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
#include <string>

using namespace std;

class Transport
{
    string id;
    string manufac;
    int year;
    double price;
    string color;
public:
    Transport() {}
    
    Transport(string id, string manufac, int year, double price, string color)
    {
        this->id = id;
        this->manufac = manufac;
        this->year = year;
        this->price = price;
        this->color = color;
    }

    void setId(string id) {this->id = id;}
    void setManufac(string manufac) { this->manufac = manufac;}
    void setYear(int year) { this->year = year;}
    void setPrice(double price) {this->price = price;}
    void setColor(string color) { this->color = color;}

    string getId() {return id;}
    string getMunufac() { return manufac;}
    int getYear() { return year;}
    double getPrice() { return price;}
    string getColor() {return color;}

    virtual void displayInfo()
    {
        cout <<"ID: " << id << "\t";
        cout << "Manufacturer: " << manufac << "\t";
        cout << "Year: " << year << "\t";
        cout << "Price: " << price << "\t";
        cout << "Color: " << color << "\n";
    }
    virtual ~Transport() {}
};
#endif