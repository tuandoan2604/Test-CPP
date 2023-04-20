#include "Family.h"
#pragma once
#include <iostream>
#include "Person.h"
#include <vector>
#include <string>
using namespace std;

Family::Family()
{
}

Family::Family(int numOfPeople, int address)
{
    this->numOfPeople = numOfPeople;
    this->address = address;
}

void Family::setNumOfPeople(int numOfPeople)
{
    this->numOfPeople = numOfPeople;
}

void Family::setAddress(int address)
{
    this->address = address;
}

int Family::getNumOfPeople()
{
    return numOfPeople;
}

int Family::getAddress()
{
    return address;
}

void Family::addPerson()

{

    for (int i = 0; i < Family ::numOfPeople; i++)
    {
        Person *person;
        string fullName;
        int age;
        string job;
        int idNumber;

        bool checkId = true;
        cout << "Nhap ho va ten :" << endl;
        cin.ignore();
        getline(cin, fullName);

        cout << "Nhap tuoi :" << endl;
        
        cin >> age;
        cout << "Nhap nghe nghiep :" << endl;
        cin.ignore();
        getline(cin, job);

        do
        {
            checkId=true;
            cout << "Nhap so chung minh nhan dan :" << endl;
            
            cin >> idNumber;
            for (int i = 0; i < listPeople.size(); i++)
            {
                if (listPeople[i]->getIdNumber() == idNumber)
                {
                    cout << "So chung minh nhan dan da ton tai, moi nhap lai!" << endl;
                    checkId = false;
                    break;
                }
            }
        } while (!checkId);
        cout<<"******"<<endl;
        person = new Person(fullName, age, job, idNumber);
        listPeople.push_back(person);
    }
}

void Family::display()
{
    cout << "So nha :" << getAddress() << endl;
    cout << "So nguoi trong gia dinh :" << getNumOfPeople() << endl;
    for (int i = 0; i < Family::getNumOfPeople(); i++)
    {
        listPeople[i]->display();
    }
}
