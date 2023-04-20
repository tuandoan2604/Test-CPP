#include "Student.h"
#include <vector>

#ifndef ADMISSION_H
#define ADMISSION_H

class Admission
{
private:
    /* data */
    vector<Student*> stu;
public:
    Admission(/* args */);
    ~Admission();

    void addNewStu();
    void displayList();
    void findID();
    void exit_prog();
};

Admission::Admission(/* args */)
{
}

Admission::~Admission()
{
}

void Admission::addNewStu()
{
    Student* s = new Student;
    for(int i=0; i<stu.size(); i++)
    {
        if(stu[i]->getID() == s->getID())
        {
            cout<< "Duplicate ID. Re-enter \n";
            return;
        }
    }
    stu.push_back(s);
}

void Admission::displayList()
{
    for(int i=0; i<stu.size(); i++)
    {
        stu[i]->display();
    }
}

void Admission::findID()
{
    cout<< "Enter ID of student you want to find: \n";
    int inID;
    cin>> inID;

    for(int i=0; i<stu.size(); i++)
    {
        if(stu[i]->getID()==inID)
        {
            cout<< "The student found with ID "<<inID<< endl;
            stu[i]->display();
            break;
        }
    }
}

void Admission::exit_prog()
{
    Student* ptr;

    for (int i = 0; i < stu.size(); i++)
    {
        ptr = stu[i];
        delete(ptr);
        ptr = nullptr;
    }
    exit(0);    
}


#endif