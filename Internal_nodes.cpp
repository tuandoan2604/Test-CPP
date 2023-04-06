#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int countInternalNodes (const vector<int>& tree)
{
    // throw std::logic_error("Waiting to be implemented");
    vector <int> parent;

    parent.push_back(tree[0]);
    for(int i=1; i<tree.size(); i++)
    { 
        vector<int>::iterator it = find(parent.begin(), parent.end(), tree[i]);
        if (it == parent.end() && tree[i] > 0 && parent.at(parent.size()-1) != tree[i])
        {
            parent.push_back(tree[i]);
        }
    }
    return parent.size();
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
