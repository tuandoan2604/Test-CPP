#include "Person7.h"
#pragma once

Person7::Person7()
{
}

Person7::Person7(string fullName, int age, string homeTown, int idTeacher, double netSalary, double bonusSalary, double penaltySalary)
{
    this->fullName = fullName;
    this->age = age;
    this->homeTown = homeTown;
    this->idTeacher = idTeacher;
    this->netSalary = netSalary;
    this->bonusSalary = bonusSalary;
    this->penaltySalary = penaltySalary;
    
}

void Person7::setFullName(string fullName)
{
    this->fullName = fullName;
}

void Person7::setAge(int age)
{
    this->age = age;
}

void Person7::setHomeTown(string homeTown)
{
    this->homeTown = homeTown;
}

void Person7::setNetSalary(double netSalary)
{
    this->netSalary = netSalary;
}

void Person7::setBonusSalary(double bonusSalary)
{
    this->bonusSalary = bonusSalary;
}

void Person7::setPenaltySalary(double penaltySalary)
{
    this->penaltySalary = penaltySalary;
}

void Person7::setGrossSalary(double grossSalary)
{
    this->grossSalary = grossSalary;
}

string Person7::getFullName()
{
    return fullName;
}

int Person7::getAge()
{
    return age;
}

string Person7::getHomeTown()
{
    return homeTown;
}

int Person7::getIdTeacher()
{
    return idTeacher;
}

double Person7::getNetSalary()
{
    return netSalary;
}

double Person7::getBonusSalary()
{
    return bonusSalary;
}

double Person7::getPenaltySalary()
{
    return penaltySalary;
}

double Person7::getGrossSalary()
{
    grossSalary = netSalary+bonusSalary-penaltySalary;
    return grossSalary;
}

void Person7::display()
{
    cout << "Ho va ten giao vien : " << getFullName() << endl;
    cout << "Tuoi :" << getAge() << endl;
    cout << "Que quan :" << getHomeTown() << endl;
    cout << "Ma so giao vien :" << getIdTeacher() << endl;
    cout << "Luong cung :" << getNetSalary() << endl;
    cout << "Thuong :" << getBonusSalary() << endl;
    cout << "Tien phat :" << getPenaltySalary() << endl;
    cout << "Luong thuc :" << getGrossSalary() << endl;
}
