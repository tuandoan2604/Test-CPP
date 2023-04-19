#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person{
    private:
        string Name;
        int Age;
        string Identity_Card_Number;
    public:
        void Set_Name(){
            cout << "Enter Name:";
            cin.ignore();
            getline(cin, Name);
        }

        string Get_Name(){
            return Name;
        }

        void Set_Age(){
            cout << "Enter age:";
            cin  >> Age;
        }
        int Get_Age(){ return Age;}

        void Set_Identity_Card_Number(){
            cout<< "Enter Identity_Card_Number:";
            // cin.ignore();
            getline(cin,Identity_Card_Number);
        }
        string Get_Identity_Card_Number(){
            return Identity_Card_Number;
        }

        void Input(){
            Set_Name();
            Set_Identity_Card_Number();
            Set_Age();
        }
        ~Person(){
            cout << "=>Destructor Person!!!\n";
        }

};
