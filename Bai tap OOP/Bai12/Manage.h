#ifndef MANAGE_H
#define MANAGE_H

#include "Car.h"
#include "Motobike.h"
#include "Truck.h"
#include <vector>

class Manage
{
private:
    /* data */
    vector <Vehicle*> vehicles;
public:
    Manage(/* args */);
    ~Manage();

    void addNew();
    void deleteID(int d_ID);
    void findBy_compay_color(string manufacturer, string color);
    void exit_prog();

    bool checkID(int t_ID);
};

Manage::Manage(/* args */)
{
}

Manage::~Manage()
{
}

bool Manage::checkID(int t_ID)
{
    for (int i = 0; i < vehicles.size(); i++)
    {
        if(vehicles[i]->getID()==t_ID)
        {
            return false;
        }
    }
    return true;
}

void Manage::addNew()
{
    cout<< "Choose one the type for vehicles: \n";
    cout<< "C is Car \nM is Motobike \nT is Truck \n";
    char type;
    cin>> type;

    switch (type)
    {
        case 'C':
        {
            cout<< "Provide the information for the car \n";
            Vehicle* a = new Car;
            if(checkID(a->getID()))
            {
                vehicles.push_back(a);
            }
            else{
                cout<< "Duplicate ID. Please re-enter the information.";
            }
            break;
        }
        case 'M':
        {
            cout<< "Provide the information for the car \n";
            Vehicle* a = new Motobike;
            if(checkID(a->getID()))
            {
                vehicles.push_back(a);
            }
            else{
                cout<< "Duplicate ID. Please re-enter the information.";
            }
            break;
        }
        case 'T':
        {
            cout<< "Provide the information for the car \n";
            Vehicle* a = new Truck;
            if(checkID(a->getID()))
            {
                vehicles.push_back(a);
            }
            else{
                cout<< "Duplicate ID. Please re-enter the information.";
            }
            break;
        }
        default:
        {
            cout<< "Wrong choice! \n";
            break;
        }
    }
}

void Manage::deleteID(int d_ID){
    bool found = false;
    for (int i = 0; i < vehicles.size(); i++)
    {
        if (vehicles[i]->getID() == d_ID)
        {
            vehicles.erase(vehicles.begin()+i);
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<< "Can not find the provided ID \n";
    }
}

void Manage::findBy_compay_color(string manufacturer, string color)
{
    for (int i = 0; i < vehicles.size(); i++)
    {
        if(vehicles[i]->getManufacturer()==manufacturer && vehicles[i]->getColor()==color)
        {
            cout<< "Found the appropriate information: ";
            vehicles[i]->display();
            return;
        }
    }
    cout<< "Can not find the appropriate information \n";

}

void Manage::exit_prog()
{
    for (int i = 0; i < vehicles.size(); i++)
    {
        Vehicle *ptr = vehicles[i];
        delete(ptr);
        ptr = nullptr;
    }
    exit(0);
}

#endif