#include "engineer.h"

void Engineer::set_branch(){
    cout<<"Nhap nganh dao tao: ";
    cin.ignore();
    getline(cin, branch);
}

string Engineer::get_branch() const{
    return branch;
}

void Engineer::show_information(){
    Officer::show_information();
    cout<<" branch: "<<get_branch() <<endl;
}

void Engineer::Input(){
    Officer::Input();
    Engineer::set_branch();
}