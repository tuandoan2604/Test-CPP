#include "staff.h"
#include "officer.h"

void Staff::set_job(){
    cout << "Nhap cong viec: ";
    cin.ignore();
    getline(cin, job);
}
string Staff::get_job() const{
    return job;
}
void Staff:: show_information(){
    Officer::show_information();
    cout << "   job: " << get_job() <<endl;
    }

void Staff:: Input(){
    Officer::Input();
    Staff::set_job();

}