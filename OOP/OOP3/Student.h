#pragma once
#include "Header.h"

class Student
{
private:
	int SBD;
	string name;
	string add;
	int level;
public:
	Student();
	
	Student(int SBD, string name, string add, int level);
	
	int getSBD();
	
	string getname();
	
	string getadd();
	
	int getlevel();

	void setSBD(int SBD);

	void setname(string name);
	
	void setadd(string add);
	
	void setlevel(int level);
	
	virtual void display();

	virtual ~Student();
	
};
