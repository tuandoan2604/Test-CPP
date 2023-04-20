#pragma once
#include <iostream>
using namespace std;
class Person
{
private:
    string fullName;
    int age;
    string job;
    int idNumber;
public:
    Person();
    Person(string fullName, int age, string job, int idNumber);
    void setFullName(string fullName);
    void setAge(int age);
    void setJob(string job);
    void setIdNumber(int idNumber);
    string getFullName();
    int getAge();
    string getJob();
    int getIdNumber();
    void display();
    
    
};


