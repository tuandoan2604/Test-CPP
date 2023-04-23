#ifndef MANAGER_H
#define MANAGER_H

#define ADDEXP 1
#define ADDFRESHER 2
#define ADDINTERN 3

#include <unordered_map>
#include "experience.h"
#include "fresher.h"
#include "intern.h"

class ManagerEmployee
{
    unordered_map<string, Employee*> employeeList;
public:
    void addEmployee(Employee* employee)
    {
        if(employee!= nullptr)
        {
            employeeList.insert(make_pair(employee->getId(), employee));
        }
    }

    Employee* searchEmployee(string id)
    {
        auto it = employeeList.find(id);
        if(it != employeeList.end())
        {
            return it->second;
        }
        return nullptr;
    }

    bool deleteEmployee(string id)
    {
        auto it = employeeList.find(id);
        if(it != employeeList.end())
        {
            delete it->second;
            employeeList.erase(id);
            return true;
        }
        return false;
    }

    void showAllExp()
    {
        for(auto it : employeeList)
        {
            if(dynamic_cast<Experience*>(it.second))
            {
                it.second->showInfo();
            }
        }
    }

    void showAllFresher()
    {
        for(auto it : employeeList)
        {
            if(dynamic_cast<Fresher*>(it.second))
            {
                it.second->showInfo();
            }
        }
    }

    void showAllIntern()
    {
        for(auto it : employeeList)
        {
            if(dynamic_cast<Intern*>(it.second))
            {
                it.second->showInfo();
            }
        }
    }

     ~ManagerEmployee()
    {
        for(auto it : employeeList)
        {
            delete it.second;
        }
        employeeList.clear();
    }
};

void addEmployee(ManagerEmployee& mn)
{
    int select = 0;
    while (true)
    {
        cout << "1 - Add experience\n2 - Add fresher\n3 - Add intern\n";
        cout << "Your select: ";
        cin >> select;
        cin.ignore();
        try {
            if (cin.fail()) { throw "invalid input";} 
            switch (select)
            {
            case ADDEXP:
                mn.addEmployee(creatExp());
                break;
            
            case ADDFRESHER:
                mn.addEmployee(creatFresher());
                break;

            case ADDINTERN:
                mn.addEmployee(creatIntern());
                break;
            default:
                break;
            }   
            
            if (select == 1 || select == 2 || select ==3)
            {break;}
        }
        catch (const char* msg)
        {
            cerr << "exception" << msg << endl;
            if(cin.fail())
            {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');}
        }
    }
}
#endif