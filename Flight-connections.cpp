#include <iostream>
#include <vector>

// #define RunTests 1

using namespace std;

int checkConnections(const vector<vector<bool>>& matrix, int i, int j)
{

    if(matrix[i][j])
    {
        return true;
    }
    else{
        for(int ne = 0; ne < matrix.size(); ne++)
        {
            if(matrix[i][ne])
            {
                if(checkConnections(matrix,j,ne))
                {
                    return true;
                }
            }
        }
    }
    return false;
} 

int getMinimumConnections(const vector<vector<bool>>& matrix)
{
    // throw std::logic_error("Waiting to be implemented");
    int numEdge = 0;
    
    vector<vector<bool>> copy = matrix;

    int startingPoint = 0;
    for(int i = 0; i < matrix.size(); i++)
    {
        if(checkConnections, startingPoint, i)
        {
            continue;
        }
        else{
            copy[startingPoint][i] = 1;
            copy[i][startingPoint] = 1;
            numEdge++;
        }
    }

    return numEdge;
}

// #ifndef RunTests
int main()
{
    vector<vector<bool>> matrix 
    {
        {false, true, false, false, true},
        {true, false, false, false, false},
        {false, false, false, true, false},
        {false, false, true, false, false},
        {true, false, false, false, false}
    };

    cout << getMinimumConnections(matrix) << endl; // should print 1
}
// #endif
