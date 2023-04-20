#pragma once
#include "Student.h"
class StudentB : public Student
{
private:
	string Math = "Toan";
	string Chemistry = "Hoa";
	string Biology = "Sinh";
public:
	StudentB();
	
	StudentB(int SBD, string name, string add, int level, string Toan, string Ly, string Hoa);

	void display();

	~StudentB();
};
