#pragma once

#include <iostream>
using namespace std;
class Student{
    private:
        
        string Name;
        int Age;
        string Class;

    public: 

        string GetName() const {
                return Name;
        }

        void SetName() {
                cout << "Enter name:";
                // cin.ignore();
                getline(cin, Name);
        }


        int GetAge() const {
                return Age;
        }

        void SetAge() {
                cout << "Enter Age:";
                cin >> Age;
        }

        string GetClass() const {
                return Class;
        }

        void SetClass() {
                cout << "Enter Class:";
                cin.ignore();
                getline(cin, Class);
        }

        void Input(){
            SetName();
            SetAge();
            SetClass();
        }   
        void Show_information(){
                cout << GetName()<< "   "<< GetAge()<<"     "<<GetClass()<<endl;
        }
        ~Student(){
            cout << "=>Destructor Student!!!\n";
        }
};
