#include "Document.h"

#ifndef PAPER_H
#define PAPER_H

class Paper: public Document
{
private:
    /* data */
    string release_day;
public:
    Paper(/* args */);
    ~Paper();

    void display() override;
    int type(){return 3;}
};

Paper::Paper(/* args */)
{
    cout<< "Enter the release date of paper (DDMMYYY): \n";
    cin.ignore();
    getline(cin, release_day);
}

Paper::~Paper()
{
    cout<< "Destructor of Paper \n";
}

void Paper:: display()
{
    cout<< "[PAPER] ID: "<< getID()<< ", Publishing company: "<< getPSC()<< ", Quantity: "<< getQuan();
    cout<< ", Release date: "<< release_day<< endl;
}

#endif