#pragma once
#include <iostream>
#include "Person.h"
#include <vector>
using namespace std;
class Family
{
private:
    vector<Person*> listPeople;
    int numOfPeople;
    int address;
public:
    Family();
    Family(int numOfPeople,int address );
    void setNumOfPeople(int numOfPeople);
    void setAddress(int address);
    int getNumOfPeople();
    int getAddress();
    void addPerson();
    void display();
};


