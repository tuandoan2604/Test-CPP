#include "Files.h"

Files::Files()
{}
	Files::Files(int ID, string publisher, int numpub) : ID(ID), publisher(publisher), numpub(numpub)
	{
	}
	int Files::getID()
	{
		return ID;
	}
	string Files::getpublisher()
	{
		return publisher;
	}
	int Files::getnumpub()
	{
		return numpub;
	}
	void Files::setID(int ID)
	{
		this->ID = ID;
	}
	void Files::setpublisher(string publisher)
	{
		this->publisher = publisher;
	}
	void Files::setnumpub(int numpub)
	{
		this->numpub = numpub;
	}
	void Files::display()
	{
		cout << "Ma tai lieu: " << getID() << endl;
		cout << "Nha phat hanh: " << getpublisher() << endl;
		cout << "So luong phat hanh: " << getnumpub() << endl;
	}
	Files::~Files()
	{}

