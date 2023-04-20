#include "ManagementDocument.h"
#include "ManagementDocument.cpp"
#include "Document.h"
#include "Document.cpp"
#include "Book.h"
#include "Book.cpp"
#include "Megazine.h"
#include "Megazine.cpp"
#include "NewsPaper.h"
#include "NewsPaper.cpp"
#include <iostream>
#define ADD 1
#define DELETE 2
#define SHOW 3
#define FIND 4
#define EXIT 5
int main(){
    ManagementDocument man1;
    int choose;
    while (true)
    {
        cout << "1.  Neu them tai lieu \n";
        cout << "2.  Neu xoa tai lieu theo ma \n";
        cout << "3.  Hien thi thong tin theo ma \n";
        cout << "4.  Neu tim tai lieu theo phan loai \n";
        cout << "5.  Thoat" << endl;
        cout << "Nhap lua chon :" << endl;
        cin >> choose;

        switch (choose)
        {
        case ADD:

            man1.addDocument();
            break;
        case DELETE:

            man1.addDocument();
            break;
        case SHOW:

            man1.showInformation();
            break;
        case FIND:

            man1.findByType();
            break;
        case EXIT:

            for (int i = 0; i < man1.listDocument.size(); i++)
            {
                delete (man1.listDocument[i]);
            }
            man1.listDocument.clear();
            exit(0);
        default:
            cout << "Nhap lai lua chon" << endl;
            break;
        }
    }
    return 0;
}