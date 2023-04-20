#include "Employee_management.h"

int main()
{
    Employee_management data;
    while(1)
    {
        cout<< "Working on employee data. \n Enter the function you want to use: ";
        cout<< "1. Add new employee     2. Find by name     3. Display all the employee     4. Exit \n";
        int button;
        do{
            cin>> button;
            if(button<1 || button>4)
            {
                cout<< "Wrong choice! Re-enter: ";
            }
        }
        while (button<1 || button>4);
        
        switch (button)
        {
        case 1:
            cout<< "In adding \n";
            data.addEmployee();
            break;
        case 2:
            cout<< "In find \n";
            data.findName();
            break;
        case 3:
            cout<< "In display mode \n";
            data.display_list();
            break;
        case 4:
            cout<< "In exit mode \n";
            data.exit_program();
            break;
        default:
            break;
        }

    }

    return 0;
}