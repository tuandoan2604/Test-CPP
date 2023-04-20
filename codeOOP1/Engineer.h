#pragma once
#include "Cadres.h"
class Engineer : public Cadres
{
private:
    /* data */
    string specialized;
public:
    Engineer(/* args */);
    Engineer(string fullName, int age, string gender, string address, string specialized);
    void setSpecialized(string specialized);
    string getSpecialized();
    void display();
    ~Engineer();
};

