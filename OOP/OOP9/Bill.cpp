#include "Bill.h"


	Bill::Bill()
	{}
	Bill::Bill(string name, int numberadd, int id, int oldindex, int newindex) :Customer(name, numberadd, id)
	{
		this->oldindex = oldindex;
		this->newindex = newindex;
	}
	int Bill::getoldindex()
	{
		return oldindex;
	}
	int Bill::getnewindex()
	{
		return newindex;
	}
	void Bill::setoldindex(int oldindex)
	{
		this->oldindex = oldindex;
	}
	void Bill::setnewindex(int newindex)
	{
		this->newindex = newindex;
	}
	int Bill::getbill()
	{
		bill = (newindex - oldindex) * 5;
		return bill;
	}
