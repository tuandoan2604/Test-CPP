#include "Header.h"

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#define MALE 1
#define FEMALE 2
#define OTHER 3

class Employee
{
protected:
    /* data */
    string name;
    int age;
    int sex;
    string address;
public:
    Employee(/* args */);
    virtual ~Employee();

    string getName();
    virtual void display() = 0;
};

Employee::Employee(/* args */)
{
    cout<< "Enter the name: \n";
    cin.ignore();
    getline(cin, name);

    cout<< "Enter the age: \n";
    cin>> age;

    int type_sex;
    do{
        cout<< "Enter the sex: \n 1. MALE   2. FEMALE   3. OTHER \n";
        cin>> type_sex;

        switch (type_sex)
        {
        case MALE:
            /* code */
            sex = 1;
            break;
        case FEMALE:
            sex = 2;
            break;
        case OTHER:
            sex = 3;
            break;
        
        default:
            cout<< "Wrong type of gender!!!";
            break;
        }
    }
    while(type_sex>3 || type_sex<1);

    cout<< "Enter the address: \n";
    cin.ignore();
    getline(cin, address);
}

Employee::~Employee()
{
    cout<< "Destructor of Employee \n";
}

string Employee::getName()
{
    return name;
}

#endif