/*Bài tập tự luyện

Để quản lý biên lai thu tiền điện, người ta cần các thông tin sau:

Với mỗi biên lai: Thông tin về hộ sử dụng điện, chỉ số điện cũ, chỉ số mới, số tiền phải trả.
Các thông tin riêng của từng hộ gia đình sử dụng điện: Họ tên chủ hộ, số nhà, mã số công tơ điện.
Yêu cầu 1: Hãy xây dựng lớp khachHang để lưu trữu các thông tin riêng của mỗi hộ gia đình.

Yêu cầu 2: Xây dựng lớp BienLai để quản lý việc sử dụng và thanh toán tiền điện của các hộ dân.

Yêu cầu 3: Xây dựng các phương thức thêm, xoá sửa các thông tin riêng của mỗi hộ sử dụng điện.

Yêu cầu 4: Viết phương thức tính tiền điện cho mỗi hộ gia đình theo công thức: (số mới – số cũ ) * 5.*/

#include "Customer.h"
#include "Bill.h"
#include "Manage_Bill.h"

#define INSERT 1
#define EDIT 2
#define DELETE 3
#define SHOW 4
#define EXIT 5
int main(){

    int option;

    Manage_Bill mb;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert Bill\n";
        cout << "   2.Edit Bill \n";
        cout << "   3.Delete Bill \n";
        cout << "   4.Show Information  \n";
        cout << "   5.Exit \n";
        cout << "   Choose options: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case INSERT:
            mb.Insert_Bill();
            break;
        case EDIT:
            mb.Edit_Information_Customer();
            break;
        case DELETE:
            mb.Delete_Bill();
            break;
        case SHOW:
            mb.Show_Information();
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