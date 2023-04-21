#pragma once

#include <iostream>
#include <string>
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

class Document{
    private:
        int id;
        static int nextId;
        string nxb;
        int number;

    public:
        Document(){
            id = nextId++;
        }

        int getIdDocument() const;
        string getPublisher() const;
        void setPublisher(string nxb);
        int getNumPublisher() const;
        void setNumPublisher();
        virtual int getType(){return 0;}
        virtual void showInformation();
        virtual void input();
        virtual ~Document(){
            cout<<"Detruct Document";
        }
};

void Document::showInformation(){
    cout<<"Id: "<<getIdDocument()<<endl;
    cout<<"Publisher: "<<getPublisher()<<endl;
    cout<<"Number: "<<getNumPublisher()<<endl;
}

int Document::getIdDocument() const{
    return this->id;
}

string Document::getPublisher() const{
    return this->nxb;
}

void Document::setPublisher(string nxb){
    this->nxb = nxb;
}