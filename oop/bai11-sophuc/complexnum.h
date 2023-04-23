#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

using namespace std;

class ComplexNumber
{
    double real;
    double imag;
public:
    ComplexNumber()
    {
        real = 0;
        imag = 0;
    }

    ComplexNumber(double real, double imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void setReal(double real) {this->real = real;}
    void setImagi(double imag) { this->imag = imag;}

    double getReal() {return real;}
    double getImagi() {return imag;}

    ComplexNumber operator+(ComplexNumber const& obj)
    {
        ComplexNumber num;
        num.real = real + obj.real;
        num.imag = imag + obj.imag;
        return num;
    }

    ComplexNumber operator*(ComplexNumber const& obj)
    {
        ComplexNumber cn;
        cn.real = real * obj.real + imag * obj.imag;
        cn.imag = real * obj.imag + imag * obj.real;
        return cn;
    }

    void print() {cout << real << " + i"<< imag << endl;}
};

#endif