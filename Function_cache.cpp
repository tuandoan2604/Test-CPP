#include <iostream>
#include <vector>
#include <memory>
#include <functional>

using namespace std;

class FunctionCache
{
    class Parameters
    {
    public:
        Parameters(int first, int second)
        {
            this->first = first;
            this->second = second;
        }

        int first;
        int second;
        int value;
    };

public:
    FunctionCache(std::function<int(int, int)> function): function(function) {}

    int calculate(int first, int second)
    {
        auto args = make_shared<Parameters>(first, second);

        auto it = calculations.begin();
        int pos = 0;

        // cout<< "Number of loops "<< calculations.size()<< endl;
        for(;pos<calculations.size(); pos++)
        {
            if((*it)->first == args->first && (*it)->second == args->second)
            {
                // cout<< "Found an duplicate!!!";
                return (*it)->value;
            }
            // cout<< "Counting..."<< endl;
            it = calculations.begin() + pos;
        }

        int calculation = function(first, second);

        calculations.push_back(args);
        calculations.at(pos)->value = calculation;

        return calculation;
    }

private:
    vector<shared_ptr<Parameters>> calculations;
    std::function<int(int, int)> function;
};

#ifndef RunTests

int modulo(int a, int b)
{
    std::cout << "Function modulo has been called.\n";
    return a % b;
}

int main()
{
    FunctionCache cache(modulo);

    // Function modulo should be called.
    std::cout << cache.calculate(5, 2) << std::endl;

    // Function modulo should be called.
    std::cout << cache.calculate(7, 4) << std::endl;

    // Function modulo shouldn't be called because we have already made a call with arguments (5, 2)!
    std::cout << cache.calculate(5, 2) << std::endl;
}
#endif
