#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int getMinimumConnections(vector<vector<bool>> &matrix)
{
    int n = matrix.size();
    int numberConnection =0;
    // tao vector de duyet cac san bay da kiem tra
    vector<bool> checkAirports(n, false);
    for (int i = 0; i < n; i++)
    {
        if(!checkAirports[i]){
            stack<int> st;
            //tao stack de day cac san bay can kiem tra vao
            st.push(i);
            //kiem tra den khi het 1 nhom san bay
            while(!st.empty()){
                int checkNow = st.top();
                st.pop();
                checkAirports[checkNow]=true;
                for(int j=0; j<n; j++){
                    if(matrix[checkNow][j]&&!checkAirports[j]){
                        st.push(j);
                    }

                }

            }
            numberConnection++;
        }
    }
    return numberConnection-1;
}

#ifndef RunTests
int main()
{
    std::vector<std::vector<bool>> matrix{
        {false, true, false, false, true},
        {true, false, false, false, false},
        {false, false, false, true, false},
        {false, false, true, false, false},
        {true, false, false, false, false}};

    std::cout << getMinimumConnections(matrix) << std::endl; // should print 1
}
#endif