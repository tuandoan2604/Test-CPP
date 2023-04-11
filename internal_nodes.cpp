#include <iostream>
#include <stdexcept>
#include <vector>
#include <set>

int countInternalNodes (const std::vector<int>& tree){
    std::set<int> distinctElements;
    for(const int& element : tree){
        distinctElements.insert(element);
    }
    return distinctElements.size() - 1;
}

