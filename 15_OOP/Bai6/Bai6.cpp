/*Để quản lý hồ sơ học sinh của trường THPT nhà trường cần các thông tin sau: Lớp,  và các thông tin về cá nhân của mỗi học sinh.

Mỗi học sinh có các thông tin sau: Họ tên, tuổi, quê quán.

Yêu cầu 1: Xây dựng HocSinh để quản lý thông tin của mỗi học sinh.

Yêu cầu 2: Xây dựng các phương thức thêm, hiển thị thông tin của mỗi học sinh.

Yêu cầu 3: Cài đặt chương trình có các chức năng sau:

Thêm học sinh mới.
Hiện thị các học sinh 20 tuổi.
Cho biết số lượng các học sinh có tuổi là 23 và quê ở DN.*/

#include <iostream>
using namespace std;

#include "Student.h"
#include "Class_room.h"
#include "School.h"

#define INSERT_STUDENT 1
#define SHOW_AGE 2
#define SHOW_AGE_ADDRESS 3
#define INSERT_CLASS 4
#define EXIT 5
int main(){

    int option;

    School school;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert Student\n";
        cout << "   2.Show students have ... age \n";
        cout << "   3.Show studnets have ... age ... address  \n";
        cout << "   4.Insert class room \n";
        cout << "   5.Exit \n";
        cout << "   Choose options: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case INSERT_STUDENT:
            school.Insert_Student();
            break;
        case SHOW_AGE:
            school.Find_Student_by_age();
            break;
        case SHOW_AGE_ADDRESS:
            school.Find_Student_by_age_and_address();
            break;
        case INSERT_CLASS:
            school.Insert_class_room();
            break;
        case EXIT:
            exit_loop = false;
            break;
        default:
            cout << "Try again!!!\n";
            break;
        }
    }
    return 0;
}