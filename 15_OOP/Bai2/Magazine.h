#pragma once
#include "Document.h"

class Magazine : public Document
{
private:
    int Release_month;

public:
    // Magazine(string ID_Document ,string Publisher, int Num_Publisher, int Release_month):
    //     Document(ID_Document, Publisher , Num_Publisher ), Release_month(Release_month){}

    int GetRelease_month() const;

    void SetRelease_month();

    int Get_Type(){ return 2;}

    void Input();
    void Show_information();

    ~Magazine(){
        cout<< "=>Destructor Magazine!!!\n";
    }
};