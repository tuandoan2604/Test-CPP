#pragma once
#include "Files.h"
class Books : public Files
{
private:
	string author;
	int numpage;
public:
	Books();
	
	Books(int ID, string publisher, int numpub, string author, int numpage);

	string getauthor();

	int getpage();

	void setauthor(string author);
	
	void setpage(int numpage);
	
	void display();

	~Books();
	
};
