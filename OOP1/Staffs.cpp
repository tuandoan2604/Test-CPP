#include "Staffs.h"


	Staffs::Staffs(string name, int age, string sex, string address, string Job) : Officers::Officers(name, age, sex, address)
	{
		this->Job = Job;
	}
	void Staffs::setjob(string Job)
	{
		this->Job = Job;
	}
	string Staffs::getjob()
	{
		return Job;
	}
	void Staffs::display()
	{
		Officers::display();
		cout << "\tJob: " << Job << endl;
	}
	Staffs::~Staffs()
	{}
