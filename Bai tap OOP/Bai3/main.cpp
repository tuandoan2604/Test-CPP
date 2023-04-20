#include "Admission.h"

int main()
{
    Admission school;

    while (1)
    {
        int button;
        cout<< "Enter the function you want to use: \n";
        cout<< "1. Add new student      2. Display student information \n";
        cout<< "3. Find by ID           4. Exit program \n";

        cin>> button;
        if(button<1 || button>4)
            continue;
        
        switch (button)
        {
        case 1:
            school.addNewStu();
            break;
        case 2:
            school.displayList();
            break;
        case 3:
            school.findID();
            break;
        case 4:
            school.exit_prog();
            break;
        default:
            break;
        }
    }

    return 0;
}