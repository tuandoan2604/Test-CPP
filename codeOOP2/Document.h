#pragma once
#include <iostream>
using namespace std;
class Document
{
private:
    string documentId;
    string publisher;
    int numRelease;
public:
    
    Document(/* args */);
    Document(string documentId, string publisher, int numRelease);
    void setDocumentId(string documentId);
    void setPublisher(string publisher);
    void setNumRelease(int numRelease);
    string getDocumnetId();
    string getPublisher();
    int getNumRelease();
    virtual void display();
    virtual int type();
    ~Document();
};


