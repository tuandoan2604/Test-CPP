#include "LibraryCard.h"
#include <vector>

#define ADD_ 1
#define REMOVE_ 2
#define DISPLAY_ 3
#define EXIT_ 4

int main()
{
    vector<LibraryCard* > cards;
    cout<< "Working with library database \n";
    while (true)
    {
        cout<< "Enter your choice: \n";
        cout<< "1. Add new student              2. Remove a student by card ID \n";
        cout<< "3. Display cards information    4. Exit \n";

        int choice;
        cin>> choice;

        switch (choice)
        {
        case ADD_:
        {
            LibraryCard* a = new LibraryCard;

            bool check_valid = true;
            for(int i=0; i<cards.size(); i++)
            {
                if(a->getID()==cards[i]->getID())
                {
                    cout<< "Duplicate ID card. \n";
                    check_valid = false;
                    break;
                }
            }

            if(a->getBorrowDate() < 1 || a->getBorrowDate() > 31)
            {
                cout<< "Invalid borrow date. \n";
                check_valid = false;
            }
                
            if(a->getReturnDate() < 1 || a->getReturnDate() > 31)
            {
                cout<< "Invalid return date. \n";
                check_valid = false;
            }
            if(check_valid)
            {
                cards.push_back(a);
            }
            break;
        }
        case REMOVE_:
        {
            cout<< "Enter the ID of card you want to remove: ";
            int t_ID;
            cin>> t_ID;

            bool is_complete = false;
            for (int i = 0; i < cards.size(); i++)
            {
                if(cards[i]->getID()==t_ID)
                {
                    cards.erase(cards.begin()+i);
                    is_complete = true;
                    break;
                }
            }
            if(!is_complete)
            {
                cout<< "Can't not find the provided ID.\n";
            }
            break;
        }
        case DISPLAY_:
        {
            cout<< "Display all the information of student in library database \n";
            for (int i = 0; i < cards.size(); i++)
            {
                cards[i]->displayLib();
            }
            break;
        }
        case EXIT_:
        {
            for (int i = 0; i < cards.size(); i++)
            {
                LibraryCard* ptr;
                ptr = cards[i];
                delete ptr;
                ptr = nullptr;
            }
            exit(0);
            break;
        }
        default:
            cout<< "Invalid choice. \n";
            break;
        }
    }

    return 0;
}