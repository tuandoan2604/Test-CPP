#ifndef MANAGER_H
#define MANAGER_H

#include "student.h"
#include <vector>

using namespace std;

class Manager
{
private:
    /* data */
    vector<Student> studentList;
public:
    Manager();
    ~Manager();

    void addStudent();

    void searchStudent(string name, int age, string hometown);

    int countStudent(string name, int age, string hometown);

};

Manager::Manager(/* args */)
{
}

Manager::~Manager()
{
}

void Manager::addStudent()
{
    Student s;
    studentList.push_back(s);
}

void Manager::searchStudent(string name, int age, string hometown)
{
    for(int i = 0; i < studentList.size(); i++)
    {
        if((studentList[i].getName() == name || name == "") &&
            (studentList[i].getAge() == age || age == 0) &&
            (studentList[i].getHometown() == hometown || hometown == ""))
        {
            cout << "Student: \n";
            studentList[i].displayInfo();
        }
    }
}

int Manager::countStudent(string name, int age, string hometown)
{
    int cout = 0;
    for(int i = 0; i < studentList.size(); i++)
    {
        if((studentList[i].getName() == name || name == "") &&
            (studentList[i].getAge() == age || age == 0) &&
            (studentList[i].getHometown() == hometown || hometown == ""))
        {
            cout++;
        }
    }
    return cout;
}

#endif