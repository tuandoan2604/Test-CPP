#include"ManagementTeacher.h"
#include "ManagementTeacher.cpp"
#include "Person7.h"
#include "Person7.cpp"
#define ADD 1
#define DELETE 2
#define CACULATION 3
int main(){
    ManagementTeacher man1;
    int choose;
    while (true)
    {
        cout<<"************"<<endl;
        cout<<"Chon 1 de them giao vien"<<endl;
        cout<<"Chon 2 de xoa giao vien theo ma"<<endl;
        cout<<"Chon 3 de tinh luong "<<endl;
        cout<<"Nhap lua chon :"<<endl;
        cin>>choose;
        switch (choose)
        {
        case ADD:
            man1.addTeacher();
            break;
        case DELETE:
            man1.deleteTeacher();
            break;
        case CACULATION:
            man1.calculationSalary();
            break;    
        default:
            cout<<"Nhap lai lua chon!"<<endl;
        }
    }
    
    return 0;
}