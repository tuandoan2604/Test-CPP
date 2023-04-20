#pragma once
#include "Officers.h"

class Staffs : public Officers
{
private:
	string Job;
public:
	Staffs(string name, int age, string sex, string address, string Job);
	
	void setjob(string Job);
	
	string getjob();
	
	void display();
	
	~Staffs();
};