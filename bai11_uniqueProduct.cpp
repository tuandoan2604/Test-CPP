#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string firstUniqueProduct(const vector<string>& products)
{
    // throw std::logic_error("Waiting to be implemented");
    for(int i=0; i<products.size();i++)
    {
        static bool check;
        for (int j=i+1; j< products.size();j++){
             check =true;
            if(products[i]==products[j]){
                check=false;
                break;
            }
            
        }
        if(check){
                return products[i];
                break;
            }
    }

}


int main()
{
    vector<string> products = { "Apple", "Computer", "Apple", "Bag" };
    cout << firstUniqueProduct(products);
}






