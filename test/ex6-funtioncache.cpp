#include <iostream>
#include <unordered_map>
#include <memory>
#include <functional>

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
        
        //kiem tra xem hai parameter có bằng nhau không
        bool operator==(const Parameters& other) const {
            return first == other.first && second == other.second;
        }
    };

public:
    FunctionCache(std::function<int(int, int)> function): function(function) {}
    int calculate(int first, int second)
    {

        auto args = std::make_shared<Parameters>(first, second); 
        auto it = calculations.find(args);
        if (it != calculations.end())
            return it->second;
        int calculation = function(first, second);
        calculations[args] = calculation;
        return calculation;
    }

private:

    //định nghĩa một hàm băm
    struct ParametersHash {
        std::size_t operator()(const std::shared_ptr<Parameters>& p) const {
            std::size_t h1 = std::hash<int>()(p->first);
            std::size_t h2 = std::hash<int>()(p->second);
            return h1 ^ (h2 << 1);
        }
    };

    //shared pointer làm key là sẽ ko thể chạy cache vì nó có thể tạo ra các con trỏ mới sau mỗi lần gọi
    std::unordered_map<std::shared_ptr<Parameters>, int, ParametersHash> calculations;
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

    std::cout << cache.calculate(5, 2) << std::endl;
}

#endif