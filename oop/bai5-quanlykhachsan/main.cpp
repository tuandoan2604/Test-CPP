#include <string>
#include "manager.h"

using namespace std;

int main()
{
    Manager mn;
    int select = 0;
    string cmnd;
    while (1)
    {
        cout << "Enter select" << endl;
        cout << "1 - Add new room" << endl;
        cout << "2 - Add new customer" << endl;
        cout << "3 - Delete customer" << endl;
        cout << "4 - Calculate guest's room rent" << endl;
        cout << "5 - List of available rooms" << endl;
        cout << "6 - Display hotel" << endl;
        cout << "7 - Exit program" << endl;
        cout << "Your select: ";
        cin >> select;
        cin.ignore();

        switch (select)
        {
        case 1:
            mn.addRoom();
            break;
        
        case 2:
            mn.roomNull();
            int idRoom;
            cout << "Enter id room: ";
            cin >> idRoom;
            cin.ignore();
            mn.addCustomer(idRoom);
            break;

        case 3:
            cout << "Enter cmnd want to delete: ";
            getline(cin, cmnd);
            mn.deleteCustomer(cmnd);
            break;

        case 4:
            cout << mn.caculateMoneyRoom() << endl;
            break;
        
        case 5:
            mn.roomNull();
            break;

        case 6:
            mn.displayHotel();
            break;

        case 7:
            mn.~Manager();
            exit(0);
        default:
            break;
        }

        cout <<"\n";
    }
    /*Manager mn;
    mn.addRoom();
    mn.addCustomer(12);
    mn.displayHotel();
    mn.deleteCustomer();
    mn.displayHotel
    //People cus;
    //Room r;
    //r.addPeople(cus, 2);
    //r.displayRoom();
    //r.checkCMND("12");*/
   return 0;
}