#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher: public Person
{
private:
    /* data */
    double hard_salary;
    double bonus;
    double fine;
    // double take_home_pay;
public:
    Teacher(/* args */);
    ~Teacher();

    double getSalary();
};

Teacher::Teacher(/* args */)
{
    cout<< "Enter the teacher's hard salary: \n";
    cin>> hard_salary;

    cout<< "Enter the teacher's bonus: \n";
    cin>> bonus;

    cout<< "Enter the teacher's fine: \n";
    cin>> fine;

    // cout<< "Enter the teacher's take home pay: \n";
    // cin>> take_home_pay;
}

Teacher::~Teacher()
{
}

double Teacher::getSalary()
{
    return (hard_salary+bonus-fine);
}

#endif