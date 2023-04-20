#include "Document.h"

#ifndef MAGAZINE_H
#define MAGAZINE_H

class Magazine: public Document
{
private:
    /* data */
    int issue;
    int release_month;
public:
    Magazine(/* args */);
    ~Magazine();

    void display() override;
    int type(){return 2;}
};

Magazine::Magazine(/* args */)
{
    cout<< "Enter the issue of magazine: \n";
    cin>> issue;

    cout<< "Enter the magazine release month: -from 1 to 12- \n";
    do
    {
        cin>> release_month;
        if (release_month<1 || release_month>12)
        {
            cout<< "Wrong typing! Re-enter: ";
        }
        
    } while (release_month<1 || release_month>12);
    
}

Magazine::~Magazine()
{
    cout<< "Destructor of Magazine \n";
}

void Magazine:: display()
{
    cout<< "[MAGAZINE] ID: "<< getID()<< ", Publishing company: "<< getPSC()<< ", Quantity: "<< getQuan();
    cout<< ", Issue: "<< issue<< ", Release month: "<< release_month<< endl;
}

#endif