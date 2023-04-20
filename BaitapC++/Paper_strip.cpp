#include <string>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <sstream>

using namespace std;

int minPieces(const vector<int>& original, const vector<int>& desired)
{
    // throw std::logic_error("Waiting to be implemented");

    int cut = 0;

    for(int i=0; i<original.size();)
    {
        for(int j=0; j<desired.size();j++)
        {
            if(original[i]==desired[j])
            {
                i++;
                for (int k=j+1; k<desired.size(); k++)
                {
                    if(original[i]==desired[k])
                    {
                        i++;
                        continue;
                    }
                    else{
                        cut++;
                        break;
                    }
                }
                break;
            }
        }
    }
    return cut+1;
}

// #ifndef RunTests
int main()
{
    // vector<int> original = { 1, 4, 3, 2, 10, 5, 6, 13};
    // vector<int> desired = { 1, 2, 10, 5, 4, 3, 13, 6 };

    // vector<int> original = { 1, 4, 3, 5, 2, 10};
    // vector<int> desired = { 1, 2, 10, 5, 4, 3};

    vector<int> original = { 1, 4, 3, 2};
    vector<int> desired = { 1, 2, 4, 3};

    int num = minPieces(original, desired);
    cout << num << endl;

    return 0;
}
// #endif



