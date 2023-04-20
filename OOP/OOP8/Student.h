#pragma once
#include "Header.h"
class Student
{
private:
	string fullname;
	int age;
	string clas;
public:
	Student();
	
	Student(string fullname, int age, string clas);
	
	string getname();
	
	string getclas();

	int getage();
	
	void setname(string fullname);
	
	void setage(int age);
	
	void setclas(string clas);

	void display();

	~Student();
	
};