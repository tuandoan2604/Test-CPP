#pragma once
#include "Student.h"
#include <vector>
using namespace std;
class Class_Room{
    private:
        vector <Student *> List_Student;
        string Name_class_room;
    public:
        void Insert_Student(){
            Student *student = new Student();
            student->Input();
            List_Student.push_back(student);
        }

        void Set_Name_class_room(){
            cout << "Enter Name_class_room: ";
            cin.ignore();
            getline(cin, Name_class_room);
        }

        string Get_Name_class_room(){return Name_class_room;}

        vector <Student *> Get_List_student(){
            return List_Student;
        }
        
        ~Class_Room(){
            cout <<"=>Destructor Class Room!!!\n"; 
            for( Student* st : List_Student  ){
                delete st;
            }
            List_Student.clear();
        }
};