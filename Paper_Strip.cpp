#include <string>
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int minPieces(const vector<int>& original, const vector<int>& desired)
{
    int count = 0;
    int i = 0;
    while ( i < original.size()){
        for (int j = 0; j < desired.size(); j++){
            //So sánh phần tử của original với từng phần tử desired
            if (original[i] == desired[j] ){
                // kiểm tra xem có giống nhau liên tiếp không
                if (original[i+1] != desired[j+1] ){

                    i++;
                    break;
                }
                i++; 
            } 
        }
        ++count ;
    }
    return count;
}
#ifndef RunTests
int main()
{
    cout << "TH1 = 3: " ;
	vector<int> original = {1, 4, 3, 2 ,6,7,8};
	vector<int> desired = {1, 2,6,7,8 ,4, 3};
	cout << minPieces(original, desired) << endl;

    cout << "TH2 = 3:";
	vector<int> original2 = {1, 4, 3, 2 };
	vector<int> desired2 = {1, 2 , 4 ,3};
    cout << minPieces(original2, desired2) << endl;

    cout << "TH3 = 4:";
	vector<int> original3 = {1, 4, 3, 2,6,7,8 };
	vector<int> desired3 = {1, 6,7,8,2 , 4 ,3};
    cout << minPieces(original3, desired3) << endl;

    cout << "TH4 = 6:";
	vector<int> original4 = {1,4,3,2,5,7,6,9,8,0};
	vector<int> desired4  = {1,2,4,3,7,6,9,5,8,0};
    cout << minPieces(original4, desired4) << endl;

}
#endif