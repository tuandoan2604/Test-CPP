/*Để quản lý khách hàng đến thuê phòng của một khách sạn, người ta cần các thông tin sau: 
Số ngày thuê, loại phòng, thông tin cá nhân của những người thuê phòng.

Biết rằng phòng loại A có giá 500$, phòng loại B có giá 300$ và loại C có giá 100$.

Với mỗi cá nhân cần quản lý các thông tin sau: Họ tên, tuổi, số chứng minh nhân dân.

Yêu cầu 1: Hãy xây dựng lớp Nguoi để quản lý thông tin cá nhân của những người thuê phòng.

Yêu cầu 2: Xây dựng lớp KhachSan để quản lý các thông tin về các phòng trong khác sạn.

Yêu cầu 3: Xây dựng các phương thức thêm mới, xoá khách theo số chứng minh nhân dân. 
Tính tiền thuê phòng cho khách(xác định khách bằng số chứng minh nhân dân) dựa vào công thức: (số ngày thuê * giá của từng loại phòng)*/

#include <iostream>
using namespace std;

#include "Person.h"
#include "Hotel.h"

#define INSERT 1
#define DELETE 2
#define PAY 3
#define SHOW 4
#define EXIT 5
int main(){

    int option;

    Hotel hotel;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert Custumer\n";
        cout << "   2.Delete Custumer \n";
        cout << "   3.Total Money You Have To Pay \n";
        cout << "   4.Show information \n ";
        cout << "   5.Exit \n";
        cout << "   Choose options: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case INSERT:
            hotel.Insert_Custumer();
            break;
        case DELETE:
            hotel.Delete_Customer();
            break;
        case PAY:
            hotel.Show_Bill();
            break;
        case SHOW:
            hotel.Show_information();
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