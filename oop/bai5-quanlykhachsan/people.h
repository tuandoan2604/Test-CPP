#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include <iostream>

using namespace std;

class People
{
    string name;
    int age;
    string cmnd;
public:
    People()
    {
        cout << "Enter cmnd: ";
        getline(cin, cmnd);
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    string getCMND()
    {
        return cmnd;
    }

    void displayPeople()
    {
        cout << "Information of customer\n";
        cout << "CMND: " << cmnd << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    ~People(){}
};

#endif