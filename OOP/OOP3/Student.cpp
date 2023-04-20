#include "Student.h"

Student::Student()
{}
Student::Student(int SBD, string name, string add, int level) : SBD(SBD), name(name), add(add), level(level)
{}
int Student::getSBD()
{
	return SBD;
}
string Student::getname()
{
	return name;
}
string Student::getadd()
{
	return add;
}
int Student::getlevel()
{
	return level;
}
void Student::setSBD(int SBD)
{
	this->SBD = SBD;
}
void Student::setname(string name)
{
	this->name = name;
}
void Student::setadd(string add)
{
	this->add = add;
}
void Student::setlevel(int level)
{
	this->level = level;
}
void Student::display()
{
	cout << "Thong tin thi sinh: " << endl;
	cout << "\tSBD: " << SBD << endl;
	cout << "\tName: " << name << endl;
	cout << "\tAddress: " << add << endl;
	cout << "\tLevel uu tien: " << level << endl;
}
Student::~Student()
{
}