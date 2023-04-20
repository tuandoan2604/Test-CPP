#include "Teacher.h"
#include "ManageTeacher.h"


int main()
{
	ManageTeacher Manage;
	int choose;
run:;
	cout << "Enter 1: Add Teacher " << endl;
	cout << "Enter 2: Delete Teacher " << endl;
	cout << "Enter 0: Exit!" << endl;
	cout << "Please select: ";
	cin >> choose;
	switch (choose)
	{
	case ADD:
		Manage.AddTeacher();
		goto run;
	case DELETE:
		Manage.DeleteTeacher();
		goto run;
	case EXIT:
		break;
	default:
		cout << "Not Valid. Please try again!" << endl;
		cout << "====================================" << endl;
		goto run;
	}
	return 0;
}