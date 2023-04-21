#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

using namespace std;

int min_pieces(vector<int> &original, vector<int> &desired) {
    int n = original.size();
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++) {
        pos[desired[i]] = i;
    }
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (pos[original[i]] < pos[original[i - 1]]) ans++;
    }
    return ans;
}

#ifndef RunTests

int main(){
    std::vector<int> original ={1, 4, 3, 2};
    std::vector<int> desired = {1, 2, 4, 3};
    std::cout << min_pieces(original, desired) <<std::endl;
    return 0;
}

#endif