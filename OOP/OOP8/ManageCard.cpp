
#include "ManageCard.h"

	ManageCard::ManageCard()
	{}
	void ManageCard::AddCard()
	{
		string fullname;
		int age;
		string clas;
		int IDCard;
		int Startdate;
		int Enddate;
		int IDBook;
		cout << "Nhap thong tin de them the muon: " << endl;
		cout << "Fullname: ";
		cin >> fullname;
		cout << "Age: ";
		cin >> age;
		cout << "Class : ";
		cin >> clas;
		cout << "ID Card: ";
		cin >> IDCard;
		cout << "Start Date: ";
		cin >> Startdate;
		cout << "End Date: ";
		cin >> Enddate;
		cout << "ID Book: ";
		cin >> IDBook;
		Card* C = new Card(fullname, age, clas, IDCard, Startdate, Enddate, IDBook);
		ListCard.push_back(C);
		cout << "Nhap thong tin the muon thanh cong!" << endl;
		cout << "===================================" << endl;
	}
	void ManageCard::DeleleCard()
	{
		int ID;
		cout << "Nhap ma ID Card de xoa: ";
		cin >> ID;
		for (int i = 0; i < ListCard.size(); i++)
		{
			if (ListCard[i]->getIDcard() == ID)
			{
				delete ListCard[i];
				ListCard.erase(ListCard.begin() + i);
				cout << "Xoa thong tin thanh cong" << endl;
				cout << "===================================" << endl;
				break;
			}
		}

	}
	void ManageCard::showinfor()
	{
		cout << "Thong tin toan bo cac the muon:" << endl;
		for (int i = 0; i < ListCard.size(); i++)
		{
			cout << "Thong tin the Card thu " << i + 1 << ":" << endl;
			ListCard[i]->display();
			cout << "===================================" << endl;
		}
	}