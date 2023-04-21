/*Xây dựng lớp SoPhuc có các thuộc tính PhanThuc, PhanAo kiểu double.

Yêu cầu 1: Xây dựng các phương thức tạo lập

Yêu cầu 2: Xây dựng các phương thức:

Nhập một số phức.
Hiện thị số phức.
Cộng 2 số phức.
Nhân 2 số phức.*/

#include <iostream>
using namespace std;

class Complex {
    private:
        double real, imaginary;
    public:

        Complex() {
            real = 0;
            imaginary = 0;
        }
        
        Complex(double a, double b) {
            real = a;
            imaginary = b;
        }
        
        // Phương thức nhập số phức
        void Input() {
            cout << "Enter real: ";
            cin >> real;
            cout << "Enter imaginary: ";
            cin >> imaginary;
        }
        
        // Phương thức hiển thị số phức
        void Show() {
            cout << real << " + " << imaginary << "i" << endl;
        }
        
        // Phương thức cộng 2 số phức
        Complex operator+(Complex const& obj)
        {
            Complex res;
            res.real = real + obj.real;
            res.imaginary = imaginary + obj.imaginary;
            return res;
        }
        
        // Phương thức nhân 2 số phức
        Complex operator*(Complex b) {
            Complex kq;
            kq.real = real * b.real - imaginary * b.imaginary;
            kq.imaginary = real * b.imaginary + imaginary * b.real;
            return kq;
        }
        ~Complex(){
            cout << "=>Destructor!!!\n";
        }
};

int main() {
    // Tạo 2 số phức a và b
    Complex *a = new Complex();
    Complex *b = new Complex();

    a->Input();
    b->Input();
    
    // Hiển thị 2 số phức
    cout << "Complex a: ";
    a->Show();
    cout << "Complex b: ";
    b->Show();
    
    // Tính tổng 2 số phức
    Complex Sum = *a + *b;
    cout << "Sum : ";
    Sum.Show();
    
    // Tính tích 2 số phức
    Complex Multi = *a * *b;
    cout << "Multiplication: ";
    Multi.Show();
    
    delete a;
    delete b;

    system("pause");

    return 0;
}
