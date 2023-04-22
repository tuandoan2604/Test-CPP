#pragma once
#include "Employee.h"
class Experience: public Employee{
    private:
        int ExpInYear;
        string ProSkill;

    public:
        Experience(){
            Employee::SetEmployee_type(0);
        };
        
        int GetExpInYear() const {
                return ExpInYear;
        }

        void SetExpInYear() {
                cout <<"Enter ExpInYear:"<<endl;
                cin >> ExpInYear;
        }

        string GetProSkill() const {
                return ProSkill;
        }

        void SetProSkill() {
                cout << "Enter ProSkill: "<<endl;
                cin.ignore();
                getline(cin, ProSkill);
        }

        void Input(){
            Employee::Input();
            SetExpInYear();
            SetProSkill();
        }
        void showMe(){
            Employee::ShowInfo();
            cout <<"    ExpInYear: "<<ExpInYear<<"      ProSkill: "<<ProSkill<<endl;
        }
        ~Experience(){
            cout << "=>Destructor Experience!!! \n";
        }


};