#pragma once

#include "Document.h"

class Book : public Document
{
private:
    string Author;
    int Num_page;

public:
    // Book(string ID_Document ,string Publisher, int Num_Publisher, string Author , int Num_page):
    //     Document(ID_Document, Publisher , Num_Publisher ), Author(Author), Num_page(Num_page){}

    string GetAuthor() const;

    void SetAuthor();

    int GetNum_page() const;

    void SetNum_page();
    int Get_Type(){ return 1;}

    void Input();
    void Show_information();
    ~Book(){
        cout<<"=>Destructor Book!!!!\n";
    }
};