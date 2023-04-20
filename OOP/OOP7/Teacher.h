#pragma once
#include "Header.h"

class Teacher
{
private:
	string name;
	int age;
	string hometown;
	int id;
	int salary;
	int bonus;
	int penalty;
	int realget;
public:
	Teacher();
	
	Teacher(string name, int age, string hometown, int id, int salary, int bonus, int penalty);
	
	string getname();

	string gethometown();
	
	int getage();
	
	int getid();

	int getsalary();
	
	int getbonus();

	int getpenalty();
	
	int getrealget();
	
	void setname(string name);
	
	void sethometown(string hometown);
	
	void setid(int id);

	void setage(int age);
	
	void setsalary(int salary);
	
	void setbonus(int bonus);
	
	void setpenalty(int penalty);
	
	~Teacher();
	
};
