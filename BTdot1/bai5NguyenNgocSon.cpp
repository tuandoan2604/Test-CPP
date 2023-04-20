#include <stdexcept>
#include <iostream>
#include <vector>
using namespace std;

class Platformer 
{
public:
    int now;
    
    vector <int> space;
    Platformer(int n, int position) 
    {
       for(int i=1; i<=n;i++){
        space.push_back(i-1);
       }
       now = position;
    }
    void jumpLeft() 
    {
        space.erase(space.begin() + now);
        now-=2;
    }
    void jumpRight() 
    {
       space.erase(space.begin() + now);
        now+=1;
    }

    int position() 
    {
        return space[now];
    }
};
#ifndef RunTests
int main()
{
    Platformer platformer(6, 3);
    std::cout << platformer.position() << std::endl; // should print 3
    platformer.jumpLeft();
    std::cout << platformer.position() << std::endl; // should print 1
    platformer.jumpRight();
    std::cout << platformer.position() << std::endl; // should print 4
}
#endif  
