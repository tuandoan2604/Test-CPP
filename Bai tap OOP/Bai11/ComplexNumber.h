#ifndef COMPLEX_NUM_H
#define COMPLEX_NUM_H

#include "Header.h"

class ComplexNumber
{
private:
    /* data */
    int real;
    int imag;
public:
    ComplexNumber();
    ~ComplexNumber();

    void setValue();
    void displayNum();

    ComplexNumber operator +(ComplexNumber b)
    {
        ComplexNumber c;
        c.real = this->real + b.real;
        c.imag = this->imag + b.imag;

        return c;
    }

    ComplexNumber operator *(ComplexNumber b)
    {
        ComplexNumber c;
        c.real = this->real*b.real - this->imag*b.imag;
        c.imag = this->real*b.imag + this->imag*b.real;

        return c;
    }
};

ComplexNumber::ComplexNumber()
{

}

ComplexNumber::~ComplexNumber()
{
}

void ComplexNumber::setValue()
{
    cout<< "Enter the real part: ";
    cin>> real;

    cout<< "Enter the imaginary part: ";
    cin>> imag;
}

void ComplexNumber::displayNum()
{
    cout<< real<< " + "<< imag<< "i"<< endl;
}


#endif