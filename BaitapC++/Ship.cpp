#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Ship
{
    
private:
    vector<int> containers;

public:
    Ship(int containerCount, function <int(int)> fillContainer) : containers(containerCount)  // member initializer list
    {
        for (int i = 0; i < containerCount; i++)
        {
            // cout<< "Insert the cargo: " << fillContainer(i)<< endl;
            containers[i] = fillContainer(i);
        }
    }
    int peekContainer(int containerIndex)
    {
        return containers.at(containerIndex);
    }

};

// #ifndef RunTests
int main()
{
    Ship ship(100, [](int containerIndex) { return containerIndex; });
    for (int i = 0; i < 100; i++) {
        cout << "Container: " << i << ", cargo: " << ship.peekContainer(i) << endl;
    }

    return 0;
}
// #endif