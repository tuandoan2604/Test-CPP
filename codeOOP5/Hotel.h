#pragma once
#include <iostream>
#include "Person5.h"
#include<vector>

using namespace std;
class Hotel
{
private:
    vector<Person5*> listPeople;
public:
    Hotel();
    void addGuest();
    void deleteGuest();
    void getBill();
    void exitProgram5();
    
};


