#include "Cadres.h"
#pragma once
Cadres::Cadres()
{
    /*
    cout << "Nhap ten can bo: " << endl;
        cin.ignore();
        getline(cin, fullName);
        cout << "Nhap tuoi can bo: " << endl;
        cin >> this->age;
        while (true)
        {
            cout << "Chon 1 neu la Nam" << endl;
            cout << "Chon 2 neu la Nu" << endl;
            cout << "Chon 3 neu la Khac" << endl;
            cout << "Nhap gioi tinh: " << endl;
            int choose;
            cin >> choose;
            if (choose == 1 || choose == 2 || choose == 3)
            {
                switch (choose)
                {
                case 1:
                    
                    gender = "Nam";
                    break;
                case 2:
                    
                    gender = "Nu";
                    break;
                case 3:
                    
                    gender = "Khac";
                    break;
                default:
                    break;
                }
                break;
            }
            else
            {
                cout << "Nhap lai" << endl;
            }
        }

        cout << "Nhap dia chi : " << endl;
        cin.ignore();
        getline(cin, address);

    */
}

Cadres::~Cadres()
{
}
Cadres ::Cadres(string fullName, int age, string gender, string address)
{
    this->fullName = fullName;
    this->age = age;
    this->gender = gender;
    this->address = address;
}
string Cadres::getFullName(){
    return fullName;
}
int Cadres::getAge(){
    return age;
}
string Cadres ::getGender(){
    return gender;
}
string Cadres :: getAddress(){
    return address;
}
void Cadres :: setFullName(string fullName) {
    this->fullName=fullName;
}
void Cadres ::setAge(int age){
    this->age=age;
}
void Cadres :: setGender(string gender){
    this->gender=gender;
}
void Cadres :: setAddress(string address){
    this->address = address;
}
void Cadres :: display (){
    cout << " Ten can bo :"<< fullName << endl;
    cout << " Tuoi :"<< age<<endl;
    cout << " Gioi tinh :"<< gender<<endl;
    cout << " Dia chi :" << address<<endl;
}