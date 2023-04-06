#include <vector>
#include <set>
#include <iostream>
using namespace std;

int countInternalNodes(const vector<int> &tree)
{
    int cout=0;
    int a[tree.size()];
    for (int i = 0; i < tree.size(); i++)
    {
        if (tree[i] != -1)
        {
            a[tree[i]] = 1;
        }
    }
    for (int i=0; i<tree.size();i++){
        if(a[i]==1){cout++;}
    }
    return cout;
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
