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
        void printP()
        {
            cout<< "Print the parameter value: "<< first << " and "<< second<< endl;
        }
    };

public:
    FunctionCache(std::function<int(int, int)> function): function(function) {}

    int calculate(int first, int second)
    {
        // tao mot object kieu T voi hai gia tri dau vao
        // con tro args (smart pointer) tro den vung nho cua obj duoc khoi tao
        auto args = make_shared<Parameters>(first, second);

        // cout<< "Args = " << args << endl;
        Parameters obj = *args;
        // obj.printP();

        // auto it = calculations.find(args);
        auto it = findValue(args);

        if (it != calculations.end())
        {            
            // cout<< "Found an duplicate value!. End of the process!" << endl;
            return it->second;
        }

        int calculation = function(first, second);
        // cout<< "Calculation value: "<< calculation<< endl;

        calculations[args] = calculation;
        // Print_cal(calculations);

        return calculation;
    }

    unordered_map<std::shared_ptr<Parameters>, int>::iterator findValue(shared_ptr<Parameters> Args)
    {

        for(auto i = calculations.begin(); i != calculations.end(); i++)
        {
            Parameters a = *Args;
            Parameters b = *i->first;
            // cout<< "In comparision: first value = "<< a.first << " and "<< b.first<< " second value = "<< a.second<< " and "<< b.second<< endl;
            if(a.first == b.first && a.second == b.second)
            {
                // cout<< "Found an duplicate value!!!!!!!!!"<< endl;
                return calculations.begin(); 
                // return calculations.end();
            }
            else
                continue;
        }
        return calculations.end();
    }

    void Print_cal(unordered_map<std::shared_ptr<Parameters>, int> cal)
    {
        for(auto i = calculations.begin(); i != calculations.end(); i++)
        {
            Parameters b = *i->first;
            cout<< "Printing the calculations: first value = "<< b.first<< " second value = "<< b.second<< endl;
        }
    }

private:
    std::unordered_map<std::shared_ptr<Parameters>, int> calculations;
    // std::unordered_map<Parameters, int> calculations;
    std::function<int(int, int)> function;
};

// #ifndef RunTests

int modulo(int a, int b)
{
    std::cout << "Function modulo has been called.\n";
    return a % b;
}

int main()
{
    FunctionCache cache(modulo);

    // Function modulo should be called.
    std::cout << cache.calculate(5, 2) << std::endl<< endl;

    // Function modulo should be called.
    std::cout << cache.calculate(7, 4) << std::endl<< endl;

    // Function modulo shouldn't be called because we have already made a call with arguments (5, 2)!
    std::cout << cache.calculate(5, 2) << std::endl<< endl;
}
// #endif
