#include "Class.h"

	Class::Class()
	{}
	void Class::AddStudent()
	{
		string Name;
		int Age;
		string Hometown;
		cout << "Nhap thong tin hoc sinh can them: " << endl;
		cout << "Name: ";
		cin >> Name;
		cout << "Age: ";
		cin >> Age;
		cout << "Hometown: ";
		cin >> Hometown;
		Student* A = new Student(Name, Age, Hometown);
		ListStudent.push_back(A);
		cout << "Them thong tin hoc sinh thanh cong!" << endl;
		cout << "==================================" << endl;
	}
	void Class::ShowInfor()
	{
		for (int i = 0; i < ListStudent.size(); i++)
		{
			cout << "Thong tin hoc sinh thu " << i + 1 << ":" << endl;
			ListStudent[i]->display();
		}
		cout << "=================================" << endl;
	}
	void Class::ShowAge20()
	{
		cout << "Thong tin cac hoc sinh 20 tuoi: " << endl;
		for (int i = 0; i < ListStudent.size(); i++)
		{
			if (ListStudent[i]->getage() == 20)
			{
				ListStudent[i]->display();
				cout << "===============================" << endl;
			}
		}
	}
	void Class::ShowAge23DN()
	{
		int Count = 0;
		for (int i = 0; i < ListStudent.size(); i++)
		{
			if (ListStudent[i]->getage() == 23 && ListStudent[i]->gethometown() == "DN")
			{
				Count++;
			}
		}
		cout << "So hoc sinh 23 tuoi que DN la: " << Count << endl;
		cout << "===============================" << endl;
	}
	Class::~Class()
	{}