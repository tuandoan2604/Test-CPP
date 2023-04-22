#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        std::cout << "Constructor of Animal" << std::endl;
    }

    virtual void func1(){
        cout<< "func1 base"<<endl;
    }
    void func2(){
        cout << "func2 base" <<endl;
    }

    // Hàm hủy ảo của lớp cơ sở
    virtual ~Animal() {
        std::cout << "Destructor of Animal" << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        std::cout << "Constructor of Dog" << std::endl;
    }
    void func1(){
        cout << "func1 derive" <<endl;
    }
        void func3(){
        cout << "func3 derive" <<endl;
    }

    // Hàm hủy của lớp con
    ~Dog() {
        std::cout << "Destructor of Dog" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog(); // Tạo một đối tượng Dog thông qua con trỏ của lớp cơ sở Animal

    // delete animal; // Hủy đối tượng thông qua con trỏ của lớp cơ sở Animal

    // int a;
    // cin>>a;
    return 0;
}