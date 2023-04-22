#pragma once
#include "Student.h"

class Card{
    private:
        int ID;
        string Borrow_Day;
        string Return_Day;
        int ID_Book;
        static int next_ID;
        Student * student = new Student();
    public:
        Card(){
            ID = next_ID++;
        }
        string GetBorrow_Day() const {
                return Borrow_Day;
        }

        void SetBorrow_Day() {
                cout << "Enter Borrow_Day: ";
                cin.ignore();
                getline(cin, Borrow_Day);
        }

        string GetReturn_Day() const {
                return Return_Day;
        }

        void SetReturn_Day() {
                cout << "Enter Return_Day: ";
                cin.ignore();
                getline(cin, Return_Day);
        }

        int GetID_Book() const {
                return ID_Book;
        }

        void SetID_Book() {
                cout << "Enter ID_Book: ";
                cin >> ID_Book;
        }

        int Get_ID(){
            return ID;
        }
        void Input(){
            cout << "ID: "<<Get_ID()<<endl;
            SetID_Book();
            SetBorrow_Day();
            SetReturn_Day();
            student->Input();
        }
        void Show_Information(){
            cout << "ID: "<< Get_ID()<<endl;
            cout <<"ID book:" << GetID_Book() << "  Borrow day: "<<GetBorrow_Day() <<"  Retrun Day: "<<GetReturn_Day()<<endl;
            student->Show_information();
        }
        ~Card(){
            cout << "=>Destructor Card!!!\n";
            delete student;
        }
};

int Card::next_ID = 10000;