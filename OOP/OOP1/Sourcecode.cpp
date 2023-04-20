#include "Header.h"
#include "Officers.h"
#include "Workers.h"
#include "Engineers.h"
#include "Staffs.h"
#include "ManageOfficers.h"

int main()
{
	ManageOfficers M;
	int run;
doagain:;
	cout << "Enter 1: Them moi can bo" << endl;
	cout << "Enter 2: Tim kiem theo ho ten" << endl;
	cout << "Enter 3: Hien thi thong tin danh sach cac can bo" << endl;
	cout << "Enter 4: Exit!!!" << endl;
	cout << "Vui long nhap lua chon: ";
	cin >> run;
	switch (run)
	{
	case ADD:
		int select;
		cout << "Enter 1: Them moi Cong nhan" << endl;
		cout << "Enter 2: Them moi Ky su" << endl;
		cout << "Enter 3: Them moi Nhan vien" << endl;
		cout << "Vui long nhap lua chon: ";
		cin >> select;
		switch (select)
		{
		case ADD_WORKER:
			M.AddWorkers();
			cout << "Them moi thanh cong! Moi tiep tuc!" << endl;
			cout << "=================================" << endl;
			break;
		case ADD_ENGINEER:
			M.AddEngineers();
			cout << "Them moi thanh cong! Moi tiep tuc!" << endl;
			cout << "=================================" << endl;
			break;
		case ADD_STAFF:
			M.AddStaffs();
			cout << "Them moi thanh cong! Moi tiep tuc!" << endl;
			cout << "=================================" << endl;
			break;
		default:
			cout << "Lua chon sai. Moi thao tac lai!!!" << endl;
			cout << "=================================" << endl;
			break;
		}
		goto doagain;
	case SEARCH:
		M.searchbyname();
		goto doagain;
	case SHOW_INFOR:
		M.showinfordscb();
		cout << "=================================" << endl;
		goto doagain;
	case EXIT:
		break;
	default:
		cout << "Not valid. Redo again!!!" << endl;
		goto doagain;
	}
	return 0;
}