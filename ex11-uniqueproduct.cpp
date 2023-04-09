#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string firstUniqueProduct(const vector<string>& products)
{
    unordered_map<string, int> fre;
    for (const auto& product : products)
    {
        fre[product]++;
    }

    for (const auto& product : products)
    {
        if (fre[product] == 1)
        {
            return product;
        }
    }
    
    return "";
}

#ifndef RunTests

int main()
{
    vector<string> products = { "Apple", "Computer", "Apple", "Bag" };
    cout << firstUniqueProduct(products);
}

#endif