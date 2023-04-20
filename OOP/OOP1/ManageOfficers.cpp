#include "ManageOfficers.h"

	ManageOfficers::ManageOfficers()
	{
		this->ListOfficers = ListOfficers;
	}
	void ManageOfficers::AddWorkers()
	{
		string name;
		int age;
		string sex;
		string address;
		int grade;
		cout << "Nhap ten CN: ";
		cin >> name;
		cout << "Nhap tuoi CN: ";
		cin >> age;
		cout << "Nhap gioi tinh CN: ";
		cin >> sex;
		cout << "Nhap dia chi CN: ";
		cin >> address;
		cout << "Nhap cap bac CN: ";
		cin >> grade;
		Officers* Worker1 = new Workers(name, age, sex, address, grade);
		ListOfficers.push_back(Worker1);
	}
	void ManageOfficers::AddEngineers()
	{
		string name;
		int age;
		string sex;
		string address;
		string major;
		cout << "Nhap ten KS: ";
		cin >> name;
		cout << "Nhap tuoi KS: ";
		cin >> age;
		cout << "Nhap gioi tinh KS: ";
		cin >> sex;
		cout << "Nhap dia chi KS: ";
		cin >> address;
		cout << "Nhap chuyen nganh hoc KS: ";
		cin >> major;
		Officers* Engineer1 = new Engineers(name, age, sex, address, major);
		ListOfficers.push_back(Engineer1);
	}
	void ManageOfficers::AddStaffs()
	{
		string name;
		int age;
		string sex;
		string address;
		string job;
		cout << "Nhap ten NV: ";
		cin >> name;
		cout << "Nhap tuoi NV: ";
		cin >> age;
		cout << "Nhap gioi tinh NV: ";
		cin >> sex;
		cout << "Nhap dia chi NV: ";
		cin >> address;
		cout << "Nhap nghe nghiep NV: ";
		cin >> job;
		Officers* Staff1 = new Staffs(name, age, sex, address, job);
		ListOfficers.push_back(Staff1);
	}
	void ManageOfficers::searchbyname()
	{
		string namesearch;
		cout << "Nhap ten muon tim kiem: ";
		cin >> namesearch;
		for (int i = 0; i < ListOfficers.size(); i++)
		{
			if (ListOfficers[i]->getname() == namesearch)
			{
				cout << "Thong tin can bo tim duoc la: " << endl;
				ListOfficers[i]->display();
				cout << "=================================" << endl;
				break;
			}
		}
	}
	void ManageOfficers::showinfordscb()
	{
		for (int i = 0; i < ListOfficers.size(); i++)
		{
			ListOfficers[i]->display();
		}
	}
	ManageOfficers::~ManageOfficers()
	{}
