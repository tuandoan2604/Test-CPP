#include <iostream>
#include <unordered_map>
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
        
        struct Hash
        {
            size_t operator()(const Parameters& params) const
            {
                size_t h1 = std::hash<int>{}(params.first);
                size_t h2 = std::hash<int>{}(params.second);
                return h1 ^ h2;
            }
        };

        struct EqualTo
        {
            bool operator()(const Parameters& params1, const Parameters& params2) const
            {
                return params1.first == params2.first && params1.second == params2.second;
            }
        };    
    
    };

public:
    FunctionCache(std::function<int(int, int)> function): function(function) {}

    int calculate(int first, int second)
    {
        Parameters args(first, second);
        auto it = calculations.find(args);
        if (it != calculations.end())
            return it->second;

        int calculation = function(first, second);
        calculations[args] = calculation;
        return calculation;
    }

private:
    std::unordered_map<Parameters, int, Parameters::Hash, Parameters::EqualTo> calculations;
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

    std::cout << cache.calculate(5, 2) << std::endl;

    std::cout << cache.calculate(7, 4) << std::endl;

    std::cout << cache.calculate(5, 2) << std::endl;
}
#endif