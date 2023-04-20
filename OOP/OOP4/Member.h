#pragma once
#include "Header.h"

class Member
{
private:
	string name;
	int age;
	string job;
	int cccd;
public:
	Member();
	
	Member(string name, int age, string job, int cccd);

	string getname();
	
	int getage();
	
	string getjob();
	
	int getcccd();
	
	void setname(string name);

	void setage(int age);

	void setjob(string job);
	
	void setcccd(int cccd);

	void displayInfor();

	~Member();

};
