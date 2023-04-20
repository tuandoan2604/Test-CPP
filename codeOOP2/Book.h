#include "Document.h"
#pragma once
#include <iostream>
using namespace std;
class Book : public Document
{
private:
    string authorName;
    int numPage;

public:
    Book(/* args */);
    Book(string documentId, string publisher, int numRelease, string authorName, int numPage);
    void setAuthorName(string authorName);
    void setNumPage(int numPage);
    string getAuthorName();
    int getNumPage();
    void display();
    int type();
    ~Book();
};
