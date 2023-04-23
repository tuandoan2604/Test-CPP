#ifndef PEOPLE_H
#define PEOPLE_h

#include <iostream>
#include <string>

using namespace std;

class People
{
    int cmnd;
    string name;
    int age;
    string job;

public:

    People()
    {
        cout << "Enter your CMND: ";
        cin >> cmnd;
        cin.ignore();
        cout << "Enter your name: " ;
        getline(cin, name);
        cout << "Enter your age: ";
        cin>>age;
        cin.ignore();
        cout << "Enter your Job: ";
        getline(cin, job);
    }

    People(int cmnd, string name, int age, string job)
    {
        this->cmnd = cmnd;
        this->name = name;
        this->age = age;
        this->job = job;
    }

    void displayInfo()
    {
        cout << "CMND: " << cmnd << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Job: " << job << endl;
    }

    ~People(){}
};

#endif