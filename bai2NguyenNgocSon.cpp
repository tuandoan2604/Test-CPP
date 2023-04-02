#include <string>
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int minPieces(vector<int> &original, vector<int> &desired)
{
	int soManh = 0; // khai bao so manh
	int x = 0;
	while (x < desired.size()) // lap lai den khi het desired
	{
		for (int i = 0; i < original.size(); i++)
		{
			// Neu giong nhau kiem tra phan tu den khi khac

			if (desired[x] == original[i])
			{
				do
				{

					x++;
					i++;
				} while (desired[x] == original[i]);
				soManh++;
			}
		}
	}

	return soManh;
}
#ifndef RunTests
int main()
{
	vector<int> original = {1, 4, 3, 2};
	vector<int> desired = {1, 2, 4, 3};
	cout << minPieces(original, desired) << endl;
}
#endif