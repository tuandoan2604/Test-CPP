#include <algorithm>
#include <iostream>

struct Battery{
    float charge = 0.0f;
};

void charge(Battery* battery, float charge){
    battery->charge = battery->charge + charge;
}
