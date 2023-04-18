#include <string>

#include<iostream>
using namespace std;

#pragma once

class Cadres{
    private:
        string name;
        int age;
        bool gender;
    public:
        // Cadres(string name, int age , bool gender):
        //         name(name), age(age), gender(gender){}

        void set_name();
        void set_age();
        void set_gender();
        string get_name() const ;
        int  get_age() const ;
        bool get_gender()const ;

        // tại sao phải tạo virtual distructor
        virtual void Show_Information();

        virtual void Input();
        
        virtual ~Cadres(){
            cout<< "Destructor Cadres\n";
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


