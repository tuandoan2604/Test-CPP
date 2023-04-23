#include "complexnum.h"
#include <limits>

using namespace std;

int main()
{
    /*ComplexNumber a(1,2);
    ComplexNumber b(3,4);
    ComplexNumber c;
    c = a+b;
    c.print();
    c = a*b;
    c.print();
    return 0;*/
int select;
while(true)
{
    cout << "enter select: ";
    cin >> select;

    if(cin.fail()) // kiểm tra xem giá trị nhập vào có hợp lệ hay không
    {
        cout << "Invalid input. Please try again." << endl;
        cin.clear(); // xóa trạng thái thất bại của cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // xóa bỏ kí tự không hợp lệ khỏi bộ đệm đầu vào
    }
    else
    {
        // xử lý giá trị hợp lệ ở đây
        break; // thoát khỏi vòng lặp nếu giá trị nhập vào hợp lệ
    }
}
}