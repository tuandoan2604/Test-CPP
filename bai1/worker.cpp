#include "worker.h"
#include "officer.h"


void Worker::set_level(){
    cout << "Nhap level cong nhan (tu 1 den 10): ";
    Cin_int(level);
}
int Worker::get_level() const{
    return level;
}

void Worker::show_information(){
    Officer::show_information();
    cout << "   Level: " << get_level() <<endl;
    }
void Worker::Input(){
    Officer::Input();
    Worker::set_level();
}