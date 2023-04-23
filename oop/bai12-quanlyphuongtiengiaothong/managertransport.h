#ifndef MANAGERTRANSPORT_H
#define MANAGERTRANSPORT_H

#include "motorbike.h"
#include "car.h"
#include "truck.h"
#include <unordered_map>

using namespace std;

class Manager 
{
    unordered_map<string, Transport*> transList;
public: 
    void addTransport(Transport* tr)
    {
        transList.insert(make_pair(tr->getId(), tr));
    }

    bool deleteTransport(string id)
    {
        if( transList.empty())
        {
            return false;
        }
        auto it = transList.find(id);
        if (it != transList.end())
        {
            delete it->second;
            transList.erase(id);
            return true;
        }
        return false;
    }

    void search(string color, string manufac)
    {
        if( transList.empty())
        {
            cout << "list null!\n";
        }
        for (auto it : transList)
        {
            if(it.second->getMunufac() == manufac && it.second->getColor() == color)
            {
                it.second->displayInfo();
            }
        }
    }

    void displayTransport()
    {
        if( transList.empty())
        {
            cout << "list null!\n";
        }
        for (auto it : transList)
        {
            it.second->displayInfo();
        }
        cout << "end display\n\n";
    }

    ~Manager()
    {
        if (!transList.empty())
        {
            for (auto it : transList)
            {
                delete it.second;
            }
            transList.clear();
        }
    }


};

#endif