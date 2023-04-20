#pragma once
#include "Header.h"

class Customer
{
private:
	string name;
	int numberadd;
	int id;
public:
	Customer();
	
	Customer(string name, int numberadd, int id);

	string getname();
	
	int getnumberadd();
	
	int getid();
	
	void setname(string name);

	void setnumberadd(int numberadd);

	void setid(int id);

};
