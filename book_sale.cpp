#include <vector>
#include <stdexcept>
#include <iostream>
#include <unordered_map>

using namespace std;

int nthLowestSelling(const std::vector<int>& sales, int n) 
{
    unordered_map<int, int> Sales_Count;

    for(int i=0; i<sales.size(); i++)
    {

        auto idx = Sales_Count.find(sales[i]);
        if(idx != Sales_Count.end())
        {
            int value = idx->first;
            Sales_Count[value]++;
        }
        else{
            Sales_Count[sales[i]] = 1;
        }
    }

    auto pos = Sales_Count.find(n);
    return pos->first;
}


