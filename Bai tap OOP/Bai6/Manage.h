#ifndef MANAGE_STUDENT_H
#define MANAGE_STUDENT_H

#include "Student.h"
#include <vector>

class Manage
{
private:
    /* data */
    vector<Student* > students;
public:
    Manage(/* args */);
    ~Manage();

    void add_student();
    void display_age();
    int count_age_address();
    void exit_prog();
};

Manage::Manage(/* args */)
{
}

Manage::~Manage()
{
}

void Manage::add_student()
{
    cout<< "Adding a new student to database \n";
    Student* a = new Student;
    students.push_back(a);
}

void Manage::display_age()
{
    cout<< "Enter the age of students you want to display: \n";
    int t_age;
    cin>> t_age;

    for (int i = 0; i < students.size(); i++)
    {
        if(students[i]->getAge()==t_age)
        {
            students[i]->displayStu();
        }
    }
}

int Manage::count_age_address()
{
    cout<< "In function [ Counting student with age and address provided ] \n";

    int count = 0;

    cout<< "Enter the age: \n";
    int t_age;
    cin>> t_age;

    cout<< "Enter the address: \n";
    string t_address;
    cin.ignore();
    getline(cin, t_address);

    for (int i = 0; i < students.size(); i++)
    {
        if(students[i]->getAge()==t_age && students[i]->getAddress()==t_address)
        {
            count++;
        }
    }
    cout<< "The number of student have age "<< t_age<< ", address "<< t_address<< " is: "<< count<< endl;
    return count;
}

void Manage::exit_prog()
{
    for (int i = 0; i < students.size(); i++)
    {
        Student* ptr = students[i];
        delete(ptr);
        ptr = nullptr;
    }
    exit(0);
}

#endif