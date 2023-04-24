#ifndef CLIENT_H
#define CLIENT_H

#include "Header.h"

class Client
{
protected:
    /* data */
    string name;
    int address;
    int ID;
public:
    Client(/* args */);
    ~Client();

    int getID(){return ID;}

    void setName(string name){this->name = name;}
    void setAddress(int address){this->address = address;}
    void setID(int ID){this->ID = ID;}
};

Client::Client(/* args */)
{
    cout<< "Enter the name of household's head: ";
    cin.ignore();
    getline(cin, name);

    cout<< "Enter the appartment's number: ";
    cin>> address;

    cout<< "Enter the electric meter code: ";
    cin>> ID;
}

Client::~Client()
{
}

#endif