#include "managercard.h"
#include <stdexcept>

#define ADDCARD 1
#define DELETECARD 2
#define DISPLAYCARD 3
#define EXITPROGRAM 4

int main()
{
    ManagerCard mc;
    int select = 0;
    string id = "";
    while(true)
    {
        cout << "====MANAGER LIBRARY====\n";
        cout << "1 - Add card\t2 - Delete card\t3 - Display all card\t4 - Exit program\nYour select: ";
        cin >> select;
        cin.ignore();
        switch (select)
        {
        case ADDCARD:
            mc.addCard();
            cout << endl;
            break;
        
        case DELETECARD:
            cout << "Enter id want to remove: ";
            getline(cin, id);
            mc.deleteCard(id);
            cout << endl;
            break;

        case DISPLAYCARD:
            mc.displayAllCard();
            cout << endl;
            break;
        
        case EXITPROGRAM:
            mc.~ManagerCard();
            exit(0);
            break;

        default:
            break;
        }
    }

    return 0;
}