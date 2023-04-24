#include "Manage.h"

#define ADD_ 1
#define REVISE_ 2
#define REMOVE_ 3
#define FIND_ 4
#define EXIT_ 5

int Employee::employee_count = 0;


int main()
{
    cout<< "Working in employee database \n";
    while (true)
    {
        cout<< "Enter your choice: \n";
        cout<< "1. Add a new employee       2. Revise information of employee\n";
        cout<< "3. Remove an employee       4. Find employee by type\n";
        cout<< "5. Exit\n";

        int choice;
        cin>> choice;

        switch (choice)
        {
            case ADD_:
            {
                
            }

            case REVISE_:
            {
                int t_ID;
                cout<< "Enter ID of employee you want to revise: ";
                cin>> t_ID;

                Employee* f_em = findID(company_employee, t_ID);
                if(f_em == nullptr)
                {
                    cout<< "Can not find the provided ID. \n";
                }
                else if (f_em->getType() == 0)
                {
                    // company_employee.erase(f_em); ////////////////////////////////
                }
            }
            
            default:
            {
                cout<< "Invalid choice! Re-enter your choice. \n";
                break;
            }
        }
    }
    
}