#include "Employee.h"

#ifndef ENGINEER_H
#define ENGINEER_H

class Engineer: public Employee
{
private:
    /* data */
    string major;
public:
    Engineer(/* args */);
    ~Engineer();

    void display()override;
};

Engineer::Engineer(/* args */)
{
    cout<< "Enter the major of engineer: ";
    getline(cin, major);
}

Engineer::~Engineer()
{
    cout<< "Destructor of Engineer \n";
}

void Engineer::display()
{
    cout<<"[Engineer] Name: "<< name << ", Gender: "<< sex<< ", Age: "<< age<< ", Address: "<< address<< ", Major: "<< major<< endl;
}

#endif