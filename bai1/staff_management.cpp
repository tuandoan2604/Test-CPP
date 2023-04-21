#include "staff_management.h"
#include "worker.h"
#include "engineer.h"
#include "staff.h"

void StaffManagement::insert(){
    int type;
    cout<<"Chon loai can bo\n"<<"1. Cong nhan / 2. Ky su / 3. Nhan vien): ";
    Cin_int(type);

    Officer* officer;
    if(type==1){
        officer = new Worker();
    }else if(type==2){
        officer = new Engineer();
    }else if(type==3){
        officer = new Staff();
    }else{
        std::cout<<"Error! Lua chon khong hop le."<<endl;
        return;
    }

    officer->Input();
    listOfficer.push_back(officer);
}

void StaffManagement::findName(){
    cout<<"=======Tim theo ten======="<<endl;
    string name;
    cout<<"Nhap ten can tim: ";
    cin.ignore();
    getline(cin, name);

    for(Officer* officer : listOfficer){
        if(officer->get_name() == name){
            officer->show_information();
        }
    }
}

void StaffManagement::showList(){
    cout<<"=====Danh sach can bo====="<<endl;
    for(auto officer : listOfficer){
        officer->show_information();
    }
}

