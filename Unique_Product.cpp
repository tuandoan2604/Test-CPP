#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::string firstUniqueProduct(const std::vector<std::string>& products)
{
    std::unordered_map<std::string, int> productCounts;

    // Đếm số lần xuất hiện của từng sản phẩm trong vector

    for (const auto& product : products)
    {     
        //Khi mới được khởi tạo mặc định value = 0; chỉ cần productCounts["abc"] là đã có giá trị value = 0  rồi
        productCounts[product]++;
    }
    for( const auto& product : products)
    {
        // Tìm phần tử có value = 1 đầu tiên
        if( productCounts[product] == 1) return product;
    }
    return "";

}

#ifndef RunTests
int main()
{
    std::vector<std::string> products = { "Apple", "Computer", "Apple", "Bag" };
    std::cout << firstUniqueProduct(products);
}
#endif
