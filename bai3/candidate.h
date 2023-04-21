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
        int  id;
        static int nextId;
        string name;
        string address;
        int priority;
    public:
        Candidate(){id = nextId++;}
         
        int getId() const ;

        string getName() const ;
        void setName() ;

        string getAddress() const ;

        void setAddress() ;

        int getPriority() const ;

        void setPriority();
        
        virtual void showInformation();

        virtual void input();
        virtual ~Candidate(){
            cout<< "=> Destructor candidate!!!\n";
        }
};

int Candidate::nextId = 1;

int Candidate::getId() const {
    return id;
}

string Candidate::getName() const {
    return name;
}

void Candidate::setName() {
    cout << "Enter name of candidate:";
    cin.ignore();
    getline(cin, name);
}

string Candidate::getAddress() const {
    return address;
}

void Candidate::setAddress() {
    cout<<"Enter Address of candidate:";
    // cin.ignore();
    getline(cin, address);
}

int Candidate::getPriority() const {
    return priority;
}

void Candidate::setPriority() {
    cout << "Enter Priority level: ";
    Cin_int(priority);
}

void Candidate::showInformation(){
    cout<<getId()<<"   "<<getName()<< "    " <<getAddress()<<"     "<<GetPriority() <<endl;
}

void Candidate::input(){
    cout<< "ID: "<<id<<endl;
    setName();
    setAddress();
    setPriority();
}

