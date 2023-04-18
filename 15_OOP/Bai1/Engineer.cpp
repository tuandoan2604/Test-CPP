#include "Engineer.h"

void Engineer::set_branch(){
    cout << "Nhap nganh dao tao: ";
    cin.ignore();
    getline(cin, branch);
}
string Engineer::get_branch() const{
    return branch;
}
void Engineer::Show_Information(){
    Cadres::Show_Information();
    cout << "   branch: " << get_branch() <<endl;
    }
void Engineer::Input(){
    Cadres::Input();
    Engineer::set_branch();
}