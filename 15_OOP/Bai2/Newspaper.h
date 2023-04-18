#pragma once
#include "Document.h"

class Newspaper : public Document
{
private:
    int Release_Day;

public:
    // Newspaper(string ID_Document, string Publisher, int Num_Publisher, int Release_Day) : Document(ID_Document, Publisher, Num_Publisher), Release_Day(Release_Day) {}
    
    int GetRelease_Day() const;

    void SetRelease_Day();
    int Get_Type(){ return 3;}

    void Input();
    void Show_information();
    ~Newspaper(){
        cout<< "=>Destructor Newspaper!!!\n";
    }
};