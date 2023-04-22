#pragma once

#include "Employee.h"

class Intern : public Employee{
    private:
        string Majors;
        int Semester;
        string University_name;

    public:
        Intern(){
                Employee::SetEmployee_type(2);
        };
        
        string GetMajors() const {
                return Majors;
        }

        void SetMajors() {
                cout << "Enter Majors:";
                cin.ignore();
                getline(cin, Majors);
        }

        int GetSemester() const {
                return Semester;
        }

        void SetSemester() {
                cout << "Enter Semester:";
                cin >>Semester;
        }

        string GetUniversity_name() const {
                return University_name;
        }

        void SetUniversity_name() {
                cout <<"Enter University_name:";
                cin.ignore();
                getline(cin, University_name);
        }
        void Input(){
            Employee::Input();
            SetMajors();
            SetSemester();
            SetUniversity_name();
        }
        void showMe(){
            Employee::ShowInfo();
            cout <<"    Majors: "<<Majors<<"      Semester: "<<Semester<<"  University_name: "<<University_name<<endl;
        }
        ~Intern(){
            cout << "=>Destructor Intern!!! \n";
        }
};