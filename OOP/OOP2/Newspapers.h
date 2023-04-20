#pragma once
#include "Files.h"
class Newspapers : public Files
{
	int dayrel;
public:
	Newspapers();
	Newspapers(int ID, string publisher, int numpub, int dayrel);
	
	int getdayrel();
	
	void setdayrel(int dayrel);
	
	void display();
	
	~Newspapers();
	
};
