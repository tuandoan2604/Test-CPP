#include <stdexcept>
#include <functional>

class ReptileEgg;

class Reptile
{
public:
    virtual ~Reptile() {};
    virtual ReptileEgg* lay() = 0;
};

class ReptileEgg
{
private:
    bool hatched;
    std::function<Reptile*()> createReptile;

public:
    ReptileEgg(std::function<Reptile* ()> createReptile) : hatched(false), createReptile(createReptile)
    {
    }

    Reptile* hatch()
    {
        if (hatched)
        {
            throw std::logic_error("ReptileEgg has already hatched.");
        }
        hatched = true;
        return createReptile();
    }
};

class FireDragon : public Reptile
{
public:
    FireDragon()
    {
    }

    ReptileEgg* lay()
    {
        return new ReptileEgg([]() { return new FireDragon(); });
    }
};