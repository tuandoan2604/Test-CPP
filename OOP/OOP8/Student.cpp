#include "Student.h"

	Student::Student()
	{}
	Student::Student(string fullname, int age, string clas) : fullname(fullname), age(age), clas(clas)
	{}
	string Student::getname()
	{
		return fullname;
	}
	string Student::getclas()
	{
		return clas;
	}
	int Student::getage()
	{
		return age;
	}
	void Student::setname(string fullname)
	{
		this->fullname = fullname;
	}
	void Student::setage(int age)
	{
		this->age = age;
	}
	void Student::setclas(string clas)
	{
		this->clas = clas;
	}
	void Student::display()
	{
		cout << "\tFullname: " << fullname << endl;
		cout << "\tAge: " << age << endl;
		cout << "\tClass: " << clas << endl;
	}
	Student::~Student()
	{}