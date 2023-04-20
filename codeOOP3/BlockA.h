#pragma once
#include <iostream>
using namespace std;
#include "Candidates.h"
#define KHOI_A 1

class BlockA : public Candidates
{
private:
    double mathPoint;
    double physicPoint;
    double chemicalPoint;
public:
    BlockA(/* args */);
    BlockA(int idNumber, string fullName, string address, int priority, double mathPoint, double physicPoint, double chemicalPoint);
    void setMathPoint(double mathpoint);
    void setPhysicPoint(double physicPoint);
    void setChemicalPoint(double physicPoint);
    double getMathPoint();
    double getPhysicPoint();
    double getChemicalPoint();
    void display();
    int block();
    ~BlockA();
};

