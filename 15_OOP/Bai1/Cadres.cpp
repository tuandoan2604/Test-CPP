#include "Cadres.h"


void Cadres::set_name(){
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, name);
}
void Cadres::set_age(){
    cout << "Nhap tuoi: ";
    Cin_int(age);
}
void Cadres::set_gender(){
    cout << "Nhap gioi tinh: ";
    cin >> gender;
}
string Cadres::get_name() const{
    return name;
}
int  Cadres::get_age() const{
    return age;
}
bool Cadres::get_gender() const{
    return gender;
}

// tại sao phải tạo virtual distructor
void Cadres:: Show_Information(){
    cout << get_name() << "     " << get_age() << "    " << get_gender()?string("nam\n"):string("nu\n"); 
}

void Cadres::Input() {
    Cadres::set_name();
    Cadres::set_age();
    Cadres::set_gender();
}


