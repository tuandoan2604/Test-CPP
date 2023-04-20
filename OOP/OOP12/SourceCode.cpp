
#include "ManageTransports.h"

int main()
{
	int choose;
	ManageTransports T;
run:;
	cout << "Enter 1: Add Transport" << endl;
	cout << "Enter 2: Delete Transport" << endl;
	cout << "Enter 3: Search Transport" << endl;
	cout << "Enter 4: Exit!" << endl;
	cout << "Please Select: ";
	cin >> choose;
	switch (choose)
	{
	case ADD:
		int selectadd;
		cout << "Chon loai xe muon them: ";
		cin >> selectadd;
		switch (selectadd)
		{
		case ADDCAR:
			T.AddCar();
			goto run;
		case ADDMOTORBIKE:
			T.AddMotorBike();
			goto run;
		case ADDTRUCK:
			T.AddTruck();
			goto run;
		default:
			cout << "Not Valid.Try Again" << endl;
			cout << "===================" << endl;
			goto run;
		}
	case DELETE:
		T.DeleteID();
		goto run;
	case SEARCH:
		int selectsearch;
		cout << "Enter 8: Search by Brand " << endl;
		cout << "Enter 9: Search by Color" << endl;
		cout << "Chon thong tin tim kiem: ";
		cin >> selectsearch;
		switch (selectsearch)
		{
		case BRAND:
			T.SearchbyBrand();
			goto run;
		case COLOR:
			T.SearchbyColor();
			goto run;
		default:
			cout << "Not Valid.Try Again" << endl;
			cout << "===================" << endl;
			goto run;
		}
	case EXIT:
		cout << "Thanks. See you soon" << endl;
		break;
	default:
		cout << "Not Valid.Try Again" << endl;
		cout << "===================" << endl;
		goto run;
	}
	return 0;
}