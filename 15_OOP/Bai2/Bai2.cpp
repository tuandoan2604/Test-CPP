/*'Một thư viện cần quản lý các tài liệu Newspaper gồm Sách, Tạp chí, Báo. Mỗi tài liệu gồm có các thuộc tính sau:
Mã tài liệu(Mã tài liệu là duy nhất), Tên nhà xuất bản, số bản phát hành.

Các loại sách cần quản lý thêm các thuộc tính: tên tác giả, số trang.

Các tạp chí cần quản lý thêm: Số phát hành, tháng phát hành.

Các báo cần quản lý thêm: Ngày phát hành.

Yêu cầu 1: Xây dựng các lớp để quản lý tài liệu cho thư viện một cách hiệu quả.

Yêu cầu 2: Xây dựng lớp Manage_Document có các chức năng sau

Thêm mới tài liêu: Sách, tạp chí, báo.
Xoá tài liệu theo mã tài liệu.
Hiện thị thông tin về tài liệu.
Tìm kiếm tài liệu theo loại: Sách, tạp chí, báo.
Thoát khỏi chương trình.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Document.cpp"
#include "Book.cpp"
#include "Magazine.cpp"
#include "Newspaper.cpp"
#include "Manage_Document.cpp"

#define INSERT 1
#define DELETE 2
#define SHOW 3
#define SEARCH 4
#define EXIT 5

int main(){

    int option;

    Manage_Document MD;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert Documents\n";
        cout << "   2.Delete Documents \n";
        cout << "   3.Show Infomation \n";
        cout << "   4.Search by type \n";
        cout << "   5.Exit \n";
        cout << "   Choose options: ";
        Cin_int(option);
        system("cls");
        switch (option)
        {
        case INSERT:
            MD.Insert_document();
            break;
        case DELETE:
            MD.Delete_document();
            break;
        case SHOW:
            MD.Show_informationDocument();
            break;
        case SEARCH:
            MD.Search_by_type();
            break;
        case EXIT:
            exit_loop = false;
            break;
        default:
            cout << "Nhap lai!!!\n";
            break;
        }
    }

    return 0;
}