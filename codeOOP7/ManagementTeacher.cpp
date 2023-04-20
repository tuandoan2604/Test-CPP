#include "ManagementTeacher.h"
#pragma once
#include <string>
#pragma once

ManagementTeacher::ManagementTeacher()
{
}
void ManagementTeacher::addTeacher()
{
    string fullName;
    int age;
    string homeTown;
    int idTeacher;
    double netSalary;
    double bonusSalary;
    double penaltySalary;
    Person7 *person;
    cout << "Nhap ten giao vien :" << endl;
    cin.ignore();
    getline(cin, fullName);
    cout << "Nhap tuoi :" << endl;
    cin >> age;
    cout << "Nhap que quan :" << endl;
    cin.ignore();
    getline(cin, homeTown);
    cout << "Nhap ma giao vien :" << endl;
    cin >> idTeacher;
    cout << "Nhap luong cung :" << endl;
    cin >> netSalary;
    cout << "Nhap thuong :" << endl;
    cin >> bonusSalary;
    cout << "Nhap tien phat :" << endl;
    cin >> penaltySalary;
    person = new Person7(fullName, age, homeTown, idTeacher, netSalary, bonusSalary, penaltySalary);
    listTeacher.push_back(person);
}

void ManagementTeacher::deleteTeacher()
{
    int idTeacher;
    cout << "Nhap ma giao vien :" << endl;
    cin >> idTeacher;
    bool check = true;
    for (int i = 0; i < listTeacher.size(); i++)
    {
        if (listTeacher[i]->getIdTeacher() == idTeacher)
        {
            delete (listTeacher[i]);
            listTeacher.erase(listTeacher.begin() + i);
            cout << "Da xoa!" << endl;
            check = false;
        }
        if (check)
        {
            cout << "Khong tim thay ma giao vien" << endl;
        }
    }
}

void ManagementTeacher::calculationSalary()
{
    int idTeacher;
    double grossSalary;
    cout << "Nhap ma giao vien :" << endl;
    cin >> idTeacher;
    bool check = true;
    for (int i = 0; i < listTeacher.size(); i++)
    {
        if (listTeacher[i]->getIdTeacher() == idTeacher)
        {
            cout<<"Luong thuc nhan cua giao vien : "<<listTeacher[i]->getGrossSalary()<<endl;
            check=false;
        }
       
    }
     if (check)
        {
            cout << "Khong tim thay ma giao vien" << endl;
        }
}
