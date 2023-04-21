#pragma once
#include "document.h"

class Newspaper : public Document
{
private:
    int releaseDay;

public:
    // Newspaper(string ID_Document, string Publisher, int Num_Publisher, int Release_Day) : Document(ID_Document, Publisher, Num_Publisher), Release_Day(Release_Day) {}
    
    int getReleaseDay() const;

    void setReleaseDay();
    int getType(){ return 3;}

    void input();
    void showInformation();
    ~Newspaper(){
        cout<< "=>Destructor Newspaper!!!\n";
    }
};

int Newspaper::getReleaseDay()const{
    return releaseDay;
}

void Newspaper::setReleaseDay(){
    Cin_int(releaseDay);
}

void Newspaper::input(){
    Document::input();
    setReleaseDay();
}

void Newspaper::showInformation(){
    Document::showInformation();
    cout<<"Release day"<<getReleaseDay()<<endl;
}