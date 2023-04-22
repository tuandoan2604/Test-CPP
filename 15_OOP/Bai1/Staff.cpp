
#include "Staff.h"
#include "Cadres.h"

void Staff::set_job(){
    cout << "Nhap cong viec: ";
    cin.ignore();
    getline(cin, job);
}
string Staff::get_job() const{
    return job;
}
void Staff:: Show_Information(){
    Cadres::Show_Information();
    cout << "   job: " << get_job() <<endl;
    }

void Staff:: Input(){
    Cadres::Input();
    Staff::set_job();

}