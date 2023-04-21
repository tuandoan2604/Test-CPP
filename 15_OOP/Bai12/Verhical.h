#pragma once

#include <iostream>
#include "string.h"
using namespace std;

class Verhical{
    private:
        int ID;
        static int Next_ID;
        string Manufacturer;
        int Year_of_manufacture;
        int price;
        string color;


    public:
        Verhical(){
            ID = Next_ID++;
        }
        int Get_ID(){return ID;}

        string GetManufacturer() const {
                return Manufacturer;
        }

        void SetManufacturer() {
                cout << "Enter Manufacturer: ";
                cin.ignore();
                getline(cin, Manufacturer);
        }

        int GetYear_of_manufacture() const {
                return Year_of_manufacture;
        }

        void SetYear_of_manufacture() {
                cout << "Enter Year_of_manufacture: ";
                cin >>Year_of_manufacture;
        }

        int GetPrice() const {
                return price;
        }

        void SetPrice() {
                cout << "Enter Price: ";
                cin >> price;
        }

        string GetColor() const {
                return color;
        }

        void SetColor() {
                cout << "Enter color: ";
                cin.ignore();
                getline(cin, color);
        }
        virtual void Input(){
                cout <<"ID:"<<Get_ID()<<endl;
                SetManufacturer();
                SetYear_of_manufacture();
                SetPrice();
                SetColor();
        }
        virtual void Show_Information(){
                cout <<"ID:"<<Get_ID()<<endl;
                cout << "Manufacturer: "<<GetManufacturer()<<" Year_of_manufacture: "<<GetYear_of_manufacture() 
                <<" Price: "<<GetPrice()<<" Color:"<<GetColor()<<endl;
        } 
        virtual ~Verhical(){
            cout << "=>Destructor Verhical !!!\n";
        }
};


int Verhical::Next_ID = 1;
