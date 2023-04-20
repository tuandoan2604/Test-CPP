#include "Workers.h"

	Workers::Workers(string name, int age, string sex, string address, int grade) : Officers::Officers(name, age, sex, address)
	{
		this->grade = grade;
	}
	void Workers::setgrade(int grade)
	{
		this->grade = grade;
	}
	int Workers::getgrade()
	{
		return grade;
	}
	void Workers::display()
	{
		Officers::display();
		cout << "\tGrade: " << grade << endl;
	}
	Workers::~Workers()
	{}