#include "Receipt.h"
#include <vector>

#define ADD_ 1
#define REMOVE_ 2
#define REVISE_ 3
#define DISPLAY_ 4
#define EXIT_ 5

int main()
{
    vector<Receipt* >receipts;

    while (true)
    {
        cout<< "Enter you function you want to choose: \n";
        cout<< "1. Add new client                   2. Remove one client by electric meter code \n";
        cout<< "3. Revise information of client     4. Display information \n";
        cout<< "5. Exit \n";
        int choice;
        cin>> choice;

        switch (choice)
        {
            case ADD_:
            {
                Receipt* temp = new Receipt;

                bool checkID = false;
                for (int i = 0; i < receipts.size(); i++)
                {
                    if (receipts[i]->getID()==temp->getID())
                    {
                        cout<< "Duplicate ID. Re-enter the information of client \n";
                        checkID = true;
                        break;
                    }
                    
                }
                if(!checkID)
                {
                    receipts.push_back(temp);
                }
                break;
            }
            case REMOVE_:
            {
                cout<< "Enter the customer's meter code you want to remove: ";
                int t_ID;
                cin>> t_ID;

                bool check_found = false;

                for (int i = 0; i < receipts.size(); i++)
                {
                    if(receipts[i]->getID()==t_ID)
                    {
                        check_found = true;
                        receipts.erase(receipts.begin()+i);
                        break;
                    }
                }
                if(!check_found)
                {
                    cout<< "Can not find the provided meter code \n";
                }

                break;
            }
            case REVISE_:
            {
                cout<< "Enter the customer's meter code you want to revise information: ";
                int t_ID;
                cin>> t_ID;

                bool check_found = false;

                for (int i = 0; i < receipts.size(); i++)
                {
                    if(receipts[i]->getID()==t_ID)
                    {
                        check_found = true;
                        receipts[i]->revise();
                        break;
                    }
                }
                if(!check_found)
                {
                    cout<< "Can not find the provided meter code \n";
                }

                break;
            }
            case EXIT_:
            {
                for (int i = 0; i < receipts.size(); i++)
                {
                    Receipt* ptr = receipts[i];
                    delete(ptr);
                    ptr = nullptr;
                }
                exit(0);
                break;
            }
            case DISPLAY_:
            {
                cout<< "Enter the customer's meter code you want to display information: ";
                int t_ID;
                cin>> t_ID;

                bool check_found = false;

                for (int i = 0; i < receipts.size(); i++)
                {
                    if(receipts[i]->getID()==t_ID)
                    {
                        check_found = true;
                        receipts[i]->display();
                        break;
                    }
                }
                if(!check_found)
                {
                    cout<< "Can not find the provided meter code \n";
                }
                break;
            }
            default:
            {
                cout<< "Wrong choice!!! \n";
                break;
            }
        }
    }
    
}