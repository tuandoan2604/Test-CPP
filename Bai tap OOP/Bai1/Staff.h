#include "Employee.h"

#ifndef STAFF_H
#define STAFF_H

class Staff: public Employee
{
private:
    /* data */
    string job;
public:
    Staff(/* args */);
    ~Staff();

    void display()override;
};

Staff::Staff(/* args */)
{
    cout<< "Enter the job classification of staff: ";
    getline(cin, job);
}

Staff::~Staff()
{
    cout<< "Destructor of Staff \n";
}

void Staff::display()
{
    cout<<"[Staff] Name: "<< name << ", Gender: "<< sex<< ", Age: "<< age<< ", Address: "<< address<< ", Job: "<< job<< endl;
}

#endif