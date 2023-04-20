#include "Admissions.h"


	Admissions::Admissions()
	{}
	void Admissions::AddstA()
	{

		Student* St1 = new StudentA;
		int SBD;
		string name;
		string add;
		int level;
		cout << "Nhap thong tin sv: " << endl;
		cout << "SBD SV: " << endl;
		cin >> SBD;
		St1->setSBD(SBD);
		cout << "Name of SV: " << endl;
		cin >> name;
		St1->setname(name);
		cout << "Address of SV: " << endl;
		cin >> add;
		St1->setadd(add);
		cout << "Level SV: " << endl;
		cin >> level;
		St1->setlevel(level);
		St.push_back(St1);
	}
	void Admissions::AddstB()
	{
		Student* St2 = new StudentB;
		int SBD;
		string name;
		string add;
		int level;
		cout << "Nhap thong tin sv: " << endl;
		cout << "SBD SV: " << endl;
		cin >> SBD;
		St2->setSBD(SBD);
		cout << "Name of SV: " << endl;
		cin >> name;
		St2->setname(name);
		cout << "Address of SV: " << endl;
		cin >> add;
		St2->setadd(add);
		cout << "Level SV: " << endl;
		cin >> level;
		St2->setlevel(level);
		St.push_back(St2);
	}
	void Admissions::AddstC()
	{
		Student* St3 = new StudentA;
		int SBD;
		string name;
		string add;
		int level;
		cout << "Nhap thong tin sv: " << endl;
		cout << "SBD SV: " << endl;
		cin >> SBD;
		St3->setSBD(SBD);
		cout << "Name of SV: " << endl;
		cin >> name;
		St3->setname(name);
		cout << "Address of SV: " << endl;
		cin >> add;
		St3->setadd(add);
		cout << "Level SV: " << endl;
		cin >> level;
		St3->setlevel(level);
		St.push_back(St3);
	}
	void Admissions::displayinfor()
	{
		for (int i = 0; i < St.size(); i++)
		{
			cout << "Thong tin toan bo thi sinh du thi: " << endl;
			St[i]->display();
		}
	}
	void Admissions::searchbySBD()
	{
		cout << "Vui long nhap SBD muon tim kiem: ";
		int SBDsearch;
		cin >> SBDsearch;
		for (int i = 0; i < St.size(); i++)
		{
			if (St[i]->getSBD() == SBDsearch)
			{
				cout << "Ket qua tim kiem thi sinh theo SBD la: " << endl;
				return St[i]->display();
			}
		}

	}
	Admissions::~Admissions()
	{}
