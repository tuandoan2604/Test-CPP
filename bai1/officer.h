#include<string>
#include<iostream>

using namespace std;

#pragma once

class Officer{
    private:
        string name;
        int age;
        bool gender;
    public:
        void set_name();
        void set_age();
        void set_gender();
        string get_name() const;
        int get_age() const;
        bool get_gender() const;

        virtual void show_information();
        virtual void Input();
        virtual ~Officer(){
            cout<<"Destructor Officer\n";
        }
};

void Cin_int(int &num){

    bool validInput = false;

    do {
        std::cout << "===>Nhap vao mot so nguyen: ";
        std::cin >> num;

        if (std::cin.fail()) {
            std::cerr << "===> Loi: Nhap sai kieu du lieu!" << std::endl;
            std::cin.clear(); // Đặt lại trạng thái của cin
            std::cin.ignore(); // Bỏ qua dữ liệu nhập sai
        } else {
            validInput = true; // Đánh dấu dữ liệu là hợp lệ
        }

    } while (!validInput);
}