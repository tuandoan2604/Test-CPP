#include "ManageTeacher.h"

	ManageTeacher::ManageTeacher()
	{}
	void ManageTeacher::AddTeacher()
	{
		string name;
		int age;
		string hometown;
		int id;
		int salary;
		int bonus;
		int penalty;
		cout << "Nhap thong tin giao vien can them: " << endl;
		cout << "Name: ";
		cin >> name;
		cout << "Age: ";
		cin >> age;
		cout << "Hometown: ";
		cin >> hometown;
		cout << "ID: ";
		cin >> id;
		cout << "Salary: ";
		cin >> salary;
		cout << "Bonus: ";
		cin >> bonus;
		cout << "Penalty: ";
		cin >> penalty;
		Teacher* T = new Teacher(name, age, hometown, id, salary, bonus, penalty);
		ListTeacher.push_back(T);
		cout << "Nhap thong tin giao vien thanh cong!" << endl;
		cout << "====================================" << endl;
	}
	void ManageTeacher::DeleteTeacher()
	{
		int id;
		cout << "Nhap ID giao vien can xoa: ";
		cin >> id;
		for (int i = 0; i < ListTeacher.size(); i++)
		{
			if (ListTeacher[i]->getid() == id)
			{
				delete ListTeacher[i];
				ListTeacher.erase(ListTeacher.begin() + i);
			}
		}
		cout << "Xoa thong tin thanh cong" << endl;
		cout << "====================================" << endl;
	}