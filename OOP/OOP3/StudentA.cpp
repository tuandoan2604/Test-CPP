#include "StudentA.h"

StudentA::StudentA()
{
	Math = "Toan";
	Physics = "Ly";
	Chemistry = "Hoa";
}
StudentA::StudentA(int SBD, string name, string add, int level, string Toan, string Ly, string Hoa) : Student(SBD, name, add, level)
{
	this->Math = Toan;
	this->Physics = Ly;
	this->Chemistry = Hoa;
}
void StudentA::display()
{
	Student::display();
	cout << "\tThi sinh thi khoi A, gom 3 mon: " << Math << " " << Physics << " " << Chemistry << endl;
}
StudentA::~StudentA() {}