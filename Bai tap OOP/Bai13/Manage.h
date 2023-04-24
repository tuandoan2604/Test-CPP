#ifndef MANAGE_H
#define MANAGE_H

#include "Employee.h"
#include "Experience.h"
#include "Fresher.h"
#include "Intern.h"


Employee* findID(vector<Employee*> list_check, int in_ID)
{
    for (int i = 0; i < list_check.size(); i++)
    {
        if(list_check[i]->getID() ==  in_ID)
        {
            return list_check[i];
        }
    }
    Employee* p = nullptr;
    return p;
}

class Manage
{
private:
    /* data */
    vector<Employee*> company_employee;
public:
    Manage(/* args */);
    ~Manage();

    void addNew_employee();
    void revise_employee();
    void remove_employee();
    void find_type();
    void exit_prog();
};

Manage::Manage(/* args */)
{
}

Manage::~Manage()
{
}

void Manage::addNew_employee()
{
    cout<< "Enter the type of employee: ";
    cout<< "E. Experience   F. Fresher    I. Intern\n";
    char type;
    cin>> type;  

    switch (type)
    {
        case  'E':
        {
            Employee* a = new Experience;
            Experience* b = dynamic_cast<Experience*> (a);
            b->setup_information();

            if (findID(company_employee,a->getID()) != nullptr)
            {
                company_employee.push_back(a);
            }
            else{
                cout<< "Duplicate ID. Please re-enter new employee. \n";
            }
            
            break;
        }
        case  'F':
        {
            Employee* a = new Fresher;
            Fresher* b = dynamic_cast<Fresher*> (a);
            b->setup_information();

            if (findID(company_employee,a->getID()) != nullptr)
            {
                company_employee.push_back(a);
            }
            else{
                cout<< "Duplicate ID. Please re-enter new employee. \n";
            }
            
            break;
        }
        case  'I':
        {
            Employee* a = new Intern;
            Intern* b = dynamic_cast<Intern*> (a);
            b->setup_information();

            if (findID(company_employee,a->getID()) != nullptr)
            {
                company_employee.push_back(a);
            }
            else{
                cout<< "Duplicate ID. Please re-enter new employee. \n";
            }
            
            break;
        }
        default:
        {
            cout<< "Wrong choice of employee type. Please re-select the suitable type. \n";
            break;
        }
    } 
}

void Manage::remove_employee()
{
    cout<< "Enter the ID of employee you want to remove: ";
    int i_ID;
    cin>> i_ID;

    for (int i = 0; i < company_employee.size(); i++)
    {
        if(company_employee[i]->getID() ==  i_ID)
        {
            company_employee.erase(company_employee.begin()+i);
            return;
        }
    }

    cout<< "Can not find the provided ID. \n";
    return;
}

#endif