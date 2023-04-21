#include "Officer.h"


void Officer::set_name(){
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, name);
}
void Officer::set_age(){
    cout << "Nhap tuoi: ";
    Cin_int(age);
}
void Officer::set_gender(){
    cout << "Nhap gioi tinh: ";
    cin >> gender;
}
string Officer::get_name() const{
    return name;
}
int  Officer::get_age() const{
    return age;
}
bool Officer::get_gender() const{
    return gender;
}


void Officer:: show_information(){
    cout << get_name() << "     " << get_age() << "    " << get_gender()?string("nam\n"):string("nu\n"); 
}

void Officer::Input() {
    Officer::set_name();
    Officer::set_age();
    Officer::set_gender();
}
