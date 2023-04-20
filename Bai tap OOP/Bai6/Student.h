#ifndef STUDENT_H
#define STUDENT_H

#include "Header.h"

class Student
{
private:
    /* data */
    string name;
    int age;
    string address;

public:
    Student(/* args */);
    ~Student();

    void displayStu();
    int getAge(){return age;}
    string getAddress(){return address;}
};

Student::Student(/* args */)
{
    cout<< "Initializing data of a student \n";
    cout<< "Enter the student's name: \n";
    cin.ignore();
    getline(cin,name);

    cout<< "Enter the student's age: \n";
    cin>> age;

    cout<< "Enter the student's address: \n";
    cin.ignore();
    getline(cin, address);
}

Student::~Student()
{
}

void Student::displayStu()
{
    cout<< "[STUDENT] Name: "<< name<< ", Age: "<< age<< ", Address: "<< address<< endl;
}



#endif