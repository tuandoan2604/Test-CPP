#include <iostream>
#include <vector>
#include <functional>

class Ship
{
public:
    Ship(int containerCount, std::function<int(int)> fillContainer)
        : containers(containerCount)
    {
        for (int i = 0; i < containerCount; i++)
        {
            containers[i] = fillContainer(i);
        }
    }
    int peekContainer(int containerIndex)
    {
        return containers[containerIndex];
    }
private:
    std::vector<int> containers;
};

#ifndef RunTests
int main()
{
    Ship ship(100000000, [](int containerIndex) { return containerIndex; });
    for (int i = 0; i < 10; i++) {
        std::cout << "Container: " << i << ", cargo: " << ship.peekContainer(i) << "\n";
    }
}
#endif