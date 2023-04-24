#include "ComplexNum.h"
#include "ComplexNum.cpp"
int main()

{
    ComplexNum comp3(1,3);
    ComplexNum comp4(2,5);
    ComplexNum comp5 = comp3+comp4;
    comp5.display();
    ComplexNum comp6= comp3*comp4;
    comp6.display();

    return 0;
}
