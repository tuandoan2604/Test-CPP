/*Một đơn vị sản xuất gồm có các cán bộ là công nhân, kỹ sư, nhân viên. Mỗi cán bộ cần quản lý các dữ liệu: Họ tên, tuổi, giới tính(name, nữ, khác), địa chỉ.

Cấp công nhân sẽ có thêm các thuộc tính riêng: Bậc (1 đến 10).
Cấp kỹ sư có thuộc tính riêng: Nghành đào tạo.
Các nhân viên có thuộc tính riêng: công việc.
Yêu cầu 1: Xây dựng các lớp Worker, Engineer, Staff kế thừa từ lớp Cadres.

Yêu cầu 2: Xây dựng lớp staff_management(quản lý cán bộ) cài đặt các phương thức thực hiện các chức năng sau:

Thêm mới cán bộ.
Tìm kiếm theo họ tên.
Hiện thị thông tin về danh sách các cán bộ.
Thoát khỏi chương trình.*/
#include <iostream>
#include <string>
#include <vector>

// #include "Cadres.h"
// #include "Worker.h"
// #include "Engineer.h"
// #include "Staff.h"

#include "Cadres.cpp"
#include "Worker.cpp"
#include "Staff.cpp"
#include "Engineer.cpp"

// #include "staff_Management.h"
#include "Staff_Management.cpp"

using namespace std;


int main(){

    int option;

    Staff_management sm;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert_Cadres\n";
        cout << "   2.Show_List \n";
        cout << "   3.Find_Name \n";
        cout << "   4. Exit \n";
        cout << "   Choose options: ";
        Cin_int(option);

        switch (option)
        {
        case 1:
            sm.Insert_Cadres();
            break;
        case 2:
            sm.Show_List();
            break;
        case 3:
            sm.Find_Name();
            break;
        case 4:
            exit_loop = false;
            break;
        default:
            cout << "Nhap lai!!!\n";
            break;
        }
    }

    return 0;
}