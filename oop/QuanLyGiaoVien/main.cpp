#include "managerteacher.h"

using namespace std;

int main()
{
    ManagerTeacher mt;
    string id = "";
    int select;
    while (1)
    {
        cout << "SELECTION\n";
        cout << "1 - Add teacher\n";
        cout << "2 - Delete teacher\n";
        cout << "3 - Calculate salary\n";
        cout << "4 - Exit program\n";
        cout << "Your select: ";
        cin >> select;
        cin.ignore();
        switch (select)
        {
        case 1:
            mt.addTeacher();
            break;
        
        case 2:
            cout << "Enter ID teacher want to remove: ";
            getline(cin, id);
            mt.deleteTeacher(id);
            break;

        case 3:
            cout << "Enter ID teacher want to get salary: ";
            getline(cin, id);
            if(!mt.getSalary(id) == 0)
            {
                cout <<"Salary: " << mt.getSalary(id) << endl;
            }
            else
            {
                cout << "no have teacher\n";
            }
            break;
        
        case 4:
            exit(0);
            break;
        default:
            break;
        }

    }
    
    return 0;
}