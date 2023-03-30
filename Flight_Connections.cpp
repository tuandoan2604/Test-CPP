#include <iostream>
#include <queue>
#include <vector>
int getMinimumConnections(std::vector<std::vector<bool>>& matrix) {
    // số sân bay n
    int n = matrix.size();
    //Khởi tạo 1 vector tương ứng với các sân bay; sân bay nào đã duyệt đến thì là True, chưa duyệt đến là false
    std::vector<bool> visited(n, false);

    int numConnections = 0; // //Số kết nối

    // DFS(Depth First Search ) 
    for (int i = 0; i < n; i++) {
        //Nếu sân bay chưa được duyệt
        if (!visited[i]) {
            //Khởi tại 1 queue s có thể chứa các sân bay
            std::queue<int> q;
            q.push(i);
            visited[i] = true;
            while (!q.empty()) {
                int curr = s.top();
                s.pop();
                visited[curr] = true;
                for (int j = 0; j < n; j++) {
                    if (matrix[curr][j] && !visited[j]) {
                        s.push(j);
                    }
                }
            }
            numConnections++; 
        }

    }

    return numConnections - 1; // // vì hết trương trình vẫn cộng lên;
}

#ifndef RunTests
int main()
{
std::vector<std::vector<bool>> matrix {
    {false, true, false, false, true},
    {true, false, false, false, false},
    {false, false, false, true, false},
    {false, false, true, false, false},
    {true, false, false, false, false}
};

    std::cout << getMinimumConnections(matrix) << std::endl; // should print 1
}
#endif
