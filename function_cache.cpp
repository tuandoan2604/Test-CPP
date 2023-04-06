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
        
        // Custom hash function for Parameters
        struct Hash
        {
            size_t operator()(const Parameters& params) const
            {
                size_t h1 = std::hash<int>{}(params.first);
                size_t h2 = std::hash<int>{}(params.second);
                return h1 ^ h2;
            }
        };

        // Custom equality function for Parameters
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
        // Hàm find tìm kiếm 1 phần tử trong map có key là args
        // Nếu tìm thấy  trả về một iterator chỉ đến phần tử đó
        // Không tìm thấy  trả về iterator trỏ đến phần tử tiếp theo sau phần tử cuối cùng của map
        auto it = calculations.find(args);
        // Nếu  tìm thấy
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

    // Function modulo should be called.
    std::cout << cache.calculate(5, 2) << std::endl;

    // Function modulo should be called.
    std::cout << cache.calculate(7, 4) << std::endl;

    // Function modulo shouldn't be called because we have already made a call with arguments (5, 2)!
    std::cout << cache.calculate(5, 2) << std::endl;
}
#endif