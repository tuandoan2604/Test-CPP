#include "Transports.h"


	Transports::Transports()
	{}
	Transports::Transports(int ID, string Brand, int Year, int Price, string Color) : ID(ID), Brand(Brand), Year(Year), Price(Price), Color(Color)
	{}
	int Transports::getid()
	{
		return ID;
	}
	string Transports::getbrand()
	{
		return Brand;
	}
	int Transports::getyear()
	{
		return Year;
	}
	int Transports::getprice()
	{
		return Price;
	}
	string Transports::getcolor()
	{
		return Color;
	}
	void Transports::setid(int ID)
	{
		this->ID = ID;
	}
	void Transports::setbrand(string brand)
	{
		this->Brand = Brand;
	}
	void Transports::setyear(int Year)
	{
		this->Year = Year;
	}
	void Transports::setprice(int Price)
	{
		this->Price = Price;
	}
	void Transports::setcolor(string color)
	{
		this->Color = Color;
	}
	void Transports::display()
	{
		cout << "\tID: " << ID << endl;
		cout << "\tBrand: " << Brand << endl;
		cout << "\tYear: " << Year << endl;
		cout << "\tPrice: " << Price << endl;
		cout << "\tColor: " << Color << endl;
	}

	Transports:: ~Transports()
	{}