#include "Family.h"

void Family::Insert_Member( ){
    int num_member;
    cout << "Enter number of member: ";
    Cin_int(num_member);
    cin.ignore();
    
    for ( int i = 0; i < num_member ; i++){
        Person * person = new Person();
        person->Input();
        List_Member.push_back(person);
    }
}

void Family::Delele_Member(){
    int ID;
    cout<<"Enter Identity Card Number of Member:";
    Cin_int(ID);
    for( Person * ps: List_Member ){
        if(ps->GetID() == ID ){
            delete ps;
        }
    } 
    Number_Of_Member--; 
}

int Family::GetNumber_Of_Member() const {
        return Number_Of_Member;
}

void Family::SetNumber_Of_Member() {
        cout << "Enter number of member: ";
        Cin_int(Number_Of_Member);
}

int Family::GetHouse_Number() const {
        return House_Number;
}

void Family::Input(){
    SetNumber_Of_Member();
    for (int i = 0; i < Number_Of_Member; i++){
        Insert_Member();
    }
}

void Family::Show_Information(){
    cout<< "House_Number: "<<House_Number<<endl;
    for (Person * person : List_Member){
        person->Show_information();
    }
}

