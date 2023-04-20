/*Thư viện trung tâm đại học quốc gia có nhu cầu quản lý việc mượn, trả sách. 
Sinh viên đăng ký tham gia mượn sách thông qua thẻ mà thư viện cung cấp.

Với mỗi thẻ sẽ lưu các thông tin sau: Mã phiếu mượn, ngày mượn, hạn trả, số hiệu sách, và các thông tin cá nhân của sinh viên mượn sách. 
Các thông tin của sinh viên mượn sách bao gồm: Họ tên, tuổi, lớp.

Để đơn giản cho ứng dụng console. Chúng ta mặc định ngày mượn, ngày trả là số nguyên dương.

Yêu cầu 1: Xây dựng lớp SinhVien để quản lý thông tin của mỗi sinh viên.

Yêu cầu 2: Xây dựng lớp TheMuon để quản lý việc mượn trả sách của các sinh viên.

Yêu cầu 3: Xây dựng các phương thức: Thêm, xoá theo mã phiếu mượn và hiển thị thông tin các thẻ mượn.*/

#include "Student.h"
#include "Card.h"
#include "Library.h"

#define INSERT 1
#define DELETE 2
#define SHOW 3
#define EXIT 4
int main(){

    int option;

    Library library;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert Card\n";
        cout << "   2.Delete Card \n";
        cout << "   3.Show Card  \n";
        cout << "   4.Exit \n";
        cout << "   Choose options: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case INSERT:
            library.Insert_Card();
            break;
        case DELETE:
            library.Delete_Card();
            break;
        case SHOW:
            library.Show_Information();
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