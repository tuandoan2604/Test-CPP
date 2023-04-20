#pragma once
#include <iostream>
using namespace std;
class Person7
{
private:
    string fullName;
    int age;
    string homeTown;
    int idTeacher;
    double netSalary;
    double bonusSalary;
    double penaltySalary;
    double grossSalary;

public:
    Person7(/* args */);
    Person7(string fullName, int age, string homeTown, int idTeacher, double netSalary, double bonusSalary, double penaltySalary);
    void setFullName( string fullName);
    void setAge(int age);
    void setHomeTown(string homeTown);
    void setNetSalary(double netSalary);
    void setBonusSalary(double bonusSalary);
    void setPenaltySalary(double penaltySalary);
    void setGrossSalary(double grossSalary);
    string getFullName();
    int getAge();
    string getHomeTown();
    int getIdTeacher();
    double getNetSalary();
    double getBonusSalary();
    double getPenaltySalary();
    double getGrossSalary();
    void display();
    
};


