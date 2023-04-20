#include "Teacher.h"
#include <vector>

#define ADD 1
#define DELETE 2
#define CALCULATE_SALARY 3
#define EXIT 4

int main()
{
    vector<Teacher* > teachers;

    cout<< "Working with teacher database \n";

    while (true)
    {
        int choice;
        cout<< "Choose the function you want to do \n";
        cout<< "1. Add new teacher          2. Delete by teacher's ID \n";
        cout<< "3. Calculate salary by ID   4. Exit program \n";

        cin>> choice;

        if (choice==ADD)
        {
            Teacher* a = new Teacher;

            bool checkID = false;

            for(int i=0; i<teachers.size(); i++)
            {
                if(a->getID() == teachers[i]->getID())
                {
                    cout<< "Duplicate ID. Re-enter \n";
                    checkID = true;
                    break;
                }
            }
            if(!checkID){
                teachers.push_back(a);
            }
        } 
        else if (choice==DELETE)
        {
            cout<< "Enter the ID of teacher you want to delete: \n";
            int t_id;
            cin>> t_id;

            bool found = false;

            for (int i = 0; i < teachers.size(); i++)
            {
                if(teachers[i]->getID() == t_id)
                {
                    teachers.erase(teachers.begin()+i);
                    found = true;
                }
            }

            if(!found)
            {
                cout<< "Can not find the provided ID \n";
            }
            
        }
        else if (choice==CALCULATE_SALARY)
        {
            cout<< "Enter the ID of teacher you want to calculate salary: \n";
            int t_id;
            cin>> t_id;

            bool found = false;

            for (int i = 0; i < teachers.size(); i++)
            {
                if(teachers[i]->getID() == t_id)
                {
                    cout<< "Teacher "<< t_id<<" name "<< teachers[i]->getName()<< ", salary: "<< teachers[i]->getSalary()<< endl;
                    found = true;
                }
            }

            if(!found)
            {
                cout<< "Can not find the provided ID \n";
            }
        }
        else if (choice==EXIT)
        {
            for (int i = 0; i < teachers.size(); i++)
            {
                Teacher* ptr = teachers[i];
                delete(ptr);
                ptr = nullptr;
            }
            exit(0);            
        }
        else{
            cout<< "Wrong choice\n";
            continue;
        }   
    }
    return 0;
}