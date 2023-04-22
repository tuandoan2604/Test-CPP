/*Nghành công an cần quản lý các phương tiện giao thông gồm: ô tô, xe máy, xe tải. 
Mỗi loại gồm các thông tin: ID, Hãng sản xuất, năm sản xuất, giá bán và màu xe.

Các ô tô có các thuộc tính riêng: số chỗ ngồi, kiểu động cơ.

Các xe máy có các thuộc tính riêng: công xuất.

Xe tải cần quản lý thêm: Trọng tải.

Yêu cầu 1: Xây dựng các lớp để quản lý các phương tiện trên sao cho hiệu quả.

Yêu cầu 2: Xây dựng lớp QLPTGT có các chức năng:

Thêm, xoá(theo ID) các phương tiện thuộc các loại trên.
Tìm phương tiện theo hãng sản xuất, màu.
Thoát chương trình.*/
#include "Traffic_management.h"
#include "Truck.h"
#include "Car.h"
#include "Verhical.h"
#include "Motobike.h"

#include<iostream>
using namespace std;


#define INSERT 1
#define DELETE 2
#define FIND_MANUFACTURER 3
#define FIND_COLOR 4
#define SHOW 5
#define EXIT 6
using namespace std;


int main(){

    int option;

    Traffic_management traffic_management;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert_Verhical\n";
        cout << "   2.Delete_Verhical \n";
        cout << "   3.Search_By_Manufacturer \n";
        cout << "   4.Search_By_Color\n";
        cout << "   5.Show_Information\n";
        cout << "   6. Exit \n";
        cout << "   Choose options: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case INSERT:
            traffic_management.Insert_Verhical();
            break;
        case DELETE:
            traffic_management.Delete_Verhical();
            break;
        case FIND_MANUFACTURER:
            traffic_management.Search_By_Manufacturer();
            break;
        case FIND_COLOR:
            traffic_management.Search_By_Color();
            break;
        case SHOW:
            traffic_management.Show_Information();
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
















































