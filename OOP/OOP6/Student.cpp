#include "Student.h"


	Student::Student()
	{}
	Student::Student(string Name, int Age, string Hometown) : Name(Name), Age(Age), Hometown(Hometown)
	{}
	string Student::getname()
	{
		return Name;
	}
	int Student::getage()
	{
		return Age;
	}
	string Student::gethometown()
	{
		return Hometown;
	}
	void Student::setname(string Name)
	{
		this->Name = Name;
	}
	void Student::setage(int Age)
	{
		this->Age = Age;
	}
	void Student::sethometown(string Hometown)
	{
		this->Hometown = Hometown;
	}
	void Student::display()
	{
		cout << "\tName: " << Name << endl;
		cout << "\tAge: " << Age << endl;
		cout << "\tHometown: " << Hometown << endl;
	}
	Student::~Student()
	{}