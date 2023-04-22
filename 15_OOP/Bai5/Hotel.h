#pragma once
#include "Person.h"
#include "Room.h"
#include <iostream>
using namespace std;


class Hotel{
    private:
        vector < Room* > List_Room;
    public:
        void Insert_Custumer(){
            Room* room = new Room();
            room->Insert_Person();
            room->Set_Room_Number();
            room->Set_Fee_Room_Per_Day();
            room->Set_Number_Day__Hire();
            room->Set_Total_Money();
            List_Room.push_back(room);
        }
        void Delete_Customer(){
            string Identity_Card_Number;
            cout << "Enter Identity Card Number to Delete: ";
            cin.ignore();
            getline(cin, Identity_Card_Number);
            for( int i = 0; i< List_Room.size(); i++ ){
                if ( List_Room[i]->Get_person()->Get_Identity_Card_Number() == Identity_Card_Number ){
                    delete List_Room[i];
                }
                List_Room.erase(List_Room.begin()+i);
            }
        }
        void Show_Bill(){
            string Identity_Card_Number;
            cout <<"Enter Identity Card Number: ";
            cin.ignore();
            getline(cin, Identity_Card_Number);
            for( Room* room : List_Room ){
                if(room->Get_person()->Get_Identity_Card_Number() == Identity_Card_Number ){
                    cout << "Room: " <<room->Get_Room_Number()<<endl;
                    cout << "=>Total : " << room->Get_Total_Money() << "$\n";
                }
            }
        }
        void Show_information(){
            cout<<"===== Information ========\n";
            for( Room * room :List_Room ){
                cout<< "room: "<<room->Get_Room_Number()<<endl; 
                cout<<"   Name:"<<room->Get_person()->Get_Name() <<"    ID:"<<room->Get_person()->Get_Identity_Card_Number()<<endl;
            }
        }
        ~Hotel(){
            cout << "=>Destructor Hotel!!!\n";
            for( Room * room : List_Room ){
                delete room;
            }
            List_Room.clear();
        }
};