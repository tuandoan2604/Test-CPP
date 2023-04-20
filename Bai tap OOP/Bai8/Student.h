#ifndef STUDENT_H
#define STUDENT_H

#include "Header.h"

class Student
{
protected:
    /* data */
    string name;
    int age;
    string stuClass;
public:
    Student(/* args */);
    ~Student();


};

Student::Student(/* args */)
{
    cout<< "Enter the name of student: ";
    cin.ignore();
    getline(cin, name);

    cout<< "Enter the age of student: ";
    cin>> age;

    cout<< "Enter the class of student: ";
    cin.ignore();
    getline(cin, stuClass);
}

Student::~Student()
{
}


#endif