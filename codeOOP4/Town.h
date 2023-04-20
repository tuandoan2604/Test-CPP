#include <vector>
#include <iostream>
#include "Family.h"
#pragma once
using namespace std;
class Town
{
private:
    int numOfFamily;
    vector<Family*> listFamily; 
public:
    Town(/* args */);
    void setNumOfFamily(int numOfFamily);
    int getNumOfFamily();
    void addFamily();
    void display();
};


