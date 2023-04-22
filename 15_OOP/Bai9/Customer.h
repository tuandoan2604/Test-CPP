#pragma once

#include <iostream>
#include <string>
using namespace std;

class Custumer{
    private:
        string name;
        int House_Number;
        int ID_Electric_Meter;


    public:
        string GetName() const {
                return name;
        }

        void SetName() {
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
        }

        int GetHouse_Number() const {
                return House_Number;
        }

        void SetHouse_Number() {
                cout << "Enter House Number: ";
                cin >> House_Number;
        }

        int GetID_Electric_Meter() const {
                return ID_Electric_Meter;
        }

        void SetID_Electric_Meter() {
                cout << "Enter ID Electric Meter: ";
                cin >>ID_Electric_Meter;
        }
        void Input(){
            SetName();
            SetHouse_Number();
            SetID_Electric_Meter();
        }
        void Show_Information(){
            cout << "Name: "<<GetName() << "   House Number: "<<GetHouse_Number()<<"  ID Electric: "<<GetID_Electric_Meter()<<endl;
        }
        ~Custumer(){
            cout <<"=>Destructor Custumer!!!\n";
        }
};