#include "Header.h"
#include "Student.h"
#include "Class.h"


int main()
{
	Class C;
	int choose;
run:;
	cout << "Enter 1: Add Student!" << endl;
	cout << "Enter 2: Show Information Students" << endl;
	cout << "Enter 3: Show Infor Student 20 years old" << endl;
	cout << "Enter 4: Show how many students 23 years old and come from DN: " << endl;
	cout << "Enter 0: Exit!" << endl;
	cout << "Please select: ";
	cin >> choose;
	switch (choose)
	{
	case ADD_STUDENT:
		C.AddStudent();
		goto run;
	case SHOW_INFOR_STUDENT:
		C.ShowInfor();
		goto run;
	case SHOW_INFOR_STUDENT_20S:
		C.ShowAge20();
		goto run;
	case STUDENT_23S_DN:
		C.ShowAge23DN();
		goto run;
	case EXIT:
		break;
	default:
		cout << "Not Valid. Please try again!" << endl;
		cout << "===============================" << endl;
		goto run;
	}
	return 0;
}