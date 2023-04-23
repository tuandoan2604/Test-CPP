#include <iostream>
#include <limits>
#include "managerEmployee.h"
#include "exceptionEmployee.h"
#include "document.h"

#define ADDEMPLOYEE 1
#define DELETEEMPLOYEE 2
#define EDITEMPLOYEE 3
#define SEARCHEMPLOYEE 4
#define SHOWEXP 5
#define SHOWFRESHER 6
#define SHOWINTERN 7
#define EXITPROGRAM 8


using namespace std;

int main()
{
    ManagerEmployee mn;
    Employee *e;
    string id;
    int select = 0;
    while (true)
    {
        cout << "=====PROGRAM=====\n";
        cout << "1 - ADD EMPLOYEE\n";
        cout << "2 - DELETE EMPLOYEE\n";
        cout << "3 - EDIT EMPLOYEE\n";
        cout << "4 - SEARCH EMPLOYEE\n";
        cout << "5 - SHOW EXPERIENCE\n";
        cout << "6 - SHOW FRESHER\n";
        cout << "7 - SHOW INTERN\n";
        cout << "8 - EXIT PROGRAM\n";
        cout << "Your select: ";
        cin >> select;
        cin.ignore();
        try {
            if (cin.fail()) { throw "invalid input";}
            switch (select)
            {
            case ADDEMPLOYEE:
                addEmployee(mn);
                break;
            
            case SHOWEXP :
                mn.showAllExp();
                break;

            case SHOWFRESHER:
                mn.showAllFresher();
                break;

            case SHOWINTERN:
                mn.showAllIntern();
                break;

            case DELETEEMPLOYEE:
                cout << "Enter id want to delete: ";
                getline(cin, id);
                if(mn.deleteEmployee(id))
                {
                    cout << "delete done!\n";
                }
                else
                {cout << "incomplete!\n";}
                break;

            case SEARCHEMPLOYEE:
                cout << "Enter id want to search: ";
                getline(cin, id);
                mn.searchEmployee(id)->showInfo();
                break;

            case EXITPROGRAM:
                mn.~ManagerEmployee();
                exit(0);

            default:
                break;
            }   
        }
        catch (const char* msg)
        {
            cerr << "exception" << msg << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    }
    
}