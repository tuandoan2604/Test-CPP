#include "ComplexNum.h"
#pragma once

ComplexNum::ComplexNum()
{
    realPart=0;
    virtualPart=0;
}

ComplexNum::ComplexNum(double realPart, double virtualPart)
{
    this->realPart=realPart;
    this->virtualPart=virtualPart;
}

void ComplexNum::setRealPart(double realPart)
{
    this->realPart=realPart;
}

void ComplexNum::setVirtualPart(double virtualPart)
{
    this->virtualPart=virtualPart;
}

double ComplexNum::getRealPart()
{
    return realPart;
}

double ComplexNum::getVirtualPart()
{
    return virtualPart;
}

void ComplexNum::display()
{
    cout<< "ComplexNum : "<< getRealPart()<< "+"<<getVirtualPart()<<"i"<<endl;
}

ComplexNum ComplexNum::operator+( ComplexNum comp1)
{
    ComplexNum comp3;
    comp3.setRealPart(realPart + comp1.getRealPart());
    comp3.setVirtualPart(virtualPart+comp1.getVirtualPart());
    return comp3;
}

ComplexNum ComplexNum::operator*( ComplexNum comp2)
{   
    ComplexNum comp4;
    comp4.setRealPart(realPart*comp2.getRealPart()-virtualPart*comp2.getVirtualPart());
    comp4.setVirtualPart(realPart*comp2.getVirtualPart()+virtualPart*comp2.getRealPart());
    return comp4;
}

ComplexNum::~ComplexNum()
{
}
