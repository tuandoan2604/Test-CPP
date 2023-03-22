#include <iostream>
#include <vector>

using namespace std;

bool checkConnectionsDirect(vector<vector<bool>> matrix, int add1, int add2) 
{
    return matrix[add1][add2];
}

bool checkConnections(vector<vector<bool>> matrix, int add1, int add2)
{
    if (checkConnectionsDirect(matrix, add1, add2))
    {
        return checkConnectionsDirect(matrix, add1, add2);
    }
    else
    {
        for(int i = 0; i < matrix.size(); i++)
        {
            if(matrix[add1][i])
            {
                vector<vector<bool>> matrix1 = matrix;
                matrix1[add1][i] = false;
                matrix1[i][add1] = false;
                if(checkConnections(matrix1, i, add2))
                {
                    return true;
                }
            }
        }
        return false;
    }
}

/*giai phap la chỉ cần 1 sân bay đi đến được tất cả các sân bay trực tiếp hoặc gián tiếp
thì các sân bay sẽ tự động kết nối với nhau*/
int getMinimumConnections(vector<vector<bool>> matrix)
{
    int min = 0;
    for (int i = 1; i < matrix.size(); i++)
    {
        if (checkConnections(matrix, 0, i))
        {
            continue;
        }
        else
        {
            matrix[0][i] = true;
            matrix[i][0] = true;
            min++;
        }
    }
    return min;
}

int main()
{
    vector<vector<bool>> air
    {
        {false, false, false, false, true, false},
        {false, false, false, false, false, false},
        {false, false,false, true, false, false},
        {false, false, true, false, false, false},
        {true, false, false, false, false, false},
        {false, false, false, false, false, false}
    };

    vector<vector<bool>> air2 = air;

    getMinimumConnections(air2);
    if(getMinimumConnections(air2) == 0)
    {
        cout << "All airports are pre-connected";
    }
    else
    {
        cout << "need " << getMinimumConnections(air2) << " connecttions";
    }
}