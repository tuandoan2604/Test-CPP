#include <algorithm>
#include <iostream>

using namespace std;

struct Battery
{
    float charge = 0.0f;
};

void charge(Battery* battery, float charge)
{
    float pin = battery->charge + charge;
    if(pin < 100)
    {
        battery->charge = pin;
    }

}

#ifndef RunTests

int main()
{
    Battery battery;
    charge(&battery, 1.5f);
    cout << battery.charge << endl;
}

#endif