#ifndef MANAGER_H
#define MANAGER_H

#include "room.h"

using namespace std;

class Manager
{
    vector<Room> arrayRoom;
public:
    void addRoom()
    {
        Room r;
        arrayRoom.push_back(r);
    }

    void addCustomer(int idRoom)
    {
        for (int i = 0; i < arrayRoom.size(); i++)
        {
            if (arrayRoom[i].getIdRoom() == idRoom && arrayRoom[i].isNull())
            {
                People cus;
                int hours;
                cout << "Enter hours: ";
                cin >> hours;
                cin.ignore();
                arrayRoom[i].addPeople(cus, hours);
                return;
            }
        }
        cout << "Room " << idRoom << " not null or invalid" << endl;
    }

    void deleteCustomer(string cmnd)
    {
        if(!arrayRoom.empty())
        {
            for (int i = 0; i < arrayRoom.size(); i++)
            {
                if(arrayRoom[i].checkCMND(cmnd))
                {
                    arrayRoom[i].deletePeople();
                }
            }
        }
    }
    
    int caculateMoneyRoom()
    {
        string cmnd;
        cout << "Enter cmnd want to calculate: ";
        getline(cin, cmnd);
        for(Room it : arrayRoom)
        {
            if(it.checkCMND(cmnd))
            {
                return it.calculateMoney();
            }
        }
        return 0;
    }

    void roomNull()
    {
        if(!arrayRoom.empty())
        {
            cout << "list of available rooms: ";
            for(Room it : arrayRoom)
            {
                if(it.isNull())
                {
                    cout << it.getIdRoom() << "  "; 
                }
            }
            cout << endl;
        } 
        else
        {
            cout << "No room" << endl;
        }
    }

    void displayHotel()
    {
        if(arrayRoom.empty())
        {
            cout << "no room";
        }
        else
        {
            for (Room r : arrayRoom)
            {
                r.displayRoom();
            }
        }
    }

    ~Manager() 
    {
        arrayRoom.clear();
    }
};
#endif