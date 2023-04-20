#pragma once
#include "Customer.h"
class Bill : public Customer
{
private:
	int oldindex;
	int newindex;
	int bill;
public:
	Bill();
	
	Bill(string name, int numberadd, int id, int oldindex, int newindex);

	int getoldindex();
	
	int getnewindex();

	void setoldindex(int oldindex);
	
	void setnewindex(int newindex);
	
	int getbill();
	
};