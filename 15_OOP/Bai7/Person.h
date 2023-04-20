#pragma once

#include <iostream>
using namespace std;
class Person{
    private:
        
        int ID_teacher;
        static int next_ID_teacher;
        string Name;
        int Age;
        string Address;

    public: 
        Person(){
                ID_teacher = next_ID_teacher++;
        }
        string GetName() const {
                return Name;
        }

        void SetName() {
                cout << "Enter name:";
                cin.ignore();
                getline(cin, Name);
        }
        int GetID_teacher() const {
                return ID_teacher;
        }

        int GetAge() const {
                return Age;
        }

        void SetAge() {
                cout << "Enter Age:";
                cin >> Age;
        }

        string GetAddress() const {
                return Address;
        }

        void SetAddress() {
                cout << "Enter Address:";
                cin.ignore();
                getline(cin, Address);
        }

        void Input(){
            cout << "ID: "<<GetID_teacher()<<endl;
            SetName();
            SetAge();
            SetAddress();
        }   
        void Show_information(){
                cout << GetName()<< "   "<< GetAge()<<"     "<<GetAddress()<<endl;
        }
        ~Person(){
            cout << "=>Destructor person!!!\n";
        }
};

int Person::next_ID_teacher = 1;