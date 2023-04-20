#ifndef CLIENT_H
#define CLIENT_H

#include "Header.h"

class Client
{
private:
    /* data */
    string name;
    int address;
    int ID;
public:
    Client(/* args */);
    ~Client();
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