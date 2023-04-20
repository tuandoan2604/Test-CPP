#include "Header.h"

#ifndef DOCUMENT_H
#define DOCUMENT_H

class Document
{
private:
    /* data */
    int ID;
    string publish_company;
    int quantity;
public:
    Document(/* args */);
    virtual ~Document();

    int getID();
    string getPSC();
    int getQuan();
    virtual void display() = 0;
    virtual int type() = 0;
};

Document::Document(/* args */)
{
    cout<< "Enter the ID: \n";
    cin>> ID;

    cout<< "Enter the publishing company: \n";
    cin.ignore();
    getline(cin, publish_company);

    cout<< "Enter the quantity of release document: \n";
    cin>> quantity;
}

Document::~Document()
{
    cout<< "Destructor of Document \n";
}

int Document::getID()
{
    return ID;
}

string Document:: getPSC()
{
    return publish_company;
}

int Document:: getQuan()
{
    return quantity;
}


#endif