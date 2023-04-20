#include "Management.h"
#include "Cadres.h"
#include "Staff.h"
#include "Engineer.h"
#include "Worker.h"
#include "Management.cpp"
#include "Cadres.cpp"
#include "Staff.cpp"
#include "Engineer.cpp"
#include "Worker.cpp"

#define ADD 1
#define FIND 2
#define SHOW 3
#define EXIT 4
#include <iostream>
int main()
{
    Management man1;
    int choose;
    do
    
    {
        
        cout << "1. Them can bo " << endl;
        cout << "2. Tim can bo theo ten" << endl;
        cout << "3. Hien thi thong tin can bo" << endl;
        cout << "4. Thoat" << endl;
        cout << "Nhap lua chon" << endl;
        cin >> choose;
        switch (choose)
        {
        case ADD:
            
            man1.addCadres();
            break;
        case FIND:
            
            man1.searchByName();
            break;
        case SHOW:
            
            man1.showList();
            break;
        case EXIT:
            
            man1.exitProgram();
        default:
            break;
        }

    } while (true);
    return 0;
}