#include <iostream>
#include <unorderd_map>
#include <functional>

class Ship{
    public: 
        Ship(int containerCount, std::function<int(int)>fillContainer){
            for(int i = 0; i< containerCount; i++){
                this->containers.insert({i, new int(fillContainer(i))});
            }
        }

        int peekContainer(int containerIndex)
        {
            return *this->containers.at(containerIndex);
        }
    
    private:
        std::unordered_map<int, int*>containers;
};