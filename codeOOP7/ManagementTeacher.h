#include "Person7.h"
#include <iostream>
#pragma once
#include <vector>
using namespace std;
class ManagementTeacher
{
private:
    vector <Person7*> listTeacher;

public:
    ManagementTeacher(/* args */);
    void addTeacher();
    void deleteTeacher();
    void calculationSalary();
    
    
};


