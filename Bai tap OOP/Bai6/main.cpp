#include "Manage.h"

int main()
{
    Manage school;
    cout<< "Working with student database \n";
    while (1)
    {
        cout<< "Enter the function you want to do: \n";
        cout<< "1. Add new student                                                  2. Display student with the same age \n";
        cout<< "3. Display the number of student have the same age and address      4. Exit \n";

        int button;
        cin>> button;

        switch (button)
        {
        case 1:
            school.add_student();
            break;
        case 2:
            school.display_age();
            break;
        case 3:
            school.count_age_address();
            break;
        case 4:
            school.exit_prog();
        default:
            cout<< "Wrong typing!!! \n";
            break;
        }
    }

    return 0;
}