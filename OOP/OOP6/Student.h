#pragma once
#include "Header.h"

class Student
{
	string Name;
	int Age;
	string Hometown;
public:
	Student();
	
	Student(string Name, int Age, string Hometown);
	
	string getname();
	
	int getage();
	
	string gethometown();
	
	void setname(string Name);
	
	void setage(int Age);
	
	void sethometown(string Hometown);

	void display();

	~Student();
	
};
