#pragma once
#include "Exception.h"
#include "Certificate.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

//Abstract class
class Employee{
    private:
        int ID;
        string Full_Name;
        string Birthday;
        string Phone;
        string Email;
        int  Employee_type;  //0: Experience, 1: Fresher , 2: Intern
        int Employee_count;
        static int Next_Employee_count ;
        static int Next_ID;

        vector <Certificate*> List_Certificate;

    public:
        Employee(){ Employee_count = Next_Employee_count++;
                        ID = Next_ID++;}

        int GetID() const {
                return ID;
        }

        void SetID(){
            cout << "Enter ID: ";
            cin >> ID;
        }

        string GetFull_Name() const {
                return Full_Name;
        }

        void SetFull_Name() {
                cout << "Enter Full_Name:";
                // cin.ignore();
                Name_valid(Full_Name);
        }

        string GetBirthday() const {
                return Birthday;
        }

        void SetBirthday() {
                cout << "Enter Birthday: ";
                Date_valid(Birthday);
        }

        string GetPhone() const {
                return Phone;
        }

        void SetPhone() {
                cout << "Enter Phone:";
                // cin.ignore();
                Phone_valid(this->Phone);
        }

        string GetEmail() const {
                return Email;
        }

        void SetEmail() {
                cout << "Enter Email:";
                // cin.ignore();
                Email_valid(Email);
        }

        int GetEmployee_type() const {
            return Employee_type;
        }

        void SetEmployee_type(int Employee_type) {
            this->Employee_type = Employee_type;
        }

        int GetEmployee_count() const {
                return Employee_count;
        }

        vector <Certificate*> Get_Certificate(){
                return List_Certificate;
        }

        void Insert_Certificate(){
                Certificate* certificate = new Certificate();
                certificate->Input();
                List_Certificate.push_back(certificate);
        }
        
        virtual void Input(){
            cout << "Employee_count: " << Employee_count<<endl;
            SetFull_Name();
            SetBirthday();
            SetPhone();
            SetEmail();

            cout<< "====Enter Information of Certificate======\n";
            Insert_Certificate();
        }

        // pure virtual Function
        virtual void showMe() = 0;

        void ShowInfo (){
            cout << "Employee_count: " << Employee_count<<"     ID: "<< ID<<endl;
            cout << "   Full_Name: " <<Full_Name<<"      Birthday: " << Birthday <<endl;
            cout << "   Phone: "<<Phone<<"     Email: "<<Email<<endl;
            cout << "   Employee_type: "<<Employee_type<<endl;
            for( Certificate * certificate: List_Certificate ){
                 certificate->Show_information();
            }            
        }
        virtual ~Employee(){
            cout << "=>Destructor Employee !!!\n";
            for( Certificate * certificate: List_Certificate ){
                delete certificate;
            }
            List_Certificate.clear();
        }

};

int Employee::Next_Employee_count = 1;
int Employee::Next_ID = 1000;