#include "BorrowCard.h"
#include "BorrowCard.cpp"
#include "Student8.h"
#include "Student8.cpp"
#include <vector>
#include <iostream>
#include <string>
#define ADD 1
#define DELETE 2
#define DISPLAY 3
using namespace std;
int main()
{
    vector<BorrowCard *> listBorrowCad;

    int choose;
    BorrowCard *pCad;
            string fullName;
            int age;
            int numClass;
            int idCad;
            int borrowDay;
            int lendDay;
            int idBook;
            bool check=true;
    while (true)
    {

        cout << "*****************************" << endl;
        cout << "Enter 1 to add information " << endl;
        cout << "Enter 2 to delete information " << endl;
        cout << "Enter 3 to show information " << endl;
        cout << "Enter the choose :" << endl;
        cin >> choose;
        switch (choose)
        {
        case 1:
            
            cout << "Enter full name of student :" << endl;
            cin.ignore();
            getline(cin, fullName);
            cout << "Enter class :" << endl;
            cin >> numClass;
            cout << "Enter borrow day :" << endl;
            cin >> borrowDay;
            cout << "Enter lend day :" << endl;
            cin >> lendDay;
            cout << "Enter Id book :" << endl;
            cin >> idBook;
            pCad = new BorrowCard(fullName, age, numClass, idCad, borrowDay, lendDay, idBook);
            listBorrowCad.push_back(pCad);
            break;
        case 2:

             check = true;
            cout << "Enter id cad" << endl;
            cin >> idCad;
            for (int i = 0; i < listBorrowCad.size(); i++)
            {
                if (listBorrowCad[i]->getIdCad() == idCad)
                {
                    delete (listBorrowCad[i]);
                    listBorrowCad.erase(listBorrowCad.begin() + i);
                    cout << "Deleted!" << endl;
                    check = false;
                }
            }

            if (check)
            {
                cout << "Not found the id cad" << endl;
            }
            break;
        case 3:

            check = true;
            cout << "Enter id cad" << endl;
            cin >> idCad;
            for (int i = 0; i < listBorrowCad.size(); i++)
            {
                if (listBorrowCad[i]->getIdCad() == idCad)
                {
                    cout << "Name of student: " << listBorrowCad[i]->getFullName() << endl;
                    cout << "Age :" << listBorrowCad[i]->getAge() << endl;
                    cout << "Class :" << listBorrowCad[i]->getNumClass() << endl;
                    cout << "Borrowday :" << listBorrowCad[i]->getBorrowDay() << endl;
                    cout << "Lend day :" << listBorrowCad[i]->getLendDay() << endl;
                    cout << "Id book :" << listBorrowCad[i]->getIdBook() << endl;
                }
            }

            if (check)
            {
                cout << "Not found the id cad" << endl;
            }
            break;
        default:
            break;
        }
    }

    return 0;
}