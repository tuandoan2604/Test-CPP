#include "Customer.h"
#include "Bill.h"
#include "ManageCustomer.h"


int main()
{
	int select;
	ManageCustomer A;
run:;
	cout << "Enter 1: Add new Customer" << endl;
	cout << "Enter 2: Delete Customer" << endl;
	cout << "Enter 3: Fix Information Customer" << endl;
	cout << "Enter 0: Exit!" << endl;
	cout << "Please Select: ";
	cin >> select;
	switch (select)
	{
	case ADD:
		A.AddCustomer();
		goto run;
	case DELETE:
		A.DeleteCustomer();
		goto run;
	case FIX_INFORMATION:
		A.Fixinfor();
		goto run;
	case EXIT:
		break;
	default:
		cout << "Not Valid. Try again!" << endl;
		cout << "===============================" << endl;
		goto run;
	}
	return 0;
}