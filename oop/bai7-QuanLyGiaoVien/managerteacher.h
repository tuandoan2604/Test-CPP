#ifndef MANAGER_H
#define MANAGET_H

#include"teacher.h"
#include <vector>

using namespace std;

class ManagerTeacher
{
private:
    vector<Teacher> teacherList;
public:
    void addTeacher()
    {
        Teacher teach;
        teacherList.push_back(teach);
    }

    void deleteTeacher(string id)
    {
        if(!teacherList.empty())
        {
            for (int i = 0; i < teacherList.size(); i++)
            {
                if(teacherList[i].getID() == id)
                {
                    teacherList.erase(teacherList.begin() + i);
                }
            }
        }
    }

    double getSalary(string id)
    {
        if(!teacherList.empty())
        {
            for (int i = 0; i < teacherList.size(); i++)
            {
                if(teacherList[i].getID() == id)
                {
                    return teacherList[i].getSalary() - teacherList[i].getPenaty() + teacherList[i].getBonus();
                }
            }
        }
        return 0;
    }

    ~ManagerTeacher() {teacherList.clear();}
};

#endif