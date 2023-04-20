#include "Hotel.h"
#include "Hotel.cpp"
#include "Person5.h"
#include "Person5.cpp"
#define ADD 1
#define DELETE 2
#define PAY 3
#define EXIT 4
int main(){
    Hotel h1;
    int choose;
    while (true)
    {
        cout << "=======================" << endl;
        cout << "1. Them khach" << endl;
        cout << "2. Xoa khach" << endl;
        cout << "3. Tinh tien" << endl;
        cout << "4. Thoat" << endl;
        cout << "Nhap lua chon :" << endl;
        cin >> choose;
        switch (choose)
        {
        case ADD:
            h1.addGuest();
            break;
        case DELETE:
            h1.deleteGuest();
            break;
        case PAY:
            h1.getBill();
            break;
        case EXIT:
            h1.exitProgram5();
        default:
            cout << "Nhap lai lua chon " << endl;
        }
    }
    return 0;
}