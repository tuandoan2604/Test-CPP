#include <vector>
#include <stdexcept>
#include <iostream>

using namespace std;

int countInternalNodes (const vector<int>& tree)
{
    int n = tree.size();
    int count = 0;
    
    vector<int> children(n,0);

    for (int i = 0; i<n; i++)
    {
        if (tree[i] != -1)
        {
            children[tree[i]]++;
        }
    }

    for (int i = 0; i<n; i++)
    {
        if (children[i] > 0 && i != 0)
        {
            count++;
        }
    }

    return count;
}

#ifndef RunTests

int main()
{
    vector<int> tree;
    tree.push_back(1);
    tree.push_back(3);
    tree.push_back(1);
    tree.push_back(-1);
    tree.push_back(3);
    cout << countInternalNodes(tree);
}

#endif