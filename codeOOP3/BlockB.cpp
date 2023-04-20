#include "BlockB.h"
#pragma once
#include <iostream>
using namespace std;

BlockB::BlockB()
{
}

BlockB::BlockB(int idNumber, string fullName, string address, int priority, double mathPoint, double chemicalPoint, double biologyPoint): Candidates( idNumber,fullName, address, priority)
{
    this->mathPoint=mathPoint;
    this->chemicalPoint=chemicalPoint;
    this->biologyPoint=biologyPoint;
}

void BlockB::setMathPoint(double mathPoint)
{
    this->mathPoint;
}

void BlockB::setChemiclaPoint(double chemiclaPoint)
{
    this->chemicalPoint=chemicalPoint;
}

void BlockB::setBiologyPoint(double biologyPoint)
{
    this->biologyPoint=biologyPoint;
}

double BlockB::getMathPoint()
{
    return mathPoint;
}

double BlockB::getChemiclaPoint()
{
    return chemicalPoint;
}

double BlockB::getBiologyPoint()
{
    return biologyPoint;
}

int BlockB::block()
{
    return KHOI_B;
}

void BlockB::display()
{
    Candidates ::display();
    cout<< "Thi sing thi khoi B"<<endl;
    cout << "Diem toan :" << getMathPoint() << endl;
    cout << "Diem hoa :" << getChemiclaPoint() << endl;
    cout << "Diem sinh :" << getBiologyPoint() << endl;
}

BlockB::~BlockB()
{
}
