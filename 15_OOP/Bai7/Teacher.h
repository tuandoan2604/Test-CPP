#pragma once
#include "Person.h"


class Teacher{
    private:
        Person * person = new Person();
        int Net_Salary;
        int Bonus_Salary;
        int Fine;
        int Gross_Salary;

    public:
        int GetNet_Salary() const {
                return Net_Salary;
        }

        void SetNet_Salary() {
                cout << "Enter Net_Salary: ";
                cin >> Net_Salary;
        }  
        int GetBonus_Salary() const {
                return Bonus_Salary;
        }

        void SetBonus_Salary() {
                cout << "Enter Bonus Salary: ";
                cin >> Bonus_Salary;
        }

        int GetFine() const {
                return Fine;
        }

        void SetFine() {
                cout << "Enter Fine: ";
                cin >>Fine;
        }

        int GetGross_Salary() const {
                return Gross_Salary;
        }

        void SetGross_Salary() {
                Gross_Salary = Net_Salary + Bonus_Salary - Fine;
        }

        Person* Get_Person() const{
                return person; 
        }

        void Input(){
                person->Input();
                SetNet_Salary();
                SetBonus_Salary();
                SetFine();
                SetGross_Salary();
        }
        void Show_information(){
                person->Show_information();
                cout<<"Net_Salary: "<< GetNet_Salary() <<"  Bonus_Salary: "<<GetBonus_Salary()<<" Fine:"<<GetFine()<<endl;
        }

        ~Teacher(){
                cout << "=>Destructor Teacher!!!\n";
                delete person;
        }

};











