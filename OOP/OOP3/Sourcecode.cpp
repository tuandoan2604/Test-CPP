#include "Header.h"
#include "Admissions.h"

int main()
{
	Admissions s;
run:;
	cout << "Enter 1: Them 1 sinh vien moi" << endl;
	cout << "Enter 2: Hien thi thong tin thi sinh va khoi thi" << endl;
	cout << "Enter 3: Tim kiem thi sinh theo SBD" << endl;
	cout << "Enter 4: Exit" << endl;
	int choose;
redo:;
	cin >> choose;
	switch (choose)
	{
	case ADD:
		cout << "Thi sinh thi khoi: " << endl;
		cout << "Enter A: khoi A" << endl;
		cout << "Enter B: khoi B" << endl;
		cout << "Enter C: khoi C" << endl;
		char Khoithi;
		cin >> Khoithi;
		switch (Khoithi)
		{
		case 'A':
			cout << "Thi sinh thi khoi A!" << endl;
			s.AddstA();
			cout << "Hoan thanh nhap thong tin SV! Moi tiep tuc!" << endl;
			break;
		case 'B':
			cout << "Thi sinh thi khoi B!" << endl;
			s.AddstB();
			cout << "Hoan thanh nhap thong tin SV! Moi tiep tuc!" << endl;
			break;
		case 'C':
			cout << "Thi sinh thi khoi C!" << endl;
			s.AddstC();
			cout << "Hoan thanh nhap thong tin SV! Moi tiep tuc!" << endl;
			break;
		default:
			cout << "Nhap sai, moi chon lai" << endl;
			break;
		}
		goto run;
	case SHOW_INFOR:
		s.displayinfor();
			goto run;
	case SEARCH:
		s.searchbySBD();
			goto run;
	case EXIT:
		cout << "Exit!!" << endl;
		break;
	default:
		cout << "Khong hop le!!! Moi ban nhap lai" << endl;
		goto redo;
	}
	return 0;
}