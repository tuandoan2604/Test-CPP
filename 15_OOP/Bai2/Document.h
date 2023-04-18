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

class Document
{
private:
    int ID_Document;
    static int next_ID;
    string Publisher;
    int Num_Publisher;

public:
    Document(){
        ID_Document= next_ID++;
    }

    int GetID_Document() const;

    string Get_Publisher() const;

    void Set_Publisher();

    int GetNum_Publisher() const;

    void SetNum_Publisher();

    virtual int Get_Type(){ return 0;}

    virtual void Show_information();

    virtual void Input();
    virtual ~Document(){
        cout<<"=>Destructor  Document!!!!\n";
    }
};

