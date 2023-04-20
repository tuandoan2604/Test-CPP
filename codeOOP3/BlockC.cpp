#pragma once
#include <iostream>
#include"BlockC.h"
using namespace std;

BlockC::BlockC()
{
}

BlockC::BlockC(int idNumber, string fullName, string address, int priority, double literaturePoint, double historyPoint, double geographyPoint): Candidates( idNumber,fullName, address, priority)
{
    this->literaturePoint=literaturePoint;
    this->historyPoint=historyPoint;
    this->geographyPoint=geographyPoint;
}

void BlockC::setLiteraturePoint(double literaturePoint)
{
}

void BlockC::setHistoryPoin(double historyPoint)
{
}

void BlockC::setGeographyPoint(double geographyPoint)
{
}

double BlockC::getLiteraturePoint()
{
    return literaturePoint;
}

double BlockC::getHistoryPoin()
{
    return historyPoint;
}

double BlockC::getGeographyPoint()
{
    return geographyPoint;
}

int BlockC::block()
{
    return KHOI_C;
}

void BlockC::display()
{
    Candidates :: display();
    cout<< "Thi sinh thi khoi C"<<endl;
    cout<< "Diem van :"<< getLiteraturePoint()<<endl;
    cout<< "Diem su :"<< getHistoryPoin()<<endl;
    cout<< "Diem dia :"<< getGeographyPoint()<<endl;
}

BlockC::~BlockC()
{
}
