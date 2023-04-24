#include "Employee.h"
#pragma once
#include <iostream>
using namespace std;
#define EXCELLENT 1
#define GOOD 2
#define MEDIUM 3
class Fresher : public Employee
{
private:
    string graduationDate;
    int graduationRank;
    string education;

public:
    string getGraduationDate()
    {
        return this->graduationDate;
    }
    void setGraduationDate(string graduationDate)
    {
        this->graduationDate = graduationDate;
    }
    int getGraduationRank()
    {
        return this->graduationRank;
    }
    void setGraduationRank(int graduationRank)
    {
        this->graduationRank = graduationRank;
    }
    string getEducation()
    {
        return this->education;
    }
    void setEducation(string education)
    {
        this->education = education;
    }
    int getEmployeeType(){return FRESHER;}

    Fresher(/* args */){};
    Fresher(int ID, string fullName, string birthDay, string phone, string email, int employeeType, string graduationDate, int graduationRank, string education)
        : Employee(ID, fullName, birthDay, phone, email, employeeType)
    {
        this->graduationDate = graduationDate;
        this->graduationRank = graduationRank;
        this->education = education;
    }
    void showMe()
    {
        Employee ::showMe();
        cout << "Employee type : FRESHER" << endl;
        cout << "Date of graduation :" << getGraduationDate() << endl;
        cout << "Rank of graduation :" << getGraduationRank() << endl;
        cout << "Education :" << getEducation() << endl;
    }
    ~Fresher(){};
};
