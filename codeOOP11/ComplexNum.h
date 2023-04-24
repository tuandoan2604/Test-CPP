#pragma once
#include <iostream>
using namespace std;
class ComplexNum
{
private:
    double realPart;
    double virtualPart;

public:
    ComplexNum(/* args */);
    ComplexNum(double realPart, double virtualPart);
    void setRealPart(double realPart);
    void setVirtualPart(double virtualPart);
    double getRealPart();
    double getVirtualPart();
    void display();
    ComplexNum operator+ (const ComplexNum comp1);
    ComplexNum operator* ( const ComplexNum comp2 );
    ~ComplexNum();
};

