#pragma once

#include "Class_room.h"
#include "Student.h"

class School{
    private:    
        vector <Class_Room *> List_Class_Room;
    public:
        void Insert_Student(){
            string Name_class_room;
            cout <<"Enter Name of Class Room: ";
            cin.ignore();
            getline(cin, Name_class_room);

            for( Class_Room * cr: List_Class_Room ){
                if( cr->Get_Name_class_room() == Name_class_room){
                    cr->Insert_Student();
                }
            }
        }
        void Insert_class_room(){
            Class_Room *cr = new Class_Room();
            cr->Set_Name_class_room();
            List_Class_Room.push_back(cr);
        }

        void Find_Student_by_age(){
            int age;
            cout << "Enter Age:";
            cin >>age;
            cout << "==========Infor Age: "<<age<<" ==========\n";
            for ( Class_Room* cr: List_Class_Room ){
                for( Student* st : cr->Get_List_student() ){
                    if(st->Get_Age() == age){
                        st->Show_info();
                        cout<< "-Class room: "<<cr->Get_Name_class_room()<<endl;
                    }
                } 
            }
        }
        void Find_Student_by_age_and_address(){
            int age;
            string address;
            cout << "Enter Age:";
            cin >>age;
            cout << "Enter Address:";
            cin.ignore();
            getline(cin, address);

            cout << "==========Infor Age and Address==========\n";
            for ( Class_Room* cr: List_Class_Room ){
                for( Student* st : cr->Get_List_student() ){
                    if(st->Get_Age() == age && st->getAddress() == address){
                        st->Show_info();
                        cout<< "-Class room: "<<cr->Get_Name_class_room()<<endl;
                    }
                } 
            }
        }
        ~School(){
            cout <<"=>Destructor scholl !!!\n";
            for( Class_Room* cr: List_Class_Room ){
                delete cr;
            }
            List_Class_Room.clear();
        }

};