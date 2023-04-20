#include "Engineers.h"

	Engineers::Engineers()
	{}
	Engineers::Engineers(string name, int age, string sex, string address, string Major) : Officers::Officers(name, age, sex, address)
	{
		this->Major = Major;
	}
	void Engineers::setmajor(string Major)
	{
		this->Major = Major;
	}
	string Engineers::getmajor()
	{
		return Major;
	}
	void Engineers::display()
	{
		Officers::display();
		cout << "\tMajor: " << Major << endl;
	}
	Engineers::~Engineers()
	{}
