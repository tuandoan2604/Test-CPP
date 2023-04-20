#include <stdexcept>
#include <iostream>
#include <vector>

using namespace std;

class Platformer 
{
    int *point;
    int pos;
    vector <int> vec;

public:
    
    Platformer(int n, int position)
    {
        // throw std::logic_error("Waiting to be implemented");
        for(int i = 0; i < n; i++)
        {
            vec.push_back(i);
        }
        point = &vec[position];
        pos = position;
    }
    void jumpLeft() 
    {
        // throw std::logic_error("Waiting to be implemented");
        // cout<< "Erasing vector at "<< pos<< " with the number "<< *point<< endl;
        point -= 2;
        vec.erase(vec.begin()+pos);
        pos -= 2;
        // cout<< "Number pointed "<< *point<< endl;
    }
    void jumpRight() 
    {
        // throw std::logic_error("Waiting to be implemented");
        // cout<< "Erasing vector at "<< pos<< " with the number "<< *point<< endl;
        point += 2;
        vec.erase(vec.begin()+pos);
        point -= 1;
        pos += 1;
        // cout<< "Number pointed "<< *point<< endl;
    }

    int position() 
    {
        // throw std::logic_error("Waiting to be implemented");
        return *point;
    }

};
// #ifndef RunTests
int main()
{
    Platformer platformer(9, 3);
    std::cout << platformer.position() << std::endl; // should print 3
    // platformer.print();
    platformer.jumpLeft();
    std::cout << platformer.position() << std::endl; // should print 1
    // platformer.print();
    platformer.jumpRight();
    std::cout << platformer.position() << std::endl; // should print 4
    // platformer.print();
    platformer.jumpRight();
    std::cout << platformer.position() << std::endl; // should print 6
    // platformer.print();
    platformer.jumpRight();
    std::cout << platformer.position() << std::endl; // should print 8
    // platformer.print();
    platformer.jumpLeft();
    std::cout << platformer.position() << std::endl; // should print 5
    // platformer.print();

    return 0;
}
// #endif
