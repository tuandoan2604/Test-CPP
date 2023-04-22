#pragma once
#include "Customer.h"
#include "Bill.h"
#include <vector>

using namespace std;

class Manage_Bill{
    private:
        vector < Bill * > List_Bill;
    public:
        void Insert_Bill(){
            Bill* bill = new Bill();
            bill->Input();
            List_Bill.push_back(bill);
        }
        void Edit_Information_Customer(){
            int ID;
            cout << "Enter ID Electric Meter: ";
            cin>> ID;  
            for( Bill * bill : List_Bill ){
                if( bill->Get_Customer()->GetID_Electric_Meter() == ID ){
                    bill->Get_Customer()->SetName();
                    bill->Get_Customer()->SetHouse_Number();
                }
            } 
        }
        void Delete_Bill(){
            int ID;
            cout << "Enter ID Electric Meter: ";
            cin>> ID;  
            for( int i = 0 ; i < List_Bill.size(); i++ ){
                if( List_Bill[i]->Get_Customer()->GetID_Electric_Meter() == ID ){
                    delete List_Bill[i];
                    List_Bill.erase(List_Bill.begin() + i);
                }
            }
        }
        void Show_Information(){
            for(Bill * bill : List_Bill){
                bill->Show_Information();
            }
        }
        ~Manage_Bill(){
            cout << "=>Destructor Manage Bill !!!\n";
            for( Bill * bill : List_Bill){
                delete bill;
            }
            List_Bill.clear();
        }
};