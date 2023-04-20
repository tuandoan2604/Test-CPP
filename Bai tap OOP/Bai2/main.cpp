#include "Manage.h"

int main()
{
    Manage library;
    while (1)
    {
        cout<< "Working on library data \n";
        cout<< "What you want to do? \n";
        cout<< "1. Add new document             2. Delete a document by ID \n";
        cout<< "3. Display all the document     4. Display by type of document \n";
        cout<< "5. Exit program \n";

        int button = 0;
        do
        {
            cin>> button;
            if(1>button || button>5)
            {
                cout<< "Wrong typing! Re-enter.";
            }
        } while (1>button || button>5);

        switch (button)
        {
        case 1:
            library.addDoc();
            break;
        case 2:
            library.deleteByID();
            break;
        case 3:
            library.displayList();
            break;
        case 4: 
            library.findType();
            break;
        case 5:
            library.exit_prog();
            break;
        default:
            break;
        }
    }

    return 0;
}