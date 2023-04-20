#pragma once
#include "Header.h"

class Transports
{
	int ID;
	string Brand;
	int Year;
	int Price;
	string Color;
public:
	Transports();
	
	Transports(int ID, string Brand, int Year, int Price, string Color);
	
	int getid();

	string getbrand();
	
	int getyear();
	
	int getprice();
	
	string getcolor();
	
	void setid(int ID);
	
	void setbrand(string brand);
	
	void setyear(int Year);
	
	void setprice(int Price);
	
	void setcolor(string color);
	
	virtual void display();

	virtual ~Transports();
	
};
