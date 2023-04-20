#pragma once
#include "Person.h"
#include "Teacher.h"
#include <vector>
using namespace std;

class School{
    private:
            vector <Teacher*> List_Teacher;
    public:
        void Inset_teacher(){
            Teacher *Tc = new Teacher();
            Tc->Input();
            List_Teacher.push_back(Tc);
        }
        void Delete_teacher(){
            int ID_teacher;
            cout << "Enter ID of teacher: ";
            cin >> ID_teacher;
            for(int i = 0; i< List_Teacher.size() ; i++ ){
                if( List_Teacher[i]->Get_Person()->GetID_teacher() == ID_teacher ){
                    delete List_Teacher[i];
                    List_Teacher.erase(List_Teacher.begin() + i);
                }
            } 
        }
        void Calculate_Salary(){
            int ID_teacher;
            cout << "Enter ID teacher: ";
            cin >> ID_teacher;
            for ( Teacher * Tc : List_Teacher ){
                if(Tc->Get_Person()->GetID_teacher() == ID_teacher){
                    Tc->Show_information();
                    cout << "Salary: "<<  Tc->GetGross_Salary() <<endl;
                }
            }
        }

        ~School(){
            cout << "=>Destructor School!!!\n";
            for (Teacher * tc : List_Teacher){
                delete tc;
            }
            List_Teacher.clear();
        }

};