#include "BlockA.h"
#include "Candidates.h"
#pragma once
#include <iostream>
using namespace std;

BlockA::BlockA()
{
}

BlockA::BlockA(int idNumber, string fullName, string address, int priority, double mathPoint, double physicPoint, double chemicalPoint) : Candidates(idNumber, fullName, address, priority)
{
    this->mathPoint = mathPoint;
    this->physicPoint = physicPoint;
    this->chemicalPoint = chemicalPoint;
}

void BlockA::setMathPoint(double mathpoint)
{
    this->mathPoint = mathPoint;
}

void BlockA::setPhysicPoint(double physicPoint)
{
    this->physicPoint = physicPoint;
}

void BlockA::setChemicalPoint(double chemicalPoint)
{
    this->chemicalPoint = chemicalPoint;
}

double BlockA::getMathPoint()
{
    return mathPoint;
}

double BlockA::getPhysicPoint()
{
    return physicPoint;
}

double BlockA::getChemicalPoint()
{
    return chemicalPoint;
}

void BlockA::display()
{
    Candidates ::display();
    cout << "Thi sinh thi khoi A" << endl;
    cout << "Diem toan :" << getMathPoint() << endl;
    cout << "Diem ly :" << getPhysicPoint() << endl;
    cout << "Diem hoa :" << getChemicalPoint() << endl;
}

int BlockA::block()
{
    return KHOI_A;
}

BlockA::~BlockA()
{
}
