#include "Manage.h"

#define _ADD 1
#define _DELETE 2
#define _FIND 3
#define _EXIT 4

int main()
{
    Manage setVehicle;

    while (true)
    {
        cout<< "Enter you choice: \n";
        cout<< "1. Add new vehicle                      2. Delete by ID\n";
        cout<< "3. Find by manufacturrer and color      4. Exit \n";
        int choice;
        cin>> choice;

        switch (choice)
        {
            case _ADD:
            {
                setVehicle.addNew();
                break;
            }
            case _DELETE:
            {
                cout<< "Enter the ID of vehicle you want to delete: ";
                int t_ID;
                cin>> t_ID;

                setVehicle.deleteID(t_ID);
                break;
            }
            case _FIND:
            {
                string f_company;
                string f_color;
                cout<< "Enter the company: ";
                cin.ignore();
                getline(cin, f_company);
                standalize(f_company);

                cout<< "Enter the color: ";
                getline(cin, f_color);
                standalize(f_color);

                setVehicle.findBy_compay_color(f_company,f_color);

                break;
            }
            case _EXIT:
            {
                setVehicle.exit_prog();
            }
            default:
            {
                cout<< "Wrong choice!";
                break;
            }
        }
    }
    return 0;
}