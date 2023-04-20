#include "NewsPaper.h"
#pragma once
#include <iostream>
using namespace std;

#define NEWS_PAPER 3
NewsPaper::NewsPaper()
{
}

NewsPaper::NewsPaper(string documentId, string publisher, int numRelease, int dayRelease) : Document(documentId, publisher, numRelease)
{
    this->dayRelease = dayRelease;
}

int NewsPaper::getDayRelease()
{
    return dayRelease;
}

void NewsPaper::setDayRelease(int dayRelease)
{
    this->dayRelease = dayRelease;
}

void NewsPaper::display()
{
    Document ::display();
    cout << "Ngay phat hanh: " << getDayRelease() << endl;
}

int NewsPaper::type()
{
    return NEWS_PAPER;
}

NewsPaper::~NewsPaper()
{
}
