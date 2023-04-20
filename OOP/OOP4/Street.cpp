#include "Street.h"


	Street::Street()
	{}
	void Street::AddFamily()
	{
		Family Fml;
		int SoTv;
		int Diachi;
		cout << "So TV trong ho gia dinh: ";
		cin >> SoTv;
		Fml.setNumMember(SoTv);
		cout << "So nha ho gia dinh: ";
		cin >> Diachi;
		Fml.setAddress(Diachi);
		Fml.AddMember();
		ListFamily.push_back(Fml);
	}
	void Street::DisplayAll()
	{
		for (int i = 0; i < ListFamily.size(); i++)
		{
			cout << "Ho gia dinh thu " << i + 1 << ":" << endl;
			cout << "So TV: " << ListFamily[i].getNumMember() << endl;
			cout << "So nha: " << ListFamily[i].getAddress() << endl;
			ListFamily[i].DisplayMember();
			cout << endl << "===========" << endl;
		}
	}
	Street::~Street()
	{}