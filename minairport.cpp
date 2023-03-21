#include <iostream>
#include <vector>

using namespace std;

bool checkConnectionsDirect(vector<vector<bool>> matric, int add1, int add2) 
{
    return matric[add1][add2];
}

bool checkConnections(vector<vector<bool>> matric, int add1, int add2)
{
    if (checkConnectionsDirect(matric, add1, add2))
    {
        return checkConnectionsDirect(matric, add1, add2);
    }
    else
    {
        for(int i = 0; i < matric.size(); i++)
        {
            if(matric[add1][i])
            {
                vector<vector<bool>> matric1 = matric;
                matric1[add1][i] = false;
                matric1[i][add1] = false;
                if(checkConnections(matric1, i, add2))
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
void getMinimumConnections(vector<vector<bool>> matric, int &min)
{
    for (int i = 1; i < matric.size(); i++)
    {
        if (checkConnections(matric, 0, i))
        {
            continue;
        }
        else
        {
            matric[0][i] = true;
            matric[i][0] = true;
            min++;
        }
    }
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

    int min = 0;
    vector<vector<bool>> air2 = air;

    getMinimumConnections(air2, min);
    if(min == 0)
    {
        cout << "All airports are pre-connected";
    }
    else
    {
        cout << "need " << min << "connecttions";
    }
}