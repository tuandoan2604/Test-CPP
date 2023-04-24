#include "Employee.h"
#pragma once
#include <iostream>
using namespace std;
class Experience : public Employee
{
private:
    int expInYear;
    string proSkill;

public:
    int getExpInYear()
    {
        return this->expInYear;
    }
    void setExpInYear(int expInYear)
    {
        this->expInYear = expInYear;
    }
    string getProSkill()
    {
        return this->proSkill;
    }
    void setProSkill(string proSkill)
    {
        this->proSkill = proSkill;
    }

    Experience(/* args */){};
    Experience(int ID, string fullName, string birthDay, string phone, string email, int employeeType, int expInYear, string proSkill)
        : Employee(ID, fullName, birthDay, phone, email, employeeType)
    {
        this->expInYear = expInYear;
        this->proSkill = proSkill;
    }
    void showMe()
    {
        Employee::showMe();
        cout << "Employee type: EXPERIENCE" << endl;
        cout << "Years of experience :" << getExpInYear() << endl;
        cout << "Skill :" << getProSkill() << endl;
    }
    int getEmployeeType(){return EXPERIENCE;}

    ~Experience(){};
};
