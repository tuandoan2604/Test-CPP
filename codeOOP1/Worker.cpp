#pragma once
#include <iostream>
#include "Worker.h"
using namespace std;
Worker ::Worker(){};
Worker ::Worker(string fullName, int age, string gender, string address, int level): Cadres(fullName, age, gender, address)
{
    
    this->level = level;
}

void Worker::setLeveL(int level)
{
    this->level = level;
}

int Worker ::getLevel()
{
    return level;
}
void Worker::display()
{
    Cadres ::display();
    cout << " Bac nhan vien :" << level << endl;
}
Worker::~Worker()
{
}
