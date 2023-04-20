#pragma once
#include "Officers.h"

class Engineers : public Officers
{
private:
	string Major;
public:
	Engineers();
	
	Engineers(string name, int age, string sex, string address, string Major);
	
	void setmajor(string Major);
	
	string getmajor();
	
	void display();
	
	~Engineers();
	
};