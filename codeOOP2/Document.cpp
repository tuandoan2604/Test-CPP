#include "Document.h"
#pragma once
#include <iostream>
using namespace std;

Document::Document()
{
}

Document::Document(string documentId, string publisher, int numRelease)
{
    this->documentId = documentId;
    this->publisher = publisher;
    this->numRelease = numRelease;
}

void Document::setDocumentId(string documentId)
{
    this->documentId = documentId;
}

void Document::setPublisher(string publisher)
{
    this->publisher = publisher;
}

void Document::setNumRelease(int numRelease)
{
    this->numRelease = numRelease;
}

string Document::getDocumnetId()
{
    return documentId;
}

string Document::getPublisher()
{
    return publisher;
}

int Document::getNumRelease()
{
    return numRelease;
}

void Document::display()
{
    cout << "Ma tai lieu :" << getDocumnetId() << endl;
    cout << "Ten NXB :" << getPublisher() << endl;
    cout << "So ban phat hanh " << getNumRelease() << endl;
}

int Document::type()
{
    return 0;
}

Document::~Document()
{
}
