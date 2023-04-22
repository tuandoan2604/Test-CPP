#pragma once
#include "Verhical.h"
#include "Car.h"
#include "Motobike.h"
#include "Truck.h"
#include <vector>

#define CAR 1
#define MOTOBIKE 2
#define TRUCK 3

using namespace std;

class Traffic_management{
    private:
        vector <Verhical *> List_Verhical;
    public:
        void Insert_Verhical(){
            int type;
            cout << "Choose type Verhical (1. Car / 2. Motobike / 3. Truck): ";
            cin >>type;

            Verhical* verhical;
            if (type == CAR) {
                verhical = new Car();
            } else if (type == MOTOBIKE) {
                verhical = new Motobike();
            } else if (type == TRUCK) {
                verhical = new Truck();
            } else {
                std::cout << "Error! Invalid selection." << endl;
                return;
            }
            // Nhập thông tin sau khi chọn loại class
            verhical->Input();
            List_Verhical.push_back(verhical);
        }
        void Delete_Verhical(){
            int ID;
            cout << "Enter ID verhical: ";
            cin >> ID;
            for( int i = 0; i < List_Verhical.size(); i ++ ){
                if( List_Verhical[i]->Get_ID() == ID ){
                    delete List_Verhical[i];
                    List_Verhical.erase(List_Verhical.begin() + i);
                }
            }
        }
        void Search_By_Manufacturer(){
            string Manufacturer;
            cout <<"Enter Manufacturer: ";
            cin.ignore();
            getline(cin, Manufacturer);
            for( Verhical * verhical : List_Verhical ){
                if( verhical->GetManufacturer() == Manufacturer ){
                    verhical->Show_Information();
                }
            }
        }
        void Search_By_Color(){
            string Color;
            cout <<"Enter Color: ";
            cin.ignore();
            getline(cin, Color);
            for( Verhical * verhical : List_Verhical ){
                if( verhical->GetColor() == Color ){
                    verhical->Show_Information();
                }
            }
        }
        void Show_Information(){
            for( Verhical * verhical : List_Verhical ){
                    verhical->Show_Information();

            }
        }
        ~Traffic_management(){
            cout <<"=>Destructor Traffic_management !!!\n";
            for( Verhical * verhical: List_Verhical){
                delete verhical;
            }
            List_Verhical.clear();
        }
};
