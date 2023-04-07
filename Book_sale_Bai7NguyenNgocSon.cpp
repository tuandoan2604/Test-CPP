#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int nthLowestSelling(const std::vector<int> &sales, int n)
{
    // throw std::logic_error("Waiting to be implemented");

    vector<int> thuTu;
    unordered_map<int, int> demSLB;

    for (int i = 0; i < sales.size(); i++)
    {
        auto search = demSLB.find(sales[i]);
        if (search != demSLB.end())
        {
            int value = search->first;
            demSLB[value]++;
        }
        else
        {
            demSLB[sales[i]] = 1;
        }
    }
    for (auto id : demSLB)
    {
        thuTu.push_back(id.second);
    }
    for (int i = 0; i < thuTu.size() - 1; i++)
    {
        for (int j = i + 1; j < thuTu.size(); j++)
        {
            if (thuTu[i] > thuTu[j])
            {
                swap(thuTu[i], thuTu[j]);
            }
        }
    }
    int idSach =  thuTu[n-1];
    for(auto a : demSLB){
        if(idSach== a.second ){
            int idSach= a.first;

        }
    }
    return idSach;
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
