#ifndef FRESHER_H
#define FRESER_H

#include "Employee.h"

class Fresher: public Employee
{
private:
    /* data */
    string graduation_date;
    char graduation_rank;
    string education;
public:
    Fresher(/* args */);
    ~Fresher();

    void showMe() override;

    void setup_information();
};

Fresher::Fresher(/* args */)
{
    setType(1);
}

Fresher::~Fresher()
{
}

void Fresher::showMe()
{
    cout<< "[EXPERIENCE] ID: "<< getID()<< ", name: "<< getName()<< ", birthday: "<< getBirthday();
    cout<< ", phone: "<<getPhone()<< ", email: "<< getMail();
    cout<< "Employee type: "<< getType()<< ", employee count<< "<< getCount()<< endl;
    cout<< ", graduation date: "<< graduation_date<< ", graduation rank: "<< graduation_rank <<", graduation school"<< education<< endl;
}

void Fresher::setup_information()
{
    Employee::setup_information();

    cout<< "Enter the graduation date: ";
    getline(cin, graduation_date);

    cout<< "Enter the graduation rank: ";
    cin>> graduation_rank;

    cout<< "Enter the school of education: ";
    cin.ignore();
    getline(cin, education);
}

#endif