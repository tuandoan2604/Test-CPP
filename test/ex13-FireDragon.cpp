#include <stdexcept>
#include <functional>

using namespace std;

class ReptileEgg;

class Reptile
{
public:
    virtual ~Reptile() {};
    virtual ReptileEgg* lay() = 0;
};

class ReptileEgg
{
    bool hatched;
    function<Reptile*()> createReptile;
public:
    ReptileEgg(function<Reptile*()> createReptile) : hatched(false), createReptile(createReptile) {}


    Reptile* hatch()
    {
        if (hatched)
        {
            throw logic_error("Egg has already hatched!");
        }

        hatched = true;
        return createReptile();
    }
};

class FireDragon : public Reptile
{
public:
    FireDragon() {}
    
    ReptileEgg* lay()
    {
        return new ReptileEgg([](){ return new FireDragon(); });
    }
};

#ifndef RunTests

int main()
{
    Reptile* fireDragon = new FireDragon();
    ReptileEgg* egg = fireDragon->lay();
    Reptile* childDragon = egg->hatch();
}

#endif