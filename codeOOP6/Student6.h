#pragma once
#include <iostream>
using namespace std;
class Student6
{
private:
    string fullName;
    int age;
    string homeTown;
public:
    Student6(/* args */);
    Student6(string fullName, int age, string homeToen);
    void setFullName(string fullName);
    void setAge(int age);
    void setHomeTown(string homeTown);
    string getFullName();
    int getAge();
    string getHomeTown();
    void display();
    
};

