#include <iostream>
#ifndef Cadres_H
#define Cadres_H
using namespace std;

class Cadres
{
private:
    /* data */

    string fullName;
    int age;
    string gender;
    string address;

public:
    Cadres();
    Cadres(string fullName,
           int age,
           string gender,
           string address);
    void setFullName(string fullName);
    void setAge(int age);
    void setGender(string gender);
    void setAddress(string address);
    string getFullName();
    int getAge();
    string getGender();
    string getAddress();
    virtual void display();
    virtual ~Cadres();
};
#endif
