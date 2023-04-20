#pragma once
#include "Student.h"

class Card : public Student
{
	int IDCard;
	int Startdate;
	int Enddate;
	int IDBook;
public:
	Card();

	Card(string fullname, int age, string clas, int IDCard, int Startdate, int Enddate, int IDBook);

	int getIDcard();

	int getstart();

	int getend();

	int getIDbook();

	void setIDcard(int IDCard);

	void setstart(int Startdate);

	void setend(int Enddate);

	void setIDbook(int IDBook);

	void display();

	~Card();

};
