#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    return a.second < b.second;
}

int nthLowestSelling(const vector<int>& sales, int n)
{
    //tạo hash map lưu trữ tần suất của từng cuốn sách được bán
    unordered_map<int, int> freqBook;
    for (int bookid : sales)
    {
        freqBook[bookid]++;
    }

    vector<pair<int, int>> vecBook(freqBook.begin(), freqBook.end());
    sort(vecBook.begin(), vecBook.end(), cmp);

    if(n<=0 || n > vecBook.size())
    {
        throw invalid_argument("Invalid n");
    }

    return vecBook[n-1].first;
}

#ifndef RunTests

int main()
{
    vector<int> input;
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(2);
    input.push_back(1);
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(2);
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(5);
    input.push_back(4);
    input.push_back(5);
    
    int x = nthLowestSelling(input, 3);
    cout << x;
}

#endif