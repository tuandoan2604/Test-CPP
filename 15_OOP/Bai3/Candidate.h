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

class Candidate{
    private:
        int  ID;
        static int Next_ID;
        string Name;
        string Address;
        int Priority;
    public:
        Candidate(){ID = Next_ID++;}
         
        int GetID() const ;

        string GetName() const ;
        void SetName() ;

        string GetAddress() const ;

        void SetAddress() ;

        int GetPriority() const ;

        void SetPriority();
        
        virtual void Show_Information();

        virtual void Input();
        virtual ~Candidate(){
            cout<< "=> Destructor candidate!!!\n";
        }
};



