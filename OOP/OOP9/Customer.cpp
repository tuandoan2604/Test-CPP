#include "Customer.h"


	Customer::Customer()
	{}
	Customer::Customer(string name, int numberadd, int id) :name(name), numberadd(numberadd), id(id)
	{}
	string Customer::getname()
	{
		return name;
	}
	int Customer::getnumberadd()
	{
		return numberadd;
	}
	int Customer::getid()
	{
		return id;
	}
	void Customer::setname(string name)
	{
		this->name = name;
	}
	void Customer::setnumberadd(int numberadd)
	{
		this->numberadd = numberadd;
	}
	void Customer::setid(int id)
	{
		this->id = id;
	}