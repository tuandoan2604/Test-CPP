#include "ManageTransports.h"


	ManageTransports::ManageTransports()
	{}
	void ManageTransports::AddMotorBike()
	{
		int ID;
		string Brand;
		int Year;
		int Price;
		string Color;
		int Power;
		cout << "Nhap cac thong tin de them Car: " << endl;
	again:;
		cout << "ID: ";
		cin >> ID;
		for (int i = 0; i < ListTrans.size(); i++)
		{
			if (ListTrans[i]->getid() == ID)
			{
				cout << "ID da ton tai. Vui long thu lai!" << endl;
				cout << "=========================" << endl;
				goto again;

			}
		}
		cout << "Brand: ";
		cin >> Brand;
		cout << "Year: ";
		cin >> Year;
		cout << "Price: ";
		cin >> Price;
		cout << "Color: ";
		cin >> Color;
		cout << "Power: ";
		cin >> Power;
		Transports* Motorbike = new MotorBikes(ID, Brand, Year, Price, Color, Power);
		ListTrans.push_back(Motorbike);
		cout << "Them thong tin MotorBike thanh cong!" << endl;
		cout << "==============================" << endl;
	}
	void ManageTransports::AddCar()
	{
		int ID;
		string Brand;
		int Year;
		int Price;
		string Color;
		int NumberSeat;
		string TypeEngine;
		cout << "Nhap cac thong tin de them Car: " << endl;
	again:;
		cout << "ID: ";
		cin >> ID;
		for (int i = 0; i < ListTrans.size(); i++)
		{
			if (ListTrans[i]->getid() == ID)
			{
				cout << "ID da ton tai. Vui long thu lai!" << endl;
				cout << "=========================" << endl;
				goto again;

			}
		}
		cout << "Brand: ";
		cin >> Brand;
		cout << "Year: ";
		cin >> Year;
		cout << "Price: ";
		cin >> Price;
		cout << "Color: ";
		cin >> Color;
		cout << "NumberSeat: ";
		cin >> NumberSeat;
		cout << "TypeEngine: ";
		cin >> TypeEngine;
		Transports* Car = new Cars(ID, Brand, Year, Price, Color, NumberSeat, TypeEngine);
		ListTrans.push_back(Car);
		cout << "Them thong tin Car thanh cong!" << endl;
		cout << "==============================" << endl;
	}
	void ManageTransports::AddTruck()
	{
		int ID;
		string Brand;
		int Year;
		int Price;
		string Color;
		int Weight;
		cout << "Nhap cac thong tin de them Car: " << endl;
	again:;
		cout << "ID: ";
		cin >> ID;
		for (int i = 0; i < ListTrans.size(); i++)
		{
			if (ListTrans[i]->getid() == ID)
			{
				cout << "ID da ton tai. Vui long thu lai!" << endl;
				cout << "=========================" << endl;
				goto again;

			}
		}
		cout << "Brand: ";
		cin >> Brand;
		cout << "Year: ";
		cin >> Year;
		cout << "Price: ";
		cin >> Price;
		cout << "Color: ";
		cin >> Color;
		cout << "Weight: ";
		cin >> Weight;
		Transports* Truck = new Trucks(ID, Brand, Year, Price, Color, Weight);
		ListTrans.push_back(Truck);
		cout << "Them thong tin Truck thanh cong!" << endl;
		cout << "==============================" << endl;
	}
	void ManageTransports::DeleteID()
	{
		int ID;
		cout << "Nhap ID muon xoa: ";
		cin >> ID;
		for (int i = 0; i < ListTrans.size(); i++)
		{
			if (ListTrans[i]->getid() == ID)
			{
				delete ListTrans[i];
				ListTrans.erase(ListTrans.begin() + i);
				cout << "Xoa thong tin thanh cong!" << endl;
				cout << "=========================" << endl;
				break;
			}
		}
	}
	void ManageTransports::SearchbyBrand()
	{
		string Brand;
		cout << "Nhap thong tin hang san xuat tim kiem: ";
		cin >> Brand;
		for (int i = 0; i < ListTrans.size(); i++)
		{
			if (ListTrans[i]->getbrand() == Brand)
			{
				ListTrans[i]->display();
				cout << "=========================" << endl;
			}
		}
	}
	void ManageTransports::SearchbyColor()
	{
		string Color;
		cout << "Nhap mau muon tim kiem: ";
		cin >> Color;
		for (int i = 0; i < ListTrans.size(); i++)
		{
			if (ListTrans[i]->getcolor() == Color)
			{
				ListTrans[i]->display();
				cout << "=========================" << endl;
			}
		}
	}