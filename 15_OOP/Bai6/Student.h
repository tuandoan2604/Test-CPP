#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string Name;
        int Age;
        string Address;
    public:
        void Set_Name(){
            cout << "Enter Name:";
            // cin.ignore();
            getline(cin, Name);
        }
        string getName() {
            return Name;
        }

        void  Set_Age() {
            cout << "Enter Age:";
            cin >>Age;
        }
        int Get_Age(){return Age;}

        void Set_Address(){
            cout << "Enter Address:";
            cin.ignore();
            getline(cin, Address);
        }
        string getAddress() {
            return Address;
        }
        void Input(){
            Set_Name();
            Set_Age();
            Set_Address();
        }
        void Show_info(){
            cout << getName()<< "   "<< Get_Age() << "      "<<getAddress()<<endl;
        }
        ~Student(){ 
            cout << "=>Destructor Student!!!\n";
        }
};

