#include "Employee.h"
#include "Worker.h"
#include "Engineer.h"
#include "Staff.h"
#include "vector"

#ifndef MANAGE_H
#define MANAGE_H

class Employee_management
{
private:
    /* data */
    vector<Employee*> list_employee;
public:
    Employee_management(/* args */);
    ~Employee_management();

    void addEmployee();

    void findName();

    void display_list();

    void exit_program();
};

Employee_management::Employee_management(/* args */)
{
}

Employee_management::~Employee_management()
{
    
}

void Employee_management::addEmployee(){
    int type;
    cout<< "Enter the types of employment. \n 1. WORKER      2. ENGINEER        3. STAFF \n";
    cin>> type;
    
    Employee *a;
    switch (type)
    {
    case 1:
        a = new Worker;
        break;
    case 2:
        a = new Engineer;
        break;
    case 3:
        a = new Staff;
        break;
    default:
        cout<< "Wrong of types.";
        break;
    }

    list_employee.push_back(a);
}

void Employee_management:: findName()
{
    string name;
    cout<< "Enter the name of people to find: ";
    cin.ignore();
    getline(cin, name);

    for(int i=0; i<list_employee.size(); i++)
    {
        if(list_employee[i]->getName()==name)
        {
            cout<< "Found a employee with entered name: ";
            list_employee[i]->display();
            // return list_employee[i];
        }
    }
}

void Employee_management::display_list()
{
    for (int i = 0; i < list_employee.size(); i++)
    {
        list_employee[i]->display();
    }
    
}

void Employee_management::exit_program()
{
    for(int i=0;i<list_employee.size(); i++)
    {
        // cout<< "Giai phong heap \n";
        Employee* ptr = list_employee[i];
        delete(ptr);
        ptr = nullptr;
    }
    exit(0);
}
#endif