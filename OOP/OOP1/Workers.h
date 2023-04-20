#pragma once
#include "Officers.h"

class Workers : public Officers
{
private:
	int grade;
public:
	Workers();

	Workers(string name, int age, string sex, string address, int grade);
	void setgrade(int grade);
	
	int getgrade();
	
	void display();
	
	~Workers();
	
};
