#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student
{
private:
    /* data */
    string name;
    int age;
    string classStudent;
public:
    Student()
    {
        cout << "Enter name: " ;
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter class: ";
        getline(cin, classStudent);
    }

    Student(string name, int age, string classStudent)
    {
        this->name = name;
        this->age = age;
        this->classStudent = classStudent;
    }

    string getName() {return name;}
    int getAge() {return age;}
    string getClassStudet() {return classStudent;}

    void setName(string name) {this->name = name;}
    void setAge(int age) {this->age = age;}
    void setClassStudent(string classStudent) {this->classStudent = classStudent;}

    void displayStudent()
    {
        cout << "Name: " << name << "\t";
        cout << "Age: " << age << "\t";
        cout << "Class student: " << classStudent << "\n";
    }
    ~Student(){}
};


#endif