#pragma once
#include "Person.h"
#include <vector>

class Room{
    private:
        int Room_Number;
        int Number_Day__Hire;
        Person * person = new Person();
        int Fee_Room_Per_Day;
        int Total_Money;
    public:
        void Set_Room_Number(){
            cout << "Enter Number of room: ";
            cin >> Room_Number;
        }
        int Get_Room_Number(){return Room_Number;}

        void Set_Number_Day__Hire(){
            cout << "Enter Day of hire: ";
            cin >> Number_Day__Hire;
        }
        void Insert_Person(){
            person->Input();
            
        }
        void Set_Fee_Room_Per_Day(){
            cout << "Enter Fee_Room_Per_Day ($) :  ";
            cin >>Fee_Room_Per_Day;
        }
        void Set_Total_Money(){
            Total_Money = Number_Day__Hire * Fee_Room_Per_Day;
        }
        Person* Get_person(){
            return person;
        }
        int Get_Total_Money(){return Total_Money;}
        ~Room(){
            delete person;
            cout << "=>Destructor Room!!!\n";
        }
};