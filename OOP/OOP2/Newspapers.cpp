#include "Newspapers.h"

Newspapers::Newspapers()
{}
	Newspapers::Newspapers(int ID, string publisher, int numpub, int dayrel) : Files::Files(ID, publisher, numpub)
	{
		this->dayrel = dayrel;
	}
	int Newspapers::getdayrel()
	{
		return dayrel;
	}
	void Newspapers::setdayrel(int dayrel)
	{
		this->dayrel = dayrel;
	}
	void Newspapers::display()
	{
		Files::display();
		cout << "Ngay phat hanh: " << getdayrel() << endl;
	}
	Newspapers::~Newspapers()
	{}
