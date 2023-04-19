#ifndef ROOM_H
#define ROOM_H

#include "people.h"
#include <vector>

enum RANK {A, B, C};

using namespace std;

class Room
{
    int idRoom;
    RANK rank;
    vector<People> peopleList;
    int hours;
public:
    Room()
    {
        cout << "Enter room ID: ";
        cin >> idRoom;
        cin.ignore();
        int select = 3;
        while(select<0 || select >2)
        {
            cout << "Select room's rank\n0 - A\n1 - B\n2 - C\nYour select: ";
            cin >> select;
            cin.ignore();
            switch (select)
            {
            case 0:
                rank = A;
                break;
            case 1:
                rank = B;
                break;
            case 2:
                rank = C;
                break;
            default:
                cout << "incorrect, re-enter!";
                break;
            }
            
        }
        hours = 0;
    }

    bool isNull()
    {
        if (peopleList.size() == 0)
        {
            return true;
        }
        return false;
    }

    void addPeople(People cus, int hours)
    {
        peopleList.push_back(cus);
        this->hours = hours;
    }

    void deletePeople()
    {
        if (!peopleList.empty())
        {
            peopleList.clear();
            hours = 0;
        }
    }

    int calculateMoney()
    {
        switch (rank)
        {
            case A:
                return hours*500;
        
            case B:
                return hours*300;

            case C:
                return hours*100;
        }
    }

    bool checkCMND(string cmnd)
    {
        if(!peopleList.empty() && peopleList[0].getCMND() == cmnd)
        {
            return true;
        }
        return false;
    }

    int getIdRoom()
    {
        return idRoom;
    }

    void displayRoom()
    {
        cout << "Id room: " << idRoom << endl;
        cout << "Rank: " ;
        switch (rank)
        {
        case A:
            cout << "A" << endl;
            break;
        case B:
            cout << "B" << endl;
            break;
        case C:
            cout << "C" << endl;
            break;
        }
        
        if(isNull())
        {
            cout << "Room don't have customer\n";
        }
        else
        {
            peopleList[0].displayPeople();
        }
    }

    ~Room() {}
};

#endif