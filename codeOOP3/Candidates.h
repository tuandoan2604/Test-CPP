#pragma once
#include <iostream>
using namespace std;
class Candidates
{
private:
    int idNumber;
    string fullName;
    string address;
    int priority;

public:
    Candidates();
    Candidates(int idNumber, string fullName, string address, int priority);
    void setIdNumber(int idNumber);
    void setFullName(string fullName);
    void setAddress(string address);
    void setPriority(int priority);
    int getIdNumber();
    string getFullName();
    string getAddress();
    int getPriority();
    virtual void display();
    virtual int block();
     virtual ~Candidates();
};

