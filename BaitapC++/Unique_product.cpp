#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::string firstUniqueProduct(const std::vector<std::string>& products)
{
    // throw std::logic_error("Waiting to be implemented");
    for(int i=0; i<products.size(); i++)
    {
        int check = 0;
        // cout<< "Pointing to "<< products[i]<< endl;
        for (int j=0; j<products.size(); j++)
        {
            if(products[i] == products[j] && i != j)
            {
                // cout<< "Duplicate name "<< products[i]<< endl;
                check = 1;
                break;
            }
        }
        if(!check)
            return products[i];
    }
    string s = "";
    return s;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> products = { "Apple", "Computer", "Apple", "Computer", "Bag", "Bag" };
    std::cout << firstUniqueProduct(products);
}
#endif
