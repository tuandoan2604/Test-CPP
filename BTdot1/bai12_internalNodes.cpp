#include <vector>
#include <set>
#include <iostream>
#include <set>
using namespace std;

int countInternalNodes(const vector<int> &tree)
{
    
    set <int> internalNode;
    for (int i = 0; i < tree.size(); i++)
    {
        if (tree[i] == -1)
        {
             internalNode.insert(i);
        }
        else {
            internalNode.insert(tree[i]);
        }
    }
    return internalNode.size();
}

int main()
{
    vector<int> tree;
    tree.push_back(1);
    tree.push_back(3);
    tree.push_back(1);
    tree.push_back(-1);
    tree.push_back(3);
    cout<<countInternalNodes(tree);
}
