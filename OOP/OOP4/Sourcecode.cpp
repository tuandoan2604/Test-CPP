#include "Street.h"
#include "Header.h"


int main()
{
	Street St;
	cout << "Nhap so ho gia dinh: ";
	int n;
	cin >> n;
	cout << "Nhap thong tin ho gia dinh: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Ho gia dinh thu " << i + 1 << ":" << endl;
		St.AddFamily();
		cout << endl << "===========" << endl;
	}
	cout << "Thong tin tat ca cac ho gia dinh trong khu pho: " << endl;
	St.DisplayAll();
	return 0;
}