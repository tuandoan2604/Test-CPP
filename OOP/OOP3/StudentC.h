#pragma once
#include "Student.h"
class StudentC : public Student
{
private:
	string Literature = "Van";
	string History = "Su";
	string Geography = "Dia";
public:
	StudentC();
	
	StudentC(int SBD, string name, string add, int level, string Toan, string Ly, string Hoa);
	
	void display();
	
	~StudentC();
};
