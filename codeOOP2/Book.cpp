#include "Book.h"
#pragma once
#include <iostream>
using namespace std;
#define BOOK 1

Book::Book()
{
}

Book::Book(string documentId, string publisher, int numRelease, string authorName, int numPage) : Document(documentId, publisher, numRelease)
{
    this->authorName = authorName;
    this->numPage = numPage;
}

void Book::setAuthorName(string authorName)
{
    this->authorName = authorName;
}

void Book::setNumPage(int numPage)
{
    this->numPage = numPage;
}

string Book::getAuthorName()
{
    return authorName;
}

int Book::getNumPage()
{
    return numPage;
}

void Book::display()
{
    Document ::display();
    cout << "Ten tac gia: " << getAuthorName() << endl;
    cout << "So trang: " << getNumPage() << endl;
}

int Book::type()
{
    return BOOK;
}

Book::~Book()
{
}
