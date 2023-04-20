#include "Member.h"


	Member::Member()
	{}
	Member::Member(string name, int age, string job, int cccd) : name(name), age(age), job(job), cccd(cccd)
	{}
	string Member::getname()
	{
		return name;
	}
	int Member::getage()
	{
		return age;
	}
	string Member::getjob()
	{
		return job;
	}
	int Member::getcccd()
	{
		return cccd;
	}
	void Member::setname(string name)
	{
		this->name = name;
	}
	void Member::setage(int age)
	{
		this->age = age;
	}
	void Member::setjob(string job)
	{
		this->job = job;
	}
	void Member::setcccd(int cccd)
	{
		this->cccd = cccd;
	}
	void Member::displayInfor()
	{
		cout << "\t Ho va ten: " << name << endl;
		cout << "\t Age: " << age << endl;
		cout << "\t Job: " << job << endl;
		cout << "\t CCCD: " << cccd << endl;
	}
	Member::~Member()
	{}