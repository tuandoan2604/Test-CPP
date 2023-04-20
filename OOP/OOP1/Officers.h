#pragma once
#include "Header.h"

class Officers
{
private:
	string name;
	int age;
	string sex;
	string address;
public:
	Officers();
	
	Officers(string name, int age, string sex, string address);
	
	string getname();

	int getage();
	
	string getsex();
	
	string getadd();

	void setname(string name);
	
	void setage(int age);
	
	void setsex(string sex);
	
	void setadd(string address);
	
	virtual void display();

	virtual ~Officers();
	
};
