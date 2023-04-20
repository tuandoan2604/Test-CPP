#include "Admissions.h"
#include "Admissions.cpp"
#include "Candidates.h"
#include "Candidates.cpp"
#include "BlockA.h"
#include "BlockB.h"
#include "BlockC.h"
#include "BlockA.cpp"
#include "BlockB.cpp"
#include "BlockC.cpp"
#include <iostream>
#define ADD 1
#define SHOW 2
#define FIND 3
#define EXIT 4
int main(){
    Admissions ad1;
    int choose;
    while (true)
    {
        cout << "=======================" << endl;
        cout << "1. Them thi sinh" << endl;
        cout << "2. Hien thi thong tin" << endl;
        cout << "3. Tim thi sing theo so bao danh" << endl;
        cout << "4. Thoat" << endl;
        cout << "Nhap lua chon :" << endl;
        cin >> choose;
        switch (choose)
        {
        case ADD:
            ad1.addCandidate();
            break;
        case SHOW:
            ad1.showInformation();
            break;
        case FIND:
            ad1.findById();
            break;
        case EXIT:
            ad1.exitProgram3();
        default:
            cout << "Nhap lai lua chon " << endl;
        }
    }
    return 0;
}