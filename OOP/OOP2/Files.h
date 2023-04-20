#pragma once
#include "Header.h"

class Files
{
private:
	int ID;
	string publisher;
	int numpub;
public:
	Files();
	
	Files(int ID, string publisher, int numpub);
	
	int getID();
	
	string getpublisher();
	
	int getnumpub();
	
	void setID(int ID);

	void setpublisher(string publisher);
	
	void setnumpub(int numpub);

	virtual void display();
	
	virtual ~Files();
	
};