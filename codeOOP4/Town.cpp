#include "Town.h"
#include "Family.h"
#pragma once
#include <iostream>
#include "Person.h"
#include <vector>
#include <string>
using namespace std;

Town::Town()
{
    
    
}

void Town::setNumOfFamily(int numOfFamily)
{
    this->numOfFamily=numOfFamily;
}

int Town::getNumOfFamily()
{
    return numOfFamily;
}

void Town::addFamily()
{
    int numOfFamily;
    int numOfPeople;
    int address;
    Family* family;
    cout<<" Nhap so ho gia dinh trong khu pho :"<<endl;
    cin>> numOfFamily;
    setNumOfFamily(numOfFamily);
    for(int i=0; i< Town ::getNumOfFamily(); i++){
        cout<<"Nhap so nha :"<<endl;
        cin>> address;
        cout<<"Nhap so thanh vien trong gia dinh: "<<endl;
        cin>> numOfPeople;
        family= new Family(numOfPeople, address);
        family->addPerson();
        listFamily.push_back(family);
        cout<<"---------------"<<endl;

        
    }
}

void Town::display()
{
    cout<< "So ho gia dinh trong khu pho :"<< getNumOfFamily()<<endl;
    for(int i=0; i< Town :: getNumOfFamily();i++){
        
        listFamily[i]->display();
        cout<<"======================="<<endl;
    }
}
