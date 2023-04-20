#ifndef RECEIPT_H
#define RECEIPT_H

#include "Client.h"

class Receipt: public Client
{
private:
    /* data */
    int old_number;
    int new_number;
public:
    Receipt(/* args */);
    ~Receipt();
};

Receipt::Receipt(/* args */)
{
    cout<< ""
}

Receipt::~Receipt()
{
}

#endif