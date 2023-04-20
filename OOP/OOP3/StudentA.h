#pragma once
#include "Student.h"

class StudentA : public Student
{
private:
	string Math = "Toan";
	string Physics = "Ly";
	string Chemistry = "Hoa";
public:
	StudentA();
	
	StudentA(int SBD, string name, string add, int level, string Toan, string Ly, string Hoa);

	void display();
	
	~StudentA();
};
