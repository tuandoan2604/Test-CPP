#include "StudentB.h"

StudentB::StudentB()
{
	Math = "Toan";
	Chemistry = "Hoa";
	Biology = "Sinh";
}
StudentB::StudentB(int SBD, string name, string add, int level, string Toan, string Ly, string Hoa) : Student(SBD, name, add, level)
{
	this->Math = Toan;
	this->Chemistry = Hoa;
	this->Biology = Biology;
}
void StudentB::display()
{
	Student::display();
	cout << "\tThi sinh thi khoi B, gom 3 mon: " << Math << " " << Chemistry << " " << Biology << endl;
}
StudentB::~StudentB() {}