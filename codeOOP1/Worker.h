#pragma once
#include <iostream>

#include "Cadres.h"
using namespace std;

class Worker : public Cadres
{
private:
    /* data */
    int level;

public:
    Worker();
    Worker(string fullName, int age, string gender, string address, int level) ;
    void setLeveL(int level);
    int getLevel();
    void display();
    ~Worker();
};
