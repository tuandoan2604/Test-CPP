#include <vector>
#include <stdexcept>
#include <iostream>
#include <unordered_map>

using namespace std;

int nthLowestSelling(const std::vector<int>& sales, int n) 
{
    // throw std::logic_error("Waiting to be implemented");
    unordered_map<int, int> Count;

    for(int i=0; i<sales.size(); i++)
    {
        auto idx = Count.find(sales[i]);
        if(idx != Count.end())
        {
            int value = idx->first;
            Count[value]++;
        }
        else{
            Count[sales[i]] = 1;
        }
    }

    auto pos = Count.find(n);
    return pos->first;
}

// #ifndef RunTests
int main()
{
    std::vector<int> input;
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(2);
    input.push_back(1);
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(2);
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(5);
    input.push_back(4);
    input.push_back(5);
    int x = nthLowestSelling(input, 2);
    std::cout << x;
}
// #endif
