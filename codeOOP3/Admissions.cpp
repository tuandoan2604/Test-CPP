#include "Admissions.h"
#pragma once
#include <iostream>
#include <string>
using namespace std;

Admissions::Admissions()
{
    
}

void Admissions::addCandidate()
{
    Candidates *candidate;
    int choose;
    bool check = true;
    int idNumber;
    string fullName;
    string address;
    int priority;
    double mathPoint;
    double physicPoint;
    double chemicalPoint;
    double biologyPoint;
    double literaturePoint;
    double historyPoint;
    double geographyPoint;
    cout << "Nhap so bao danh :" << endl;
    cin >> idNumber;
    cout << "Nhap ho va ten :" << endl;
    cin.ignore();
    getline(cin, fullName);
    
    cout << "Nhap dia chi :" << endl;
    cin.ignore();
    getline(cin, address);

    cout << "Nhap thu tu uu tien :" << endl;
    cin >> priority;

    do
    {
        cout << "Nhap 1 neu thi sinh khoi A " << endl;
        cout << "Nhap 2 neu thi sinh khoi B " << endl;
        cout << "Nhap 3 neu thi sinh khoi C " << endl;
        cout << "Nhap lua chon : " << endl;

        cin >> choose;

        switch (choose)

        {
        case KHOI_A:
            cout << "Nhap diem thi, chua co nhap 0" << endl;
            cout << "Nhap diem toan : " << endl;
            cin >> mathPoint;
            cout << "Nhap diem ly :" << endl;
            cin >> physicPoint;
            cout << "Nhap diem hoa :" << endl;
            cin >> chemicalPoint;
            candidate = new BlockA(idNumber, fullName, address, priority, mathPoint, physicPoint, chemicalPoint);
            listCandidate.push_back(candidate);
            check=false;
            break;
        case KHOI_B:
            cout << "Nhap diem thi, chua co nhap 0" << endl;
            cout << "Nhap diem toan : " << endl;
            cin >> mathPoint;
            cout << "Nhap diem hoa :" << endl;
            cin >> chemicalPoint;
            cout << "Nhap diem sinh :" << endl;
            cin >> biologyPoint;
            candidate = new BlockB(idNumber, fullName, address, priority, mathPoint, chemicalPoint, biologyPoint);
            listCandidate.push_back(candidate);
            
            check=false;
            break;
        case KHOI_C:
            cout << "Nhap diem thi, chua co nhap 0" << endl;
            cout << "Nhap diem van : " << endl;
            cin >> literaturePoint;
            cout << "Nhap diem su :" << endl;
            cin >> historyPoint;
            cout << "Nhap diem dia :" << endl;
            cin >> geographyPoint;
            candidate = new BlockC(idNumber, fullName, address, priority, literaturePoint, historyPoint, geographyPoint);
            listCandidate.push_back(candidate);
            check=false;
            
            break;
        default:
            cout << "Nhap lai lua chon" << endl;
        }

    } while (check);
}

void Admissions::showInformation()
{
    for (int i = 0; i < listCandidate.size(); i++)
    {
        listCandidate[i]->display();
    }
}

void Admissions::findById()
{
    int idNumber;
    bool check = true;
    cout << "Nhap so bao danh cua thi sinh can tim :" << endl;
    cin >> idNumber;

    for (int i = 0; i < listCandidate.size(); i++)
    {
        if (listCandidate[i]->getIdNumber() == idNumber)
        {
            cout << "Thong tin thi sinh" << endl;
            listCandidate[i]->display();
            check = false;
        }
    }
    if (check)
    {
        cout << "Khong co thi thi can tim" << endl;
    }
}

void Admissions::exitProgram3()
{
for (int i = 0; i < listCandidate.size(); i++)
            {
                delete (listCandidate[i]);
            }
            listCandidate.clear();
            exit(0);
            
}
