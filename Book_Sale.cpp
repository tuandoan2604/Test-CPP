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
        //Nếu tìm thấy thì tăng value lên 1
        if(idx != Sales_Count.end())
        {
            int value = idx->first;
            Sales_Count[value]++;
        }
        //Không tìm thấy thì khởi tạo lần đầu bằng 1
        else{
            Sales_Count[sales[i]] = 1;
        }
    }

    auto pos = Sales_Count.find(n);
    return pos->first;
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

