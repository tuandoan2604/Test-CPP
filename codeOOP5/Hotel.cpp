#include "Hotel.h"
#pragma once
#include<iostream>
#include <string>
using namespace std;

Hotel::Hotel()
{
}

void Hotel::addGuest()
{
    
    Person5 * person;
    string fullName5;
    int age5;
    int idNumber5;
    int costRoom;
    int numOfRentDay;
    cout <<"Nhap ten khach hang :"<<endl;
    cin.ignore();
    getline(cin,fullName5);
    cout<<"Nhap tuoi khach hang :"<<endl;
    cin>>age5;
    bool check=false;
    do
    {
        cout<< "Nhap so chung minh nhan dan :"<<endl;
        cin>>idNumber5;
        for (int i = 0; i < listPeople.size(); i++)
        {
            if (listPeople[i]->getIdNumber5()==idNumber5)
            {
                cout<<"So chung minh thu da duoc dung, xin moi nhap lai!"<<endl;
                check=true;
                break;
            }
            
        }
        
    } while (check);
    
    
    int choose;
    do
    {
        cout<<"chon phong"<<endl;
        cout<<"1. chon phong A gia 500$"<<endl;
        cout<<"2. chon phong B gia 300$"<<endl;
        cout<<"3. chon phong C gia 100$"<<endl;
        cout<<"Nhap lua chon"<<endl;
        cin>>choose;
        switch (choose)
        {
        case 1:
            cout<<"Ban chon phong loai A!"<<endl;
            costRoom=500;
            
            break;
        case 2:
            cout<<"Ban chon phong loai B!"<<endl;
            costRoom=300;
            
            break;
        case 3:
            cout<<"Ban chon phong loai C!"<<endl;
            costRoom=100;
            
            break;
        
        default:
            cout<<"Nhap lai lua chon"<<endl;
            check = true;
        }


    } while (check);
    
    cout<<"Nhap so ngay thue :"<<endl;
    cin>> numOfRentDay;
    person= new Person5(fullName5, age5, idNumber5, costRoom, numOfRentDay);
    listPeople.push_back(person);

    
}

void Hotel::deleteGuest()
{
    int idNumber5;
    bool check=true;
    cout<< "Nhap so chung minh thu khach hang can xoa :"<<endl;
    cin>>idNumber5;
    for (int i = 0; i < listPeople.size(); i++)
        {
            if (listPeople[i]->getIdNumber5()==idNumber5)
            {
                delete(listPeople[i]);
                listPeople.erase(listPeople.begin()+i);
                cout<< "Da xoa!"<<endl;
                check=false;
                break;

            }
            if(check){
                cout<<"Khong thay khach hang dung chung minh thu nay!"<<endl;
            }
        }

}

void Hotel::getBill()
{
    int idNumber5;
    cout<< "Nhap so chung minh thu khach hang can tinh tien :"<<endl;
    cin>>idNumber5;
    bool check=true;
    int bill;
    for (int i = 0; i < listPeople.size(); i++)
        {
            if (listPeople[i]->getIdNumber5()==idNumber5)
            {
             bill = listPeople[i]->getCostRoom()*listPeople[i]->getNumOfRentDay();
             cout<<"Tien phai thanh toan :"<< bill<<endl;   
             check=false;
             break;   
            }
            
        }
        if(check){
                cout<<"Khong thay khach hang dung chung minh thu nay!"<<endl;
            }
}

void Hotel::exitProgram5()
{
    for (int i = 0; i < listPeople.size(); i++)
            {
                delete (listPeople[i]);
            }
            listPeople.clear();
            exit(0);
}
