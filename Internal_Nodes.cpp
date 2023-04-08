#include <vector>
#include <stdexcept>
#include <iostream>
#include <set>

int countInternalNodes (const std::vector<int>& tree)
{
    std::set<int> distinctElements;
    for (const int& element : tree) {
        distinctElements.insert(element);
    }
    return distinctElements.size() - 1 ;
}
#ifndef RunTests
int main()
{
    std::vector<int> tree;
    tree.push_back(1);
    tree.push_back(3);
    tree.push_back(1);
    tree.push_back(-1);
    tree.push_back(3);
    std::cout << countInternalNodes(tree);
}
#endif
