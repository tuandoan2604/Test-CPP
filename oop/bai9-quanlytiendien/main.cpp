#include"manager.h"

#define ADDCUSTOMER 1
#define CHANGEINFO 2
#define DISPLAYALL 3
#define DELETECUSTOMER 4
#define EXITPROGRAM 5

using namespace std;

int main()
{
    Manager mn;
    int select = 0;
    string electricnum = "";
    while (true)
    {
        cout << "====MANAGER LIBRARY====\n";
        cout << "1 - Add customer\t2 - Chang customer\t3 - Display all customer\t4 - Delete customer\t5 - Exit program\nYour select: ";
        cin >> select;
        cin.ignore();

        switch (select)
        {
        case ADDCUSTOMER:
            mn.addCustomer();
            break;
            
        case DELETECUSTOMER :
            cout << "Enter electric number want to delete: ";
            getline(cin, electricnum);
            if(mn.deleteCustomer(electricnum))
            {
                cout << "Done delete!\n";
            }
            else
            {
                cout << "Fail delete!\n";
            }
            break;
        
        case DISPLAYALL:
            mn.displayAllCustomer();
            break;

        case EXITPROGRAM:
            mn.~Manager();
            exit(0);
            break;
        
        case CHANGEINFO:
            cout << "Enter electric number want to change: ";
            getline(cin, electricnum);
            mn.changeInfor(electricnum);
            break;

        default:
            break;
        }
    }
    
}