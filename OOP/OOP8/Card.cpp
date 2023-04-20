#include "Card.h"


	Card::Card()
	{}
	Card::Card(string fullname, int age, string clas, int IDCard, int Startdate, int Enddate, int IDBook)
		: Student(fullname, age, clas)
	{
		this->IDCard = IDCard;
		this->Startdate = Startdate;
		this->Enddate = Enddate;
		this->IDBook = IDBook;
	}
	int Card::getIDcard()
	{
		return IDCard;
	}
	int Card::getstart()
	{
		return Startdate;
	}
	int Card::getend()
	{
		return Enddate;
	}
	int Card::getIDbook()
	{
		return IDBook;
	}
	void Card::setIDcard(int IDCard)
	{
		this->IDCard = IDCard;
	}
	void Card::setstart(int Startdate)
	{
		this->Startdate = Startdate;
	}
	void Card::setend(int Enddate)
	{
		this->Enddate = Enddate;
	}
	void Card::setIDbook(int IDBook)
	{
		this->IDBook = IDBook;
	}
	void Card::display()
	{
		Student::display();
		cout << "\tMa phieu muon: " << IDCard << endl;
		cout << "\tNgay muon: " << Startdate << endl;
		cout << "\tNgay hen tra: " << Enddate << endl;
		cout << "\tMa sach muon: " << IDBook << endl;
	}
	Card::~Card()
	{}