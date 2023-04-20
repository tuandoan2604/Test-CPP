#ifndef PERSON_H
#define PERSON_H

#include "Header.h"

class Person
{
private:
    /* data */
    string name;
    int age;
    string address;
    int teacher_ID;
public:
    Person(/* args */);
    virtual ~Person();

    string getName(){return name;}

    int getID(){return teacher_ID;}
};

Person::Person(/* args */)
{
    cout<< "Initializing new data about teacher \n";
    cout<< "Enter the teacher's name: \n";
    cin.ignore();
    getline(cin, name);

    cout<< "Enter the teacher's age: \n";
    cin>> age;

    cout<< "Enter the teacher's address: \n";
    cin.ignore();
    getline(cin, address);

    cout<< "Enter the teacher's ID: \n";
    cin>> teacher_ID;
}

Person::~Person()
{
}


#endif