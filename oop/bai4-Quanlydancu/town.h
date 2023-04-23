#ifndef TOWN_H
#define TOWN_H

#include "family.h"

using namespace std;

class Town
{
    vector<Family> arrayFamily;
public:
    void displayTown ()
    {
        for (int i = 0; i < arrayFamily.size(); i++)
        {
            cout << "Thong tin cua ho gia dinh " << i << endl;
            arrayFamily[i].displayFamily();
        }
    }

    void addFamily()
    {
        int n;
        cout << "Enter number Family want to add: ";
        cin>>n;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            Family fa;
            arrayFamily.push_back(fa);
        }
    }

    ~Town(){arrayFamily.clear();}
};

#endif