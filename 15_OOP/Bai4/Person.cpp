#include "Person.h"

int Person::Next_Identity_Card_Num = 1;

string Person::GetName() const {
        return Name;
}

void Person::SetName() {
        cout <<"Enter name:";
        // cin.ignore();
        getline(cin, Name);
}

int Person::GetAge() const {
        return Age;
}

void Person::SetAge() {
        cout << "Enter Age";
        Cin_int(Age);
}

string Person::GetJob() const {
        return Job;
}

void Person::SetJob() {
        cout << "Enter Job:";
        cin.ignore();
        getline(cin, Job);
}

int Person::GetID() const {
        return Identity_Card_Num;
}
void Person::Input(){
        cout << "Identity_Card_Num: "<< Identity_Card_Num<<endl;
    SetName();
    SetAge();
    SetJob();
}
void Person::Show_information(){
    cout<<GetID()<<"      "<<GetName() <<"     "<<GetAge()<<"       "<<GetJob()<<endl;
}