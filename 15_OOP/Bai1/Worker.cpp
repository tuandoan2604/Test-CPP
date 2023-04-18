#include "Worker.h"
#include "Cadres.h"


void Worker::set_level(){
    cout << "Nhap level cong nhan (tu 1 den 10): ";
    Cin_int(level);
}
int Worker::get_level() const{
    return level;
}

void Worker::Show_Information(){
    Cadres::Show_Information();
    cout << "   Level: " << get_level() <<endl;
    }
void Worker::Input(){
    Cadres::Input();
    Worker::set_level();
}