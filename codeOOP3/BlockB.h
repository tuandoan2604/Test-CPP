#pragma once
#include <iostream>
using namespace std;
#include "Candidates.h"

#define KHOI_B 2

class BlockB : public Candidates
{
private:
    double mathPoint;
    double chemicalPoint;
    double biologyPoint;
public:
    BlockB(/* args */);
    BlockB (int idNumber, string fullName, string address, int priority, double mathPoint, double chemicalPoint, double biologyPoint);
    void setMathPoint(double mathPoint);
    void setChemiclaPoint(double chemiclaPoint);
    void setBiologyPoint(double biologyPoint);
    double getMathPoint();
    double getChemiclaPoint();
    double getBiologyPoint();
    int block();
    void display();
    ~BlockB();
};

