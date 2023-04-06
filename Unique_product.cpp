#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::string firstUniqueProduct(const std::vector<std::string>& products)
{
    // throw std::logic_error("Waiting to be implemented");
    for(int i=0; i<products.size();)
    {
        for (int j=i+1; j<products.size(); j++)
        {
            if(products[i] == products[j])
            {
                continue;
            }
        }
        i++;
        return products[i];
    }

}

#ifndef RunTests
int main()
{
    std::vector<std::string> products = { "Apple", "Computer", "Apple", "Bag" };
    std::cout << firstUniqueProduct(products);
}
#endif
