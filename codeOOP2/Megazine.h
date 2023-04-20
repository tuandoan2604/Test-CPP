#include "Document.h"
#pragma once
#include <iostream>
using namespace std;
class Megazine : public Document
{
private:
    int numOfRelease;
    int monthRelease;
public:
    Megazine(/* args */);
    Megazine(string documentId, string publisher, int numRelease, int numOfRelease, int monthRelease);
    void setNumOFRelease(int numOfRelease);
    void setMonthRelease(int monthRelease);
    int getNumOfRelease();
    int getMonthRelease();
    void display();
    int type();
    ~Megazine();
};

