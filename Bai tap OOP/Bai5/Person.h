#ifndef PERSON_H
#define PERSON_H

#include "Header.h"

class Person
{
private:
    /* data */
    string name;
    int age;
    int ID;

    double num_day;
    char type_room;
public:
    Person(/* args */);
    ~Person();

    int getID(){return ID;}

    double price();
};

Person::Person(/* args */)
{
    cout<< "Enter the customer's ID: \n";
    cin>> ID;

    cout<< "Enter the customer's name: \n";
    cin.ignore();
    getline(cin, name);

    cout<< "Enter the customer's age: \n";
    cin>> age;

    cout<< "Enter the customer's rent day: \n";
    cin>> num_day;

    cout<< "Enter the customer's type room [A, B, or C]: \n";
    char t_type;
    do
    {
        cin>> t_type;
        if(t_type!='A'&&t_type!='B'&&t_type!='C')
        {
            cout<< "Wrong type of room. Re-enter! \n";
        }
    } while (t_type!='A'&&t_type!='B'&&t_type!='C');
    type_room = t_type;    
}

Person::~Person()
{
}

double Person::price()
{
    switch (type_room)
    {
    case 'A':
        return num_day*500;
        break;
    case 'B':
        return num_day*300;
        break;
    case 'C':
        return num_day*100;
        break;
    default:
        break;
    }
}

#endif