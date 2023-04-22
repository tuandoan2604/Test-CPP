#include "Candidate.h"

int Candidate::Next_ID = 1;

int Candidate::GetID() const {
    return ID;
}

string Candidate::GetName() const {
    return Name;
}

void Candidate::SetName() {
    cout << "Enter name of candidate:";
    cin.ignore();
    getline(cin, Name);
}

string Candidate::GetAddress() const {
    return Address;
}

void Candidate::SetAddress() {
    cout<<"Enter Address of candidate:";
    // cin.ignore();
    getline(cin, Address);
}

int Candidate::GetPriority() const {
    return Priority;
}

void Candidate::SetPriority() {
    cout << "Enter Priority level: ";
    Cin_int(Priority);
}

void Candidate::Show_Information(){
    cout<<GetID()<<"   "<<GetName()<< "    " <<GetAddress()<<"     "<<GetPriority() <<endl;
}

void Candidate::Input(){
    cout<< "ID: "<<ID<<endl;
    SetName();
    SetAddress();
    SetPriority();
}