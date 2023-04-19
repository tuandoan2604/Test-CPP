/*Các thí Biology dự thi đại học bao gồm các thí Biology thi khối A, B, và khối C. 
Các thí Biology cần quản lý các thông tin sau: Số báo danh, họ tên, địa chỉ, mức ưu tiên.

Thí Biology thi khối A thi các môn: Toán, Lý, Hoá.

Thí Biology thi khối B thi các môn: Toán, Hoá, Biology.

Thí Biology thi khối C thi các môn: Văn, Sử, Địa.

Yêu cầu 1: Xây dựng các lớp để quản lý các thi Biology dự thi đại học.

Yêu cầu 2: Xây dựng lớp Admissions có các chức năng:

Thêm mới thí Biology.
Hiện thị thông tin của thí Biology và khối thi của thí Biology.
Tìm kiếm theo số báo danh.
Thoát khỏi chương trình.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Candidate.cpp"
#include "Candidate_Block_A.cpp"
#include "Candidate_Block_B.cpp"
#include "Candidate_Block_C.cpp"
#include "Admissions.cpp"




int main(){

    int option;

    Admissions Ams;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert Candidate\n";
        cout << "   2.Show Infomation \n";
        cout << "   3.Search by ID \n";
        cout << "   4.Exit \n";
        cout << "   Choose options: ";
        Cin_int(option);
        system("cls");
        switch (option)
        {
        case 1:
            Ams.Insert_candidate();
            break;
        case 2:
            Ams.Show_Information();
            break;
        case 3:
            Ams.Search_by_ID();
            break;
        case 4:
            exit_loop = false;
            break;
        default:
            cout << "Try again!!!\n";
            break;
        }
    }
    return 0;
}