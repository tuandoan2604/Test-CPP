#include "Officers.h"

	Officers::Officers()
	{}
	Officers::Officers(string name, int age, string sex, string address)
	{
		this->name = name;
		this->age = age;
		this->sex = sex;
		this->address = address;
	}
	string Officers::getname()
	{
		return name;
	}
	int Officers::getage()
	{
		return age;
	}
	string Officers::getsex()
	{
		return sex;
	}
	string Officers::getadd()
	{
		return address;
	}
	void Officers::setname(string name)
	{
		this->name = name;
	}
	void Officers::setage(int age)
	{
		this->age = age;
	}
	void Officers::setsex(string sex)
	{
		this->sex = sex;
	}
	void Officers::setadd(string address)
	{
		this->address = address;
	}
	void Officers::display()
	{
		cout << "\tName: " << getname() << endl;
		cout << "\tAge: " << getage() << endl;
		cout << "\tSex: " << getsex() << endl;
		cout << "\tAddress: " << getadd() << endl;
	}
	Officers::~Officers()
	{}
