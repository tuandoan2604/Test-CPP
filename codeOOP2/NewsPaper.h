#include "Document.h"
#pragma once
#include <iostream>
using namespace std;
class NewsPaper : public Document
{
private:
    int dayRelease;

public:
    NewsPaper(/* args */);
    NewsPaper(string documentId, string publisher, int numRelease, int dayRelease);
    int getDayRelease();
    void setDayRelease(int dayRelease);
    void display();
    int type();
    ~NewsPaper();
};
