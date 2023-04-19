#include <stdexcept>
#include <iostream>
#include <vector>

using namespace std;

class Platformer
{
public:
    Platformer(int n, int position)
    :titles(n+1)
    {
        for (int i = 0; i <= n; i++)
        {
            titles[i] = i;
        }
        characterPosition = position;
    }

    void jumpLeft()
    {
        if(characterPosition >= 2)
        {
            characterPosition -= 2;
            titles.erase(titles.begin() + characterPosition + 2);
        }

    }

    void jumpRight()
    {
        if(characterPosition + 3 <= titles.size())
        {
            characterPosition += 1;
            titles.erase(titles.begin() + characterPosition - 1);
        }

    }

    int position()
    {
        return titles[characterPosition];      
    }
private:
    vector<int> titles;
    int characterPosition;
};

#ifndef RunTests

int main()
{
    Platformer platformer(6, 3);
    cout << platformer.position() << endl; // should print 3
    platformer.jumpLeft();
    cout << platformer.position() << endl; // should print 1
    platformer.jumpRight();
    cout << platformer.position() << endl; // should print 4
    return 0;
}
#endif