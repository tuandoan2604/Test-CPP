#include "Header.h"

#ifndef STUDENT_H
#define STUDENT_H

class Student
{
private:
    /* data */
    int ID;
    string name;
    string address;
    int priority;
    char block;
public:
    Student(/* args */);
    ~Student();

    void display();
    int getID(){return ID;}
};

Student::Student(/* args */)
{
    cout<< "Enter the ID of student: \n";
    cin>> ID;

    cout<< "Enter the name of student: \n";
    cin.ignore();
    getline(cin, name);

    cout<< "Enter the address of student: \n";
    // cin.ignore();
    getline(cin, address);

    cout<< "Enter the priority of student: \n";
    cin>> priority;

    cout<< "Enter the student's block: [A, B or C]\n";
    char in;
    do
    {
        cin>> in;
        if(in=='A'||in=='B'||in=='C')
        {
            block = in;
        }
        else{
            cout<< "Invalid syntax!!!";
        }
    } while (in!='A'&&in!='B'&&in!='C');
    
}

Student::~Student()
{
    cout<< "Destructor of Student \n";
}

void Student::display()
{
    cout<< "Student: "<< ID<< ", Name: "<< name<< ", Address: "<< address;
    cout<< ", Priority: "<< priority<< ", Block: "<< block<< endl;
}

#endif