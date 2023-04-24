#pragma once 
#include <iostream>
#include <string>
using namespace std; 
class Text
{
private:
    string st;
public:
    Text();
    Text(string st);
    void setSt(string st);
    string getSt();
    void Count();
    void CountA();

    
    ~Text();
};

