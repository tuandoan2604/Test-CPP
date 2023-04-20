#include "Magazines.h"

	Magazines::Magazines()
	{}
	Magazines::Magazines(int ID, string publisher, int numpub, int numrel, int monthrel) : Files::Files(ID, publisher, numpub)
	{
		this->numrel = numrel;
		this->monthrel = monthrel;
	}
	int Magazines::getnumrel()
	{
		return numrel;
	}
	int Magazines::getmonthrel()
	{
		return monthrel;
	}
	void Magazines::setnumrel(int numrel)
	{
		this->numrel = numrel;
	}
	void Magazines::setmonthrel(int monthrel)
	{
		this->monthrel = monthrel;
	}
	void Magazines::display()
	{
		Files::display();
		cout << "So luong phat hanh: " << getnumrel() << endl;
		cout << "Thang phat hanh: " << getmonthrel() << endl;
	}
	Magazines::~Magazines()
	{}
