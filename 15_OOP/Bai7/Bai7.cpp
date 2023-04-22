/*Khoa CNTT – DHKHTN cần quản lý việc thanh toán tiền lương cho các cán bộ giá viên trong khoa. 
Để quản lý được, khoa cần các thông tin sau:

Với mỗi cán bộ giáo viên có các thông tin sau: lương cứng, lương thưởng, tiền phạt, lương thực lĩnh, 
và các thông tin cá nhân: Họ tên, tuổi, quê quán, mã số giáo viên.

Yêu cầu 1: Xây dựng lớp Nguoi để quản lý các thông tin cá nhân của mỗi giáo viên.

Yêu cầu 2: Xây dựng lớp CBGV để quản lý các thông tin của các cán bộ giáo viên.

Yêu cầu 3: Xây dựng các phương thức thêm, xoá các cán bộ giáo viên theo mã số giáo viên.

Yêu cầu 4: Tính lương thực lĩnh cho giáo viên: Lương thực = Lương cứng + lương thưởng – lương phạt.*/

#include <iostream>
using namespace std;

#include "Person.h"
#include "Teacher.h"
#include "School.h"

#define INSERT 1
#define DELETE 2
#define SALARY 3
#define EXIT 4
int main(){

    int option;

    School school;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert Teacher\n";
        cout << "   2.Delete Teacher \n";
        cout << "   3.Show Salary  \n";
        cout << "   4.Exit \n";
        cout << "   Choose options: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case INSERT:
            school.Inset_teacher();
            break;
        case DELETE:
            school.Delete_teacher();
            break;
        case SALARY:
            school.Calculate_Salary();
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