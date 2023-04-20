#include "Files.h"
#include "Books.h"
#include "Magazines.h"
#include "Newspapers.h"
#include "ManageFiles.h"
#include "Header.h"

int main()
{
	ManageFiles Fil;
	int runprogramme;
run:;
	cout << "Enter 1: Add new File" << endl;
	cout << "Enter 2: Delete file by ID" << endl;
	cout << "Enter 3: Show information File" << endl;
	cout << "Enter 4: Looking for File by type" << endl;
	cout << "Enter 5: Exit!!!" << endl;
	cout << "Vui long chon thao tac: ";
	cin >> runprogramme;
	switch (runprogramme)
	{
	case ADD:
		cout << "Enter 1: Add Book" << endl;
		cout << "Enter 2: Add Magazine" << endl;
		cout << "Enter 3: Add Newspaper" << endl;
		cout << "Select type file to add: ";
		int select;
		cin >> select;
		switch (select)
		{
		case ADD_BOOK:
			Fil.addbook();
			cout << "====================" << endl;
			break;
		case ADD_MAGAZINE:
			Fil.addmagazine();
			cout << "====================" << endl;
			break;
		case ADD_NEWSPAPER:
			Fil.addnews();
			cout << "====================" << endl;
			break;
		default:
			cout << "Not Valid. Try again" << endl;
			goto run;
		}
		cout << "Moi ban tiep tuc: " << endl;
		goto run;
	case DELETE:
		Fil.deleteID();
		cout << "====================" << endl;
		goto run;
	case SHOW_INFOR:
		Fil.displayinfor();
		cout << "====================" << endl;
		goto run;
	case SEARCH:
		Fil.lookingfor();
		cout << "====================" << endl;
		goto run;
	case EXIT:
		break;
	default:
		cout << "Not Valid! Please try again!" << endl;
		cout << "====================" << endl;
		goto run;
	}
	return 0;
}