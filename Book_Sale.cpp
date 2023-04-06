#include <vector>
#include <stdexcept>
#include <iostream>
#include <unordered_map>
#include <algorithm>

int nthLowestSelling(const std::vector<int>& sales, int n) 
{
    std::unordered_map<int, int> salesCount;
    for (int bookId : sales) {
        salesCount[bookId]++;
    }
    
    std::vector<int> counts;
    for (const auto& kv : salesCount) {
        counts.push_back(kv.second);
    }
    
    std::sort(counts.begin(), counts.end());
    
    if (n > counts.size()) {
        throw std::invalid_argument("Invalid value of n");
    }
    
    return counts[n - 1];
}

#ifndef RunTests
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
#endif

