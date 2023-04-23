#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    //student: name, age, hometown;
    string name;
    int age;
    string hometown;

public:
    //constuctor
    Student ();

    ~Student();

    int getAge() { return age;}

    string getName() { return name;}

    string getHometown() { return hometown;}

    void displayInfo(); 
};

Student::Student(/* args */)
{
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter homtown: ";
    getline(cin, hometown);
}

Student::~Student()
{
}

void Student::displayInfo()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Hometown: " << hometown << endl; 
}

#endif