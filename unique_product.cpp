#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::string firstUniqueProduct(const std::vector<std::string>& products)
{
    std::unordered_map<std::string, int> productCounts;

    for (const auto& product : products)
    {     
        productCounts[product]++;
    }
    for( const auto& product : products)
    {
        if( productCounts[product] == 1) return product;
    }
    return "";

}