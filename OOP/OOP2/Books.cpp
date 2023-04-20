#include "Books.h"

Books::Books()
{}
	Books::Books(int ID, string publisher, int numpub, string author, int numpage) : Files::Files(ID, publisher, numpub)
	{
		this->author = author;
		this->numpage = numpage;
	}
	string Books::getauthor()
	{
		return author;
	}
	int Books::getpage()
	{
		return numpage;
	}
	void Books::setauthor(string author)
	{
		this->author = author;
	}
	void Books::setpage(int numpage)
	{
		this->numpage = numpage;
	}
	void Books::display()
	{
		Files::display();
		cout << "Ten tac gia: " << getauthor() << endl;
		cout << "So trang: " << getpage() << endl;
	}
	Books::~Books()
	{}
	