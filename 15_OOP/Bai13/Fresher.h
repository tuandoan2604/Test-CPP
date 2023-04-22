#pragma once

#include "Employee.h"

class Fresher: public Employee{
    private:
        string Graduation_date;
        string Graduation_rank;
        string Education;

    public:
        Fresher(){
                Employee::SetEmployee_type(1);
        };
        
        string GetGraduation_date() const {
                return Graduation_date;
        }

        void SetGraduation_date() {
                cout << "Enter Graduation_date:";
                cin.ignore();
                getline(cin, Graduation_date);
        }

        string GetGraduation_rank() const {
                return Graduation_rank;
        }

        void SetGraduation_rank() {
                cout << "Enter Graduation_rank:";
                cin.ignore();
                getline(cin, Graduation_rank);
        }

        string GetEducation() const {
                return Education;
        }

        void SetEducation() {
                cout << "Enter Education:";
                cin.ignore();
                getline(cin, Education);
        }
        void Input(){
            Employee::Input();
            SetGraduation_date();
            SetGraduation_rank();
            SetEducation();
        }
        void showMe(){
            Employee::ShowInfo();
            cout <<"    Graduation_date: "<<Graduation_date<<"      Graduation_rank: "<<Graduation_rank<<"  Education: "<<Education<<endl;
        }
        ~Fresher(){
            cout << "=>Destructor Fresher!!! \n";
        }
};