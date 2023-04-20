#include "StudentC.h"

StudentC::StudentC()
{}
StudentC::StudentC(int SBD, string name, string add, int level, string Toan, string Ly, string Hoa) : Student(SBD, name, add, level)
{
	this->Literature = Literature;
	this->History = History;
	this->Geography = Geography;
}
void StudentC::display()
{
	Student::display();
	cout << "\tThi sinh thi khoi C, gom 3 mon: " << Literature << " " << History << " " << Geography << endl;
}
StudentC::~StudentC()
{}