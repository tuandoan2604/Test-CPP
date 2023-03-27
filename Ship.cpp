#include <iostream>
#include <unordered_map>
#include <functional>

using namespace std;

class Ship
{
public:
    Ship(int containerCount, function<int(int)> fillContainer)
    {
        for (int i = 0; i < containerCount; i++)
        {
            this->containers.insert({ i, new int(fillContainer(i)) });
        }
    }
    int peekContainer(int containerIndex)
    {
        return *this->containers.at(containerIndex);
    }
private:
    unordered_map<int, int*> containers;
};

// #ifndef RunTests
int main()
{
    Ship ship(10, [](int containerIndex) { return containerIndex; });
    for (int i = 0; i < 10; i++) {
        cout << "Container: " << i << ", cargo: " << ship.peekContainer(i) << "\n";
    }

    return 0;
}
// #endif