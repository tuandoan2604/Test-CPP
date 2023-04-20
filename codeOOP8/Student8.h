#pragma once
#include <iostream>
using namespace std;
class Student8
{
private:
    string fullName;
    int age;
    int numClass;

public:
    Student8(/* args */);
    Student8(string fullName, int age, int numClass);
    void setFullName(string fullName);
    void setAge(int age);
    void setNumClassRoom(int numClass);
    string getFullName();
    int getAge();
    int getNumClass();
    virtual ~Student8();
};
