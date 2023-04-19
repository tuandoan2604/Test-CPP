#ifndef FAMILY_H
#define FAMILY_H

#include <vector>

#include "people.h"

using namespace std;

class Family
{
    int number;
    int apartNum;
    vector<People> member;
public:

    Family()
    {
        cout << "Enter apartment number: ";
        cin >> apartNum;
        cin.ignore();
        cout << "Enter number of family members: ";
        cin >> number;
        cin.ignore();
        for (int i = 0; i < number; i++)
        {
            cout << "Enter information of People " << i << endl;
            People ng;
            member.push_back(ng);
        }
    }

    void displayFamily()
    {
        cout << "Apartment number: " << apartNum << endl;
        for (int i = 0; i < member.size(); i++)
        {
            cout << "Member " << i << " : " << endl;
            member[i].displayInfo();
        }
    }
    
    ~Family(){}
};

#endif