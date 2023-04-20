#include "Teacher.h"

	Teacher::Teacher()
	{}
	Teacher::Teacher(string name, int age, string hometown, int id, int salary, int bonus, int penalty) : name(name), age(age),
		hometown(hometown), id(id), salary(salary), bonus(bonus), penalty(penalty)
	{}
	string Teacher::getname()
	{
		return name;
	}
	string Teacher::gethometown()
	{
		return hometown;
	}
	int Teacher::getage()
	{
		return age;
	}
	int Teacher::getid()
	{
		return id;
	}
	int Teacher::getsalary()
	{
		return salary;
	}
	int Teacher::getbonus()
	{
		return bonus;
	}
	int Teacher::getpenalty()
	{
		return penalty;
	}
	int Teacher::getrealget()
	{
		return salary + bonus - penalty;
	}
	void Teacher::setname(string name)
	{
		this->name = name;
	}
	void Teacher::sethometown(string hometown)
	{
		this->hometown = hometown;
	}
	void Teacher::setid(int id)
	{
		this->id = id;
	}
	void Teacher::setage(int age)
	{
		this->age = age;
	}
	void Teacher::setsalary(int salary)
	{
		this->salary = salary;
	}
	void Teacher::setbonus(int bonus)
	{
		this->bonus = bonus;
	}
	void Teacher::setpenalty(int penalty)
	{
		this->penalty = penalty;
	}
	Teacher::~Teacher()
	{}