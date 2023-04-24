#include "ComplexNumber.h"

int main()
{
    ComplexNumber a;
    ComplexNumber b;

    a.setValue();
    b.setValue();

    cout<< "Display a: ";
    a.displayNum();
    cout<< "Display b: ";
    b.displayNum();

    ComplexNumber c = a+b;
    ComplexNumber d = a*b;

    cout<< "Display c: ";
    c.displayNum();
    cout<< "Display d: ";
    d.displayNum();
    return 0;
}