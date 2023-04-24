#ifndef INTERN_H
#define INTERN_H

#include "Employee.h"

class Intern: public Employee
{
private:
    /* data */
    string majors;
    int semester;
    string university_name;
public:
    Intern(/* args */);
    ~Intern();

    void showMe() override;
    void setup_information();
};

Intern::Intern(/* args */)
{
    setType(3);
}

Intern::~Intern()
{
}

void Intern::showMe()
{
    cout<< "[EXPERIENCE] ID: "<< getID()<< ", name: "<< getName()<< ", birthday: "<< getBirthday();
    cout<< ", phone: "<<getPhone()<< ", email: "<< getMail();
    cout<< "Employee type: "<< getType()<< ", employee count<< "<< getCount()<< endl;
    cout<< ", major: "<< majors<< ", current semester: "<< semester<< ", university: "<<university_name<< endl;
}

void Intern::setup_information()
{
    Employee::setup_information();

    cout<< "Enter the major: ";
    getline(cin, majors);

    cout<< "Enter the current semester: ";
    cin>> semester;

    cout<< "Enter the university's name: ";
    cin.ignore();
    getline(cin, university_name);
}

#endif