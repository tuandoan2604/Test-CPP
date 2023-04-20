#ifndef HOTTEL_H
#define HOTTEL_H

#include "Person.h"
#include <vector>

class Hottel
{
private:
    /* data */
    vector<Person*> hottel;
public:
    Hottel(/* args */);
    ~Hottel();

    void addClient();
    void deleteID();
    void calculatePayment();
    void exit_prog();
};

Hottel::Hottel(/* args */)
{
}

Hottel::~Hottel()
{
}

void Hottel::addClient()
{
    cout<< "In adding new client function. \n";
    Person* new_client = new Person;

    hottel.push_back(new_client);
}

void Hottel::deleteID()
{
    cout<< "Enter ID of customer you want to delete: \n";
    int del_ID;
    cin>> del_ID;

    bool found = false;

    for (int i = 0; i < hottel.size(); i++)
    {
        if (hottel[i]->getID() == del_ID)
        {
            hottel.erase(hottel.begin()+i);
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<< "Can't find the provided ID!!!";
    }
}

void Hottel::calculatePayment()
{
    cout<< "Enter the ID of customer: \n";
    int t_ID;
    cin>> t_ID;
    for (int i = 0; i < hottel.size(); i++)
    {
        if(hottel[i]->getID()==t_ID)
        {
            cout<< "Room rent of customner "<< t_ID<< ": "<< hottel[i]->price()<< endl;
            break;
        }
    }
}

void Hottel::exit_prog()
{
    for (int i = 0; i < hottel.size(); i++)
    {
        Person* ptr = hottel[i];
        delete(ptr);
        ptr = nullptr;
    }
    exit(0);
}

#endif