#pragma once 
#include "Cadres.h"
using namespace std;
class Staff : public Cadres
{
private:
    /* data */
    string job;
public:
    Staff(/* args */);
    Staff(string fullName, int age, string gender, string address, string job);
    void setJob(string job);
    string getJob();
    void display();
    ~Staff();
};

