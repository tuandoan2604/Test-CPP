#ifndef EXPERIENCE_H
#define EXPERIENCE_H

#include "Employee.h"

class Experience: public Employee
{
private:
    /* data */
    int expInYear;
    string proSkill;
public:
    Experience(/* args */);
    ~Experience();

    void showMe() override;
    void setup_information();
};

Experience::Experience(/* args */)
{
    setType(0);
}

Experience::~Experience()
{
}

void Experience::showMe()
{
    cout<< "[EXPERIENCE] ID: "<< getID()<< ", name: "<< getName()<< ", birthday: "<< getBirthday();
    cout<< ", phone: "<<getPhone()<< ", email: "<< getMail();
    cout<< "Employee type: "<< getType()<< ", employee count<< "<< getCount()<< endl;
    cout<< ", exp in year: "<< expInYear<< ", profressional skill: "<< proSkill<< endl;
}

void Experience::setup_information()
{
    Employee::setup_information();

    cout<< "Enter the year of experience: ";
    cin>> expInYear;

    cout<< "Enter the professional skill: ";
    cin.ignore();
    getline(cin, proSkill);
}
#endif