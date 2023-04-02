#include <iostream>
#include <vector>

using namespace std;

int getMinimumConnections(vector<vector<bool>> matrix) {
    int n = matrix.size();
    vector<bool> visited(n, false);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            count++;
            visited[i] = true;
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] && !visited[j]) {
                    visited[j] = true;
                }
            }
        }
    }
    return count - 1;
}

int main() {
    vector<vector<bool>> matrix = {{false, true, false, true},
                                    {true, false, true, false},
                                    {false, true, false, true},
                                    {true, false, true, false}};
    cout << getMinimumConnections(matrix) << endl;
    return 0;
}
