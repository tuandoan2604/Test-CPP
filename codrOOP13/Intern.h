#include "Employee.h"
#pragma once
#include <iostream>
using namespace std;
class Intern : public Employee
{
private:
    string majors;
    int semester;
    string universityName;

public :
    string getMajors()
    {
        return this->majors;
    }
    void setMajors(string majors)
    {
        this->majors = majors;
    }
    int getSemester()
    {
        return this->semester;
    }
    void setSemester(int semester)
    {
        this->semester = semester;
    }
    string getUniversityName()
    {
        return this->universityName;
    }
    void setUniversityName(string universityName)
    {
        this->universityName = universityName;
    }
    int getEmployeeType(){return INTERN;}

    Intern(/* args */){};
    Intern(int ID, string fullName, string birthDay, string phone, string email, int employeeType, string majors, int semester, string universityName)
        : Employee(ID, fullName, birthDay, phone, email, employeeType)
    {
        this->majors = majors;
        this->semester = semester;
        this->universityName = universityName;
    }
    void showMe()
    {
        Employee ::showMe();
        cout << "Employee type : INTERN" << endl;
        cout << "Majors :" << getMajors() << endl;
        cout << "Semester :" << getSemester() << endl;
        cout << "University :" << getUniversityName() << endl;
    }
    ~Intern(){};
};
