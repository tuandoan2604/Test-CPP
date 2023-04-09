#include <iostream>
#include <vector>
#include <functional>

class Ship
{
public:
    Ship(int containerCount, std::function<int(int)> fillContainer)
    {
        this->containers.reserve(containerCount); 

        for (int i = 0; i < containerCount; i++)
        {
            this->containers.push_back(fillContainer(i)); 
        }
    }

    int peekContainer(int containerIndex)
    {
        return this->containers.at(containerIndex); // sử dụng vector thay vì unordermap
    }
private:
    std::vector<int> containers;
};

#ifndef RunTests

int main()
{
    Ship ship(10, [](int containerIndex) { return containerIndex; });
    for (int i = 0; i < 10; i++) 
    {
        std::cout << "Container: " << i << ", cargo: " << ship.peekContainer(i) << "\n";
    }

}

#endif