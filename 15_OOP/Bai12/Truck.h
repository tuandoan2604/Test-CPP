#pragma once

#include "Verhical.h"

class Truck:public Verhical{
    private:
        int Tonnage;


    public:
        int GetTonnage() const {
            return Tonnage;
        }

        void SetTonnage() {
            cout << "Enter Tonnage:";
            cin>>Tonnage;
        }
        void Input(){
            Verhical::Input();
            SetTonnage();
        }
        void Show_Information(){
            Verhical::Show_Information();
            cout << "Tonnage: "<<GetTonnage()<<endl;
        }
        ~Truck(){
            cout << "=>Destructor Truck !!!\n";
        }
};