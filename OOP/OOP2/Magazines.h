#pragma once
#include "Files.h"
class Magazines : public Files
{
	int numrel;
	int monthrel;
public:
	Magazines();

	Magazines(int ID, string publisher, int numpub, int numrel, int monthrel);

	int getnumrel();

	int getmonthrel();
	
	void setnumrel(int numrel);

	void setmonthrel(int monthrel);

	void display();

	~Magazines();
	
};
