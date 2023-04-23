#include "town.h"

using namespace std;

int main()
{
    Town town;
    int a = 0;
    while (1)
    {
        cout << "Enter your select\n1 - Add n families\n2 - Display information family in town\n3 - Exit program\nYour select: ";
        cin >> a;
        switch (a)
        {
        case 1:
            town.addFamily();
            break;
        case 2:
            town.displayTown();
            break;
        case 3:
            town.~Town();
            exit(0);
        }
    }
    
    return 0;
}