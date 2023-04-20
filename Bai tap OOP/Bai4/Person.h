#ifndef PERSON_H
#define PERSON_H

#include "Header.h"

class Person
{
private:
    /* data */
    string name;
    int age;
    string job;
    int ID;
public:
    Person(/* args */);
    ~Person();

    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setJob(string job)
    {
        this->job = job;
    }

    void setID(int ID)
    {
        this->ID = ID;
    }

    int getID(){return ID;}

    void display_per();
};

Person::Person(/* args */)
{
    // cout<< "Constructor of Person \n";
}

Person::~Person()
{
    cout<< "Destructor of Person \n";
}

void Person::display_per()
{
    cout<< "    Name: "<< name<< ", ID: "<< ID<< ", Age: "<< age<< ", Job: "<<job << endl;
}


#endif