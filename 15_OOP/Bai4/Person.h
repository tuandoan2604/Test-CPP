#pragma once

#include <iostream>
using namespace std;

void Cin_int(int &num)
{

    bool validInput = false;

    do
    {
        std::cout << "===>Nhap vao mot so nguyen: ";
        std::cin >> num;

        if (std::cin.fail())
        {
            std::cerr << "===> Loi: Nhap sai kieu du lieu!" << std::endl;
            std::cin.clear();  // Đặt lại trạng thái của cin
            std::cin.ignore(); // Bỏ qua dữ liệu nhập sai
        }
        else
        {
            validInput = true; // Đánh dấu dữ liệu là hợp lệ
        }

    } while (!validInput);
}

class Person{
    private:
        string Name;
        int Age;
        string Job;
        int Identity_Card_Num ;
        static int Next_Identity_Card_Num;
    public:
        Person(){Identity_Card_Num = Next_Identity_Card_Num ++ ;}

        string GetName() const ;

        void SetName();

        int GetAge() const ;
        void SetAge() ;
        string GetJob() const ;

        void SetJob() ;

        int GetID() const;
        void Show_information();
        void Input();
         ~Person(){
            cout <<"=>Destructor Person!!!\n";
        }
};