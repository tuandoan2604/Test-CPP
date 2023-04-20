#include "Hottel.h"

int main()
{
    Hottel rooms;

    cout<< "Working with hottel customer data \n";
    while (1)
    {
        cout<< "Enter the program you want to do \n";
        cout<< "1. Add new customer                     2. Delete a customer by ID \n";
        cout<< "3. Calculate room rent for customer     4. Exit program \n";
        cout<< "Enter you choice: ";
        int button;
        cin>> button;
        cout<< endl;

        switch (button)
        {
        case 1:
            rooms.addClient();
            break;
        case 2:
            rooms.deleteID();
            break;
        case 3:
            rooms.calculatePayment();
            break;
        case 4:
            rooms.exit_prog();
            break;
        default:
            cout<< "Wrong choice!!! \n";
            break;
        }
    }
    

    return 0;
}