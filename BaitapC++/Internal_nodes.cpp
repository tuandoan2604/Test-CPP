#include <vector>
#include <set>
#include <iostream>

using namespace std;

int countInternalNodes (const vector<int>& tree)
{
    // throw std::logic_error("Waiting to be implemented");
    set <int> parent;

    for(int i=1; i<tree.size(); i++)
    { 
        parent.insert(tree[i]);
    }
    return (parent.size()-1);
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
