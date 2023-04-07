#include <string>

#include <iostream>

#include <stdexcept>

#include <vector>

using namespace std;

int searchNumber(const vector<int>& ori, int number)
{
    for (int i = 0; i < ori.size(); i++)
    {
        if (ori[i] == number)
        {
            return i;
        }
    }
    return 0;
}

int minPieces(const vector<int>& original, const vector<int>& desired)

{
    int count = 0;
    for (int i = 0; i < desired.size(); i++) 
    {
        count++;
        int j = searchNumber(original, desired[i]);
        while(1)
        {
            if( i+1 == desired.size())
            {
                return count;
            }
            if(original[j+1] == desired[i+1])
            {
                i++;
                j++;
            }
            else
            {
                break;
            }
        }
    }
    return count;
    throw logic_error("Waiting to be implemented");

}

#ifndef RunTests

int main()

{

    vector<int> original = { 1, 4, 3, 2 };

    vector<int> desired = { 1, 2, 4, 3 };

    cout << minPieces(original, desired) << std::endl;

}

#endif
