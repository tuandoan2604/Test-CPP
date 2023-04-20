#include "Student.h"
#include "Card.h"
#include "ManageCard.h"

int main()
{
	int choose;
	ManageCard List;
run:;
	cout << "Enter 1: Add Card" << endl;
	cout << "Enter 2: Delete Card" << endl;
	cout << "Enter 3: Show Card Infor" << endl;
	cout << "Enter 0: Exit!" << endl;
	cin >> choose;
	switch (choose)
	{
	case ADD:
		List.AddCard();
		goto run;
	case DELETE:
		List.DeleleCard();
		goto run;
	case SHOW_INFOR:
		List.showinfor();
		goto run;
	case EXIT:
		break;
	default:
		cout << "Not Valid. Please try again!" << endl;
		cout << "===================================" << endl;
		goto run;
	}
	return 0;
}