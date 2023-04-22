#pragma once
#include "Document.h"
#include "Book.h"
#include "Magazine.h"
#include "Newspaper.h"
#include <vector>

class Manage_Document
{
private:
    vector<Document *> List_Document;

public:
    void Insert_document();

    void Delete_document();
    void Show_informationDocument();
    void Search_by_type();
    ~Manage_Document()
    {
        cout<< "=>Destructor Manage_Document!!!\n";
        for (Document *t1 : List_Document)
        {
            delete t1;
        }
        List_Document.clear();

    }
};