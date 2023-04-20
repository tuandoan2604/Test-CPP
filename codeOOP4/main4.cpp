#include "Person.h"
#include "Person.cpp"
#include "Family.h"
#include "Family.cpp"
#include "Town.h"
#include "Town.cpp"
#define ADD 1
#define SHOW 2
int main(){
    Town t1;
    int choose;
    while (true)
    {
        cout<<"============="<<endl;
        cout<<"Nhap 1 de them ho gia dinh "<<endl;
        cout<<"Nhap 2 de hien thi thong tin khu pho"<<endl;
        cout<<"Nhap lua chon :"<<endl;
        cin>>choose;
        switch (choose)
        {
        case ADD:
            t1.addFamily();
            break;
        case SHOW :
            t1.display();
            break;
        default:
            cout<<"Nhap sai, yeu cau nhap lai!"<<endl;
            break;
        }
    }
    
    
    return 0;
}