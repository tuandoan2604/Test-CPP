/*Để quản lý các hộ dân cư trong một khu phố, người ta cần các thông tin sau: 
Số thành viên trong gia đình, Số nhà, thông tin mỗi cá nhân trong gia đình. 
Với mỗi cá nhân, người ta quản lý các thông tin sau: Họ tên, Tuổi, Nghề nghiệp, số chứng minh nhân dân(duy nhất cho mỗi người).

Yêu cầu 1: Hãy xây dựng lớp Person để quản lý thông tin của mỗi cá nhân.

Yêu cầu 2: Xây dựng lớp Family để quản lý thông tin của từng hộ gia đình.

Yêu cầu 2: Xây dựng lớp Town để quản lý các thông tin của từng hộ gia đình.

Yêu cầu 3: Nhập n hộ dân. (n nhập từ bàn phím), hiển thị thông tin của các hộ trong khu phố.*/

#include <iostream>
#include <string>
#include <vector>

#include "Person.cpp"
#include "Family.cpp"
// #include "Town.cpp"
#include "Town.h"

using namespace std;

#define INSERT 1
#define DELETE 2
#define SHOW 3
#define EXIT 4

int main(){

    int option;

    Town town;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert Family\n";
        cout << "   2.Delete Family \n";
        cout << "   3.Show Information \n";
        cout << "   4.Exit \n";
        cout << "   Choose options: ";
        Cin_int(option);
        system("cls");
        switch (option)
        {
        case INSERT:
            town.Inset_Family();
            break;
        case DELETE:
            town.Delete_Family();
            break;
        case SHOW:
            town.Show_Information();
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